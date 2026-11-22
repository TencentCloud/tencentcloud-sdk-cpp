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

#include <tencentcloud/tke/v20220501/model/RegistryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

RegistryConfig::RegistryConfig() :
    m_mirrorsHasBeenSet(false),
    m_insecureRegistriesHasBeenSet(false)
{
}

CoreInternalOutcome RegistryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mirrors") && !value["Mirrors"].IsNull())
    {
        if (!value["Mirrors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegistryConfig.Mirrors` is not array type"));

        const rapidjson::Value &tmpValue = value["Mirrors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegistryMirror item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mirrors.push_back(item);
        }
        m_mirrorsHasBeenSet = true;
    }

    if (value.HasMember("InsecureRegistries") && !value["InsecureRegistries"].IsNull())
    {
        if (!value["InsecureRegistries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegistryConfig.InsecureRegistries` is not array type"));

        const rapidjson::Value &tmpValue = value["InsecureRegistries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_insecureRegistries.push_back((*itr).GetString());
        }
        m_insecureRegistriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegistryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mirrorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mirrors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mirrors.begin(); itr != m_mirrors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_insecureRegistriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsecureRegistries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_insecureRegistries.begin(); itr != m_insecureRegistries.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<RegistryMirror> RegistryConfig::GetMirrors() const
{
    return m_mirrors;
}

void RegistryConfig::SetMirrors(const vector<RegistryMirror>& _mirrors)
{
    m_mirrors = _mirrors;
    m_mirrorsHasBeenSet = true;
}

bool RegistryConfig::MirrorsHasBeenSet() const
{
    return m_mirrorsHasBeenSet;
}

vector<string> RegistryConfig::GetInsecureRegistries() const
{
    return m_insecureRegistries;
}

void RegistryConfig::SetInsecureRegistries(const vector<string>& _insecureRegistries)
{
    m_insecureRegistries = _insecureRegistries;
    m_insecureRegistriesHasBeenSet = true;
}

bool RegistryConfig::InsecureRegistriesHasBeenSet() const
{
    return m_insecureRegistriesHasBeenSet;
}

