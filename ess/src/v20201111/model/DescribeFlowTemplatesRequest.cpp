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

#include <tencentcloud/ess/v20201111/model/DescribeFlowTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeFlowTemplatesRequest::DescribeFlowTemplatesRequest() :
    m_operatorHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_isChannelHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_generateSourceHasBeenSet(false),
    m_withPreviewUrlHasBeenSet(false)
{
}

string DescribeFlowTemplatesRequest::ToJsonString() const
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

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_contentType, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_isChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isChannel, allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_generateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_generateSource, allocator);
    }

    if (m_withPreviewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withPreviewUrl, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DescribeFlowTemplatesRequest::GetOperator() const
{
    return m_operator;
}

void DescribeFlowTemplatesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

Agent DescribeFlowTemplatesRequest::GetAgent() const
{
    return m_agent;
}

void DescribeFlowTemplatesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t DescribeFlowTemplatesRequest::GetContentType() const
{
    return m_contentType;
}

void DescribeFlowTemplatesRequest::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

vector<Filter> DescribeFlowTemplatesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeFlowTemplatesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeFlowTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeFlowTemplatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeFlowTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeFlowTemplatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeFlowTemplatesRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeFlowTemplatesRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

bool DescribeFlowTemplatesRequest::GetIsChannel() const
{
    return m_isChannel;
}

void DescribeFlowTemplatesRequest::SetIsChannel(const bool& _isChannel)
{
    m_isChannel = _isChannel;
    m_isChannelHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::IsChannelHasBeenSet() const
{
    return m_isChannelHasBeenSet;
}

OrganizationInfo DescribeFlowTemplatesRequest::GetOrganization() const
{
    return m_organization;
}

void DescribeFlowTemplatesRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

uint64_t DescribeFlowTemplatesRequest::GetGenerateSource() const
{
    return m_generateSource;
}

void DescribeFlowTemplatesRequest::SetGenerateSource(const uint64_t& _generateSource)
{
    m_generateSource = _generateSource;
    m_generateSourceHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::GenerateSourceHasBeenSet() const
{
    return m_generateSourceHasBeenSet;
}

bool DescribeFlowTemplatesRequest::GetWithPreviewUrl() const
{
    return m_withPreviewUrl;
}

void DescribeFlowTemplatesRequest::SetWithPreviewUrl(const bool& _withPreviewUrl)
{
    m_withPreviewUrl = _withPreviewUrl;
    m_withPreviewUrlHasBeenSet = true;
}

bool DescribeFlowTemplatesRequest::WithPreviewUrlHasBeenSet() const
{
    return m_withPreviewUrlHasBeenSet;
}


