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

#include <tencentcloud/ess/v20201111/model/CreateFlowEvidenceReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowEvidenceReportRequest::CreateFlowEvidenceReportRequest() :
    m_operatorHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_hybridEvidenceFlowFileHasBeenSet(false)
{
}

string CreateFlowEvidenceReportRequest::ToJsonString() const
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

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
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

    if (m_hybridEvidenceFlowFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridEvidenceFlowFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hybridEvidenceFlowFile, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateFlowEvidenceReportRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowEvidenceReportRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowEvidenceReportRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateFlowEvidenceReportRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateFlowEvidenceReportRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateFlowEvidenceReportRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

Agent CreateFlowEvidenceReportRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowEvidenceReportRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowEvidenceReportRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t CreateFlowEvidenceReportRequest::GetReportType() const
{
    return m_reportType;
}

void CreateFlowEvidenceReportRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool CreateFlowEvidenceReportRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

bool CreateFlowEvidenceReportRequest::GetHybridEvidenceFlowFile() const
{
    return m_hybridEvidenceFlowFile;
}

void CreateFlowEvidenceReportRequest::SetHybridEvidenceFlowFile(const bool& _hybridEvidenceFlowFile)
{
    m_hybridEvidenceFlowFile = _hybridEvidenceFlowFile;
    m_hybridEvidenceFlowFileHasBeenSet = true;
}

bool CreateFlowEvidenceReportRequest::HybridEvidenceFlowFileHasBeenSet() const
{
    return m_hybridEvidenceFlowFileHasBeenSet;
}


