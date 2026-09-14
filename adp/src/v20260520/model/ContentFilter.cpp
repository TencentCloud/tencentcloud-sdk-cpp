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

#include <tencentcloud/adp/v20260520/model/ContentFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ContentFilter::ContentFilter() :
    m_imageMinHeightHasBeenSet(false),
    m_imageMinWidthHasBeenSet(false),
    m_imageNamePatternsHasBeenSet(false)
{
}

CoreInternalOutcome ContentFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageMinHeight") && !value["ImageMinHeight"].IsNull())
    {
        if (!value["ImageMinHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentFilter.ImageMinHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageMinHeight = value["ImageMinHeight"].GetInt64();
        m_imageMinHeightHasBeenSet = true;
    }

    if (value.HasMember("ImageMinWidth") && !value["ImageMinWidth"].IsNull())
    {
        if (!value["ImageMinWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentFilter.ImageMinWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageMinWidth = value["ImageMinWidth"].GetInt64();
        m_imageMinWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageNamePatterns") && !value["ImageNamePatterns"].IsNull())
    {
        if (!value["ImageNamePatterns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentFilter.ImageNamePatterns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageNamePatterns = string(value["ImageNamePatterns"].GetString());
        m_imageNamePatternsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageMinHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMinHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageMinHeight, allocator);
    }

    if (m_imageMinWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMinWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageMinWidth, allocator);
    }

    if (m_imageNamePatternsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageNamePatterns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageNamePatterns.c_str(), allocator).Move(), allocator);
    }

}


int64_t ContentFilter::GetImageMinHeight() const
{
    return m_imageMinHeight;
}

void ContentFilter::SetImageMinHeight(const int64_t& _imageMinHeight)
{
    m_imageMinHeight = _imageMinHeight;
    m_imageMinHeightHasBeenSet = true;
}

bool ContentFilter::ImageMinHeightHasBeenSet() const
{
    return m_imageMinHeightHasBeenSet;
}

int64_t ContentFilter::GetImageMinWidth() const
{
    return m_imageMinWidth;
}

void ContentFilter::SetImageMinWidth(const int64_t& _imageMinWidth)
{
    m_imageMinWidth = _imageMinWidth;
    m_imageMinWidthHasBeenSet = true;
}

bool ContentFilter::ImageMinWidthHasBeenSet() const
{
    return m_imageMinWidthHasBeenSet;
}

string ContentFilter::GetImageNamePatterns() const
{
    return m_imageNamePatterns;
}

void ContentFilter::SetImageNamePatterns(const string& _imageNamePatterns)
{
    m_imageNamePatterns = _imageNamePatterns;
    m_imageNamePatternsHasBeenSet = true;
}

bool ContentFilter::ImageNamePatternsHasBeenSet() const
{
    return m_imageNamePatternsHasBeenSet;
}

