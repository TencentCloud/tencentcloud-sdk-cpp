/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/SearchKnowledgeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchKnowledgeRequest::SearchKnowledgeRequest() :
    m_advancedConfigHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_searchBillingHasBeenSet(false)
{
}

string SearchKnowledgeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_context.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_searchBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchBilling";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchBilling.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


SearchAdvancedConfig SearchKnowledgeRequest::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void SearchKnowledgeRequest::SetAdvancedConfig(const SearchAdvancedConfig& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool SearchKnowledgeRequest::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

SearchInput SearchKnowledgeRequest::GetInput() const
{
    return m_input;
}

void SearchKnowledgeRequest::SetInput(const SearchInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool SearchKnowledgeRequest::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

SearchContext SearchKnowledgeRequest::GetContext() const
{
    return m_context;
}

void SearchKnowledgeRequest::SetContext(const SearchContext& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool SearchKnowledgeRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

SearchBilling SearchKnowledgeRequest::GetSearchBilling() const
{
    return m_searchBilling;
}

void SearchKnowledgeRequest::SetSearchBilling(const SearchBilling& _searchBilling)
{
    m_searchBilling = _searchBilling;
    m_searchBillingHasBeenSet = true;
}

bool SearchKnowledgeRequest::SearchBillingHasBeenSet() const
{
    return m_searchBillingHasBeenSet;
}


