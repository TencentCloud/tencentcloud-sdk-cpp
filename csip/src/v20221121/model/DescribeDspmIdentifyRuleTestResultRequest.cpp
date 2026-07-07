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

#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleTestResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmIdentifyRuleTestResultRequest::DescribeDspmIdentifyRuleTestResultRequest() :
    m_ruleTypeHasBeenSet(false),
    m_ruleContentHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_structuredTestContentHasBeenSet(false),
    m_unStructuredTestContentHasBeenSet(false)
{
}

string DescribeDspmIdentifyRuleTestResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
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

    if (m_structuredTestContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructuredTestContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_structuredTestContent.begin(); itr != m_structuredTestContent.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_unStructuredTestContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnStructuredTestContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unStructuredTestContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDspmIdentifyRuleTestResultRequest::GetRuleType() const
{
    return m_ruleType;
}

void DescribeDspmIdentifyRuleTestResultRequest::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeDspmIdentifyRuleTestResultRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DescribeDspmIdentifyRuleTestResultRequest::GetRuleContent() const
{
    return m_ruleContent;
}

void DescribeDspmIdentifyRuleTestResultRequest::SetRuleContent(const string& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool DescribeDspmIdentifyRuleTestResultRequest::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

uint64_t DescribeDspmIdentifyRuleTestResultRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeDspmIdentifyRuleTestResultRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeDspmIdentifyRuleTestResultRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<string> DescribeDspmIdentifyRuleTestResultRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeDspmIdentifyRuleTestResultRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeDspmIdentifyRuleTestResultRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<DspmIdentifyRuleStructuredTestItem> DescribeDspmIdentifyRuleTestResultRequest::GetStructuredTestContent() const
{
    return m_structuredTestContent;
}

void DescribeDspmIdentifyRuleTestResultRequest::SetStructuredTestContent(const vector<DspmIdentifyRuleStructuredTestItem>& _structuredTestContent)
{
    m_structuredTestContent = _structuredTestContent;
    m_structuredTestContentHasBeenSet = true;
}

bool DescribeDspmIdentifyRuleTestResultRequest::StructuredTestContentHasBeenSet() const
{
    return m_structuredTestContentHasBeenSet;
}

string DescribeDspmIdentifyRuleTestResultRequest::GetUnStructuredTestContent() const
{
    return m_unStructuredTestContent;
}

void DescribeDspmIdentifyRuleTestResultRequest::SetUnStructuredTestContent(const string& _unStructuredTestContent)
{
    m_unStructuredTestContent = _unStructuredTestContent;
    m_unStructuredTestContentHasBeenSet = true;
}

bool DescribeDspmIdentifyRuleTestResultRequest::UnStructuredTestContentHasBeenSet() const
{
    return m_unStructuredTestContentHasBeenSet;
}


