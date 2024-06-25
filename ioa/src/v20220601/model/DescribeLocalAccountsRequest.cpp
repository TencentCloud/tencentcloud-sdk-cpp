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

#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeLocalAccountsRequest::DescribeLocalAccountsRequest() :
    m_conditionHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_showFlagHasBeenSet(false)
{
}

string DescribeLocalAccountsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_showFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Condition DescribeLocalAccountsRequest::GetCondition() const
{
    return m_condition;
}

void DescribeLocalAccountsRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeLocalAccountsRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t DescribeLocalAccountsRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeLocalAccountsRequest::SetAccountGroupId(const int64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeLocalAccountsRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

int64_t DescribeLocalAccountsRequest::GetShowFlag() const
{
    return m_showFlag;
}

void DescribeLocalAccountsRequest::SetShowFlag(const int64_t& _showFlag)
{
    m_showFlag = _showFlag;
    m_showFlagHasBeenSet = true;
}

bool DescribeLocalAccountsRequest::ShowFlagHasBeenSet() const
{
    return m_showFlagHasBeenSet;
}


