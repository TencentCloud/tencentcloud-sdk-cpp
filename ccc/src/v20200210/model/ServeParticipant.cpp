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

#include <tencentcloud/ccc/v20200210/model/ServeParticipant.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ServeParticipant::ServeParticipant() :
    m_mailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_ringTimestampHasBeenSet(false),
    m_acceptTimestampHasBeenSet(false),
    m_endedTimestampHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_transferFromHasBeenSet(false),
    m_transferFromTypeHasBeenSet(false),
    m_transferToHasBeenSet(false),
    m_transferToTypeHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_endStatusStringHasBeenSet(false),
    m_recordURLHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_customRecordURLHasBeenSet(false)
{
}

CoreInternalOutcome ServeParticipant::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("RingTimestamp") && !value["RingTimestamp"].IsNull())
    {
        if (!value["RingTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.RingTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringTimestamp = value["RingTimestamp"].GetInt64();
        m_ringTimestampHasBeenSet = true;
    }

    if (value.HasMember("AcceptTimestamp") && !value["AcceptTimestamp"].IsNull())
    {
        if (!value["AcceptTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.AcceptTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_acceptTimestamp = value["AcceptTimestamp"].GetInt64();
        m_acceptTimestampHasBeenSet = true;
    }

    if (value.HasMember("EndedTimestamp") && !value["EndedTimestamp"].IsNull())
    {
        if (!value["EndedTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.EndedTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endedTimestamp = value["EndedTimestamp"].GetInt64();
        m_endedTimestampHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TransferFrom") && !value["TransferFrom"].IsNull())
    {
        if (!value["TransferFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.TransferFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferFrom = string(value["TransferFrom"].GetString());
        m_transferFromHasBeenSet = true;
    }

    if (value.HasMember("TransferFromType") && !value["TransferFromType"].IsNull())
    {
        if (!value["TransferFromType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.TransferFromType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferFromType = string(value["TransferFromType"].GetString());
        m_transferFromTypeHasBeenSet = true;
    }

    if (value.HasMember("TransferTo") && !value["TransferTo"].IsNull())
    {
        if (!value["TransferTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.TransferTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferTo = string(value["TransferTo"].GetString());
        m_transferToHasBeenSet = true;
    }

    if (value.HasMember("TransferToType") && !value["TransferToType"].IsNull())
    {
        if (!value["TransferToType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.TransferToType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferToType = string(value["TransferToType"].GetString());
        m_transferToTypeHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = value["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EndStatusString") && !value["EndStatusString"].IsNull())
    {
        if (!value["EndStatusString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.EndStatusString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endStatusString = string(value["EndStatusString"].GetString());
        m_endStatusStringHasBeenSet = true;
    }

    if (value.HasMember("RecordURL") && !value["RecordURL"].IsNull())
    {
        if (!value["RecordURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.RecordURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordURL = string(value["RecordURL"].GetString());
        m_recordURLHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimestamp") && !value["StartTimestamp"].IsNull())
    {
        if (!value["StartTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.StartTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimestamp = value["StartTimestamp"].GetInt64();
        m_startTimestampHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupName") && !value["SkillGroupName"].IsNull())
    {
        if (!value["SkillGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.SkillGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupName = string(value["SkillGroupName"].GetString());
        m_skillGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CustomRecordURL") && !value["CustomRecordURL"].IsNull())
    {
        if (!value["CustomRecordURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServeParticipant.CustomRecordURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRecordURL = string(value["CustomRecordURL"].GetString());
        m_customRecordURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServeParticipant::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
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

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_transferFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_transferFromTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferFromType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferFromType.c_str(), allocator).Move(), allocator);
    }

    if (m_transferToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferTo.c_str(), allocator).Move(), allocator);
    }

    if (m_transferToTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferToType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferToType.c_str(), allocator).Move(), allocator);
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

    if (m_recordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordURL.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sequence, allocator);
    }

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_skillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_customRecordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRecordURL.c_str(), allocator).Move(), allocator);
    }

}


string ServeParticipant::GetMail() const
{
    return m_mail;
}

void ServeParticipant::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool ServeParticipant::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string ServeParticipant::GetPhone() const
{
    return m_phone;
}

void ServeParticipant::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ServeParticipant::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

int64_t ServeParticipant::GetRingTimestamp() const
{
    return m_ringTimestamp;
}

void ServeParticipant::SetRingTimestamp(const int64_t& _ringTimestamp)
{
    m_ringTimestamp = _ringTimestamp;
    m_ringTimestampHasBeenSet = true;
}

bool ServeParticipant::RingTimestampHasBeenSet() const
{
    return m_ringTimestampHasBeenSet;
}

int64_t ServeParticipant::GetAcceptTimestamp() const
{
    return m_acceptTimestamp;
}

void ServeParticipant::SetAcceptTimestamp(const int64_t& _acceptTimestamp)
{
    m_acceptTimestamp = _acceptTimestamp;
    m_acceptTimestampHasBeenSet = true;
}

bool ServeParticipant::AcceptTimestampHasBeenSet() const
{
    return m_acceptTimestampHasBeenSet;
}

int64_t ServeParticipant::GetEndedTimestamp() const
{
    return m_endedTimestamp;
}

void ServeParticipant::SetEndedTimestamp(const int64_t& _endedTimestamp)
{
    m_endedTimestamp = _endedTimestamp;
    m_endedTimestampHasBeenSet = true;
}

bool ServeParticipant::EndedTimestampHasBeenSet() const
{
    return m_endedTimestampHasBeenSet;
}

string ServeParticipant::GetRecordId() const
{
    return m_recordId;
}

void ServeParticipant::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ServeParticipant::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string ServeParticipant::GetType() const
{
    return m_type;
}

void ServeParticipant::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ServeParticipant::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ServeParticipant::GetTransferFrom() const
{
    return m_transferFrom;
}

void ServeParticipant::SetTransferFrom(const string& _transferFrom)
{
    m_transferFrom = _transferFrom;
    m_transferFromHasBeenSet = true;
}

bool ServeParticipant::TransferFromHasBeenSet() const
{
    return m_transferFromHasBeenSet;
}

string ServeParticipant::GetTransferFromType() const
{
    return m_transferFromType;
}

void ServeParticipant::SetTransferFromType(const string& _transferFromType)
{
    m_transferFromType = _transferFromType;
    m_transferFromTypeHasBeenSet = true;
}

bool ServeParticipant::TransferFromTypeHasBeenSet() const
{
    return m_transferFromTypeHasBeenSet;
}

string ServeParticipant::GetTransferTo() const
{
    return m_transferTo;
}

void ServeParticipant::SetTransferTo(const string& _transferTo)
{
    m_transferTo = _transferTo;
    m_transferToHasBeenSet = true;
}

bool ServeParticipant::TransferToHasBeenSet() const
{
    return m_transferToHasBeenSet;
}

string ServeParticipant::GetTransferToType() const
{
    return m_transferToType;
}

void ServeParticipant::SetTransferToType(const string& _transferToType)
{
    m_transferToType = _transferToType;
    m_transferToTypeHasBeenSet = true;
}

bool ServeParticipant::TransferToTypeHasBeenSet() const
{
    return m_transferToTypeHasBeenSet;
}

int64_t ServeParticipant::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void ServeParticipant::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool ServeParticipant::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

string ServeParticipant::GetEndStatusString() const
{
    return m_endStatusString;
}

void ServeParticipant::SetEndStatusString(const string& _endStatusString)
{
    m_endStatusString = _endStatusString;
    m_endStatusStringHasBeenSet = true;
}

bool ServeParticipant::EndStatusStringHasBeenSet() const
{
    return m_endStatusStringHasBeenSet;
}

string ServeParticipant::GetRecordURL() const
{
    return m_recordURL;
}

void ServeParticipant::SetRecordURL(const string& _recordURL)
{
    m_recordURL = _recordURL;
    m_recordURLHasBeenSet = true;
}

bool ServeParticipant::RecordURLHasBeenSet() const
{
    return m_recordURLHasBeenSet;
}

int64_t ServeParticipant::GetSequence() const
{
    return m_sequence;
}

void ServeParticipant::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool ServeParticipant::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

int64_t ServeParticipant::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void ServeParticipant::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool ServeParticipant::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

string ServeParticipant::GetSkillGroupName() const
{
    return m_skillGroupName;
}

void ServeParticipant::SetSkillGroupName(const string& _skillGroupName)
{
    m_skillGroupName = _skillGroupName;
    m_skillGroupNameHasBeenSet = true;
}

bool ServeParticipant::SkillGroupNameHasBeenSet() const
{
    return m_skillGroupNameHasBeenSet;
}

string ServeParticipant::GetCustomRecordURL() const
{
    return m_customRecordURL;
}

void ServeParticipant::SetCustomRecordURL(const string& _customRecordURL)
{
    m_customRecordURL = _customRecordURL;
    m_customRecordURLHasBeenSet = true;
}

bool ServeParticipant::CustomRecordURLHasBeenSet() const
{
    return m_customRecordURLHasBeenSet;
}

