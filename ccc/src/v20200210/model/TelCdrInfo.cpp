/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ccc/v20200210/model/TelCdrInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

TelCdrInfo::TelCdrInfo() :
    m_callerHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_callTypeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_recordURLHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_seatUserHasBeenSet(false),
    m_endStatusHasBeenSet(false),
    m_skillGroupHasBeenSet(false),
    m_callerLocationHasBeenSet(false),
    m_iVRDurationHasBeenSet(false),
    m_ringTimestampHasBeenSet(false),
    m_acceptTimestampHasBeenSet(false),
    m_endedTimestampHasBeenSet(false),
    m_iVRKeyPressedHasBeenSet(false),
    m_hungUpSideHasBeenSet(false),
    m_serveParticipantsHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_endStatusStringHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_queuedTimestampHasBeenSet(false),
    m_postIVRKeyPressedHasBeenSet(false),
    m_queuedSkillGroupIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_protectedCallerHasBeenSet(false),
    m_protectedCalleeHasBeenSet(false),
    m_uuiHasBeenSet(false),
    m_uUIHasBeenSet(false),
    m_iVRKeyPressedExHasBeenSet(false),
    m_asrUrlHasBeenSet(false),
    m_asrStatusHasBeenSet(false),
    m_customRecordURLHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_queuedSkillGroupNameHasBeenSet(false),
    m_voicemailRecordURLHasBeenSet(false),
    m_voicemailAsrURLHasBeenSet(false)
{
}

