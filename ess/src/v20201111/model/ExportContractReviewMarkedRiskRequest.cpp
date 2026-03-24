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

#include <tencentcloud/ess/v20201111/model/ExportContractReviewMarkedRiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ExportContractReviewMarkedRiskRequest::ExportContractReviewMarkedRiskRequest() :
    m_operatorHasBeenSet(false),
    m_fromDateHasBeenSet(false),
    m_toDateHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string ExportContractReviewMarkedRiskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fromDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromDate.c_str(), allocator).Move(), allocator);
    }

    if (m_toDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toDate.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo ExportContractReviewMarkedRiskRequest::GetOperator() const
{
    return m_operator;
}

void ExportContractReviewMarkedRiskRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ExportContractReviewMarkedRiskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ExportContractReviewMarkedRiskRequest::GetFromDate() const
{
    return m_fromDate;
}

void ExportContractReviewMarkedRiskRequest::SetFromDate(const string& _fromDate)
{
    m_fromDate = _fromDate;
    m_fromDateHasBeenSet = true;
}

bool ExportContractReviewMarkedRiskRequest::FromDateHasBeenSet() const
{
    return m_fromDateHasBeenSet;
}

string ExportContractReviewMarkedRiskRequest::GetToDate() const
{
    return m_toDate;
}

void ExportContractReviewMarkedRiskRequest::SetToDate(const string& _toDate)
{
    m_toDate = _toDate;
    m_toDateHasBeenSet = true;
}

bool ExportContractReviewMarkedRiskRequest::ToDateHasBeenSet() const
{
    return m_toDateHasBeenSet;
}

Agent ExportContractReviewMarkedRiskRequest::GetAgent() const
{
    return m_agent;
}

void ExportContractReviewMarkedRiskRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ExportContractReviewMarkedRiskRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


