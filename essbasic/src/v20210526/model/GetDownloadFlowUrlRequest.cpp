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

#include <tencentcloud/essbasic/v20210526/model/GetDownloadFlowUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

GetDownloadFlowUrlRequest::GetDownloadFlowUrlRequest() :
    m_agentHasBeenSet(false),
    m_downLoadFlowsHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string GetDownloadFlowUrlRequest::ToJsonString() const
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

    if (m_downLoadFlowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownLoadFlows";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_downLoadFlows.begin(); itr != m_downLoadFlows.end(); ++itr, ++i)
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


Agent GetDownloadFlowUrlRequest::GetAgent() const
{
    return m_agent;
}

void GetDownloadFlowUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool GetDownloadFlowUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<DownloadFlowInfo> GetDownloadFlowUrlRequest::GetDownLoadFlows() const
{
    return m_downLoadFlows;
}

void GetDownloadFlowUrlRequest::SetDownLoadFlows(const vector<DownloadFlowInfo>& _downLoadFlows)
{
    m_downLoadFlows = _downLoadFlows;
    m_downLoadFlowsHasBeenSet = true;
}

bool GetDownloadFlowUrlRequest::DownLoadFlowsHasBeenSet() const
{
    return m_downLoadFlowsHasBeenSet;
}

UserInfo GetDownloadFlowUrlRequest::GetOperator() const
{
    return m_operator;
}

void GetDownloadFlowUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool GetDownloadFlowUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


