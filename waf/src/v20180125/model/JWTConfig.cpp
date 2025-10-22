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

#include <tencentcloud/waf/v20180125/model/JWTConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

JWTConfig::JWTConfig() :
    m_secretInfoHasBeenSet(false),
    m_payloadRuleHasBeenSet(false)
{
}

CoreInternalOutcome JWTConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretInfo") && !value["SecretInfo"].IsNull())
    {
        if (!value["SecretInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JWTConfig.SecretInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secretInfo.Deserialize(value["SecretInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secretInfoHasBeenSet = true;
    }

    if (value.HasMember("PayloadRule") && !value["PayloadRule"].IsNull())
    {
        if (!value["PayloadRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JWTConfig.PayloadRule` is not array type"));

        const rapidjson::Value &tmpValue = value["PayloadRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TokenRuleEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_payloadRule.push_back(item);
        }
        m_payloadRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JWTConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secretInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_payloadRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_payloadRule.begin(); itr != m_payloadRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


SecretInfo JWTConfig::GetSecretInfo() const
{
    return m_secretInfo;
}

void JWTConfig::SetSecretInfo(const SecretInfo& _secretInfo)
{
    m_secretInfo = _secretInfo;
    m_secretInfoHasBeenSet = true;
}

bool JWTConfig::SecretInfoHasBeenSet() const
{
    return m_secretInfoHasBeenSet;
}

vector<TokenRuleEntry> JWTConfig::GetPayloadRule() const
{
    return m_payloadRule;
}

void JWTConfig::SetPayloadRule(const vector<TokenRuleEntry>& _payloadRule)
{
    m_payloadRule = _payloadRule;
    m_payloadRuleHasBeenSet = true;
}

bool JWTConfig::PayloadRuleHasBeenSet() const
{
    return m_payloadRuleHasBeenSet;
}

