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

#include <tencentcloud/cme/v20191029/model/DescribeProjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

DescribeProjectsRequest::DescribeProjectsRequest() :
    m_platformHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_aspectRatioSetHasBeenSet(false),
    m_categorySetHasBeenSet(false),
    m_modesHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string DescribeProjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aspectRatioSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatioSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aspectRatioSet.begin(); itr != m_aspectRatioSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categorySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategorySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categorySet.begin(); itr != m_categorySet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modes.begin(); itr != m_modes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProjectsRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeProjectsRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeProjectsRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

vector<string> DescribeProjectsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeProjectsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeProjectsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeProjectsRequest::GetAspectRatioSet() const
{
    return m_aspectRatioSet;
}

void DescribeProjectsRequest::SetAspectRatioSet(const vector<string>& _aspectRatioSet)
{
    m_aspectRatioSet = _aspectRatioSet;
    m_aspectRatioSetHasBeenSet = true;
}

bool DescribeProjectsRequest::AspectRatioSetHasBeenSet() const
{
    return m_aspectRatioSetHasBeenSet;
}

vector<string> DescribeProjectsRequest::GetCategorySet() const
{
    return m_categorySet;
}

void DescribeProjectsRequest::SetCategorySet(const vector<string>& _categorySet)
{
    m_categorySet = _categorySet;
    m_categorySetHasBeenSet = true;
}

bool DescribeProjectsRequest::CategorySetHasBeenSet() const
{
    return m_categorySetHasBeenSet;
}

vector<string> DescribeProjectsRequest::GetModes() const
{
    return m_modes;
}

void DescribeProjectsRequest::SetModes(const vector<string>& _modes)
{
    m_modes = _modes;
    m_modesHasBeenSet = true;
}

bool DescribeProjectsRequest::ModesHasBeenSet() const
{
    return m_modesHasBeenSet;
}

SortBy DescribeProjectsRequest::GetSort() const
{
    return m_sort;
}

void DescribeProjectsRequest::SetSort(const SortBy& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeProjectsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

Entity DescribeProjectsRequest::GetOwner() const
{
    return m_owner;
}

void DescribeProjectsRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DescribeProjectsRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t DescribeProjectsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeProjectsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeProjectsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeProjectsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeProjectsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeProjectsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeProjectsRequest::GetOperator() const
{
    return m_operator;
}

void DescribeProjectsRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeProjectsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


