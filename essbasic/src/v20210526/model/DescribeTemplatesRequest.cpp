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

#include <tencentcloud/essbasic/v20210526/model/DescribeTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeTemplatesRequest::DescribeTemplatesRequest() :
    m_agentHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_templateIdsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_channelTemplateIdHasBeenSet(false),
    m_queryAllComponentsHasBeenSet(false),
    m_withPreviewUrlHasBeenSet(false),
    m_withPdfUrlHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_userFlowTypeIdHasBeenSet(false)
{
}

string DescribeTemplatesRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_contentType, allocator);
    }

    if (m_templateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateIds.begin(); itr != m_templateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryAllComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryAllComponents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryAllComponents, allocator);
    }

    if (m_withPreviewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withPreviewUrl, allocator);
    }

    if (m_withPdfUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPdfUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withPdfUrl, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userFlowTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFlowTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userFlowTypeId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent DescribeTemplatesRequest::GetAgent() const
{
    return m_agent;
}

void DescribeTemplatesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeTemplatesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string DescribeTemplatesRequest::GetTemplateId() const
{
    return m_templateId;
}

void DescribeTemplatesRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeTemplatesRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t DescribeTemplatesRequest::GetContentType() const
{
    return m_contentType;
}

void DescribeTemplatesRequest::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool DescribeTemplatesRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

vector<string> DescribeTemplatesRequest::GetTemplateIds() const
{
    return m_templateIds;
}

void DescribeTemplatesRequest::SetTemplateIds(const vector<string>& _templateIds)
{
    m_templateIds = _templateIds;
    m_templateIdsHasBeenSet = true;
}

bool DescribeTemplatesRequest::TemplateIdsHasBeenSet() const
{
    return m_templateIdsHasBeenSet;
}

uint64_t DescribeTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTemplatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTemplatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeTemplatesRequest::GetTemplateName() const
{
    return m_templateName;
}

void DescribeTemplatesRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool DescribeTemplatesRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string DescribeTemplatesRequest::GetChannelTemplateId() const
{
    return m_channelTemplateId;
}

void DescribeTemplatesRequest::SetChannelTemplateId(const string& _channelTemplateId)
{
    m_channelTemplateId = _channelTemplateId;
    m_channelTemplateIdHasBeenSet = true;
}

bool DescribeTemplatesRequest::ChannelTemplateIdHasBeenSet() const
{
    return m_channelTemplateIdHasBeenSet;
}

bool DescribeTemplatesRequest::GetQueryAllComponents() const
{
    return m_queryAllComponents;
}

void DescribeTemplatesRequest::SetQueryAllComponents(const bool& _queryAllComponents)
{
    m_queryAllComponents = _queryAllComponents;
    m_queryAllComponentsHasBeenSet = true;
}

bool DescribeTemplatesRequest::QueryAllComponentsHasBeenSet() const
{
    return m_queryAllComponentsHasBeenSet;
}

bool DescribeTemplatesRequest::GetWithPreviewUrl() const
{
    return m_withPreviewUrl;
}

void DescribeTemplatesRequest::SetWithPreviewUrl(const bool& _withPreviewUrl)
{
    m_withPreviewUrl = _withPreviewUrl;
    m_withPreviewUrlHasBeenSet = true;
}

bool DescribeTemplatesRequest::WithPreviewUrlHasBeenSet() const
{
    return m_withPreviewUrlHasBeenSet;
}

bool DescribeTemplatesRequest::GetWithPdfUrl() const
{
    return m_withPdfUrl;
}

void DescribeTemplatesRequest::SetWithPdfUrl(const bool& _withPdfUrl)
{
    m_withPdfUrl = _withPdfUrl;
    m_withPdfUrlHasBeenSet = true;
}

bool DescribeTemplatesRequest::WithPdfUrlHasBeenSet() const
{
    return m_withPdfUrlHasBeenSet;
}

UserInfo DescribeTemplatesRequest::GetOperator() const
{
    return m_operator;
}

void DescribeTemplatesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeTemplatesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeTemplatesRequest::GetUserFlowTypeId() const
{
    return m_userFlowTypeId;
}

void DescribeTemplatesRequest::SetUserFlowTypeId(const string& _userFlowTypeId)
{
    m_userFlowTypeId = _userFlowTypeId;
    m_userFlowTypeIdHasBeenSet = true;
}

bool DescribeTemplatesRequest::UserFlowTypeIdHasBeenSet() const
{
    return m_userFlowTypeIdHasBeenSet;
}


