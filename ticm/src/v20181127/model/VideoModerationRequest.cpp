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

#include <tencentcloud/ticm/v20181127/model/VideoModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ticm::V20181127::Model;
using namespace std;

VideoModerationRequest::VideoModerationRequest() :
    m_videoUrlHasBeenSet(false),
    m_developerIdHasBeenSet(false),
    m_cBUrlHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

string VideoModerationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_developerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeveloperId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_developerId.c_str(), allocator).Move(), allocator);
    }

    if (m_cBUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CBUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cBUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VideoModerationRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void VideoModerationRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool VideoModerationRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string VideoModerationRequest::GetDeveloperId() const
{
    return m_developerId;
}

void VideoModerationRequest::SetDeveloperId(const string& _developerId)
{
    m_developerId = _developerId;
    m_developerIdHasBeenSet = true;
}

bool VideoModerationRequest::DeveloperIdHasBeenSet() const
{
    return m_developerIdHasBeenSet;
}

string VideoModerationRequest::GetCBUrl() const
{
    return m_cBUrl;
}

void VideoModerationRequest::SetCBUrl(const string& _cBUrl)
{
    m_cBUrl = _cBUrl;
    m_cBUrlHasBeenSet = true;
}

bool VideoModerationRequest::CBUrlHasBeenSet() const
{
    return m_cBUrlHasBeenSet;
}

string VideoModerationRequest::GetExtra() const
{
    return m_extra;
}

void VideoModerationRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool VideoModerationRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


