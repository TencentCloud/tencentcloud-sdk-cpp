/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ccc/v20200210/model/DescribeSessionDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeSessionDetailResponse::DescribeSessionDetailResponse() :
    m_callerHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_callTypeHasBeenSet(false),
    m_startTimeStampHasBeenSet(false),
    m_ringTimestampHasBeenSet(false),
    m_acceptTimestampHasBeenSet(false),
    m_endedTimestampHasBeenSet(false),
    m_queuedTimestampHasBeenSet(false),
    m_staffUserIdHasBeenSet(false),
    m_endStatusHasBeenSet(false),
    m_queuedSkillGroupIdHasBeenSet(false),
    m_queuedSkillGroupNameHasBeenSet(false),
    m_recordURLHasBeenSet(false),
    m_customRecordURLHasBeenSet(false),
    m_asrURLHasBeenSet(false),
    m_voicemailRecordURLHasBeenSet(false),
    m_voicemailAsrURLHasBeenSet(false),
    m_iVRKeyPressedHasBeenSet(false),
    m_postIVRKeyPressedHasBeenSet(false),
    m_hungUpSideHasBeenSet(false),
    m_uUIHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_serveParticipantsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSessionDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Caller") && !rsp["Caller"].IsNull())
    {
        if (!rsp["Caller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Caller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caller = string(rsp["Caller"].GetString());
        m_callerHasBeenSet = true;
    }

    if (rsp.HasMember("Callee") && !rsp["Callee"].IsNull())
    {
        if (!rsp["Callee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(rsp["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (rsp.HasMember("CallType") && !rsp["CallType"].IsNull())
    {
        if (!rsp["CallType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callType = rsp["CallType"].GetInt64();
        m_callTypeHasBeenSet = true;
    }

    if (rsp.HasMember("StartTimeStamp") && !rsp["StartTimeStamp"].IsNull())
    {
        if (!rsp["StartTimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeStamp = rsp["StartTimeStamp"].GetInt64();
        m_startTimeStampHasBeenSet = true;
    }

    if (rsp.HasMember("RingTimestamp") && !rsp["RingTimestamp"].IsNull())
    {
        if (!rsp["RingTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RingTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringTimestamp = rsp["RingTimestamp"].GetInt64();
        m_ringTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("AcceptTimestamp") && !rsp["AcceptTimestamp"].IsNull())
    {
        if (!rsp["AcceptTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcceptTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_acceptTimestamp = rsp["AcceptTimestamp"].GetInt64();
        m_acceptTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("EndedTimestamp") && !rsp["EndedTimestamp"].IsNull())
    {
        if (!rsp["EndedTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EndedTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endedTimestamp = rsp["EndedTimestamp"].GetInt64();
        m_endedTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("QueuedTimestamp") && !rsp["QueuedTimestamp"].IsNull())
    {
        if (!rsp["QueuedTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueuedTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queuedTimestamp = rsp["QueuedTimestamp"].GetInt64();
        m_queuedTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("StaffUserId") && !rsp["StaffUserId"].IsNull())
    {
        if (!rsp["StaffUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffUserId = string(rsp["StaffUserId"].GetString());
        m_staffUserIdHasBeenSet = true;
    }

    if (rsp.HasMember("EndStatus") && !rsp["EndStatus"].IsNull())
    {
        if (!rsp["EndStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EndStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endStatus = rsp["EndStatus"].GetInt64();
        m_endStatusHasBeenSet = true;
    }

    if (rsp.HasMember("QueuedSkillGroupId") && !rsp["QueuedSkillGroupId"].IsNull())
    {
        if (!rsp["QueuedSkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueuedSkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queuedSkillGroupId = rsp["QueuedSkillGroupId"].GetInt64();
        m_queuedSkillGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("QueuedSkillGroupName") && !rsp["QueuedSkillGroupName"].IsNull())
    {
        if (!rsp["QueuedSkillGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueuedSkillGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queuedSkillGroupName = string(rsp["QueuedSkillGroupName"].GetString());
        m_queuedSkillGroupNameHasBeenSet = true;
    }

    if (rsp.HasMember("RecordURL") && !rsp["RecordURL"].IsNull())
    {
        if (!rsp["RecordURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordURL = string(rsp["RecordURL"].GetString());
        m_recordURLHasBeenSet = true;
    }

    if (rsp.HasMember("CustomRecordURL") && !rsp["CustomRecordURL"].IsNull())
    {
        if (!rsp["CustomRecordURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRecordURL = string(rsp["CustomRecordURL"].GetString());
        m_customRecordURLHasBeenSet = true;
    }

    if (rsp.HasMember("AsrURL") && !rsp["AsrURL"].IsNull())
    {
        if (!rsp["AsrURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrURL = string(rsp["AsrURL"].GetString());
        m_asrURLHasBeenSet = true;
    }

    if (rsp.HasMember("VoicemailRecordURL") && !rsp["VoicemailRecordURL"].IsNull())
    {
        if (!rsp["VoicemailRecordURL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoicemailRecordURL` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VoicemailRecordURL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_voicemailRecordURL.push_back((*itr).GetString());
        }
        m_voicemailRecordURLHasBeenSet = true;
    }

    if (rsp.HasMember("VoicemailAsrURL") && !rsp["VoicemailAsrURL"].IsNull())
    {
        if (!rsp["VoicemailAsrURL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoicemailAsrURL` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VoicemailAsrURL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_voicemailAsrURL.push_back((*itr).GetString());
        }
        m_voicemailAsrURLHasBeenSet = true;
    }

    if (rsp.HasMember("IVRKeyPressed") && !rsp["IVRKeyPressed"].IsNull())
    {
        if (!rsp["IVRKeyPressed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IVRKeyPressed` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IVRKeyPressed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IVRKeyPressedElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iVRKeyPressed.push_back(item);
        }
        m_iVRKeyPressedHasBeenSet = true;
    }

    if (rsp.HasMember("PostIVRKeyPressed") && !rsp["PostIVRKeyPressed"].IsNull())
    {
        if (!rsp["PostIVRKeyPressed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PostIVRKeyPressed` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PostIVRKeyPressed"];
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

    if (rsp.HasMember("HungUpSide") && !rsp["HungUpSide"].IsNull())
    {
        if (!rsp["HungUpSide"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HungUpSide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hungUpSide = string(rsp["HungUpSide"].GetString());
        m_hungUpSideHasBeenSet = true;
    }

    if (rsp.HasMember("UUI") && !rsp["UUI"].IsNull())
    {
        if (!rsp["UUI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UUI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUI = string(rsp["UUI"].GetString());
        m_uUIHasBeenSet = true;
    }

    if (rsp.HasMember("Events") && !rsp["Events"].IsNull())
    {
        if (!rsp["Events"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Events` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Events"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SessionEvent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_events.push_back(item);
        }
        m_eventsHasBeenSet = true;
    }

    if (rsp.HasMember("ServeParticipants") && !rsp["ServeParticipants"].IsNull())
    {
        if (!rsp["ServeParticipants"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServeParticipants` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServeParticipants"];
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


    return CoreInternalOutcome(true);
}

string DescribeSessionDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callType, allocator);
    }

    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeStamp, allocator);
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

    if (m_queuedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuedTimestamp, allocator);
    }

    if (m_staffUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_endStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endStatus, allocator);
    }

    if (m_queuedSkillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedSkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuedSkillGroupId, allocator);
    }

    if (m_queuedSkillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedSkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queuedSkillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_recordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordURL.c_str(), allocator).Move(), allocator);
    }

    if (m_customRecordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRecordURL.c_str(), allocator).Move(), allocator);
    }

    if (m_asrURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrURL.c_str(), allocator).Move(), allocator);
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

    if (m_iVRKeyPressedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRKeyPressed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iVRKeyPressed.begin(); itr != m_iVRKeyPressed.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_hungUpSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HungUpSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hungUpSide.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeSessionDetailResponse::GetCaller() const
{
    return m_caller;
}

bool DescribeSessionDetailResponse::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string DescribeSessionDetailResponse::GetCallee() const
{
    return m_callee;
}

bool DescribeSessionDetailResponse::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetCallType() const
{
    return m_callType;
}

bool DescribeSessionDetailResponse::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

bool DescribeSessionDetailResponse::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetRingTimestamp() const
{
    return m_ringTimestamp;
}

bool DescribeSessionDetailResponse::RingTimestampHasBeenSet() const
{
    return m_ringTimestampHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetAcceptTimestamp() const
{
    return m_acceptTimestamp;
}

bool DescribeSessionDetailResponse::AcceptTimestampHasBeenSet() const
{
    return m_acceptTimestampHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetEndedTimestamp() const
{
    return m_endedTimestamp;
}

bool DescribeSessionDetailResponse::EndedTimestampHasBeenSet() const
{
    return m_endedTimestampHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetQueuedTimestamp() const
{
    return m_queuedTimestamp;
}

bool DescribeSessionDetailResponse::QueuedTimestampHasBeenSet() const
{
    return m_queuedTimestampHasBeenSet;
}

string DescribeSessionDetailResponse::GetStaffUserId() const
{
    return m_staffUserId;
}

bool DescribeSessionDetailResponse::StaffUserIdHasBeenSet() const
{
    return m_staffUserIdHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetEndStatus() const
{
    return m_endStatus;
}

bool DescribeSessionDetailResponse::EndStatusHasBeenSet() const
{
    return m_endStatusHasBeenSet;
}

int64_t DescribeSessionDetailResponse::GetQueuedSkillGroupId() const
{
    return m_queuedSkillGroupId;
}

bool DescribeSessionDetailResponse::QueuedSkillGroupIdHasBeenSet() const
{
    return m_queuedSkillGroupIdHasBeenSet;
}

string DescribeSessionDetailResponse::GetQueuedSkillGroupName() const
{
    return m_queuedSkillGroupName;
}

bool DescribeSessionDetailResponse::QueuedSkillGroupNameHasBeenSet() const
{
    return m_queuedSkillGroupNameHasBeenSet;
}

string DescribeSessionDetailResponse::GetRecordURL() const
{
    return m_recordURL;
}

bool DescribeSessionDetailResponse::RecordURLHasBeenSet() const
{
    return m_recordURLHasBeenSet;
}

string DescribeSessionDetailResponse::GetCustomRecordURL() const
{
    return m_customRecordURL;
}

bool DescribeSessionDetailResponse::CustomRecordURLHasBeenSet() const
{
    return m_customRecordURLHasBeenSet;
}

string DescribeSessionDetailResponse::GetAsrURL() const
{
    return m_asrURL;
}

bool DescribeSessionDetailResponse::AsrURLHasBeenSet() const
{
    return m_asrURLHasBeenSet;
}

vector<string> DescribeSessionDetailResponse::GetVoicemailRecordURL() const
{
    return m_voicemailRecordURL;
}

bool DescribeSessionDetailResponse::VoicemailRecordURLHasBeenSet() const
{
    return m_voicemailRecordURLHasBeenSet;
}

vector<string> DescribeSessionDetailResponse::GetVoicemailAsrURL() const
{
    return m_voicemailAsrURL;
}

bool DescribeSessionDetailResponse::VoicemailAsrURLHasBeenSet() const
{
    return m_voicemailAsrURLHasBeenSet;
}

vector<IVRKeyPressedElement> DescribeSessionDetailResponse::GetIVRKeyPressed() const
{
    return m_iVRKeyPressed;
}

bool DescribeSessionDetailResponse::IVRKeyPressedHasBeenSet() const
{
    return m_iVRKeyPressedHasBeenSet;
}

vector<IVRKeyPressedElement> DescribeSessionDetailResponse::GetPostIVRKeyPressed() const
{
    return m_postIVRKeyPressed;
}

bool DescribeSessionDetailResponse::PostIVRKeyPressedHasBeenSet() const
{
    return m_postIVRKeyPressedHasBeenSet;
}

string DescribeSessionDetailResponse::GetHungUpSide() const
{
    return m_hungUpSide;
}

bool DescribeSessionDetailResponse::HungUpSideHasBeenSet() const
{
    return m_hungUpSideHasBeenSet;
}

string DescribeSessionDetailResponse::GetUUI() const
{
    return m_uUI;
}

bool DescribeSessionDetailResponse::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}

vector<SessionEvent> DescribeSessionDetailResponse::GetEvents() const
{
    return m_events;
}

bool DescribeSessionDetailResponse::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

vector<ServeParticipant> DescribeSessionDetailResponse::GetServeParticipants() const
{
    return m_serveParticipants;
}

bool DescribeSessionDetailResponse::ServeParticipantsHasBeenSet() const
{
    return m_serveParticipantsHasBeenSet;
}


