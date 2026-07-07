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

#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceRuleLevelInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmIdentifyComplianceRuleLevelInfoRequest::ModifyDspmIdentifyComplianceRuleLevelInfoRequest() :
    m_complianceIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ModifyDspmIdentifyComplianceRuleLevelInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levelId, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyDspmIdentifyComplianceRuleLevelInfoRequest::GetComplianceId() const
{
    return m_complianceId;
}

void ModifyDspmIdentifyComplianceRuleLevelInfoRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool ModifyDspmIdentifyComplianceRuleLevelInfoRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

uint64_t ModifyDspmIdentifyComplianceRuleLevelInfoRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyDspmIdentifyComplianceRuleLevelInfoRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyDspmIdentifyComplianceRuleLevelInfoRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t ModifyDspmIdentifyComplianceRuleLevelInfoRequest::GetLevelId() const
{
    return m_levelId;
}

void ModifyDspmIdentifyComplianceRuleLevelInfoRequest::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool ModifyDspmIdentifyComplianceRuleLevelInfoRequest::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

vector<string> ModifyDspmIdentifyComplianceRuleLevelInfoRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmIdentifyComplianceRuleLevelInfoRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmIdentifyComplianceRuleLevelInfoRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


