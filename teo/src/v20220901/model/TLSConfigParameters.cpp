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

#include <tencentcloud/teo/v20220901/model/TLSConfigParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

TLSConfigParameters::TLSConfigParameters() :
    m_versionHasBeenSet(false),
    m_cipherSuiteHasBeenSet(false)
{
}

CoreInternalOutcome TLSConfigParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TLSConfigParameters.Version` is not array type"));

        const rapidjson::Value &tmpValue = value["Version"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_version.push_back((*itr).GetString());
        }
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CipherSuite") && !value["CipherSuite"].IsNull())
    {
        if (!value["CipherSuite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TLSConfigParameters.CipherSuite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cipherSuite = string(value["CipherSuite"].GetString());
        m_cipherSuiteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TLSConfigParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_version.begin(); itr != m_version.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cipherSuiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherSuite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cipherSuite.c_str(), allocator).Move(), allocator);
    }

}


vector<string> TLSConfigParameters::GetVersion() const
{
    return m_version;
}

void TLSConfigParameters::SetVersion(const vector<string>& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool TLSConfigParameters::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string TLSConfigParameters::GetCipherSuite() const
{
    return m_cipherSuite;
}

void TLSConfigParameters::SetCipherSuite(const string& _cipherSuite)
{
    m_cipherSuite = _cipherSuite;
    m_cipherSuiteHasBeenSet = true;
}

bool TLSConfigParameters::CipherSuiteHasBeenSet() const
{
    return m_cipherSuiteHasBeenSet;
}

