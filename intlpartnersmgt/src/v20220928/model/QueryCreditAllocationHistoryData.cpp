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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryCreditAllocationHistoryData::QueryCreditAllocationHistoryData() :
    m_allocatedTimeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_creditHasBeenSet(false),
    m_allocatedCreditHasBeenSet(false)
{
}

CoreInternalOutcome QueryCreditAllocationHistoryData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllocatedTime") && !value["AllocatedTime"].IsNull())
    {
        if (!value["AllocatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCreditAllocationHistoryData.AllocatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedTime = string(value["AllocatedTime"].GetString());
        m_allocatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCreditAllocationHistoryData.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Credit") && !value["Credit"].IsNull())
    {
        if (!value["Credit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCreditAllocationHistoryData.Credit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_credit = value["Credit"].GetDouble();
        m_creditHasBeenSet = true;
    }

    if (value.HasMember("AllocatedCredit") && !value["AllocatedCredit"].IsNull())
    {
        if (!value["AllocatedCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCreditAllocationHistoryData.AllocatedCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedCredit = value["AllocatedCredit"].GetDouble();
        m_allocatedCreditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryCreditAllocationHistoryData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allocatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_creditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_credit, allocator);
    }

    if (m_allocatedCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocatedCredit, allocator);
    }

}


string QueryCreditAllocationHistoryData::GetAllocatedTime() const
{
    return m_allocatedTime;
}

void QueryCreditAllocationHistoryData::SetAllocatedTime(const string& _allocatedTime)
{
    m_allocatedTime = _allocatedTime;
    m_allocatedTimeHasBeenSet = true;
}

bool QueryCreditAllocationHistoryData::AllocatedTimeHasBeenSet() const
{
    return m_allocatedTimeHasBeenSet;
}

string QueryCreditAllocationHistoryData::GetOperator() const
{
    return m_operator;
}

void QueryCreditAllocationHistoryData::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool QueryCreditAllocationHistoryData::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

double QueryCreditAllocationHistoryData::GetCredit() const
{
    return m_credit;
}

void QueryCreditAllocationHistoryData::SetCredit(const double& _credit)
{
    m_credit = _credit;
    m_creditHasBeenSet = true;
}

bool QueryCreditAllocationHistoryData::CreditHasBeenSet() const
{
    return m_creditHasBeenSet;
}

double QueryCreditAllocationHistoryData::GetAllocatedCredit() const
{
    return m_allocatedCredit;
}

void QueryCreditAllocationHistoryData::SetAllocatedCredit(const double& _allocatedCredit)
{
    m_allocatedCredit = _allocatedCredit;
    m_allocatedCreditHasBeenSet = true;
}

bool QueryCreditAllocationHistoryData::AllocatedCreditHasBeenSet() const
{
    return m_allocatedCreditHasBeenSet;
}

