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

#include <tencentcloud/alb/v20251030/model/SecurityPolicyCapability.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

SecurityPolicyCapability::SecurityPolicyCapability() :
    m_ciphersHasBeenSet(false),
    m_tLSVersionHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicyCapability::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ciphers") && !value["Ciphers"].IsNull())
    {
        if (!value["Ciphers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyCapability.Ciphers` is not array type"));

        const rapidjson::Value &tmpValue = value["Ciphers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ciphers.push_back((*itr).GetString());
        }
        m_ciphersHasBeenSet = true;
    }

    if (value.HasMember("TLSVersion") && !value["TLSVersion"].IsNull())
    {
        if (!value["TLSVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyCapability.TLSVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tLSVersion = string(value["TLSVersion"].GetString());
        m_tLSVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicyCapability::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ciphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ciphers.begin(); itr != m_ciphers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tLSVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tLSVersion.c_str(), allocator).Move(), allocator);
    }

}


vector<string> SecurityPolicyCapability::GetCiphers() const
{
    return m_ciphers;
}

void SecurityPolicyCapability::SetCiphers(const vector<string>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool SecurityPolicyCapability::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

string SecurityPolicyCapability::GetTLSVersion() const
{
    return m_tLSVersion;
}

void SecurityPolicyCapability::SetTLSVersion(const string& _tLSVersion)
{
    m_tLSVersion = _tLSVersion;
    m_tLSVersionHasBeenSet = true;
}

bool SecurityPolicyCapability::TLSVersionHasBeenSet() const
{
    return m_tLSVersionHasBeenSet;
}

