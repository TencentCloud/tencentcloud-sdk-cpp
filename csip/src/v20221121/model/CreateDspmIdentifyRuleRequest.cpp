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

#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmIdentifyRuleRequest::CreateDspmIdentifyRuleRequest() :
    m_nameHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_structuredRuleHasBeenSet(false),
    m_unStructuredRuleHasBeenSet(false)
{
}

string CreateDspmIdentifyRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_structuredRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructuredRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_structuredRule.c_str(), allocator).Move(), allocator);
    }

    if (m_unStructuredRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnStructuredRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unStructuredRule.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDspmIdentifyRuleRequest::GetName() const
{
    return m_name;
}

void CreateDspmIdentifyRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDspmIdentifyRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> CreateDspmIdentifyRuleRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateDspmIdentifyRuleRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateDspmIdentifyRuleRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CreateDspmIdentifyRuleRequest::GetDescription() const
{
    return m_description;
}

void CreateDspmIdentifyRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDspmIdentifyRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateDspmIdentifyRuleRequest::GetStatus() const
{
    return m_status;
}

void CreateDspmIdentifyRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateDspmIdentifyRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateDspmIdentifyRuleRequest::GetStructuredRule() const
{
    return m_structuredRule;
}

void CreateDspmIdentifyRuleRequest::SetStructuredRule(const string& _structuredRule)
{
    m_structuredRule = _structuredRule;
    m_structuredRuleHasBeenSet = true;
}

bool CreateDspmIdentifyRuleRequest::StructuredRuleHasBeenSet() const
{
    return m_structuredRuleHasBeenSet;
}

string CreateDspmIdentifyRuleRequest::GetUnStructuredRule() const
{
    return m_unStructuredRule;
}

void CreateDspmIdentifyRuleRequest::SetUnStructuredRule(const string& _unStructuredRule)
{
    m_unStructuredRule = _unStructuredRule;
    m_unStructuredRuleHasBeenSet = true;
}

bool CreateDspmIdentifyRuleRequest::UnStructuredRuleHasBeenSet() const
{
    return m_unStructuredRuleHasBeenSet;
}


