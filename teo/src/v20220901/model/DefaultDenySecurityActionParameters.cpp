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

#include <tencentcloud/teo/v20220901/model/DefaultDenySecurityActionParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DefaultDenySecurityActionParameters::DefaultDenySecurityActionParameters() :
    m_managedRulesHasBeenSet(false),
    m_otherModulesHasBeenSet(false)
{
}

CoreInternalOutcome DefaultDenySecurityActionParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ManagedRules") && !value["ManagedRules"].IsNull())
    {
        if (!value["ManagedRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultDenySecurityActionParameters.ManagedRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_managedRules.Deserialize(value["ManagedRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_managedRulesHasBeenSet = true;
    }

    if (value.HasMember("OtherModules") && !value["OtherModules"].IsNull())
    {
        if (!value["OtherModules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultDenySecurityActionParameters.OtherModules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otherModules.Deserialize(value["OtherModules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otherModulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultDenySecurityActionParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_managedRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_managedRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherModulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherModules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otherModules.ToJsonObject(value[key.c_str()], allocator);
    }

}


DenyActionParameters DefaultDenySecurityActionParameters::GetManagedRules() const
{
    return m_managedRules;
}

void DefaultDenySecurityActionParameters::SetManagedRules(const DenyActionParameters& _managedRules)
{
    m_managedRules = _managedRules;
    m_managedRulesHasBeenSet = true;
}

bool DefaultDenySecurityActionParameters::ManagedRulesHasBeenSet() const
{
    return m_managedRulesHasBeenSet;
}

DenyActionParameters DefaultDenySecurityActionParameters::GetOtherModules() const
{
    return m_otherModules;
}

void DefaultDenySecurityActionParameters::SetOtherModules(const DenyActionParameters& _otherModules)
{
    m_otherModules = _otherModules;
    m_otherModulesHasBeenSet = true;
}

bool DefaultDenySecurityActionParameters::OtherModulesHasBeenSet() const
{
    return m_otherModulesHasBeenSet;
}

