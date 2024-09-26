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

#include <tencentcloud/ccc/v20200210/model/IMCdrInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

IMCdrInfo::IMCdrInfo() :
    m_idHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_endStatusHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_staffIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_satisfactionHasBeenSet(false),
    m_clientUserIdHasBeenSet(false)
{
}

CoreInternalOutcome IMCdrInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("EndStatus") && !value["EndStatus"].IsNull())
    {
        if (!value["EndStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.EndStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endStatus = value["EndStatus"].GetInt64();
        m_endStatusHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StaffId") && !value["StaffId"].IsNull())
    {
        if (!value["StaffId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.StaffId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffId = string(value["StaffId"].GetString());
        m_staffIdHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.SkillGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = string(value["SkillGroupId"].GetString());
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupName") && !value["SkillGroupName"].IsNull())
    {
        if (!value["SkillGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.SkillGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupName = string(value["SkillGroupName"].GetString());
        m_skillGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Satisfaction") && !value["Satisfaction"].IsNull())
    {
        if (!value["Satisfaction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.Satisfaction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_satisfaction.Deserialize(value["Satisfaction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_satisfactionHasBeenSet = true;
    }

    if (value.HasMember("ClientUserId") && !value["ClientUserId"].IsNull())
    {
        if (!value["ClientUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMCdrInfo.ClientUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUserId = string(value["ClientUserId"].GetString());
        m_clientUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IMCdrInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_endStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endStatus, allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_staffIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffId.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_satisfactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Satisfaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_satisfaction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUserId.c_str(), allocator).Move(), allocator);
    }

}


string IMCdrInfo::GetId() const
{
    return m_id;
}

void IMCdrInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IMCdrInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t IMCdrInfo::GetDuration() const
{
    return m_duration;
}

void IMCdrInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool IMCdrInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t IMCdrInfo::GetEndStatus() const
{
    return m_endStatus;
}

void IMCdrInfo::SetEndStatus(const int64_t& _endStatus)
{
    m_endStatus = _endStatus;
    m_endStatusHasBeenSet = true;
}

bool IMCdrInfo::EndStatusHasBeenSet() const
{
    return m_endStatusHasBeenSet;
}

string IMCdrInfo::GetNickname() const
{
    return m_nickname;
}

void IMCdrInfo::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool IMCdrInfo::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

int64_t IMCdrInfo::GetType() const
{
    return m_type;
}

void IMCdrInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool IMCdrInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string IMCdrInfo::GetStaffId() const
{
    return m_staffId;
}

void IMCdrInfo::SetStaffId(const string& _staffId)
{
    m_staffId = _staffId;
    m_staffIdHasBeenSet = true;
}

bool IMCdrInfo::StaffIdHasBeenSet() const
{
    return m_staffIdHasBeenSet;
}

int64_t IMCdrInfo::GetTimestamp() const
{
    return m_timestamp;
}

void IMCdrInfo::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool IMCdrInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string IMCdrInfo::GetSessionId() const
{
    return m_sessionId;
}

void IMCdrInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool IMCdrInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string IMCdrInfo::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void IMCdrInfo::SetSkillGroupId(const string& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool IMCdrInfo::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

string IMCdrInfo::GetSkillGroupName() const
{
    return m_skillGroupName;
}

void IMCdrInfo::SetSkillGroupName(const string& _skillGroupName)
{
    m_skillGroupName = _skillGroupName;
    m_skillGroupNameHasBeenSet = true;
}

bool IMCdrInfo::SkillGroupNameHasBeenSet() const
{
    return m_skillGroupNameHasBeenSet;
}

IMSatisfaction IMCdrInfo::GetSatisfaction() const
{
    return m_satisfaction;
}

void IMCdrInfo::SetSatisfaction(const IMSatisfaction& _satisfaction)
{
    m_satisfaction = _satisfaction;
    m_satisfactionHasBeenSet = true;
}

bool IMCdrInfo::SatisfactionHasBeenSet() const
{
    return m_satisfactionHasBeenSet;
}

string IMCdrInfo::GetClientUserId() const
{
    return m_clientUserId;
}

void IMCdrInfo::SetClientUserId(const string& _clientUserId)
{
    m_clientUserId = _clientUserId;
    m_clientUserIdHasBeenSet = true;
}

bool IMCdrInfo::ClientUserIdHasBeenSet() const
{
    return m_clientUserIdHasBeenSet;
}

