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

#include <tencentcloud/ssa/v20180608/model/SaDivulgeScanRuleMutateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

SaDivulgeScanRuleMutateRequest::SaDivulgeScanRuleMutateRequest() :
    m_idHasBeenSet(false),
    m_divulgeSoureHasBeenSet(false),
    m_divulgeSoureUrlHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleWordHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_divulgeTypeHasBeenSet(false),
    m_repairAdviceHasBeenSet(false)
{
}

string SaDivulgeScanRuleMutateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_divulgeSoureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DivulgeSoure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_divulgeSoure.c_str(), allocator).Move(), allocator);
    }

    if (m_divulgeSoureUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DivulgeSoureUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_divulgeSoureUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleWord.c_str(), allocator).Move(), allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_divulgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DivulgeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_divulgeType.c_str(), allocator).Move(), allocator);
    }

    if (m_repairAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairAdvice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repairAdvice.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SaDivulgeScanRuleMutateRequest::GetId() const
{
    return m_id;
}

void SaDivulgeScanRuleMutateRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SaDivulgeScanRuleMutateRequest::GetDivulgeSoure() const
{
    return m_divulgeSoure;
}

void SaDivulgeScanRuleMutateRequest::SetDivulgeSoure(const string& _divulgeSoure)
{
    m_divulgeSoure = _divulgeSoure;
    m_divulgeSoureHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::DivulgeSoureHasBeenSet() const
{
    return m_divulgeSoureHasBeenSet;
}

string SaDivulgeScanRuleMutateRequest::GetDivulgeSoureUrl() const
{
    return m_divulgeSoureUrl;
}

void SaDivulgeScanRuleMutateRequest::SetDivulgeSoureUrl(const string& _divulgeSoureUrl)
{
    m_divulgeSoureUrl = _divulgeSoureUrl;
    m_divulgeSoureUrlHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::DivulgeSoureUrlHasBeenSet() const
{
    return m_divulgeSoureUrlHasBeenSet;
}

string SaDivulgeScanRuleMutateRequest::GetRuleName() const
{
    return m_ruleName;
}

void SaDivulgeScanRuleMutateRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string SaDivulgeScanRuleMutateRequest::GetRuleWord() const
{
    return m_ruleWord;
}

void SaDivulgeScanRuleMutateRequest::SetRuleWord(const string& _ruleWord)
{
    m_ruleWord = _ruleWord;
    m_ruleWordHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::RuleWordHasBeenSet() const
{
    return m_ruleWordHasBeenSet;
}

string SaDivulgeScanRuleMutateRequest::GetScanStatus() const
{
    return m_scanStatus;
}

void SaDivulgeScanRuleMutateRequest::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

string SaDivulgeScanRuleMutateRequest::GetDivulgeType() const
{
    return m_divulgeType;
}

void SaDivulgeScanRuleMutateRequest::SetDivulgeType(const string& _divulgeType)
{
    m_divulgeType = _divulgeType;
    m_divulgeTypeHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::DivulgeTypeHasBeenSet() const
{
    return m_divulgeTypeHasBeenSet;
}

string SaDivulgeScanRuleMutateRequest::GetRepairAdvice() const
{
    return m_repairAdvice;
}

void SaDivulgeScanRuleMutateRequest::SetRepairAdvice(const string& _repairAdvice)
{
    m_repairAdvice = _repairAdvice;
    m_repairAdviceHasBeenSet = true;
}

bool SaDivulgeScanRuleMutateRequest::RepairAdviceHasBeenSet() const
{
    return m_repairAdviceHasBeenSet;
}


