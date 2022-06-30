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

#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationOperatorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

SyncProxyOrganizationOperatorsRequest::SyncProxyOrganizationOperatorsRequest() :
    m_agentHasBeenSet(false),
    m_operatorTypeHasBeenSet(false),
    m_proxyOrganizationOperatorsHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string SyncProxyOrganizationOperatorsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorType.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationOperatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOperators";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyOrganizationOperators.begin(); itr != m_proxyOrganizationOperators.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent SyncProxyOrganizationOperatorsRequest::GetAgent() const
{
    return m_agent;
}

void SyncProxyOrganizationOperatorsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool SyncProxyOrganizationOperatorsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string SyncProxyOrganizationOperatorsRequest::GetOperatorType() const
{
    return m_operatorType;
}

void SyncProxyOrganizationOperatorsRequest::SetOperatorType(const string& _operatorType)
{
    m_operatorType = _operatorType;
    m_operatorTypeHasBeenSet = true;
}

bool SyncProxyOrganizationOperatorsRequest::OperatorTypeHasBeenSet() const
{
    return m_operatorTypeHasBeenSet;
}

vector<ProxyOrganizationOperator> SyncProxyOrganizationOperatorsRequest::GetProxyOrganizationOperators() const
{
    return m_proxyOrganizationOperators;
}

void SyncProxyOrganizationOperatorsRequest::SetProxyOrganizationOperators(const vector<ProxyOrganizationOperator>& _proxyOrganizationOperators)
{
    m_proxyOrganizationOperators = _proxyOrganizationOperators;
    m_proxyOrganizationOperatorsHasBeenSet = true;
}

bool SyncProxyOrganizationOperatorsRequest::ProxyOrganizationOperatorsHasBeenSet() const
{
    return m_proxyOrganizationOperatorsHasBeenSet;
}

UserInfo SyncProxyOrganizationOperatorsRequest::GetOperator() const
{
    return m_operator;
}

void SyncProxyOrganizationOperatorsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SyncProxyOrganizationOperatorsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


