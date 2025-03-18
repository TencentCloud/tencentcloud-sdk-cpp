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

#include <tencentcloud/teo/v20220901/model/SecurityPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecurityPolicy::SecurityPolicy() :
    m_customRulesHasBeenSet(false),
    m_managedRulesHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomRules") && !value["CustomRules"].IsNull())
    {
        if (!value["CustomRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.CustomRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customRules.Deserialize(value["CustomRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customRulesHasBeenSet = true;
    }

    if (value.HasMember("ManagedRules") && !value["ManagedRules"].IsNull())
    {
        if (!value["ManagedRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.ManagedRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_managedRules.Deserialize(value["ManagedRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_managedRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_managedRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_managedRules.ToJsonObject(value[key.c_str()], allocator);
    }

}


CustomRules SecurityPolicy::GetCustomRules() const
{
    return m_customRules;
}

void SecurityPolicy::SetCustomRules(const CustomRules& _customRules)
{
    m_customRules = _customRules;
    m_customRulesHasBeenSet = true;
}

bool SecurityPolicy::CustomRulesHasBeenSet() const
{
    return m_customRulesHasBeenSet;
}

ManagedRules SecurityPolicy::GetManagedRules() const
{
    return m_managedRules;
}

void SecurityPolicy::SetManagedRules(const ManagedRules& _managedRules)
{
    m_managedRules = _managedRules;
    m_managedRulesHasBeenSet = true;
}

bool SecurityPolicy::ManagedRulesHasBeenSet() const
{
    return m_managedRulesHasBeenSet;
}

