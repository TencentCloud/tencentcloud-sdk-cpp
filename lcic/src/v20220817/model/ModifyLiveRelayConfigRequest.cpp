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

#include <tencentcloud/lcic/v20220817/model/ModifyLiveRelayConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

ModifyLiveRelayConfigRequest::ModifyLiveRelayConfigRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_relayTypeHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_isTencentCdnHasBeenSet(false)
{
}

string ModifyLiveRelayConfigRequest::ToJsonString() const
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_relayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_relayType, allocator);
    }

    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isTencentCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTencentCdn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isTencentCdn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyLiveRelayConfigRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyLiveRelayConfigRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyLiveRelayConfigRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t ModifyLiveRelayConfigRequest::GetRoomId() const
{
    return m_roomId;
}

void ModifyLiveRelayConfigRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ModifyLiveRelayConfigRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t ModifyLiveRelayConfigRequest::GetRelayType() const
{
    return m_relayType;
}

void ModifyLiveRelayConfigRequest::SetRelayType(const uint64_t& _relayType)
{
    m_relayType = _relayType;
    m_relayTypeHasBeenSet = true;
}

bool ModifyLiveRelayConfigRequest::RelayTypeHasBeenSet() const
{
    return m_relayTypeHasBeenSet;
}

vector<string> ModifyLiveRelayConfigRequest::GetUrls() const
{
    return m_urls;
}

void ModifyLiveRelayConfigRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool ModifyLiveRelayConfigRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

uint64_t ModifyLiveRelayConfigRequest::GetIsTencentCdn() const
{
    return m_isTencentCdn;
}

void ModifyLiveRelayConfigRequest::SetIsTencentCdn(const uint64_t& _isTencentCdn)
{
    m_isTencentCdn = _isTencentCdn;
    m_isTencentCdnHasBeenSet = true;
}

bool ModifyLiveRelayConfigRequest::IsTencentCdnHasBeenSet() const
{
    return m_isTencentCdnHasBeenSet;
}


