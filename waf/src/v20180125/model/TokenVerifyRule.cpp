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

#include <tencentcloud/waf/v20180125/model/TokenVerifyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TokenVerifyRule::TokenVerifyRule() :
    m_jWTRuleHasBeenSet(false),
    m_generalRuleHasBeenSet(false)
{
}

CoreInternalOutcome TokenVerifyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JWTRule") && !value["JWTRule"].IsNull())
    {
        if (!value["JWTRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TokenVerifyRule.JWTRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jWTRule.Deserialize(value["JWTRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jWTRuleHasBeenSet = true;
    }

    if (value.HasMember("GeneralRule") && !value["GeneralRule"].IsNull())
    {
        if (!value["GeneralRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TokenVerifyRule.GeneralRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_generalRule.Deserialize(value["GeneralRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_generalRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenVerifyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jWTRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JWTRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jWTRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_generalRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_generalRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


JWTConfig TokenVerifyRule::GetJWTRule() const
{
    return m_jWTRule;
}

void TokenVerifyRule::SetJWTRule(const JWTConfig& _jWTRule)
{
    m_jWTRule = _jWTRule;
    m_jWTRuleHasBeenSet = true;
}

bool TokenVerifyRule::JWTRuleHasBeenSet() const
{
    return m_jWTRuleHasBeenSet;
}

TokenRuleEntry TokenVerifyRule::GetGeneralRule() const
{
    return m_generalRule;
}

void TokenVerifyRule::SetGeneralRule(const TokenRuleEntry& _generalRule)
{
    m_generalRule = _generalRule;
    m_generalRuleHasBeenSet = true;
}

bool TokenVerifyRule::GeneralRuleHasBeenSet() const
{
    return m_generalRuleHasBeenSet;
}

