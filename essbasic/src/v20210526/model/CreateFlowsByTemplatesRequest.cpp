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

#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateFlowsByTemplatesRequest::CreateFlowsByTemplatesRequest() :
    m_agentHasBeenSet(false),
    m_flowInfosHasBeenSet(false),
    m_needPreviewHasBeenSet(false),
    m_previewTypeHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateFlowsByTemplatesRequest::ToJsonString() const
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

    if (m_flowInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowInfos.begin(); itr != m_flowInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_needPreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPreview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPreview, allocator);
    }

    if (m_previewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_previewType, allocator);
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


Agent CreateFlowsByTemplatesRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowsByTemplatesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowsByTemplatesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<FlowInfo> CreateFlowsByTemplatesRequest::GetFlowInfos() const
{
    return m_flowInfos;
}

void CreateFlowsByTemplatesRequest::SetFlowInfos(const vector<FlowInfo>& _flowInfos)
{
    m_flowInfos = _flowInfos;
    m_flowInfosHasBeenSet = true;
}

bool CreateFlowsByTemplatesRequest::FlowInfosHasBeenSet() const
{
    return m_flowInfosHasBeenSet;
}

bool CreateFlowsByTemplatesRequest::GetNeedPreview() const
{
    return m_needPreview;
}

void CreateFlowsByTemplatesRequest::SetNeedPreview(const bool& _needPreview)
{
    m_needPreview = _needPreview;
    m_needPreviewHasBeenSet = true;
}

bool CreateFlowsByTemplatesRequest::NeedPreviewHasBeenSet() const
{
    return m_needPreviewHasBeenSet;
}

int64_t CreateFlowsByTemplatesRequest::GetPreviewType() const
{
    return m_previewType;
}

void CreateFlowsByTemplatesRequest::SetPreviewType(const int64_t& _previewType)
{
    m_previewType = _previewType;
    m_previewTypeHasBeenSet = true;
}

bool CreateFlowsByTemplatesRequest::PreviewTypeHasBeenSet() const
{
    return m_previewTypeHasBeenSet;
}

UserInfo CreateFlowsByTemplatesRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowsByTemplatesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowsByTemplatesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


