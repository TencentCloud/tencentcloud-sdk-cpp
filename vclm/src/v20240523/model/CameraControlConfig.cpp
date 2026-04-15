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

#include <tencentcloud/vclm/v20240523/model/CameraControlConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

CameraControlConfig::CameraControlConfig() :
    m_horizontalHasBeenSet(false),
    m_verticalHasBeenSet(false),
    m_panHasBeenSet(false),
    m_tiltHasBeenSet(false),
    m_rollHasBeenSet(false),
    m_zoomHasBeenSet(false)
{
}

CoreInternalOutcome CameraControlConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Horizontal") && !value["Horizontal"].IsNull())
    {
        if (!value["Horizontal"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CameraControlConfig.Horizontal` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_horizontal = value["Horizontal"].GetDouble();
        m_horizontalHasBeenSet = true;
    }

    if (value.HasMember("Vertical") && !value["Vertical"].IsNull())
    {
        if (!value["Vertical"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CameraControlConfig.Vertical` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_vertical = value["Vertical"].GetDouble();
        m_verticalHasBeenSet = true;
    }

    if (value.HasMember("Pan") && !value["Pan"].IsNull())
    {
        if (!value["Pan"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CameraControlConfig.Pan` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pan = value["Pan"].GetDouble();
        m_panHasBeenSet = true;
    }

    if (value.HasMember("Tilt") && !value["Tilt"].IsNull())
    {
        if (!value["Tilt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CameraControlConfig.Tilt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tilt = value["Tilt"].GetDouble();
        m_tiltHasBeenSet = true;
    }

    if (value.HasMember("Roll") && !value["Roll"].IsNull())
    {
        if (!value["Roll"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CameraControlConfig.Roll` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_roll = value["Roll"].GetDouble();
        m_rollHasBeenSet = true;
    }

    if (value.HasMember("Zoom") && !value["Zoom"].IsNull())
    {
        if (!value["Zoom"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CameraControlConfig.Zoom` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_zoom = value["Zoom"].GetDouble();
        m_zoomHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CameraControlConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_horizontalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Horizontal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_horizontal, allocator);
    }

    if (m_verticalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vertical";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vertical, allocator);
    }

    if (m_panHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pan, allocator);
    }

    if (m_tiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tilt, allocator);
    }

    if (m_rollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roll, allocator);
    }

    if (m_zoomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zoom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoom, allocator);
    }

}


double CameraControlConfig::GetHorizontal() const
{
    return m_horizontal;
}

void CameraControlConfig::SetHorizontal(const double& _horizontal)
{
    m_horizontal = _horizontal;
    m_horizontalHasBeenSet = true;
}

bool CameraControlConfig::HorizontalHasBeenSet() const
{
    return m_horizontalHasBeenSet;
}

double CameraControlConfig::GetVertical() const
{
    return m_vertical;
}

void CameraControlConfig::SetVertical(const double& _vertical)
{
    m_vertical = _vertical;
    m_verticalHasBeenSet = true;
}

bool CameraControlConfig::VerticalHasBeenSet() const
{
    return m_verticalHasBeenSet;
}

double CameraControlConfig::GetPan() const
{
    return m_pan;
}

void CameraControlConfig::SetPan(const double& _pan)
{
    m_pan = _pan;
    m_panHasBeenSet = true;
}

bool CameraControlConfig::PanHasBeenSet() const
{
    return m_panHasBeenSet;
}

double CameraControlConfig::GetTilt() const
{
    return m_tilt;
}

void CameraControlConfig::SetTilt(const double& _tilt)
{
    m_tilt = _tilt;
    m_tiltHasBeenSet = true;
}

bool CameraControlConfig::TiltHasBeenSet() const
{
    return m_tiltHasBeenSet;
}

double CameraControlConfig::GetRoll() const
{
    return m_roll;
}

void CameraControlConfig::SetRoll(const double& _roll)
{
    m_roll = _roll;
    m_rollHasBeenSet = true;
}

bool CameraControlConfig::RollHasBeenSet() const
{
    return m_rollHasBeenSet;
}

double CameraControlConfig::GetZoom() const
{
    return m_zoom;
}

void CameraControlConfig::SetZoom(const double& _zoom)
{
    m_zoom = _zoom;
    m_zoomHasBeenSet = true;
}

bool CameraControlConfig::ZoomHasBeenSet() const
{
    return m_zoomHasBeenSet;
}

