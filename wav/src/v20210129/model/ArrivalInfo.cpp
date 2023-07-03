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

#include <tencentcloud/wav/v20210129/model/ArrivalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ArrivalInfo::ArrivalInfo() :
    m_clueIdHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_firstArrivalHasBeenSet(false),
    m_arrivalTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_followRecordHasBeenSet(false)
{
}

CoreInternalOutcome ArrivalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClueId") && !value["ClueId"].IsNull())
    {
        if (!value["ClueId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.ClueId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clueId = value["ClueId"].GetUint64();
        m_clueIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.CustomerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = value["CustomerId"].GetUint64();
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("FirstArrival") && !value["FirstArrival"].IsNull())
    {
        if (!value["FirstArrival"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.FirstArrival` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstArrival = value["FirstArrival"].GetInt64();
        m_firstArrivalHasBeenSet = true;
    }

    if (value.HasMember("ArrivalTime") && !value["ArrivalTime"].IsNull())
    {
        if (!value["ArrivalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.ArrivalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_arrivalTime = value["ArrivalTime"].GetUint64();
        m_arrivalTimeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventTypeName") && !value["EventTypeName"].IsNull())
    {
        if (!value["EventTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.EventTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTypeName = string(value["EventTypeName"].GetString());
        m_eventTypeNameHasBeenSet = true;
    }

    if (value.HasMember("FollowRecord") && !value["FollowRecord"].IsNull())
    {
        if (!value["FollowRecord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivalInfo.FollowRecord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followRecord = string(value["FollowRecord"].GetString());
        m_followRecordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArrivalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_firstArrivalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstArrival";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstArrival, allocator);
    }

    if (m_arrivalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrivalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_arrivalTime, allocator);
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

    if (m_followRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followRecord.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ArrivalInfo::GetClueId() const
{
    return m_clueId;
}

void ArrivalInfo::SetClueId(const uint64_t& _clueId)
{
    m_clueId = _clueId;
    m_clueIdHasBeenSet = true;
}

bool ArrivalInfo::ClueIdHasBeenSet() const
{
    return m_clueIdHasBeenSet;
}

uint64_t ArrivalInfo::GetCustomerId() const
{
    return m_customerId;
}

void ArrivalInfo::SetCustomerId(const uint64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool ArrivalInfo::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string ArrivalInfo::GetUserName() const
{
    return m_userName;
}

void ArrivalInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ArrivalInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ArrivalInfo::GetPhone() const
{
    return m_phone;
}

void ArrivalInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ArrivalInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

int64_t ArrivalInfo::GetFirstArrival() const
{
    return m_firstArrival;
}

void ArrivalInfo::SetFirstArrival(const int64_t& _firstArrival)
{
    m_firstArrival = _firstArrival;
    m_firstArrivalHasBeenSet = true;
}

bool ArrivalInfo::FirstArrivalHasBeenSet() const
{
    return m_firstArrivalHasBeenSet;
}

uint64_t ArrivalInfo::GetArrivalTime() const
{
    return m_arrivalTime;
}

void ArrivalInfo::SetArrivalTime(const uint64_t& _arrivalTime)
{
    m_arrivalTime = _arrivalTime;
    m_arrivalTimeHasBeenSet = true;
}

bool ArrivalInfo::ArrivalTimeHasBeenSet() const
{
    return m_arrivalTimeHasBeenSet;
}

int64_t ArrivalInfo::GetEventType() const
{
    return m_eventType;
}

void ArrivalInfo::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool ArrivalInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string ArrivalInfo::GetEventTypeName() const
{
    return m_eventTypeName;
}

void ArrivalInfo::SetEventTypeName(const string& _eventTypeName)
{
    m_eventTypeName = _eventTypeName;
    m_eventTypeNameHasBeenSet = true;
}

bool ArrivalInfo::EventTypeNameHasBeenSet() const
{
    return m_eventTypeNameHasBeenSet;
}

string ArrivalInfo::GetFollowRecord() const
{
    return m_followRecord;
}

void ArrivalInfo::SetFollowRecord(const string& _followRecord)
{
    m_followRecord = _followRecord;
    m_followRecordHasBeenSet = true;
}

bool ArrivalInfo::FollowRecordHasBeenSet() const
{
    return m_followRecordHasBeenSet;
}

