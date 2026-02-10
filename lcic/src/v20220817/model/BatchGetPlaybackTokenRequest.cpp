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

#include <tencentcloud/lcic/v20220817/model/BatchGetPlaybackTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

BatchGetPlaybackTokenRequest::BatchGetPlaybackTokenRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdsHasBeenSet(false),
    m_expireSecondsHasBeenSet(false)
{
}

string BatchGetPlaybackTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roomIds.begin(); itr != m_roomIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_expireSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t BatchGetPlaybackTokenRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void BatchGetPlaybackTokenRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool BatchGetPlaybackTokenRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<uint64_t> BatchGetPlaybackTokenRequest::GetRoomIds() const
{
    return m_roomIds;
}

void BatchGetPlaybackTokenRequest::SetRoomIds(const vector<uint64_t>& _roomIds)
{
    m_roomIds = _roomIds;
    m_roomIdsHasBeenSet = true;
}

bool BatchGetPlaybackTokenRequest::RoomIdsHasBeenSet() const
{
    return m_roomIdsHasBeenSet;
}

uint64_t BatchGetPlaybackTokenRequest::GetExpireSeconds() const
{
    return m_expireSeconds;
}

void BatchGetPlaybackTokenRequest::SetExpireSeconds(const uint64_t& _expireSeconds)
{
    m_expireSeconds = _expireSeconds;
    m_expireSecondsHasBeenSet = true;
}

bool BatchGetPlaybackTokenRequest::ExpireSecondsHasBeenSet() const
{
    return m_expireSecondsHasBeenSet;
}


