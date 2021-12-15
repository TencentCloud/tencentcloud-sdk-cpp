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

#include <tencentcloud/eiam/v20210420/model/DescribeAccountGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeAccountGroupRequest::DescribeAccountGroupRequest() :
    m_applicationIdHasBeenSet(false),
    m_searchConditionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeAccountGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchCondition.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccountGroupRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeAccountGroupRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeAccountGroupRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

AccountGroupSearchCriteria DescribeAccountGroupRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void DescribeAccountGroupRequest::SetSearchCondition(const AccountGroupSearchCriteria& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool DescribeAccountGroupRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}

int64_t DescribeAccountGroupRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAccountGroupRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAccountGroupRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAccountGroupRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAccountGroupRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAccountGroupRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


