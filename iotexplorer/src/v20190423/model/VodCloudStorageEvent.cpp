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

#include <tencentcloud/iotexplorer/v20190423/model/VodCloudStorageEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VodCloudStorageEvent::VodCloudStorageEvent() :
    m_eventIdHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_eventStartTimeHasBeenSet(false),
    m_eventEndTimeHasBeenSet(false),
    m_videoListHasBeenSet(false),
    m_isStaticEventHasBeenSet(false)
{
}

CoreInternalOutcome VodCloudStorageEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VodCloudStorageEvent.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("ThumbnailUrl") && !value["ThumbnailUrl"].IsNull())
    {
        if (!value["ThumbnailUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VodCloudStorageEvent.ThumbnailUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailUrl = string(value["ThumbnailUrl"].GetString());
        m_thumbnailUrlHasBeenSet = true;
    }

    if (value.HasMember("EventStartTime") && !value["EventStartTime"].IsNull())
    {
        if (!value["EventStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VodCloudStorageEvent.EventStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventStartTime = value["EventStartTime"].GetUint64();
        m_eventStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EventEndTime") && !value["EventEndTime"].IsNull())
    {
        if (!value["EventEndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VodCloudStorageEvent.EventEndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventEndTime = value["EventEndTime"].GetUint64();
        m_eventEndTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoList") && !value["VideoList"].IsNull())
    {
        if (!value["VideoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VodCloudStorageEvent.VideoList` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoList.push_back(item);
        }
        m_videoListHasBeenSet = true;
    }

    if (value.HasMember("IsStaticEvent") && !value["IsStaticEvent"].IsNull())
    {
        if (!value["IsStaticEvent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VodCloudStorageEvent.IsStaticEvent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isStaticEvent = value["IsStaticEvent"].GetBool();
        m_isStaticEventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VodCloudStorageEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbnailUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbnailUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_eventStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventStartTime, allocator);
    }

    if (m_eventEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventEndTime, allocator);
    }

    if (m_videoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoList.begin(); itr != m_videoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isStaticEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStaticEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isStaticEvent, allocator);
    }

}


string VodCloudStorageEvent::GetEventId() const
{
    return m_eventId;
}

void VodCloudStorageEvent::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool VodCloudStorageEvent::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string VodCloudStorageEvent::GetThumbnailUrl() const
{
    return m_thumbnailUrl;
}

void VodCloudStorageEvent::SetThumbnailUrl(const string& _thumbnailUrl)
{
    m_thumbnailUrl = _thumbnailUrl;
    m_thumbnailUrlHasBeenSet = true;
}

bool VodCloudStorageEvent::ThumbnailUrlHasBeenSet() const
{
    return m_thumbnailUrlHasBeenSet;
}

uint64_t VodCloudStorageEvent::GetEventStartTime() const
{
    return m_eventStartTime;
}

void VodCloudStorageEvent::SetEventStartTime(const uint64_t& _eventStartTime)
{
    m_eventStartTime = _eventStartTime;
    m_eventStartTimeHasBeenSet = true;
}

bool VodCloudStorageEvent::EventStartTimeHasBeenSet() const
{
    return m_eventStartTimeHasBeenSet;
}

uint64_t VodCloudStorageEvent::GetEventEndTime() const
{
    return m_eventEndTime;
}

void VodCloudStorageEvent::SetEventEndTime(const uint64_t& _eventEndTime)
{
    m_eventEndTime = _eventEndTime;
    m_eventEndTimeHasBeenSet = true;
}

bool VodCloudStorageEvent::EventEndTimeHasBeenSet() const
{
    return m_eventEndTimeHasBeenSet;
}

vector<VideoList> VodCloudStorageEvent::GetVideoList() const
{
    return m_videoList;
}

void VodCloudStorageEvent::SetVideoList(const vector<VideoList>& _videoList)
{
    m_videoList = _videoList;
    m_videoListHasBeenSet = true;
}

bool VodCloudStorageEvent::VideoListHasBeenSet() const
{
    return m_videoListHasBeenSet;
}

bool VodCloudStorageEvent::GetIsStaticEvent() const
{
    return m_isStaticEvent;
}

void VodCloudStorageEvent::SetIsStaticEvent(const bool& _isStaticEvent)
{
    m_isStaticEvent = _isStaticEvent;
    m_isStaticEventHasBeenSet = true;
}

bool VodCloudStorageEvent::IsStaticEventHasBeenSet() const
{
    return m_isStaticEventHasBeenSet;
}

