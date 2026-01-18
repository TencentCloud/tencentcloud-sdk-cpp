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

#include <tencentcloud/mps/v20190612/model/ImageResizeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageResizeConfig::ImageResizeConfig() :
    m_switchHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_longSideHasBeenSet(false),
    m_shortSideHasBeenSet(false)
{
}

CoreInternalOutcome ImageResizeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResizeConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResizeConfig.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResizeConfig.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResizeConfig.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResizeConfig.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("LongSide") && !value["LongSide"].IsNull())
    {
        if (!value["LongSide"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResizeConfig.LongSide` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_longSide = value["LongSide"].GetUint64();
        m_longSideHasBeenSet = true;
    }

    if (value.HasMember("ShortSide") && !value["ShortSide"].IsNull())
    {
        if (!value["ShortSide"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResizeConfig.ShortSide` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shortSide = value["ShortSide"].GetUint64();
        m_shortSideHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageResizeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_longSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longSide, allocator);
    }

    if (m_shortSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shortSide, allocator);
    }

}


string ImageResizeConfig::GetSwitch() const
{
    return m_switch;
}

void ImageResizeConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ImageResizeConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string ImageResizeConfig::GetMode() const
{
    return m_mode;
}

void ImageResizeConfig::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ImageResizeConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

double ImageResizeConfig::GetPercent() const
{
    return m_percent;
}

void ImageResizeConfig::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool ImageResizeConfig::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

uint64_t ImageResizeConfig::GetWidth() const
{
    return m_width;
}

void ImageResizeConfig::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageResizeConfig::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ImageResizeConfig::GetHeight() const
{
    return m_height;
}

void ImageResizeConfig::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageResizeConfig::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t ImageResizeConfig::GetLongSide() const
{
    return m_longSide;
}

void ImageResizeConfig::SetLongSide(const uint64_t& _longSide)
{
    m_longSide = _longSide;
    m_longSideHasBeenSet = true;
}

bool ImageResizeConfig::LongSideHasBeenSet() const
{
    return m_longSideHasBeenSet;
}

uint64_t ImageResizeConfig::GetShortSide() const
{
    return m_shortSide;
}

void ImageResizeConfig::SetShortSide(const uint64_t& _shortSide)
{
    m_shortSide = _shortSide;
    m_shortSideHasBeenSet = true;
}

bool ImageResizeConfig::ShortSideHasBeenSet() const
{
    return m_shortSideHasBeenSet;
}

