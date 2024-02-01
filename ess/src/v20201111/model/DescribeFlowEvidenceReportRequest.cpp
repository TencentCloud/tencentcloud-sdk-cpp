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

#include <tencentcloud/ess/v20201111/model/DescribeFlowEvidenceReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeFlowEvidenceReportRequest::DescribeFlowEvidenceReportRequest() :
    m_operatorHasBeenSet(false),
    m_reportIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_reportTypeHasBeenSet(false)
{
}

string DescribeFlowEvidenceReportRequest::ToJsonString() const
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

    if (m_reportIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reportId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DescribeFlowEvidenceReportRequest::GetOperator() const
{
    return m_operator;
}

void DescribeFlowEvidenceReportRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeFlowEvidenceReportRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeFlowEvidenceReportRequest::GetReportId() const
{
    return m_reportId;
}

void DescribeFlowEvidenceReportRequest::SetReportId(const string& _reportId)
{
    m_reportId = _reportId;
    m_reportIdHasBeenSet = true;
}

bool DescribeFlowEvidenceReportRequest::ReportIdHasBeenSet() const
{
    return m_reportIdHasBeenSet;
}

Agent DescribeFlowEvidenceReportRequest::GetAgent() const
{
    return m_agent;
}

void DescribeFlowEvidenceReportRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeFlowEvidenceReportRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t DescribeFlowEvidenceReportRequest::GetReportType() const
{
    return m_reportType;
}

void DescribeFlowEvidenceReportRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool DescribeFlowEvidenceReportRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}


