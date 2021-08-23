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

#include <tencentcloud/cvm/v20170312/model/OsVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

OsVersion::OsVersion() :
    m_osNameHasBeenSet(false),
    m_osVersionsHasBeenSet(false),
    m_architectureHasBeenSet(false)
{
}

CoreInternalOutcome OsVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsVersion.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("OsVersions") && !value["OsVersions"].IsNull())
    {
        if (!value["OsVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OsVersion.OsVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["OsVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_osVersions.push_back((*itr).GetString());
        }
        m_osVersionsHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OsVersion.Architecture` is not array type"));

        const rapidjson::Value &tmpValue = value["Architecture"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_architecture.push_back((*itr).GetString());
        }
        m_architectureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OsVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_osVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_osVersions.begin(); itr != m_osVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_architecture.begin(); itr != m_architecture.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string OsVersion::GetOsName() const
{
    return m_osName;
}

void OsVersion::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool OsVersion::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

vector<string> OsVersion::GetOsVersions() const
{
    return m_osVersions;
}

void OsVersion::SetOsVersions(const vector<string>& _osVersions)
{
    m_osVersions = _osVersions;
    m_osVersionsHasBeenSet = true;
}

bool OsVersion::OsVersionsHasBeenSet() const
{
    return m_osVersionsHasBeenSet;
}

vector<string> OsVersion::GetArchitecture() const
{
    return m_architecture;
}

void OsVersion::SetArchitecture(const vector<string>& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool OsVersion::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

