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

#include <tencentcloud/cpdp/v20190820/model/QueryFlexPayeeAccountBalanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryFlexPayeeAccountBalanceRequest::QueryFlexPayeeAccountBalanceRequest() :
    m_payeeIdHasBeenSet(false),
    m_incomeTypeHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_snapshotDateHasBeenSet(false)
{
}

string QueryFlexPayeeAccountBalanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_incomeType.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryFlexPayeeAccountBalanceRequest::GetPayeeId() const
{
    return m_payeeId;
}

void QueryFlexPayeeAccountBalanceRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool QueryFlexPayeeAccountBalanceRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string QueryFlexPayeeAccountBalanceRequest::GetIncomeType() const
{
    return m_incomeType;
}

void QueryFlexPayeeAccountBalanceRequest::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool QueryFlexPayeeAccountBalanceRequest::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string QueryFlexPayeeAccountBalanceRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryFlexPayeeAccountBalanceRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryFlexPayeeAccountBalanceRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string QueryFlexPayeeAccountBalanceRequest::GetSnapshotDate() const
{
    return m_snapshotDate;
}

void QueryFlexPayeeAccountBalanceRequest::SetSnapshotDate(const string& _snapshotDate)
{
    m_snapshotDate = _snapshotDate;
    m_snapshotDateHasBeenSet = true;
}

bool QueryFlexPayeeAccountBalanceRequest::SnapshotDateHasBeenSet() const
{
    return m_snapshotDateHasBeenSet;
}


