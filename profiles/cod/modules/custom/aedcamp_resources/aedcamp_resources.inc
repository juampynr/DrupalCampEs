<?php

/**
 * List the sessions available.
 *
 * NOTE that this will return all sessions with node status PUBLISHED and with
 * field "field_accepted" values in:
 *   - accepted
 *   - featured
 * This list will be ordered by creation date (most recent first).
 *
 * @return array
 *   An array of sessions in the format:
 *   - name => title of the session
 *   - date => the date of the session
 *   - room => the room where the session will take place
 *   - speaker => an array of nicks for the sessions' speakers.
 */
function _aedcamp_resources_sessions_index($page, $parameters) {
  $sessions = array();

  $approved_sessions = _aedcamp_resources_get_approved_sessions();

  if (!empty($approved_sessions['node'])) {
    $nids = array_keys($approved_sessions['node']);
    $nodes = entity_load('node', $nids);
    foreach ($nodes as $node) {
      $speakers_nicks = _aedcamp_resources_retrieve_speaker_nicks_from_node($node);
      $sessions[] = array(
        'name' => $node->title,
        'date' => '', // @TODO @FIXME Retrieve the session date.
        'room' => '', // @TODO @FIXME Retrieve the session room.
        'speaker' => $speakers_nicks,
      );
    }
  }

  return $sessions;
}

/**
 * Get the speaker(s) nick(s) from a session node object.
 *
 * @param object $node
 *   The fully-loaded session node.
 *
 * @return array|bool
 *   An array of non-empty nicks, where the keys will the the user UID's of the
 *     speakers, and the values will be the nicks (string).
 *   An empty array, if no speakers related in the node have set nicks.
 *   FALSE if the node has an empty speakers field, or if couldn't retrieve this
 *     information.
 */
function _aedcamp_resources_retrieve_speaker_nicks_from_node($node) {
  $nicks_array = array();
  $speakers_nids = FieldHelper::getValues('node', $node, 'field_speakers', 'target_id');
  if (!empty($speakers_nids)) {
    foreach ($speakers_nids as $speaker_nid) {
      $speaker = user_load($speaker_nid);
      $nick = FieldHelper::getValue('user', $speaker, 'field_nick');
      if (!empty($nick)) {
        $nicks_array[$speaker_nid] = $nick['safe_value'];
      }
    }
    return $nicks_array;
  }
  return FALSE;
}

/**
 * List the speakers available.
 *
 * NOTE that this will return all speakers refrenced in sessions with node
 *   status PUBLISHED and with field "field_accepted" values in:
 *   - accepted
 *   - featured
 *
 * @return array
 *   An array of speakers in the format:
 *   - uid => user's uid
 *   - name => field_profile_first + field_profile_last
 *   - company => field_profile_org
 *   - twitter => field_twitter_url
 *   - image => user picture URL.
 */
function _aedcamp_resources_speakers_index($page, $parameters) {
  $speakers = array();

  $approved_sessions = _aedcamp_resources_get_approved_sessions();

  if (!empty($approved_sessions['node'])) {
    $nids = array_keys($approved_sessions['node']);
    $nodes = entity_load('node', $nids);
    foreach ($nodes as $node) {
      $speaker_data = _aedcamp_resources_retrieve_speaker_data_from_node($node);
      foreach ($speaker_data as $speaker) {
        $speakers[$speaker['uid']] = array(
          'uid' => $speaker['uid'],
          'name' => $speaker['name'],
          'company' => $speaker['org'],
          'twitter' => $speaker['twitter'],
          'image' => $speaker['image'],
        );
      }
    }
  }

  return $speakers;
}

/**
 * Helper to query the database in search for approved / featured sessions.
 *
 * @return mixed
 *   Results queried as returned from EFQ that match:
 *  - Are of type node
 *  - Are of bundle session
 *  - Are published
 *  - Have field status (field_accepted) IN (accepted, featured)
 *   These results will be ordered by creation date (DESC).
 */
function _aedcamp_resources_get_approved_sessions() {
  $query = new EntityFieldQuery();
  $results = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'session')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldCondition('field_accepted', 'value', array('accepted', 'featured'), 'IN')
    ->propertyOrderBy('created', 'DESC')
    ->execute();
  return $results;
}

/**
 * Get the speaker(s) full details from a session node object.
 *
 * @param object $node
 *   The fully-loaded session node.
 *
 * @return array|bool
 *   An array of speakers of this particular node, in the format:
 *   - uid => user's uid
 *   - name => field_profile_first + field_profile_last
 *   - company => field_profile_org
 *   - twitter => field_twitter_url
 *   - image => user picture URL.
 */
function _aedcamp_resources_retrieve_speaker_data_from_node($node) {
  $data_array = array();
  $speakers_uids = FieldHelper::getValues('node', $node, 'field_speakers', 'target_id');
  if (!empty($speakers_uids)) {
    foreach ($speakers_uids as $speaker_uid) {
      $speaker = user_load($speaker_uid);

      // Build a fullname from name and surname fields.
      $name = FieldHelper::getValue('user', $speaker, 'field_profile_first', 'safe_value');
      $surname = FieldHelper::getValue('user', $speaker, 'field_profile_last', 'safe_value');
      $fullname = trim((string) $name . ' ' . (string) $surname);

      // Retrieve the remaining fields.
      $company = FieldHelper::getValue('user', $speaker, 'field_profile_org', 'safe_value');
      $twitter = FieldHelper::getValue('user', $speaker, 'field_twitter_url', 'url');
      $image_uri = !empty($speaker->picture->uri) ? file_create_url($speaker->picture->uri) : '';

      if (!empty($speaker->uid)) {
        $data_array[$speaker->uid] = array(
          'uid' => $speaker->uid,
          'name' => $fullname,
          'company' => $company,
          'twitter' => $twitter,
          'image' => $image_uri,
        );
      }
    }
    return $data_array;
  }
  return FALSE;
}
