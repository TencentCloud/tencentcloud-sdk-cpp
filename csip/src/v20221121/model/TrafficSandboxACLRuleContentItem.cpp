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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLRuleContentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxACLRuleContentItem::TrafficSandboxACLRuleContentItem() :
    m_dstRuleHasBeenSet(false),
    m_uRLRuleHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxACLRuleContentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DstRule") && !value["DstRule"].IsNull())
    {
        if (!value["DstRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLRuleContentItem.DstRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstRule.Deserialize(value["DstRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstRuleHasBeenSet = true;
    }

    if (value.HasMember("URLRule") && !value["URLRule"].IsNull())
    {
        if (!value["URLRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLRuleContentItem.URLRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_uRLRule.Deserialize(value["URLRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_uRLRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxACLRuleContentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dstRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uRLRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_uRLRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


TrafficSandboxACLDstRule TrafficSandboxACLRuleContentItem::GetDstRule() const
{
    return m_dstRule;
}

void TrafficSandboxACLRuleContentItem::SetDstRule(const TrafficSandboxACLDstRule& _dstRule)
{
    m_dstRule = _dstRule;
    m_dstRuleHasBeenSet = true;
}

bool TrafficSandboxACLRuleContentItem::DstRuleHasBeenSet() const
{
    return m_dstRuleHasBeenSet;
}

TrafficSandboxACLURLRule TrafficSandboxACLRuleContentItem::GetURLRule() const
{
    return m_uRLRule;
}

void TrafficSandboxACLRuleContentItem::SetURLRule(const TrafficSandboxACLURLRule& _uRLRule)
{
    m_uRLRule = _uRLRule;
    m_uRLRuleHasBeenSet = true;
}

bool TrafficSandboxACLRuleContentItem::URLRuleHasBeenSet() const
{
    return m_uRLRuleHasBeenSet;
}

