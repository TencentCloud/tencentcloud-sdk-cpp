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

#include <tencentcloud/teo/v20220901/model/SwitchConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SwitchConfig::SwitchConfig() :
    m_webSwitchHasBeenSet(false)
{
}

CoreInternalOutcome SwitchConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WebSwitch") && !value["WebSwitch"].IsNull())
    {
        if (!value["WebSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchConfig.WebSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webSwitch = string(value["WebSwitch"].GetString());
        m_webSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SwitchConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webSwitch.c_str(), allocator).Move(), allocator);
    }

}


string SwitchConfig::GetWebSwitch() const
{
    return m_webSwitch;
}

void SwitchConfig::SetWebSwitch(const string& _webSwitch)
{
    m_webSwitch = _webSwitch;
    m_webSwitchHasBeenSet = true;
}

bool SwitchConfig::WebSwitchHasBeenSet() const
{
    return m_webSwitchHasBeenSet;
}

