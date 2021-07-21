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

#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeBindingPolicyObjectListRequest::DescribeBindingPolicyObjectListRequest() :
    m_moduleHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
}

string DescribeBindingPolicyObjectListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
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

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBindingPolicyObjectListRequest::GetModule() const
{
    return m_module;
}

void DescribeBindingPolicyObjectListRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeBindingPolicyObjectListRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeBindingPolicyObjectListRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeBindingPolicyObjectListRequest::GetPolicyId() const
{
    return m_policyId;
}

void DescribeBindingPolicyObjectListRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t DescribeBindingPolicyObjectListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBindingPolicyObjectListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBindingPolicyObjectListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBindingPolicyObjectListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<DescribeBindingPolicyObjectListDimension> DescribeBindingPolicyObjectListRequest::GetDimensions() const
{
    return m_dimensions;
}

void DescribeBindingPolicyObjectListRequest::SetDimensions(const vector<DescribeBindingPolicyObjectListDimension>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}


