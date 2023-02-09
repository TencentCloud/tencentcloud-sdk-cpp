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

#include <tencentcloud/lcic/v20220817/model/WatermarkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

WatermarkConfig::WatermarkConfig() :
    m_urlHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false)
{
}

CoreInternalOutcome WatermarkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfig.Width` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetDouble();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfig.Height` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetDouble();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfig.LocationX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetDouble();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkConfig.LocationY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetDouble();
        m_locationYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WatermarkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_locationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationX, allocator);
    }

    if (m_locationYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationY, allocator);
    }

}


string WatermarkConfig::GetUrl() const
{
    return m_url;
}

void WatermarkConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool WatermarkConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

double WatermarkConfig::GetWidth() const
{
    return m_width;
}

void WatermarkConfig::SetWidth(const double& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool WatermarkConfig::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

double WatermarkConfig::GetHeight() const
{
    return m_height;
}

void WatermarkConfig::SetHeight(const double& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool WatermarkConfig::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

double WatermarkConfig::GetLocationX() const
{
    return m_locationX;
}

void WatermarkConfig::SetLocationX(const double& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool WatermarkConfig::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

double WatermarkConfig::GetLocationY() const
{
    return m_locationY;
}

void WatermarkConfig::SetLocationY(const double& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool WatermarkConfig::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

