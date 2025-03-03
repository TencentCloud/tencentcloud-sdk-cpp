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

#include <tencentcloud/trtc/v20190722/model/UpdateStreamIngestRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

UpdateStreamIngestRequest::UpdateStreamIngestRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_streamUrlHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_isPauseHasBeenSet(false)
{
}

string UpdateStreamIngestRequest::ToJsonString() const
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_streamUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_isPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPause, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateStreamIngestRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void UpdateStreamIngestRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool UpdateStreamIngestRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string UpdateStreamIngestRequest::GetTaskId() const
{
    return m_taskId;
}

void UpdateStreamIngestRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UpdateStreamIngestRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string UpdateStreamIngestRequest::GetStreamUrl() const
{
    return m_streamUrl;
}

void UpdateStreamIngestRequest::SetStreamUrl(const string& _streamUrl)
{
    m_streamUrl = _streamUrl;
    m_streamUrlHasBeenSet = true;
}

bool UpdateStreamIngestRequest::StreamUrlHasBeenSet() const
{
    return m_streamUrlHasBeenSet;
}

uint64_t UpdateStreamIngestRequest::GetVolume() const
{
    return m_volume;
}

void UpdateStreamIngestRequest::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool UpdateStreamIngestRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

bool UpdateStreamIngestRequest::GetIsPause() const
{
    return m_isPause;
}

void UpdateStreamIngestRequest::SetIsPause(const bool& _isPause)
{
    m_isPause = _isPause;
    m_isPauseHasBeenSet = true;
}

bool UpdateStreamIngestRequest::IsPauseHasBeenSet() const
{
    return m_isPauseHasBeenSet;
}


