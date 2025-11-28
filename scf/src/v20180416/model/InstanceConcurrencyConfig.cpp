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

#include <tencentcloud/scf/v20180416/model/InstanceConcurrencyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

InstanceConcurrencyConfig::InstanceConcurrencyConfig() :
    m_dynamicEnabledHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_instanceIsolationEnabledHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_mixNodeConfigHasBeenSet(false),
    m_sessionConfigHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConcurrencyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DynamicEnabled") && !value["DynamicEnabled"].IsNull())
    {
        if (!value["DynamicEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.DynamicEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicEnabled = string(value["DynamicEnabled"].GetString());
        m_dynamicEnabledHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.MaxConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetUint64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("InstanceIsolationEnabled") && !value["InstanceIsolationEnabled"].IsNull())
    {
        if (!value["InstanceIsolationEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.InstanceIsolationEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceIsolationEnabled = string(value["InstanceIsolationEnabled"].GetString());
        m_instanceIsolationEnabledHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MixNodeConfig") && !value["MixNodeConfig"].IsNull())
    {
        if (!value["MixNodeConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.MixNodeConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["MixNodeConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MixNodeConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mixNodeConfig.push_back(item);
        }
        m_mixNodeConfigHasBeenSet = true;
    }

    if (value.HasMember("SessionConfig") && !value["SessionConfig"].IsNull())
    {
        if (!value["SessionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConcurrencyConfig.SessionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionConfig.Deserialize(value["SessionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConcurrencyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dynamicEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dynamicEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_instanceIsolationEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIsolationEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceIsolationEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_mixNodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixNodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mixNodeConfig.begin(); itr != m_mixNodeConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sessionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InstanceConcurrencyConfig::GetDynamicEnabled() const
{
    return m_dynamicEnabled;
}

void InstanceConcurrencyConfig::SetDynamicEnabled(const string& _dynamicEnabled)
{
    m_dynamicEnabled = _dynamicEnabled;
    m_dynamicEnabledHasBeenSet = true;
}

bool InstanceConcurrencyConfig::DynamicEnabledHasBeenSet() const
{
    return m_dynamicEnabledHasBeenSet;
}

uint64_t InstanceConcurrencyConfig::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void InstanceConcurrencyConfig::SetMaxConcurrency(const uint64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool InstanceConcurrencyConfig::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

string InstanceConcurrencyConfig::GetInstanceIsolationEnabled() const
{
    return m_instanceIsolationEnabled;
}

void InstanceConcurrencyConfig::SetInstanceIsolationEnabled(const string& _instanceIsolationEnabled)
{
    m_instanceIsolationEnabled = _instanceIsolationEnabled;
    m_instanceIsolationEnabledHasBeenSet = true;
}

bool InstanceConcurrencyConfig::InstanceIsolationEnabledHasBeenSet() const
{
    return m_instanceIsolationEnabledHasBeenSet;
}

string InstanceConcurrencyConfig::GetType() const
{
    return m_type;
}

void InstanceConcurrencyConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceConcurrencyConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<MixNodeConfig> InstanceConcurrencyConfig::GetMixNodeConfig() const
{
    return m_mixNodeConfig;
}

void InstanceConcurrencyConfig::SetMixNodeConfig(const vector<MixNodeConfig>& _mixNodeConfig)
{
    m_mixNodeConfig = _mixNodeConfig;
    m_mixNodeConfigHasBeenSet = true;
}

bool InstanceConcurrencyConfig::MixNodeConfigHasBeenSet() const
{
    return m_mixNodeConfigHasBeenSet;
}

SessionConfig InstanceConcurrencyConfig::GetSessionConfig() const
{
    return m_sessionConfig;
}

void InstanceConcurrencyConfig::SetSessionConfig(const SessionConfig& _sessionConfig)
{
    m_sessionConfig = _sessionConfig;
    m_sessionConfigHasBeenSet = true;
}

bool InstanceConcurrencyConfig::SessionConfigHasBeenSet() const
{
    return m_sessionConfigHasBeenSet;
}

