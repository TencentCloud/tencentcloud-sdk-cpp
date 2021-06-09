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

#include <tencentcloud/ape/v20200513/model/DescribeImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ape::V20200513::Model;
using namespace std;

DescribeImagesRequest::DescribeImagesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_orientationHasBeenSet(false),
    m_imageSenseTypeHasBeenSet(false),
    m_layeredGalleryIdsHasBeenSet(false)
{
}

string DescribeImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_orientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orientation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orientation.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageSenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_layeredGalleryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayeredGalleryIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_layeredGalleryIds.begin(); itr != m_layeredGalleryIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeImagesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeImagesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeImagesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeImagesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeImagesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeImagesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeImagesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeImagesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeImagesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeImagesRequest::GetOrientation() const
{
    return m_orientation;
}

void DescribeImagesRequest::SetOrientation(const string& _orientation)
{
    m_orientation = _orientation;
    m_orientationHasBeenSet = true;
}

bool DescribeImagesRequest::OrientationHasBeenSet() const
{
    return m_orientationHasBeenSet;
}

string DescribeImagesRequest::GetImageSenseType() const
{
    return m_imageSenseType;
}

void DescribeImagesRequest::SetImageSenseType(const string& _imageSenseType)
{
    m_imageSenseType = _imageSenseType;
    m_imageSenseTypeHasBeenSet = true;
}

bool DescribeImagesRequest::ImageSenseTypeHasBeenSet() const
{
    return m_imageSenseTypeHasBeenSet;
}

vector<int64_t> DescribeImagesRequest::GetLayeredGalleryIds() const
{
    return m_layeredGalleryIds;
}

void DescribeImagesRequest::SetLayeredGalleryIds(const vector<int64_t>& _layeredGalleryIds)
{
    m_layeredGalleryIds = _layeredGalleryIds;
    m_layeredGalleryIdsHasBeenSet = true;
}

bool DescribeImagesRequest::LayeredGalleryIdsHasBeenSet() const
{
    return m_layeredGalleryIdsHasBeenSet;
}


