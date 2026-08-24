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

#include <tencentcloud/ags/v20250920/model/ComputerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

ComputerConfiguration::ComputerConfiguration() :
    m_wAAConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome ComputerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WAAConfiguration") && !value["WAAConfiguration"].IsNull())
    {
        if (!value["WAAConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComputerConfiguration.WAAConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wAAConfiguration.Deserialize(value["WAAConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wAAConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wAAConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WAAConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wAAConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


WAAConfiguration ComputerConfiguration::GetWAAConfiguration() const
{
    return m_wAAConfiguration;
}

void ComputerConfiguration::SetWAAConfiguration(const WAAConfiguration& _wAAConfiguration)
{
    m_wAAConfiguration = _wAAConfiguration;
    m_wAAConfigurationHasBeenSet = true;
}

bool ComputerConfiguration::WAAConfigurationHasBeenSet() const
{
    return m_wAAConfigurationHasBeenSet;
}

