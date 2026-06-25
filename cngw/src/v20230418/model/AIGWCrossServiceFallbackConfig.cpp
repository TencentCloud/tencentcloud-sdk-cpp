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

#include <tencentcloud/cngw/v20230418/model/AIGWCrossServiceFallbackConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWCrossServiceFallbackConfig::AIGWCrossServiceFallbackConfig() :
    m_triggerConditionsHasBeenSet(false),
    m_fallbackServiceChainHasBeenSet(false),
    m_quotaFallbackTriggerHasBeenSet(false)
{
}

CoreInternalOutcome AIGWCrossServiceFallbackConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerConditions") && !value["TriggerConditions"].IsNull())
    {
        if (!value["TriggerConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWCrossServiceFallbackConfig.TriggerConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_triggerConditions.push_back((*itr).GetString());
        }
        m_triggerConditionsHasBeenSet = true;
    }

    if (value.HasMember("FallbackServiceChain") && !value["FallbackServiceChain"].IsNull())
    {
        if (!value["FallbackServiceChain"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWCrossServiceFallbackConfig.FallbackServiceChain` is not array type"));

        const rapidjson::Value &tmpValue = value["FallbackServiceChain"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWFallbackServiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fallbackServiceChain.push_back(item);
        }
        m_fallbackServiceChainHasBeenSet = true;
    }

    if (value.HasMember("QuotaFallbackTrigger") && !value["QuotaFallbackTrigger"].IsNull())
    {
        if (!value["QuotaFallbackTrigger"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCrossServiceFallbackConfig.QuotaFallbackTrigger` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quotaFallbackTrigger.Deserialize(value["QuotaFallbackTrigger"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaFallbackTriggerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWCrossServiceFallbackConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_triggerConditions.begin(); itr != m_triggerConditions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fallbackServiceChainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackServiceChain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fallbackServiceChain.begin(); itr != m_fallbackServiceChain.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_quotaFallbackTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaFallbackTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quotaFallbackTrigger.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> AIGWCrossServiceFallbackConfig::GetTriggerConditions() const
{
    return m_triggerConditions;
}

void AIGWCrossServiceFallbackConfig::SetTriggerConditions(const vector<string>& _triggerConditions)
{
    m_triggerConditions = _triggerConditions;
    m_triggerConditionsHasBeenSet = true;
}

bool AIGWCrossServiceFallbackConfig::TriggerConditionsHasBeenSet() const
{
    return m_triggerConditionsHasBeenSet;
}

vector<AIGWFallbackServiceItem> AIGWCrossServiceFallbackConfig::GetFallbackServiceChain() const
{
    return m_fallbackServiceChain;
}

void AIGWCrossServiceFallbackConfig::SetFallbackServiceChain(const vector<AIGWFallbackServiceItem>& _fallbackServiceChain)
{
    m_fallbackServiceChain = _fallbackServiceChain;
    m_fallbackServiceChainHasBeenSet = true;
}

bool AIGWCrossServiceFallbackConfig::FallbackServiceChainHasBeenSet() const
{
    return m_fallbackServiceChainHasBeenSet;
}

AIGWLLMQuotaFallbackTrigger AIGWCrossServiceFallbackConfig::GetQuotaFallbackTrigger() const
{
    return m_quotaFallbackTrigger;
}

void AIGWCrossServiceFallbackConfig::SetQuotaFallbackTrigger(const AIGWLLMQuotaFallbackTrigger& _quotaFallbackTrigger)
{
    m_quotaFallbackTrigger = _quotaFallbackTrigger;
    m_quotaFallbackTriggerHasBeenSet = true;
}

bool AIGWCrossServiceFallbackConfig::QuotaFallbackTriggerHasBeenSet() const
{
    return m_quotaFallbackTriggerHasBeenSet;
}

