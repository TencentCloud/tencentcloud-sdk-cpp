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

#include <tencentcloud/tke/v20180525/model/OptionalRuntimes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

OptionalRuntimes::OptionalRuntimes() :
    m_runtimeTypeHasBeenSet(false),
    m_runtimeVersionsHasBeenSet(false),
    m_defaultVersionHasBeenSet(false)
{
}

CoreInternalOutcome OptionalRuntimes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuntimeType") && !value["RuntimeType"].IsNull())
    {
        if (!value["RuntimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalRuntimes.RuntimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeType = string(value["RuntimeType"].GetString());
        m_runtimeTypeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersions") && !value["RuntimeVersions"].IsNull())
    {
        if (!value["RuntimeVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OptionalRuntimes.RuntimeVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["RuntimeVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_runtimeVersions.push_back((*itr).GetString());
        }
        m_runtimeVersionsHasBeenSet = true;
    }

    if (value.HasMember("DefaultVersion") && !value["DefaultVersion"].IsNull())
    {
        if (!value["DefaultVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalRuntimes.DefaultVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultVersion = string(value["DefaultVersion"].GetString());
        m_defaultVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OptionalRuntimes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runtimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runtimeVersions.begin(); itr != m_runtimeVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultVersion.c_str(), allocator).Move(), allocator);
    }

}


string OptionalRuntimes::GetRuntimeType() const
{
    return m_runtimeType;
}

void OptionalRuntimes::SetRuntimeType(const string& _runtimeType)
{
    m_runtimeType = _runtimeType;
    m_runtimeTypeHasBeenSet = true;
}

bool OptionalRuntimes::RuntimeTypeHasBeenSet() const
{
    return m_runtimeTypeHasBeenSet;
}

vector<string> OptionalRuntimes::GetRuntimeVersions() const
{
    return m_runtimeVersions;
}

void OptionalRuntimes::SetRuntimeVersions(const vector<string>& _runtimeVersions)
{
    m_runtimeVersions = _runtimeVersions;
    m_runtimeVersionsHasBeenSet = true;
}

bool OptionalRuntimes::RuntimeVersionsHasBeenSet() const
{
    return m_runtimeVersionsHasBeenSet;
}

string OptionalRuntimes::GetDefaultVersion() const
{
    return m_defaultVersion;
}

void OptionalRuntimes::SetDefaultVersion(const string& _defaultVersion)
{
    m_defaultVersion = _defaultVersion;
    m_defaultVersionHasBeenSet = true;
}

bool OptionalRuntimes::DefaultVersionHasBeenSet() const
{
    return m_defaultVersionHasBeenSet;
}

