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

#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeSecurityGroupPoliciesRequest::DescribeSecurityGroupPoliciesRequest() :
    m_securityGroupIdHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeSecurityGroupPoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


string DescribeSecurityGroupPoliciesRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void DescribeSecurityGroupPoliciesRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool DescribeSecurityGroupPoliciesRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

vector<Filter> DescribeSecurityGroupPoliciesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeSecurityGroupPoliciesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeSecurityGroupPoliciesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


