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

#include <tencentcloud/bda/v20200324/model/CreateSegmentationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

CreateSegmentationTaskRequest::CreateSegmentationTaskRequest() :
    m_videoUrlHasBeenSet(false),
    m_backgroundImageUrlHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string CreateSegmentationTaskRequest::ToJsonString() const
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

    if (m_backgroundImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backgroundImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSegmentationTaskRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void CreateSegmentationTaskRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool CreateSegmentationTaskRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string CreateSegmentationTaskRequest::GetBackgroundImageUrl() const
{
    return m_backgroundImageUrl;
}

void CreateSegmentationTaskRequest::SetBackgroundImageUrl(const string& _backgroundImageUrl)
{
    m_backgroundImageUrl = _backgroundImageUrl;
    m_backgroundImageUrlHasBeenSet = true;
}

bool CreateSegmentationTaskRequest::BackgroundImageUrlHasBeenSet() const
{
    return m_backgroundImageUrlHasBeenSet;
}

string CreateSegmentationTaskRequest::GetConfig() const
{
    return m_config;
}

void CreateSegmentationTaskRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CreateSegmentationTaskRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


