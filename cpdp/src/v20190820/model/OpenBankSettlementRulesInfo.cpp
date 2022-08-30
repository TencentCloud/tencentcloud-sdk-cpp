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

#include <tencentcloud/cpdp/v20190820/model/OpenBankSettlementRulesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankSettlementRulesInfo::OpenBankSettlementRulesInfo() :
    m_unfreezeRuleHasBeenSet(false),
    m_refundRuleHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankSettlementRulesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UnfreezeRule") && !value["UnfreezeRule"].IsNull())
    {
        if (!value["UnfreezeRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankSettlementRulesInfo.UnfreezeRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unfreezeRule = string(value["UnfreezeRule"].GetString());
        m_unfreezeRuleHasBeenSet = true;
    }

    if (value.HasMember("RefundRule") && !value["RefundRule"].IsNull())
    {
        if (!value["RefundRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankSettlementRulesInfo.RefundRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundRule = string(value["RefundRule"].GetString());
        m_refundRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankSettlementRulesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unfreezeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnfreezeRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unfreezeRule.c_str(), allocator).Move(), allocator);
    }

    if (m_refundRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundRule.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankSettlementRulesInfo::GetUnfreezeRule() const
{
    return m_unfreezeRule;
}

void OpenBankSettlementRulesInfo::SetUnfreezeRule(const string& _unfreezeRule)
{
    m_unfreezeRule = _unfreezeRule;
    m_unfreezeRuleHasBeenSet = true;
}

bool OpenBankSettlementRulesInfo::UnfreezeRuleHasBeenSet() const
{
    return m_unfreezeRuleHasBeenSet;
}

string OpenBankSettlementRulesInfo::GetRefundRule() const
{
    return m_refundRule;
}

void OpenBankSettlementRulesInfo::SetRefundRule(const string& _refundRule)
{
    m_refundRule = _refundRule;
    m_refundRuleHasBeenSet = true;
}

bool OpenBankSettlementRulesInfo::RefundRuleHasBeenSet() const
{
    return m_refundRuleHasBeenSet;
}

