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

#include <tencentcloud/ags/v20250920/model/LogConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

LogConfiguration::LogConfiguration() :
    m_cLSConfigHasBeenSet(false)
{
}

CoreInternalOutcome LogConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CLSConfig") && !value["CLSConfig"].IsNull())
    {
        if (!value["CLSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfiguration.CLSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLSConfig.Deserialize(value["CLSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLSConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cLSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


CLSConfig LogConfiguration::GetCLSConfig() const
{
    return m_cLSConfig;
}

void LogConfiguration::SetCLSConfig(const CLSConfig& _cLSConfig)
{
    m_cLSConfig = _cLSConfig;
    m_cLSConfigHasBeenSet = true;
}

bool LogConfiguration::CLSConfigHasBeenSet() const
{
    return m_cLSConfigHasBeenSet;
}

