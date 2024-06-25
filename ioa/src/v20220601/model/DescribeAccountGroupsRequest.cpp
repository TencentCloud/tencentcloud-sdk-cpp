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

#include <tencentcloud/ioa/v20220601/model/DescribeAccountGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAccountGroupsRequest::DescribeAccountGroupsRequest() :
    m_deepinHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_parentIdHasBeenSet(false)
{
}

string DescribeAccountGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deepinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deepin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deepin, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAccountGroupsRequest::GetDeepin() const
{
    return m_deepin;
}

void DescribeAccountGroupsRequest::SetDeepin(const int64_t& _deepin)
{
    m_deepin = _deepin;
    m_deepinHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::DeepinHasBeenSet() const
{
    return m_deepinHasBeenSet;
}

Condition DescribeAccountGroupsRequest::GetCondition() const
{
    return m_condition;
}

void DescribeAccountGroupsRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t DescribeAccountGroupsRequest::GetParentId() const
{
    return m_parentId;
}

void DescribeAccountGroupsRequest::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}


