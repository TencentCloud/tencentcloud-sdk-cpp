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

#include <tencentcloud/tiia/v20190529/model/SearchImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

SearchImageRequest::SearchImageRequest() :
    m_groupIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_matchThresholdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_imageRectHasBeenSet(false),
    m_enableDetectHasBeenSet(false),
    m_categoryIdHasBeenSet(false)
{
}

string SearchImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_matchThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_matchThreshold, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageRect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDetect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDetect, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchImageRequest::GetGroupId() const
{
    return m_groupId;
}

void SearchImageRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SearchImageRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string SearchImageRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SearchImageRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SearchImageRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string SearchImageRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SearchImageRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SearchImageRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

int64_t SearchImageRequest::GetLimit() const
{
    return m_limit;
}

void SearchImageRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchImageRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t SearchImageRequest::GetOffset() const
{
    return m_offset;
}

void SearchImageRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchImageRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t SearchImageRequest::GetMatchThreshold() const
{
    return m_matchThreshold;
}

void SearchImageRequest::SetMatchThreshold(const int64_t& _matchThreshold)
{
    m_matchThreshold = _matchThreshold;
    m_matchThresholdHasBeenSet = true;
}

bool SearchImageRequest::MatchThresholdHasBeenSet() const
{
    return m_matchThresholdHasBeenSet;
}

string SearchImageRequest::GetFilter() const
{
    return m_filter;
}

void SearchImageRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool SearchImageRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

ImageRect SearchImageRequest::GetImageRect() const
{
    return m_imageRect;
}

void SearchImageRequest::SetImageRect(const ImageRect& _imageRect)
{
    m_imageRect = _imageRect;
    m_imageRectHasBeenSet = true;
}

bool SearchImageRequest::ImageRectHasBeenSet() const
{
    return m_imageRectHasBeenSet;
}

bool SearchImageRequest::GetEnableDetect() const
{
    return m_enableDetect;
}

void SearchImageRequest::SetEnableDetect(const bool& _enableDetect)
{
    m_enableDetect = _enableDetect;
    m_enableDetectHasBeenSet = true;
}

bool SearchImageRequest::EnableDetectHasBeenSet() const
{
    return m_enableDetectHasBeenSet;
}

int64_t SearchImageRequest::GetCategoryId() const
{
    return m_categoryId;
}

void SearchImageRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool SearchImageRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}


