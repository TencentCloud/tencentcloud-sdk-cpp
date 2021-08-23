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

#include <tencentcloud/ims/v20201229/model/Location.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20201229::Model;
using namespace std;

Location::Location() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_rotateHasBeenSet(false)
{
}

CoreInternalOutcome Location::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Location.X` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetDouble();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Y` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetDouble();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Width` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetDouble();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Height` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetDouble();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Rotate") && !value["Rotate"].IsNull())
    {
        if (!value["Rotate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Rotate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotate = value["Rotate"].GetDouble();
        m_rotateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Location::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
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

    if (m_rotateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rotate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotate, allocator);
    }

}


double Location::GetX() const
{
    return m_x;
}

void Location::SetX(const double& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool Location::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

double Location::GetY() const
{
    return m_y;
}

void Location::SetY(const double& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool Location::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

double Location::GetWidth() const
{
    return m_width;
}

void Location::SetWidth(const double& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool Location::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

double Location::GetHeight() const
{
    return m_height;
}

void Location::SetHeight(const double& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool Location::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

double Location::GetRotate() const
{
    return m_rotate;
}

void Location::SetRotate(const double& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool Location::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

