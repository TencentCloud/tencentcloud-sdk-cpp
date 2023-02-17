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

#include <tencentcloud/ssa/v20180608/model/SaEventPubRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

SaEventPubRequest::SaEventPubRequest() :
    m_assetHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventType1HasBeenSet(false),
    m_eventType2HasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_oldIdMd5HasBeenSet(false)
{
}

string SaEventPubRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_asset.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventType1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventType1, allocator);
    }

    if (m_eventType2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventType2, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIdMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIdMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldIdMd5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SaEventPubRequest::GetAsset() const
{
    return m_asset;
}

void SaEventPubRequest::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool SaEventPubRequest::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string SaEventPubRequest::GetEventName() const
{
    return m_eventName;
}

void SaEventPubRequest::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool SaEventPubRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

int64_t SaEventPubRequest::GetEventType1() const
{
    return m_eventType1;
}

void SaEventPubRequest::SetEventType1(const int64_t& _eventType1)
{
    m_eventType1 = _eventType1;
    m_eventType1HasBeenSet = true;
}

bool SaEventPubRequest::EventType1HasBeenSet() const
{
    return m_eventType1HasBeenSet;
}

int64_t SaEventPubRequest::GetEventType2() const
{
    return m_eventType2;
}

void SaEventPubRequest::SetEventType2(const int64_t& _eventType2)
{
    m_eventType2 = _eventType2;
    m_eventType2HasBeenSet = true;
}

bool SaEventPubRequest::EventType2HasBeenSet() const
{
    return m_eventType2HasBeenSet;
}

string SaEventPubRequest::GetLevel() const
{
    return m_level;
}

void SaEventPubRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SaEventPubRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t SaEventPubRequest::GetStatus() const
{
    return m_status;
}

void SaEventPubRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SaEventPubRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SaEventPubRequest::GetStartTime() const
{
    return m_startTime;
}

void SaEventPubRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SaEventPubRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t SaEventPubRequest::GetOffset() const
{
    return m_offset;
}

void SaEventPubRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SaEventPubRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SaEventPubRequest::GetLimit() const
{
    return m_limit;
}

void SaEventPubRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SaEventPubRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SaEventPubRequest::GetEndTime() const
{
    return m_endTime;
}

void SaEventPubRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SaEventPubRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SaEventPubRequest::GetOldIdMd5() const
{
    return m_oldIdMd5;
}

void SaEventPubRequest::SetOldIdMd5(const string& _oldIdMd5)
{
    m_oldIdMd5 = _oldIdMd5;
    m_oldIdMd5HasBeenSet = true;
}

bool SaEventPubRequest::OldIdMd5HasBeenSet() const
{
    return m_oldIdMd5HasBeenSet;
}


