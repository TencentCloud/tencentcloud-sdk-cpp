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

#include <tencentcloud/tke/v20180525/model/RuntimeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RuntimeConfig::RuntimeConfig() :
    m_runtimeTypeHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false)
{
}

CoreInternalOutcome RuntimeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuntimeType") && !value["RuntimeType"].IsNull())
    {
        if (!value["RuntimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeConfig.RuntimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeType = string(value["RuntimeType"].GetString());
        m_runtimeTypeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersion") && !value["RuntimeVersion"].IsNull())
    {
        if (!value["RuntimeVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeConfig.RuntimeVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeVersion = string(value["RuntimeVersion"].GetString());
        m_runtimeVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuntimeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runtimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

}


string RuntimeConfig::GetRuntimeType() const
{
    return m_runtimeType;
}

void RuntimeConfig::SetRuntimeType(const string& _runtimeType)
{
    m_runtimeType = _runtimeType;
    m_runtimeTypeHasBeenSet = true;
}

bool RuntimeConfig::RuntimeTypeHasBeenSet() const
{
    return m_runtimeTypeHasBeenSet;
}

string RuntimeConfig::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void RuntimeConfig::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool RuntimeConfig::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

