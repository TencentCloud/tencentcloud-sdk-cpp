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

#include <tencentcloud/csip/v20221121/model/OperateRiskRulePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

OperateRiskRulePolicyRequest::OperateRiskRulePolicyRequest() :
    m_operateTypeHasBeenSet(false),
    m_ruleIDsHasBeenSet(false),
    m_checkAllHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_userAppIDHasBeenSet(false)
{
}

string OperateRiskRulePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIDs.begin(); itr != m_ruleIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_checkAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkAll, allocator);
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

    if (m_userAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userAppID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OperateRiskRulePolicyRequest::GetOperateType() const
{
    return m_operateType;
}

void OperateRiskRulePolicyRequest::SetOperateType(const string& _operateType)
{
    m_operateType = _operateType;
    m_operateTypeHasBeenSet = true;
}

bool OperateRiskRulePolicyRequest::OperateTypeHasBeenSet() const
{
    return m_operateTypeHasBeenSet;
}

vector<string> OperateRiskRulePolicyRequest::GetRuleIDs() const
{
    return m_ruleIDs;
}

void OperateRiskRulePolicyRequest::SetRuleIDs(const vector<string>& _ruleIDs)
{
    m_ruleIDs = _ruleIDs;
    m_ruleIDsHasBeenSet = true;
}

bool OperateRiskRulePolicyRequest::RuleIDsHasBeenSet() const
{
    return m_ruleIDsHasBeenSet;
}

bool OperateRiskRulePolicyRequest::GetCheckAll() const
{
    return m_checkAll;
}

void OperateRiskRulePolicyRequest::SetCheckAll(const bool& _checkAll)
{
    m_checkAll = _checkAll;
    m_checkAllHasBeenSet = true;
}

bool OperateRiskRulePolicyRequest::CheckAllHasBeenSet() const
{
    return m_checkAllHasBeenSet;
}

vector<string> OperateRiskRulePolicyRequest::GetMemberId() const
{
    return m_memberId;
}

void OperateRiskRulePolicyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool OperateRiskRulePolicyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t OperateRiskRulePolicyRequest::GetUserAppID() const
{
    return m_userAppID;
}

void OperateRiskRulePolicyRequest::SetUserAppID(const uint64_t& _userAppID)
{
    m_userAppID = _userAppID;
    m_userAppIDHasBeenSet = true;
}

bool OperateRiskRulePolicyRequest::UserAppIDHasBeenSet() const
{
    return m_userAppIDHasBeenSet;
}


