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

#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackBanStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyBruteAttackBanStatusRequest::ModifyBruteAttackBanStatusRequest() :
    m_memberIdHasBeenSet(false),
    m_openSmartModeHasBeenSet(false),
    m_banBlackIpHasBeenSet(false),
    m_banVulIpHasBeenSet(false),
    m_banByRuleHasBeenSet(false)
{
}

string ModifyBruteAttackBanStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_openSmartModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenSmartMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openSmartMode, allocator);
    }

    if (m_banBlackIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanBlackIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_banBlackIp, allocator);
    }

    if (m_banVulIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanVulIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_banVulIp, allocator);
    }

    if (m_banByRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanByRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_banByRule, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyBruteAttackBanStatusRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyBruteAttackBanStatusRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyBruteAttackBanStatusRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

bool ModifyBruteAttackBanStatusRequest::GetOpenSmartMode() const
{
    return m_openSmartMode;
}

void ModifyBruteAttackBanStatusRequest::SetOpenSmartMode(const bool& _openSmartMode)
{
    m_openSmartMode = _openSmartMode;
    m_openSmartModeHasBeenSet = true;
}

bool ModifyBruteAttackBanStatusRequest::OpenSmartModeHasBeenSet() const
{
    return m_openSmartModeHasBeenSet;
}

bool ModifyBruteAttackBanStatusRequest::GetBanBlackIp() const
{
    return m_banBlackIp;
}

void ModifyBruteAttackBanStatusRequest::SetBanBlackIp(const bool& _banBlackIp)
{
    m_banBlackIp = _banBlackIp;
    m_banBlackIpHasBeenSet = true;
}

bool ModifyBruteAttackBanStatusRequest::BanBlackIpHasBeenSet() const
{
    return m_banBlackIpHasBeenSet;
}

bool ModifyBruteAttackBanStatusRequest::GetBanVulIp() const
{
    return m_banVulIp;
}

void ModifyBruteAttackBanStatusRequest::SetBanVulIp(const bool& _banVulIp)
{
    m_banVulIp = _banVulIp;
    m_banVulIpHasBeenSet = true;
}

bool ModifyBruteAttackBanStatusRequest::BanVulIpHasBeenSet() const
{
    return m_banVulIpHasBeenSet;
}

bool ModifyBruteAttackBanStatusRequest::GetBanByRule() const
{
    return m_banByRule;
}

void ModifyBruteAttackBanStatusRequest::SetBanByRule(const bool& _banByRule)
{
    m_banByRule = _banByRule;
    m_banByRuleHasBeenSet = true;
}

bool ModifyBruteAttackBanStatusRequest::BanByRuleHasBeenSet() const
{
    return m_banByRuleHasBeenSet;
}


