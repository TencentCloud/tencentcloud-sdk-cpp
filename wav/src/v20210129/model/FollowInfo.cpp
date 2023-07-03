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

#include <tencentcloud/wav/v20210129/model/FollowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

FollowInfo::FollowInfo() :
    m_clueIdHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_isOverdueHasBeenSet(false),
    m_overdueTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_followWayTypeHasBeenSet(false),
    m_followWayNameHasBeenSet(false),
    m_followTimeHasBeenSet(false),
    m_nextFollowTimeHasBeenSet(false),
    m_followRecordHasBeenSet(false)
{
}

CoreInternalOutcome FollowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClueId") && !value["ClueId"].IsNull())
    {
        if (!value["ClueId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.ClueId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clueId = value["ClueId"].GetUint64();
        m_clueIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.CustomerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = value["CustomerId"].GetUint64();
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("IsOverdue") && !value["IsOverdue"].IsNull())
    {
        if (!value["IsOverdue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.IsOverdue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOverdue = value["IsOverdue"].GetInt64();
        m_isOverdueHasBeenSet = true;
    }

    if (value.HasMember("OverdueTime") && !value["OverdueTime"].IsNull())
    {
        if (!value["OverdueTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.OverdueTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_overdueTime = value["OverdueTime"].GetUint64();
        m_overdueTimeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventTypeName") && !value["EventTypeName"].IsNull())
    {
        if (!value["EventTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.EventTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTypeName = string(value["EventTypeName"].GetString());
        m_eventTypeNameHasBeenSet = true;
    }

    if (value.HasMember("FollowWayType") && !value["FollowWayType"].IsNull())
    {
        if (!value["FollowWayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.FollowWayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followWayType = string(value["FollowWayType"].GetString());
        m_followWayTypeHasBeenSet = true;
    }

    if (value.HasMember("FollowWayName") && !value["FollowWayName"].IsNull())
    {
        if (!value["FollowWayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.FollowWayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followWayName = string(value["FollowWayName"].GetString());
        m_followWayNameHasBeenSet = true;
    }

    if (value.HasMember("FollowTime") && !value["FollowTime"].IsNull())
    {
        if (!value["FollowTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.FollowTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_followTime = value["FollowTime"].GetUint64();
        m_followTimeHasBeenSet = true;
    }

    if (value.HasMember("NextFollowTime") && !value["NextFollowTime"].IsNull())
    {
        if (!value["NextFollowTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.NextFollowTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nextFollowTime = value["NextFollowTime"].GetUint64();
        m_nextFollowTimeHasBeenSet = true;
    }

    if (value.HasMember("FollowRecord") && !value["FollowRecord"].IsNull())
    {
        if (!value["FollowRecord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowInfo.FollowRecord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followRecord = string(value["FollowRecord"].GetString());
        m_followRecordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FollowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clueId, allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerId, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_isOverdueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOverdue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOverdue, allocator);
    }

    if (m_overdueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverdueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overdueTime, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_eventTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_followWayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowWayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followWayType.c_str(), allocator).Move(), allocator);
    }

    if (m_followWayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowWayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followWayName.c_str(), allocator).Move(), allocator);
    }

    if (m_followTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_followTime, allocator);
    }

    if (m_nextFollowTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextFollowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextFollowTime, allocator);
    }

    if (m_followRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followRecord.c_str(), allocator).Move(), allocator);
    }

}


uint64_t FollowInfo::GetClueId() const
{
    return m_clueId;
}

void FollowInfo::SetClueId(const uint64_t& _clueId)
{
    m_clueId = _clueId;
    m_clueIdHasBeenSet = true;
}

bool FollowInfo::ClueIdHasBeenSet() const
{
    return m_clueIdHasBeenSet;
}

uint64_t FollowInfo::GetCustomerId() const
{
    return m_customerId;
}

void FollowInfo::SetCustomerId(const uint64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool FollowInfo::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string FollowInfo::GetUserName() const
{
    return m_userName;
}

void FollowInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool FollowInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string FollowInfo::GetPhone() const
{
    return m_phone;
}

void FollowInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool FollowInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

int64_t FollowInfo::GetIsOverdue() const
{
    return m_isOverdue;
}

void FollowInfo::SetIsOverdue(const int64_t& _isOverdue)
{
    m_isOverdue = _isOverdue;
    m_isOverdueHasBeenSet = true;
}

bool FollowInfo::IsOverdueHasBeenSet() const
{
    return m_isOverdueHasBeenSet;
}

uint64_t FollowInfo::GetOverdueTime() const
{
    return m_overdueTime;
}

void FollowInfo::SetOverdueTime(const uint64_t& _overdueTime)
{
    m_overdueTime = _overdueTime;
    m_overdueTimeHasBeenSet = true;
}

bool FollowInfo::OverdueTimeHasBeenSet() const
{
    return m_overdueTimeHasBeenSet;
}

int64_t FollowInfo::GetEventType() const
{
    return m_eventType;
}

void FollowInfo::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool FollowInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string FollowInfo::GetEventTypeName() const
{
    return m_eventTypeName;
}

void FollowInfo::SetEventTypeName(const string& _eventTypeName)
{
    m_eventTypeName = _eventTypeName;
    m_eventTypeNameHasBeenSet = true;
}

bool FollowInfo::EventTypeNameHasBeenSet() const
{
    return m_eventTypeNameHasBeenSet;
}

string FollowInfo::GetFollowWayType() const
{
    return m_followWayType;
}

void FollowInfo::SetFollowWayType(const string& _followWayType)
{
    m_followWayType = _followWayType;
    m_followWayTypeHasBeenSet = true;
}

bool FollowInfo::FollowWayTypeHasBeenSet() const
{
    return m_followWayTypeHasBeenSet;
}

string FollowInfo::GetFollowWayName() const
{
    return m_followWayName;
}

void FollowInfo::SetFollowWayName(const string& _followWayName)
{
    m_followWayName = _followWayName;
    m_followWayNameHasBeenSet = true;
}

bool FollowInfo::FollowWayNameHasBeenSet() const
{
    return m_followWayNameHasBeenSet;
}

uint64_t FollowInfo::GetFollowTime() const
{
    return m_followTime;
}

void FollowInfo::SetFollowTime(const uint64_t& _followTime)
{
    m_followTime = _followTime;
    m_followTimeHasBeenSet = true;
}

bool FollowInfo::FollowTimeHasBeenSet() const
{
    return m_followTimeHasBeenSet;
}

uint64_t FollowInfo::GetNextFollowTime() const
{
    return m_nextFollowTime;
}

void FollowInfo::SetNextFollowTime(const uint64_t& _nextFollowTime)
{
    m_nextFollowTime = _nextFollowTime;
    m_nextFollowTimeHasBeenSet = true;
}

bool FollowInfo::NextFollowTimeHasBeenSet() const
{
    return m_nextFollowTimeHasBeenSet;
}

string FollowInfo::GetFollowRecord() const
{
    return m_followRecord;
}

void FollowInfo::SetFollowRecord(const string& _followRecord)
{
    m_followRecord = _followRecord;
    m_followRecordHasBeenSet = true;
}

bool FollowInfo::FollowRecordHasBeenSet() const
{
    return m_followRecordHasBeenSet;
}