CoreInternalOutcome TelCdrInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Caller") && !value["Caller"].IsNull())
    {
        if (!value["Caller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.Caller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caller = string(value["Caller"].GetString());
        m_callerHasBeenSet = true;
    }

    if (value.HasMember("Callee") && !value["Callee"].IsNull())
    {
        if (!value["Callee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(value["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("CallType") && !value["CallType"].IsNull())
    {
        if (!value["CallType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.CallType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callType = value["CallType"].GetInt64();
        m_callTypeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RecordURL") && !value["RecordURL"].IsNull())
    {
        if (!value["RecordURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.RecordURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordURL = string(value["RecordURL"].GetString());
        m_recordURLHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("SeatUser") && !value["SeatUser"].IsNull())
    {
        if (!value["SeatUser"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.SeatUser` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seatUser.Deserialize(value["SeatUser"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seatUserHasBeenSet = true;
    }

    if (value.HasMember("EndStatus") && !value["EndStatus"].IsNull())
    {
        if (!value["EndStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.EndStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endStatus = value["EndStatus"].GetInt64();
        m_endStatusHasBeenSet = true;
    }

    if (value.HasMember("SkillGroup") && !value["SkillGroup"].IsNull())
    {
        if (!value["SkillGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.SkillGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroup = string(value["SkillGroup"].GetString());
        m_skillGroupHasBeenSet = true;
    }

    if (value.HasMember("CallerLocation") && !value["CallerLocation"].IsNull())
    {
        if (!value["CallerLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.CallerLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callerLocation = string(value["CallerLocation"].GetString());
        m_callerLocationHasBeenSet = true;
    }

    if (value.HasMember("IVRDuration") && !value["IVRDuration"].IsNull())
    {
        if (!value["IVRDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.IVRDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iVRDuration = value["IVRDuration"].GetInt64();
        m_iVRDurationHasBeenSet = true;
    }

    if (value.HasMember("RingTimestamp") && !value["RingTimestamp"].IsNull())
    {
        if (!value["RingTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.RingTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringTimestamp = value["RingTimestamp"].GetInt64();
        m_ringTimestampHasBeenSet = true;
    }

    if (value.HasMember("AcceptTimestamp") && !value["AcceptTimestamp"].IsNull())
    {
        if (!value["AcceptTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.AcceptTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_acceptTimestamp = value["AcceptTimestamp"].GetInt64();
        m_acceptTimestampHasBeenSet = true;
    }

    if (value.HasMember("EndedTimestamp") && !value["EndedTimestamp"].IsNull())
    {
        if (!value["EndedTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.EndedTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endedTimestamp = value["EndedTimestamp"].GetInt64();
        m_endedTimestampHasBeenSet = true;
    }

    if (value.HasMember("IVRKeyPressed") && !value["IVRKeyPressed"].IsNull())
    {
        if (!value["IVRKeyPressed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.IVRKeyPressed` is not array type"));

        const rapidjson::Value &tmpValue = value["IVRKeyPressed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iVRKeyPressed.push_back((*itr).GetString());
        }
        m_iVRKeyPressedHasBeenSet = true;
    }

    if (value.HasMember("HungUpSide") && !value["HungUpSide"].IsNull())
    {
        if (!value["HungUpSide"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.HungUpSide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hungUpSide = string(value["HungUpSide"].GetString());
        m_hungUpSideHasBeenSet = true;
    }

    if (value.HasMember("ServeParticipants") && !value["ServeParticipants"].IsNull())
    {
        if (!value["ServeParticipants"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.ServeParticipants` is not array type"));

        const rapidjson::Value &tmpValue = value["ServeParticipants"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServeParticipant item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serveParticipants.push_back(item);
        }
        m_serveParticipantsHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = value["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EndStatusString") && !value["EndStatusString"].IsNull())
    {
        if (!value["EndStatusString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.EndStatusString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endStatusString = string(value["EndStatusString"].GetString());
        m_endStatusStringHasBeenSet = true;
    }

    if (value.HasMember("StartTimestamp") && !value["StartTimestamp"].IsNull())
    {
        if (!value["StartTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.StartTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimestamp = value["StartTimestamp"].GetInt64();
        m_startTimestampHasBeenSet = true;
    }

    if (value.HasMember("QueuedTimestamp") && !value["QueuedTimestamp"].IsNull())
    {
        if (!value["QueuedTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.QueuedTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queuedTimestamp = value["QueuedTimestamp"].GetInt64();
        m_queuedTimestampHasBeenSet = true;
    }

    if (value.HasMember("PostIVRKeyPressed") && !value["PostIVRKeyPressed"].IsNull())
    {
        if (!value["PostIVRKeyPressed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.PostIVRKeyPressed` is not array type"));

        const rapidjson::Value &tmpValue = value["PostIVRKeyPressed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IVRKeyPressedElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_postIVRKeyPressed.push_back(item);
        }
        m_postIVRKeyPressedHasBeenSet = true;
    }

    if (value.HasMember("QueuedSkillGroupId") && !value["QueuedSkillGroupId"].IsNull())
    {
        if (!value["QueuedSkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.QueuedSkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queuedSkillGroupId = value["QueuedSkillGroupId"].GetInt64();
        m_queuedSkillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectedCaller") && !value["ProtectedCaller"].IsNull())
    {
        if (!value["ProtectedCaller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.ProtectedCaller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCaller = string(value["ProtectedCaller"].GetString());
        m_protectedCallerHasBeenSet = true;
    }

    if (value.HasMember("ProtectedCallee") && !value["ProtectedCallee"].IsNull())
    {
        if (!value["ProtectedCallee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.ProtectedCallee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCallee = string(value["ProtectedCallee"].GetString());
        m_protectedCalleeHasBeenSet = true;
    }

    if (value.HasMember("Uui") && !value["Uui"].IsNull())
    {
        if (!value["Uui"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.Uui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uui = string(value["Uui"].GetString());
        m_uuiHasBeenSet = true;
    }

    if (value.HasMember("UUI") && !value["UUI"].IsNull())
    {
        if (!value["UUI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.UUI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUI = string(value["UUI"].GetString());
        m_uUIHasBeenSet = true;
    }

    if (value.HasMember("IVRKeyPressedEx") && !value["IVRKeyPressedEx"].IsNull())
    {
        if (!value["IVRKeyPressedEx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.IVRKeyPressedEx` is not array type"));

        const rapidjson::Value &tmpValue = value["IVRKeyPressedEx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IVRKeyPressedElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iVRKeyPressedEx.push_back(item);
        }
        m_iVRKeyPressedExHasBeenSet = true;
    }

    if (value.HasMember("AsrUrl") && !value["AsrUrl"].IsNull())
    {
        if (!value["AsrUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.AsrUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrUrl = string(value["AsrUrl"].GetString());
        m_asrUrlHasBeenSet = true;
    }

    if (value.HasMember("AsrStatus") && !value["AsrStatus"].IsNull())
    {
        if (!value["AsrStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.AsrStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrStatus = string(value["AsrStatus"].GetString());
        m_asrStatusHasBeenSet = true;
    }

    if (value.HasMember("CustomRecordURL") && !value["CustomRecordURL"].IsNull())
    {
        if (!value["CustomRecordURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.CustomRecordURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRecordURL = string(value["CustomRecordURL"].GetString());
        m_customRecordURLHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("QueuedSkillGroupName") && !value["QueuedSkillGroupName"].IsNull())
    {
        if (!value["QueuedSkillGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.QueuedSkillGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queuedSkillGroupName = string(value["QueuedSkillGroupName"].GetString());
        m_queuedSkillGroupNameHasBeenSet = true;
    }

    if (value.HasMember("VoicemailRecordURL") && !value["VoicemailRecordURL"].IsNull())
    {
        if (!value["VoicemailRecordURL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.VoicemailRecordURL` is not array type"));

        const rapidjson::Value &tmpValue = value["VoicemailRecordURL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_voicemailRecordURL.push_back((*itr).GetString());
        }
        m_voicemailRecordURLHasBeenSet = true;
    }

    if (value.HasMember("VoicemailAsrURL") && !value["VoicemailAsrURL"].IsNull())
    {
        if (!value["VoicemailAsrURL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TelCdrInfo.VoicemailAsrURL` is not array type"));

        const rapidjson::Value &tmpValue = value["VoicemailAsrURL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_voicemailAsrURL.push_back((*itr).GetString());
        }
        m_voicemailAsrURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TelCdrInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caller.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callType, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_recordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordURL.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_seatUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seatUser.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endStatus, allocator);
    }

    if (m_skillGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_callerLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallerLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callerLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_iVRDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iVRDuration, allocator);
    }

    if (m_ringTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RingTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ringTimestamp, allocator);
    }

    if (m_acceptTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_acceptTimestamp, allocator);
    }

    if (m_endedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endedTimestamp, allocator);
    }

    if (m_iVRKeyPressedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRKeyPressed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iVRKeyPressed.begin(); itr != m_iVRKeyPressed.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hungUpSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HungUpSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hungUpSide.c_str(), allocator).Move(), allocator);
    }

    if (m_serveParticipantsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServeParticipants";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serveParticipants.begin(); itr != m_serveParticipants.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_endStatusStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndStatusString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endStatusString.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_queuedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuedTimestamp, allocator);
    }

    if (m_postIVRKeyPressedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostIVRKeyPressed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_postIVRKeyPressed.begin(); itr != m_postIVRKeyPressed.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_queuedSkillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedSkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuedSkillGroupId, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectedCallerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedCaller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectedCaller.c_str(), allocator).Move(), allocator);
    }

    if (m_protectedCalleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedCallee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectedCallee.c_str(), allocator).Move(), allocator);
    }

    if (m_uuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uui";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uui.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
    }

    if (m_iVRKeyPressedExHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRKeyPressedEx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iVRKeyPressedEx.begin(); itr != m_iVRKeyPressedEx.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_asrUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_asrStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_customRecordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRecordURL.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_queuedSkillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedSkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queuedSkillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_voicemailRecordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicemailRecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voicemailRecordURL.begin(); itr != m_voicemailRecordURL.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_voicemailAsrURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicemailAsrURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voicemailAsrURL.begin(); itr != m_voicemailAsrURL.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TelCdrInfo::GetCaller() const
{
    return m_caller;
}

void TelCdrInfo::SetCaller(const string& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool TelCdrInfo::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string TelCdrInfo::GetCallee() const
{
    return m_callee;
}

void TelCdrInfo::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool TelCdrInfo::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

int64_t TelCdrInfo::GetTime() const
{
    return m_time;
}

void TelCdrInfo::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TelCdrInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t TelCdrInfo::GetDirection() const
{
    return m_direction;
}

void TelCdrInfo::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool TelCdrInfo::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t TelCdrInfo::GetCallType() const
{
    return m_callType;
}

void TelCdrInfo::SetCallType(const int64_t& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool TelCdrInfo::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

int64_t TelCdrInfo::GetDuration() const
{
    return m_duration;
}

void TelCdrInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TelCdrInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string TelCdrInfo::GetRecordURL() const
{
    return m_recordURL;
}

void TelCdrInfo::SetRecordURL(const string& _recordURL)
{
    m_recordURL = _recordURL;
    m_recordURLHasBeenSet = true;
}

bool TelCdrInfo::RecordURLHasBeenSet() const
{
    return m_recordURLHasBeenSet;
}

string TelCdrInfo::GetRecordId() const
{
    return m_recordId;
}

void TelCdrInfo::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool TelCdrInfo::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

SeatUserInfo TelCdrInfo::GetSeatUser() const
{
    return m_seatUser;
}

void TelCdrInfo::SetSeatUser(const SeatUserInfo& _seatUser)
{
    m_seatUser = _seatUser;
    m_seatUserHasBeenSet = true;
}

bool TelCdrInfo::SeatUserHasBeenSet() const
{
    return m_seatUserHasBeenSet;
}

int64_t TelCdrInfo::GetEndStatus() const
{
    return m_endStatus;
}

void TelCdrInfo::SetEndStatus(const int64_t& _endStatus)
{
    m_endStatus = _endStatus;
    m_endStatusHasBeenSet = true;
}

bool TelCdrInfo::EndStatusHasBeenSet() const
{
    return m_endStatusHasBeenSet;
}

string TelCdrInfo::GetSkillGroup() const
{
    return m_skillGroup;
}

void TelCdrInfo::SetSkillGroup(const string& _skillGroup)
{
    m_skillGroup = _skillGroup;
    m_skillGroupHasBeenSet = true;
}

bool TelCdrInfo::SkillGroupHasBeenSet() const
{
    return m_skillGroupHasBeenSet;
}

string TelCdrInfo::GetCallerLocation() const
{
    return m_callerLocation;
}

void TelCdrInfo::SetCallerLocation(const string& _callerLocation)
{
    m_callerLocation = _callerLocation;
    m_callerLocationHasBeenSet = true;
}

bool TelCdrInfo::CallerLocationHasBeenSet() const
{
    return m_callerLocationHasBeenSet;
}

int64_t TelCdrInfo::GetIVRDuration() const
{
    return m_iVRDuration;
}

void TelCdrInfo::SetIVRDuration(const int64_t& _iVRDuration)
{
    m_iVRDuration = _iVRDuration;
    m_iVRDurationHasBeenSet = true;
}

bool TelCdrInfo::IVRDurationHasBeenSet() const
{
    return m_iVRDurationHasBeenSet;
}

int64_t TelCdrInfo::GetRingTimestamp() const
{
    return m_ringTimestamp;
}

void TelCdrInfo::SetRingTimestamp(const int64_t& _ringTimestamp)
{
    m_ringTimestamp = _ringTimestamp;
    m_ringTimestampHasBeenSet = true;
}

bool TelCdrInfo::RingTimestampHasBeenSet() const
{
    return m_ringTimestampHasBeenSet;
}

int64_t TelCdrInfo::GetAcceptTimestamp() const
{
    return m_acceptTimestamp;
}

void TelCdrInfo::SetAcceptTimestamp(const int64_t& _acceptTimestamp)
{
    m_acceptTimestamp = _acceptTimestamp;
    m_acceptTimestampHasBeenSet = true;
}

bool TelCdrInfo::AcceptTimestampHasBeenSet() const
{
    return m_acceptTimestampHasBeenSet;
}

int64_t TelCdrInfo::GetEndedTimestamp() const
{
    return m_endedTimestamp;
}

void TelCdrInfo::SetEndedTimestamp(const int64_t& _endedTimestamp)
{
    m_endedTimestamp = _endedTimestamp;
    m_endedTimestampHasBeenSet = true;
}

bool TelCdrInfo::EndedTimestampHasBeenSet() const
{
    return m_endedTimestampHasBeenSet;
}

vector<string> TelCdrInfo::GetIVRKeyPressed() const
{
    return m_iVRKeyPressed;
}

void TelCdrInfo::SetIVRKeyPressed(const vector<string>& _iVRKeyPressed)
{
    m_iVRKeyPressed = _iVRKeyPressed;
    m_iVRKeyPressedHasBeenSet = true;
}

bool TelCdrInfo::IVRKeyPressedHasBeenSet() const
{
    return m_iVRKeyPressedHasBeenSet;
}

string TelCdrInfo::GetHungUpSide() const
{
    return m_hungUpSide;
}

void TelCdrInfo::SetHungUpSide(const string& _hungUpSide)
{
    m_hungUpSide = _hungUpSide;
    m_hungUpSideHasBeenSet = true;
}

bool TelCdrInfo::HungUpSideHasBeenSet() const
{
    return m_hungUpSideHasBeenSet;
}

vector<ServeParticipant> TelCdrInfo::GetServeParticipants() const
{
    return m_serveParticipants;
}

void TelCdrInfo::SetServeParticipants(const vector<ServeParticipant>& _serveParticipants)
{
    m_serveParticipants = _serveParticipants;
    m_serveParticipantsHasBeenSet = true;
}

bool TelCdrInfo::ServeParticipantsHasBeenSet() const
{
    return m_serveParticipantsHasBeenSet;
}

int64_t TelCdrInfo::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void TelCdrInfo::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool TelCdrInfo::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

string TelCdrInfo::GetEndStatusString() const
{
    return m_endStatusString;
}

void TelCdrInfo::SetEndStatusString(const string& _endStatusString)
{
    m_endStatusString = _endStatusString;
    m_endStatusStringHasBeenSet = true;
}

bool TelCdrInfo::EndStatusStringHasBeenSet() const
{
    return m_endStatusStringHasBeenSet;
}

int64_t TelCdrInfo::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void TelCdrInfo::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool TelCdrInfo::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

int64_t TelCdrInfo::GetQueuedTimestamp() const
{
    return m_queuedTimestamp;
}

void TelCdrInfo::SetQueuedTimestamp(const int64_t& _queuedTimestamp)
{
    m_queuedTimestamp = _queuedTimestamp;
    m_queuedTimestampHasBeenSet = true;
}

bool TelCdrInfo::QueuedTimestampHasBeenSet() const
{
    return m_queuedTimestampHasBeenSet;
}

vector<IVRKeyPressedElement> TelCdrInfo::GetPostIVRKeyPressed() const
{
    return m_postIVRKeyPressed;
}

void TelCdrInfo::SetPostIVRKeyPressed(const vector<IVRKeyPressedElement>& _postIVRKeyPressed)
{
    m_postIVRKeyPressed = _postIVRKeyPressed;
    m_postIVRKeyPressedHasBeenSet = true;
}

bool TelCdrInfo::PostIVRKeyPressedHasBeenSet() const
{
    return m_postIVRKeyPressedHasBeenSet;
}

int64_t TelCdrInfo::GetQueuedSkillGroupId() const
{
    return m_queuedSkillGroupId;
}

void TelCdrInfo::SetQueuedSkillGroupId(const int64_t& _queuedSkillGroupId)
{
    m_queuedSkillGroupId = _queuedSkillGroupId;
    m_queuedSkillGroupIdHasBeenSet = true;
}

bool TelCdrInfo::QueuedSkillGroupIdHasBeenSet() const
{
    return m_queuedSkillGroupIdHasBeenSet;
}

string TelCdrInfo::GetSessionId() const
{
    return m_sessionId;
}

void TelCdrInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TelCdrInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TelCdrInfo::GetProtectedCaller() const
{
    return m_protectedCaller;
}

void TelCdrInfo::SetProtectedCaller(const string& _protectedCaller)
{
    m_protectedCaller = _protectedCaller;
    m_protectedCallerHasBeenSet = true;
}

bool TelCdrInfo::ProtectedCallerHasBeenSet() const
{
    return m_protectedCallerHasBeenSet;
}

string TelCdrInfo::GetProtectedCallee() const
{
    return m_protectedCallee;
}

void TelCdrInfo::SetProtectedCallee(const string& _protectedCallee)
{
    m_protectedCallee = _protectedCallee;
    m_protectedCalleeHasBeenSet = true;
}

bool TelCdrInfo::ProtectedCalleeHasBeenSet() const
{
    return m_protectedCalleeHasBeenSet;
}

string TelCdrInfo::GetUui() const
{
    return m_uui;
}

void TelCdrInfo::SetUui(const string& _uui)
{
    m_uui = _uui;
    m_uuiHasBeenSet = true;
}

bool TelCdrInfo::UuiHasBeenSet() const
{
    return m_uuiHasBeenSet;
}

string TelCdrInfo::GetUUI() const
{
    return m_uUI;
}

void TelCdrInfo::SetUUI(const string& _uUI)
{
    m_uUI = _uUI;
    m_uUIHasBeenSet = true;
}

bool TelCdrInfo::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}

vector<IVRKeyPressedElement> TelCdrInfo::GetIVRKeyPressedEx() const
{
    return m_iVRKeyPressedEx;
}

void TelCdrInfo::SetIVRKeyPressedEx(const vector<IVRKeyPressedElement>& _iVRKeyPressedEx)
{
    m_iVRKeyPressedEx = _iVRKeyPressedEx;
    m_iVRKeyPressedExHasBeenSet = true;
}

bool TelCdrInfo::IVRKeyPressedExHasBeenSet() const
{
    return m_iVRKeyPressedExHasBeenSet;
}

string TelCdrInfo::GetAsrUrl() const
{
    return m_asrUrl;
}

void TelCdrInfo::SetAsrUrl(const string& _asrUrl)
{
    m_asrUrl = _asrUrl;
    m_asrUrlHasBeenSet = true;
}

bool TelCdrInfo::AsrUrlHasBeenSet() const
{
    return m_asrUrlHasBeenSet;
}

string TelCdrInfo::GetAsrStatus() const
{
    return m_asrStatus;
}

void TelCdrInfo::SetAsrStatus(const string& _asrStatus)
{
    m_asrStatus = _asrStatus;
    m_asrStatusHasBeenSet = true;
}

bool TelCdrInfo::AsrStatusHasBeenSet() const
{
    return m_asrStatusHasBeenSet;
}

string TelCdrInfo::GetCustomRecordURL() const
{
    return m_customRecordURL;
}

void TelCdrInfo::SetCustomRecordURL(const string& _customRecordURL)
{
    m_customRecordURL = _customRecordURL;
    m_customRecordURLHasBeenSet = true;
}

bool TelCdrInfo::CustomRecordURLHasBeenSet() const
{
    return m_customRecordURLHasBeenSet;
}

string TelCdrInfo::GetRemark() const
{
    return m_remark;
}

void TelCdrInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TelCdrInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string TelCdrInfo::GetQueuedSkillGroupName() const
{
    return m_queuedSkillGroupName;
}

void TelCdrInfo::SetQueuedSkillGroupName(const string& _queuedSkillGroupName)
{
    m_queuedSkillGroupName = _queuedSkillGroupName;
    m_queuedSkillGroupNameHasBeenSet = true;
}

bool TelCdrInfo::QueuedSkillGroupNameHasBeenSet() const
{
    return m_queuedSkillGroupNameHasBeenSet;
}

vector<string> TelCdrInfo::GetVoicemailRecordURL() const
{
    return m_voicemailRecordURL;
}

void TelCdrInfo::SetVoicemailRecordURL(const vector<string>& _voicemailRecordURL)
{
    m_voicemailRecordURL = _voicemailRecordURL;
    m_voicemailRecordURLHasBeenSet = true;
}

bool TelCdrInfo::VoicemailRecordURLHasBeenSet() const
{
    return m_voicemailRecordURLHasBeenSet;
}

vector<string> TelCdrInfo::GetVoicemailAsrURL() const
{
    return m_voicemailAsrURL;
}

void TelCdrInfo::SetVoicemailAsrURL(const vector<string>& _voicemailAsrURL)
{
    m_voicemailAsrURL = _voicemailAsrURL;
    m_voicemailAsrURLHasBeenSet = true;
}

bool TelCdrInfo::VoicemailAsrURLHasBeenSet() const
{
    return m_voicemailAsrURLHasBeenSet;
}

