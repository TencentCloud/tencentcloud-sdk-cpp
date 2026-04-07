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

#include <tencentcloud/tke/v20180525/model/Extenders.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Extenders::Extenders() :
    m_filterVerbHasBeenSet(false),
    m_prioritizeVerbHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_managedResourcesHasBeenSet(false),
    m_extenderClientConfigHasBeenSet(false)
{
}

CoreInternalOutcome Extenders::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterVerb") && !value["FilterVerb"].IsNull())
    {
        if (!value["FilterVerb"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extenders.FilterVerb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterVerb = string(value["FilterVerb"].GetString());
        m_filterVerbHasBeenSet = true;
    }

    if (value.HasMember("PrioritizeVerb") && !value["PrioritizeVerb"].IsNull())
    {
        if (!value["PrioritizeVerb"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extenders.PrioritizeVerb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prioritizeVerb = string(value["PrioritizeVerb"].GetString());
        m_prioritizeVerbHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Extenders.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("ManagedResources") && !value["ManagedResources"].IsNull())
    {
        if (!value["ManagedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Extenders.ManagedResources` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagedResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExtenderManagedResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managedResources.push_back(item);
        }
        m_managedResourcesHasBeenSet = true;
    }

    if (value.HasMember("ExtenderClientConfig") && !value["ExtenderClientConfig"].IsNull())
    {
        if (!value["ExtenderClientConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Extenders.ExtenderClientConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extenderClientConfig.Deserialize(value["ExtenderClientConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extenderClientConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Extenders::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterVerbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterVerb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterVerb.c_str(), allocator).Move(), allocator);
    }

    if (m_prioritizeVerbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrioritizeVerb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prioritizeVerb.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_managedResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managedResources.begin(); itr != m_managedResources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extenderClientConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtenderClientConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extenderClientConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Extenders::GetFilterVerb() const
{
    return m_filterVerb;
}

void Extenders::SetFilterVerb(const string& _filterVerb)
{
    m_filterVerb = _filterVerb;
    m_filterVerbHasBeenSet = true;
}

bool Extenders::FilterVerbHasBeenSet() const
{
    return m_filterVerbHasBeenSet;
}

string Extenders::GetPrioritizeVerb() const
{
    return m_prioritizeVerb;
}

void Extenders::SetPrioritizeVerb(const string& _prioritizeVerb)
{
    m_prioritizeVerb = _prioritizeVerb;
    m_prioritizeVerbHasBeenSet = true;
}

bool Extenders::PrioritizeVerbHasBeenSet() const
{
    return m_prioritizeVerbHasBeenSet;
}

int64_t Extenders::GetWeight() const
{
    return m_weight;
}

void Extenders::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool Extenders::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

vector<ExtenderManagedResource> Extenders::GetManagedResources() const
{
    return m_managedResources;
}

void Extenders::SetManagedResources(const vector<ExtenderManagedResource>& _managedResources)
{
    m_managedResources = _managedResources;
    m_managedResourcesHasBeenSet = true;
}

bool Extenders::ManagedResourcesHasBeenSet() const
{
    return m_managedResourcesHasBeenSet;
}

ExtenderClientConfig Extenders::GetExtenderClientConfig() const
{
    return m_extenderClientConfig;
}

void Extenders::SetExtenderClientConfig(const ExtenderClientConfig& _extenderClientConfig)
{
    m_extenderClientConfig = _extenderClientConfig;
    m_extenderClientConfigHasBeenSet = true;
}

bool Extenders::ExtenderClientConfigHasBeenSet() const
{
    return m_extenderClientConfigHasBeenSet;
}

