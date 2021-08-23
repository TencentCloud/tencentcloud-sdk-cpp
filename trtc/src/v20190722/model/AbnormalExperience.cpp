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

#include <tencentcloud/trtc/v20190722/model/AbnormalExperience.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AbnormalExperience::AbnormalExperience() :
    m_userIdHasBeenSet(false),
    m_experienceIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_abnormalEventListHasBeenSet(false),
    m_eventTimeHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalExperience::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalExperience.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("ExperienceId") && !value["ExperienceId"].IsNull())
    {
        if (!value["ExperienceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalExperience.ExperienceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_experienceId = value["ExperienceId"].GetUint64();
        m_experienceIdHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalExperience.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("AbnormalEventList") && !value["AbnormalEventList"].IsNull())
    {
        if (!value["AbnormalEventList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbnormalExperience.AbnormalEventList` is not array type"));

        const rapidjson::Value &tmpValue = value["AbnormalEventList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AbnormalEvent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_abnormalEventList.push_back(item);
        }
        m_abnormalEventListHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalExperience.EventTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = value["EventTime"].GetUint64();
        m_eventTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalExperience::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_experienceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExperienceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_experienceId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_abnormalEventListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalEventList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_abnormalEventList.begin(); itr != m_abnormalEventList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventTime, allocator);
    }

}


string AbnormalExperience::GetUserId() const
{
    return m_userId;
}

void AbnormalExperience::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AbnormalExperience::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t AbnormalExperience::GetExperienceId() const
{
    return m_experienceId;
}

void AbnormalExperience::SetExperienceId(const uint64_t& _experienceId)
{
    m_experienceId = _experienceId;
    m_experienceIdHasBeenSet = true;
}

bool AbnormalExperience::ExperienceIdHasBeenSet() const
{
    return m_experienceIdHasBeenSet;
}

string AbnormalExperience::GetRoomId() const
{
    return m_roomId;
}

void AbnormalExperience::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool AbnormalExperience::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

vector<AbnormalEvent> AbnormalExperience::GetAbnormalEventList() const
{
    return m_abnormalEventList;
}

void AbnormalExperience::SetAbnormalEventList(const vector<AbnormalEvent>& _abnormalEventList)
{
    m_abnormalEventList = _abnormalEventList;
    m_abnormalEventListHasBeenSet = true;
}

bool AbnormalExperience::AbnormalEventListHasBeenSet() const
{
    return m_abnormalEventListHasBeenSet;
}

uint64_t AbnormalExperience::GetEventTime() const
{
    return m_eventTime;
}

void AbnormalExperience::SetEventTime(const uint64_t& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool AbnormalExperience::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

