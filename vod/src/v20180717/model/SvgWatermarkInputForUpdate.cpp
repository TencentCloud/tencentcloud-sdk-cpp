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

#include <tencentcloud/vod/v20180717/model/SvgWatermarkInputForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SvgWatermarkInputForUpdate::SvgWatermarkInputForUpdate() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_cycleConfigHasBeenSet(false)
{
}

CoreInternalOutcome SvgWatermarkInputForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SvgWatermarkInputForUpdate.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SvgWatermarkInputForUpdate.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("CycleConfig") && !value["CycleConfig"].IsNull())
    {
        if (!value["CycleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SvgWatermarkInputForUpdate.CycleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cycleConfig.Deserialize(value["CycleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cycleConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SvgWatermarkInputForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_width.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cycleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SvgWatermarkInputForUpdate::GetWidth() const
{
    return m_width;
}

void SvgWatermarkInputForUpdate::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool SvgWatermarkInputForUpdate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string SvgWatermarkInputForUpdate::GetHeight() const
{
    return m_height;
}

void SvgWatermarkInputForUpdate::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool SvgWatermarkInputForUpdate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

WatermarkCycleConfigForUpdate SvgWatermarkInputForUpdate::GetCycleConfig() const
{
    return m_cycleConfig;
}

void SvgWatermarkInputForUpdate::SetCycleConfig(const WatermarkCycleConfigForUpdate& _cycleConfig)
{
    m_cycleConfig = _cycleConfig;
    m_cycleConfigHasBeenSet = true;
}

bool SvgWatermarkInputForUpdate::CycleConfigHasBeenSet() const
{
    return m_cycleConfigHasBeenSet;
}

