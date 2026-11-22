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

#include <tencentcloud/tke/v20220501/model/RegistryMirror.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

RegistryMirror::RegistryMirror() :
    m_registryHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_overridePathHasBeenSet(false)
{
}

CoreInternalOutcome RegistryMirror::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Registry") && !value["Registry"].IsNull())
    {
        if (!value["Registry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryMirror.Registry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registry = string(value["Registry"].GetString());
        m_registryHasBeenSet = true;
    }

    if (value.HasMember("Endpoints") && !value["Endpoints"].IsNull())
    {
        if (!value["Endpoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegistryMirror.Endpoints` is not array type"));

        const rapidjson::Value &tmpValue = value["Endpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_endpoints.push_back((*itr).GetString());
        }
        m_endpointsHasBeenSet = true;
    }

    if (value.HasMember("OverridePath") && !value["OverridePath"].IsNull())
    {
        if (!value["OverridePath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryMirror.OverridePath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_overridePath = value["OverridePath"].GetBool();
        m_overridePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegistryMirror::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Registry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registry.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_endpoints.begin(); itr != m_endpoints.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_overridePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverridePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overridePath, allocator);
    }

}


string RegistryMirror::GetRegistry() const
{
    return m_registry;
}

void RegistryMirror::SetRegistry(const string& _registry)
{
    m_registry = _registry;
    m_registryHasBeenSet = true;
}

bool RegistryMirror::RegistryHasBeenSet() const
{
    return m_registryHasBeenSet;
}

vector<string> RegistryMirror::GetEndpoints() const
{
    return m_endpoints;
}

void RegistryMirror::SetEndpoints(const vector<string>& _endpoints)
{
    m_endpoints = _endpoints;
    m_endpointsHasBeenSet = true;
}

bool RegistryMirror::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

bool RegistryMirror::GetOverridePath() const
{
    return m_overridePath;
}

void RegistryMirror::SetOverridePath(const bool& _overridePath)
{
    m_overridePath = _overridePath;
    m_overridePathHasBeenSet = true;
}

bool RegistryMirror::OverridePathHasBeenSet() const
{
    return m_overridePathHasBeenSet;
}

