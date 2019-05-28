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

#include <tencentcloud/ticm/v20181127/model/ImageModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ticm::V20181127::Model;
using namespace rapidjson;
using namespace std;

ImageModerationRequest::ImageModerationRequest() :
    m_scenesHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_configHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_imageBase64HasBeenSet(false)
{
}

string ImageModerationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scenesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scenes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_scenes.begin(); itr != m_scenes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ImageModerationRequest::GetScenes() const
{
    return m_scenes;
}

void ImageModerationRequest::SetScenes(const vector<string>& _scenes)
{
    m_scenes = _scenes;
    m_scenesHasBeenSet = true;
}

bool ImageModerationRequest::ScenesHasBeenSet() const
{
    return m_scenesHasBeenSet;
}

string ImageModerationRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void ImageModerationRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ImageModerationRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string ImageModerationRequest::GetConfig() const
{
    return m_config;
}

void ImageModerationRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ImageModerationRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string ImageModerationRequest::GetExtra() const
{
    return m_extra;
}

void ImageModerationRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool ImageModerationRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string ImageModerationRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void ImageModerationRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool ImageModerationRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}


