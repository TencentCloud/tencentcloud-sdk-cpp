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

#include <tencentcloud/vod/v20180717/model/WatermarkConfigureData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

WatermarkConfigureData::WatermarkConfigureData() :
    m_switchHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false)
{
}

CoreInternalOutcome WatermarkConfigureData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfigureData.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfigureData.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfigureData.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfigureData.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfigureData.XPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = string(value["XPos"].GetString());
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfigureData.YPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = string(value["YPos"].GetString());
        m_yPosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WatermarkConfigureData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

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

    if (m_xPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xPos.c_str(), allocator).Move(), allocator);
    }

    if (m_yPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yPos.c_str(), allocator).Move(), allocator);
    }

}


string WatermarkConfigureData::GetSwitch() const
{
    return m_switch;
}

void WatermarkConfigureData::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool WatermarkConfigureData::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string WatermarkConfigureData::GetUrl() const
{
    return m_url;
}

void WatermarkConfigureData::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool WatermarkConfigureData::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string WatermarkConfigureData::GetWidth() const
{
    return m_width;
}

void WatermarkConfigureData::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool WatermarkConfigureData::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string WatermarkConfigureData::GetHeight() const
{
    return m_height;
}

void WatermarkConfigureData::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool WatermarkConfigureData::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string WatermarkConfigureData::GetXPos() const
{
    return m_xPos;
}

void WatermarkConfigureData::SetXPos(const string& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool WatermarkConfigureData::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

string WatermarkConfigureData::GetYPos() const
{
    return m_yPos;
}

void WatermarkConfigureData::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool WatermarkConfigureData::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

