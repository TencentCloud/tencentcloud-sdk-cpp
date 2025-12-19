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

#include <tencentcloud/wedata/v20210820/model/DescribeLineageInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeLineageInfoRequest::DescribeLineageInfoRequest() :
    m_resourceOriIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_qualifiedIdHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_inputDepthHasBeenSet(false),
    m_outputDepthHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_lineageTypeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeLineageInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceOriIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOriId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceOriId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifiedIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualifiedId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qualifiedId.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_inputDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDepth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inputDepth, allocator);
    }

    if (m_outputDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDepth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputDepth, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_lineageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lineageType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLineageInfoRequest::GetResourceOriId() const
{
    return m_resourceOriId;
}

void DescribeLineageInfoRequest::SetResourceOriId(const string& _resourceOriId)
{
    m_resourceOriId = _resourceOriId;
    m_resourceOriIdHasBeenSet = true;
}

bool DescribeLineageInfoRequest::ResourceOriIdHasBeenSet() const
{
    return m_resourceOriIdHasBeenSet;
}

string DescribeLineageInfoRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeLineageInfoRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeLineageInfoRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeLineageInfoRequest::GetQualifiedId() const
{
    return m_qualifiedId;
}

void DescribeLineageInfoRequest::SetQualifiedId(const string& _qualifiedId)
{
    m_qualifiedId = _qualifiedId;
    m_qualifiedIdHasBeenSet = true;
}

bool DescribeLineageInfoRequest::QualifiedIdHasBeenSet() const
{
    return m_qualifiedIdHasBeenSet;
}

string DescribeLineageInfoRequest::GetDirection() const
{
    return m_direction;
}

void DescribeLineageInfoRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeLineageInfoRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t DescribeLineageInfoRequest::GetInputDepth() const
{
    return m_inputDepth;
}

void DescribeLineageInfoRequest::SetInputDepth(const int64_t& _inputDepth)
{
    m_inputDepth = _inputDepth;
    m_inputDepthHasBeenSet = true;
}

bool DescribeLineageInfoRequest::InputDepthHasBeenSet() const
{
    return m_inputDepthHasBeenSet;
}

int64_t DescribeLineageInfoRequest::GetOutputDepth() const
{
    return m_outputDepth;
}

void DescribeLineageInfoRequest::SetOutputDepth(const int64_t& _outputDepth)
{
    m_outputDepth = _outputDepth;
    m_outputDepthHasBeenSet = true;
}

bool DescribeLineageInfoRequest::OutputDepthHasBeenSet() const
{
    return m_outputDepthHasBeenSet;
}

string DescribeLineageInfoRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeLineageInfoRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeLineageInfoRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeLineageInfoRequest::GetLineageType() const
{
    return m_lineageType;
}

void DescribeLineageInfoRequest::SetLineageType(const string& _lineageType)
{
    m_lineageType = _lineageType;
    m_lineageTypeHasBeenSet = true;
}

bool DescribeLineageInfoRequest::LineageTypeHasBeenSet() const
{
    return m_lineageTypeHasBeenSet;
}

int64_t DescribeLineageInfoRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeLineageInfoRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeLineageInfoRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeLineageInfoRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeLineageInfoRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeLineageInfoRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


