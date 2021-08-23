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

#include <tencentcloud/vm/v20200709/model/ImageResultsResultDetailLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20200709::Model;
using namespace std;

ImageResultsResultDetailLocation::ImageResultsResultDetailLocation() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_rotateHasBeenSet(false)
{
}

CoreInternalOutcome ImageResultsResultDetailLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultsResultDetailLocation.X` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetDouble();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultsResultDetailLocation.Y` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetDouble();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultsResultDetailLocation.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultsResultDetailLocation.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Rotate") && !value["Rotate"].IsNull())
    {
        if (!value["Rotate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultsResultDetailLocation.Rotate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotate = value["Rotate"].GetDouble();
        m_rotateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageResultsResultDetailLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


double ImageResultsResultDetailLocation::GetX() const
{
    return m_x;
}

void ImageResultsResultDetailLocation::SetX(const double& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool ImageResultsResultDetailLocation::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

double ImageResultsResultDetailLocation::GetY() const
{
    return m_y;
}

void ImageResultsResultDetailLocation::SetY(const double& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool ImageResultsResultDetailLocation::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

int64_t ImageResultsResultDetailLocation::GetWidth() const
{
    return m_width;
}

void ImageResultsResultDetailLocation::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageResultsResultDetailLocation::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t ImageResultsResultDetailLocation::GetHeight() const
{
    return m_height;
}

void ImageResultsResultDetailLocation::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageResultsResultDetailLocation::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

double ImageResultsResultDetailLocation::GetRotate() const
{
    return m_rotate;
}

void ImageResultsResultDetailLocation::SetRotate(const double& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool ImageResultsResultDetailLocation::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

