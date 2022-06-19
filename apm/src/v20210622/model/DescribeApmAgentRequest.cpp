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

#include <tencentcloud/apm/v20210622/model/DescribeApmAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeApmAgentRequest::DescribeApmAgentRequest() :
    m_instanceIdHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_networkModeHasBeenSet(false),
    m_languageEnvironmentHasBeenSet(false),
    m_reportMethodHasBeenSet(false)
{
}

string DescribeApmAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkMode.c_str(), allocator).Move(), allocator);
    }

    if (m_languageEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_languageEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_reportMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reportMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApmAgentRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeApmAgentRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeApmAgentRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeApmAgentRequest::GetAgentType() const
{
    return m_agentType;
}

void DescribeApmAgentRequest::SetAgentType(const string& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool DescribeApmAgentRequest::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string DescribeApmAgentRequest::GetNetworkMode() const
{
    return m_networkMode;
}

void DescribeApmAgentRequest::SetNetworkMode(const string& _networkMode)
{
    m_networkMode = _networkMode;
    m_networkModeHasBeenSet = true;
}

bool DescribeApmAgentRequest::NetworkModeHasBeenSet() const
{
    return m_networkModeHasBeenSet;
}

string DescribeApmAgentRequest::GetLanguageEnvironment() const
{
    return m_languageEnvironment;
}

void DescribeApmAgentRequest::SetLanguageEnvironment(const string& _languageEnvironment)
{
    m_languageEnvironment = _languageEnvironment;
    m_languageEnvironmentHasBeenSet = true;
}

bool DescribeApmAgentRequest::LanguageEnvironmentHasBeenSet() const
{
    return m_languageEnvironmentHasBeenSet;
}

string DescribeApmAgentRequest::GetReportMethod() const
{
    return m_reportMethod;
}

void DescribeApmAgentRequest::SetReportMethod(const string& _reportMethod)
{
    m_reportMethod = _reportMethod;
    m_reportMethodHasBeenSet = true;
}

bool DescribeApmAgentRequest::ReportMethodHasBeenSet() const
{
    return m_reportMethodHasBeenSet;
}


