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

#include <tencentcloud/vod/v20180717/model/FaceEnhanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FaceEnhanceInfo::FaceEnhanceInfo() :
    m_switchHasBeenSet(false),
    m_intensityHasBeenSet(false)
{
}

CoreInternalOutcome FaceEnhanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceEnhanceInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Intensity") && !value["Intensity"].IsNull())
    {
        if (!value["Intensity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FaceEnhanceInfo.Intensity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_intensity = value["Intensity"].GetDouble();
        m_intensityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceEnhanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_intensityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intensity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intensity, allocator);
    }

}


string FaceEnhanceInfo::GetSwitch() const
{
    return m_switch;
}

void FaceEnhanceInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool FaceEnhanceInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

double FaceEnhanceInfo::GetIntensity() const
{
    return m_intensity;
}

void FaceEnhanceInfo::SetIntensity(const double& _intensity)
{
    m_intensity = _intensity;
    m_intensityHasBeenSet = true;
}

bool FaceEnhanceInfo::IntensityHasBeenSet() const
{
    return m_intensityHasBeenSet;
}

