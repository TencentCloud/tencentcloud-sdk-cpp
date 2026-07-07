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

#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmIdentifyRuleRequest::ModifyDspmIdentifyRuleRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_structuredRuleHasBeenSet(false),
    m_unStructuredRuleHasBeenSet(false)
{
}

string ModifyDspmIdentifyRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

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


uint64_t ModifyDspmIdentifyRuleRequest::GetId() const
{
    return m_id;
}

void ModifyDspmIdentifyRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDspmIdentifyRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDspmIdentifyRuleRequest::GetName() const
{
    return m_name;
}

void ModifyDspmIdentifyRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDspmIdentifyRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyDspmIdentifyRuleRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmIdentifyRuleRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmIdentifyRuleRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyDspmIdentifyRuleRequest::GetDescription() const
{
    return m_description;
}

void ModifyDspmIdentifyRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDspmIdentifyRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ModifyDspmIdentifyRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyDspmIdentifyRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDspmIdentifyRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyDspmIdentifyRuleRequest::GetStructuredRule() const
{
    return m_structuredRule;
}

void ModifyDspmIdentifyRuleRequest::SetStructuredRule(const string& _structuredRule)
{
    m_structuredRule = _structuredRule;
    m_structuredRuleHasBeenSet = true;
}

bool ModifyDspmIdentifyRuleRequest::StructuredRuleHasBeenSet() const
{
    return m_structuredRuleHasBeenSet;
}

string ModifyDspmIdentifyRuleRequest::GetUnStructuredRule() const
{
    return m_unStructuredRule;
}

void ModifyDspmIdentifyRuleRequest::SetUnStructuredRule(const string& _unStructuredRule)
{
    m_unStructuredRule = _unStructuredRule;
    m_unStructuredRuleHasBeenSet = true;
}

bool ModifyDspmIdentifyRuleRequest::UnStructuredRuleHasBeenSet() const
{
    return m_unStructuredRuleHasBeenSet;
}


