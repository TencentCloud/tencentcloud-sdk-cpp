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

#include <tencentcloud/teo/v20220901/model/BotManagement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotManagement::BotManagement() :
    m_clientAttestationRulesHasBeenSet(false)
{
}

CoreInternalOutcome BotManagement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientAttestationRules") && !value["ClientAttestationRules"].IsNull())
    {
        if (!value["ClientAttestationRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagement.ClientAttestationRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientAttestationRules.Deserialize(value["ClientAttestationRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientAttestationRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotManagement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientAttestationRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAttestationRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientAttestationRules.ToJsonObject(value[key.c_str()], allocator);
    }

}


ClientAttestationRules BotManagement::GetClientAttestationRules() const
{
    return m_clientAttestationRules;
}

void BotManagement::SetClientAttestationRules(const ClientAttestationRules& _clientAttestationRules)
{
    m_clientAttestationRules = _clientAttestationRules;
    m_clientAttestationRulesHasBeenSet = true;
}

bool BotManagement::ClientAttestationRulesHasBeenSet() const
{
    return m_clientAttestationRulesHasBeenSet;
}

