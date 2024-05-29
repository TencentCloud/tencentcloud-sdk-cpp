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

#include <tencentcloud/trp/v20210515/model/DescribeCodePacksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribeCodePacksRequest::DescribeCodePacksRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_serialTypeHasBeenSet(false),
    m_resTypeHasBeenSet(false),
    m_resIdHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeCodePacksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_serialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serialType, allocator);
    }

    if (m_resTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resType.c_str(), allocator).Move(), allocator);
    }

    if (m_resIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneCode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCodePacksRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCodePacksRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCodePacksRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeCodePacksRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeCodePacksRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeCodePacksRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeCodePacksRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeCodePacksRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeCodePacksRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t DescribeCodePacksRequest::GetCorpId() const
{
    return m_corpId;
}

void DescribeCodePacksRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool DescribeCodePacksRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

uint64_t DescribeCodePacksRequest::GetSerialType() const
{
    return m_serialType;
}

void DescribeCodePacksRequest::SetSerialType(const uint64_t& _serialType)
{
    m_serialType = _serialType;
    m_serialTypeHasBeenSet = true;
}

bool DescribeCodePacksRequest::SerialTypeHasBeenSet() const
{
    return m_serialTypeHasBeenSet;
}

string DescribeCodePacksRequest::GetResType() const
{
    return m_resType;
}

void DescribeCodePacksRequest::SetResType(const string& _resType)
{
    m_resType = _resType;
    m_resTypeHasBeenSet = true;
}

bool DescribeCodePacksRequest::ResTypeHasBeenSet() const
{
    return m_resTypeHasBeenSet;
}

string DescribeCodePacksRequest::GetResId() const
{
    return m_resId;
}

void DescribeCodePacksRequest::SetResId(const string& _resId)
{
    m_resId = _resId;
    m_resIdHasBeenSet = true;
}

bool DescribeCodePacksRequest::ResIdHasBeenSet() const
{
    return m_resIdHasBeenSet;
}

int64_t DescribeCodePacksRequest::GetSceneCode() const
{
    return m_sceneCode;
}

void DescribeCodePacksRequest::SetSceneCode(const int64_t& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool DescribeCodePacksRequest::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

string DescribeCodePacksRequest::GetStatus() const
{
    return m_status;
}

void DescribeCodePacksRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCodePacksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


