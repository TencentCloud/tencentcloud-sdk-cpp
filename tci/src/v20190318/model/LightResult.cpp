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

#include <tencentcloud/tci/v20190318/model/LightResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

LightResult::LightResult() :
    m_lightLevelHasBeenSet(false),
    m_lightValueHasBeenSet(false)
{
}

CoreInternalOutcome LightResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LightLevel") && !value["LightLevel"].IsNull())
    {
        if (!value["LightLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LightResult.LightLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lightLevel = string(value["LightLevel"].GetString());
        m_lightLevelHasBeenSet = true;
    }

    if (value.HasMember("LightValue") && !value["LightValue"].IsNull())
    {
        if (!value["LightValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LightResult.LightValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lightValue = value["LightValue"].GetDouble();
        m_lightValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LightResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lightLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lightLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_lightValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lightValue, allocator);
    }

}


string LightResult::GetLightLevel() const
{
    return m_lightLevel;
}

void LightResult::SetLightLevel(const string& _lightLevel)
{
    m_lightLevel = _lightLevel;
    m_lightLevelHasBeenSet = true;
}

bool LightResult::LightLevelHasBeenSet() const
{
    return m_lightLevelHasBeenSet;
}

double LightResult::GetLightValue() const
{
    return m_lightValue;
}

void LightResult::SetLightValue(const double& _lightValue)
{
    m_lightValue = _lightValue;
    m_lightValueHasBeenSet = true;
}

bool LightResult::LightValueHasBeenSet() const
{
    return m_lightValueHasBeenSet;
}

