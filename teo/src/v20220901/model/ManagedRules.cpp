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

#include <tencentcloud/teo/v20220901/model/ManagedRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ManagedRules::ManagedRules() :
    m_enabledHasBeenSet(false),
    m_detectionOnlyHasBeenSet(false),
    m_semanticAnalysisHasBeenSet(false),
    m_autoUpdateHasBeenSet(false),
    m_managedRuleGroupsHasBeenSet(false)
{
}

CoreInternalOutcome ManagedRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRules.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("DetectionOnly") && !value["DetectionOnly"].IsNull())
    {
        if (!value["DetectionOnly"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRules.DetectionOnly` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectionOnly = string(value["DetectionOnly"].GetString());
        m_detectionOnlyHasBeenSet = true;
    }

    if (value.HasMember("SemanticAnalysis") && !value["SemanticAnalysis"].IsNull())
    {
        if (!value["SemanticAnalysis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRules.SemanticAnalysis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_semanticAnalysis = string(value["SemanticAnalysis"].GetString());
        m_semanticAnalysisHasBeenSet = true;
    }

    if (value.HasMember("AutoUpdate") && !value["AutoUpdate"].IsNull())
    {
        if (!value["AutoUpdate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRules.AutoUpdate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoUpdate.Deserialize(value["AutoUpdate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoUpdateHasBeenSet = true;
    }

    if (value.HasMember("ManagedRuleGroups") && !value["ManagedRuleGroups"].IsNull())
    {
        if (!value["ManagedRuleGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagedRules.ManagedRuleGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagedRuleGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagedRuleGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managedRuleGroups.push_back(item);
        }
        m_managedRuleGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagedRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_detectionOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectionOnly.c_str(), allocator).Move(), allocator);
    }

    if (m_semanticAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SemanticAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_semanticAnalysis.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoUpdate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_managedRuleGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedRuleGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managedRuleGroups.begin(); itr != m_managedRuleGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ManagedRules::GetEnabled() const
{
    return m_enabled;
}

void ManagedRules::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ManagedRules::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ManagedRules::GetDetectionOnly() const
{
    return m_detectionOnly;
}

void ManagedRules::SetDetectionOnly(const string& _detectionOnly)
{
    m_detectionOnly = _detectionOnly;
    m_detectionOnlyHasBeenSet = true;
}

bool ManagedRules::DetectionOnlyHasBeenSet() const
{
    return m_detectionOnlyHasBeenSet;
}

string ManagedRules::GetSemanticAnalysis() const
{
    return m_semanticAnalysis;
}

void ManagedRules::SetSemanticAnalysis(const string& _semanticAnalysis)
{
    m_semanticAnalysis = _semanticAnalysis;
    m_semanticAnalysisHasBeenSet = true;
}

bool ManagedRules::SemanticAnalysisHasBeenSet() const
{
    return m_semanticAnalysisHasBeenSet;
}

ManagedRuleAutoUpdate ManagedRules::GetAutoUpdate() const
{
    return m_autoUpdate;
}

void ManagedRules::SetAutoUpdate(const ManagedRuleAutoUpdate& _autoUpdate)
{
    m_autoUpdate = _autoUpdate;
    m_autoUpdateHasBeenSet = true;
}

bool ManagedRules::AutoUpdateHasBeenSet() const
{
    return m_autoUpdateHasBeenSet;
}

vector<ManagedRuleGroup> ManagedRules::GetManagedRuleGroups() const
{
    return m_managedRuleGroups;
}

void ManagedRules::SetManagedRuleGroups(const vector<ManagedRuleGroup>& _managedRuleGroups)
{
    m_managedRuleGroups = _managedRuleGroups;
    m_managedRuleGroupsHasBeenSet = true;
}

bool ManagedRules::ManagedRuleGroupsHasBeenSet() const
{
    return m_managedRuleGroupsHasBeenSet;
}

