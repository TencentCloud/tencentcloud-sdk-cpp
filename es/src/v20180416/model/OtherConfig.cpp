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

#include <tencentcloud/es/v20180416/model/OtherConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

OtherConfig::OtherConfig() :
    m_esConfigHasBeenSet(false),
    m_jvmHeapConfigHasBeenSet(false)
{
}

CoreInternalOutcome OtherConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EsConfig") && !value["EsConfig"].IsNull())
    {
        if (!value["EsConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherConfig.EsConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esConfig = string(value["EsConfig"].GetString());
        m_esConfigHasBeenSet = true;
    }

    if (value.HasMember("JvmHeapConfig") && !value["JvmHeapConfig"].IsNull())
    {
        if (!value["JvmHeapConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherConfig.JvmHeapConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jvmHeapConfig = string(value["JvmHeapConfig"].GetString());
        m_jvmHeapConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_esConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmHeapConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmHeapConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jvmHeapConfig.c_str(), allocator).Move(), allocator);
    }

}


string OtherConfig::GetEsConfig() const
{
    return m_esConfig;
}

void OtherConfig::SetEsConfig(const string& _esConfig)
{
    m_esConfig = _esConfig;
    m_esConfigHasBeenSet = true;
}

bool OtherConfig::EsConfigHasBeenSet() const
{
    return m_esConfigHasBeenSet;
}

string OtherConfig::GetJvmHeapConfig() const
{
    return m_jvmHeapConfig;
}

void OtherConfig::SetJvmHeapConfig(const string& _jvmHeapConfig)
{
    m_jvmHeapConfig = _jvmHeapConfig;
    m_jvmHeapConfigHasBeenSet = true;
}

bool OtherConfig::JvmHeapConfigHasBeenSet() const
{
    return m_jvmHeapConfigHasBeenSet;
}

