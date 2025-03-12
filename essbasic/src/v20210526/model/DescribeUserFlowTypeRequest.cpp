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

#include <tencentcloud/essbasic/v20210526/model/DescribeUserFlowTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeUserFlowTypeRequest::DescribeUserFlowTypeRequest() :
    m_agentHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_queryBindTemplateHasBeenSet(false)
{
}

string DescribeUserFlowTypeRequest::ToJsonString() const
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

    if (m_queryBindTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryBindTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryBindTemplate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent DescribeUserFlowTypeRequest::GetAgent() const
{
    return m_agent;
}

void DescribeUserFlowTypeRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeUserFlowTypeRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<Filter> DescribeUserFlowTypeRequest::GetFilters() const
{
    return m_filters;
}

void DescribeUserFlowTypeRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeUserFlowTypeRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeUserFlowTypeRequest::GetQueryBindTemplate() const
{
    return m_queryBindTemplate;
}

void DescribeUserFlowTypeRequest::SetQueryBindTemplate(const bool& _queryBindTemplate)
{
    m_queryBindTemplate = _queryBindTemplate;
    m_queryBindTemplateHasBeenSet = true;
}

bool DescribeUserFlowTypeRequest::QueryBindTemplateHasBeenSet() const
{
    return m_queryBindTemplateHasBeenSet;
}


