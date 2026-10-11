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

#include <tencentcloud/ioa/v20220601/model/DescribeAccountVirtualGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAccountVirtualGroupsRequest::DescribeAccountVirtualGroupsRequest() :
    m_domainInstanceIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false)
{
}

string DescribeAccountVirtualGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accountGroupId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccountVirtualGroupsRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void DescribeAccountVirtualGroupsRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

Condition DescribeAccountVirtualGroupsRequest::GetCondition() const
{
    return m_condition;
}

void DescribeAccountVirtualGroupsRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t DescribeAccountVirtualGroupsRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeAccountVirtualGroupsRequest::SetAccountGroupId(const int64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}


