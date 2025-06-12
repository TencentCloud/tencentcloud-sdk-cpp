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

#include <tencentcloud/ess/v20201111/model/OperateSealsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

OperateSealsRequest::OperateSealsRequest() :
    m_operatorHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_actHasBeenSet(false),
    m_sealIdsHasBeenSet(false)
{
}

string OperateSealsRequest::ToJsonString() const
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Act";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_act, allocator);
    }

    if (m_sealIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sealIds.begin(); itr != m_sealIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo OperateSealsRequest::GetOperator() const
{
    return m_operator;
}

void OperateSealsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool OperateSealsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

Agent OperateSealsRequest::GetAgent() const
{
    return m_agent;
}

void OperateSealsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool OperateSealsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t OperateSealsRequest::GetAct() const
{
    return m_act;
}

void OperateSealsRequest::SetAct(const int64_t& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool OperateSealsRequest::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

vector<string> OperateSealsRequest::GetSealIds() const
{
    return m_sealIds;
}

void OperateSealsRequest::SetSealIds(const vector<string>& _sealIds)
{
    m_sealIds = _sealIds;
    m_sealIdsHasBeenSet = true;
}

bool OperateSealsRequest::SealIdsHasBeenSet() const
{
    return m_sealIdsHasBeenSet;
}


