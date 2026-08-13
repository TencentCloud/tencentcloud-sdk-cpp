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

#include <tencentcloud/csip/v20221121/model/ModifyEDRRulesActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyEDRRulesActionRequest::ModifyEDRRulesActionRequest() :
    m_ruleIDsHasBeenSet(false),
    m_alertActionHasBeenSet(false),
    m_targetAppIDsHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ModifyEDRRulesActionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_alertActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alertAction, allocator);
    }

    if (m_targetAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetAppIDs.begin(); itr != m_targetAppIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


vector<string> ModifyEDRRulesActionRequest::GetRuleIDs() const
{
    return m_ruleIDs;
}

void ModifyEDRRulesActionRequest::SetRuleIDs(const vector<string>& _ruleIDs)
{
    m_ruleIDs = _ruleIDs;
    m_ruleIDsHasBeenSet = true;
}

bool ModifyEDRRulesActionRequest::RuleIDsHasBeenSet() const
{
    return m_ruleIDsHasBeenSet;
}

int64_t ModifyEDRRulesActionRequest::GetAlertAction() const
{
    return m_alertAction;
}

void ModifyEDRRulesActionRequest::SetAlertAction(const int64_t& _alertAction)
{
    m_alertAction = _alertAction;
    m_alertActionHasBeenSet = true;
}

bool ModifyEDRRulesActionRequest::AlertActionHasBeenSet() const
{
    return m_alertActionHasBeenSet;
}

vector<uint64_t> ModifyEDRRulesActionRequest::GetTargetAppIDs() const
{
    return m_targetAppIDs;
}

void ModifyEDRRulesActionRequest::SetTargetAppIDs(const vector<uint64_t>& _targetAppIDs)
{
    m_targetAppIDs = _targetAppIDs;
    m_targetAppIDsHasBeenSet = true;
}

bool ModifyEDRRulesActionRequest::TargetAppIDsHasBeenSet() const
{
    return m_targetAppIDsHasBeenSet;
}

vector<string> ModifyEDRRulesActionRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyEDRRulesActionRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyEDRRulesActionRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


