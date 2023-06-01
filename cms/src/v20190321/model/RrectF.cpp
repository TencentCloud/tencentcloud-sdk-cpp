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

#include <tencentcloud/cms/v20190321/model/RrectF.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

RrectF::RrectF() :
    m_widthHasBeenSet(false),
    m_cyHasBeenSet(false),
    m_cxHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome RrectF::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RrectF.Width` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetDouble();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Cy") && !value["Cy"].IsNull())
    {
        if (!value["Cy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RrectF.Cy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cy = value["Cy"].GetDouble();
        m_cyHasBeenSet = true;
    }

    if (value.HasMember("Cx") && !value["Cx"].IsNull())
    {
        if (!value["Cx"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RrectF.Cx` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cx = value["Cx"].GetDouble();
        m_cxHasBeenSet = true;
    }

    if (value.HasMember("Rotate") && !value["Rotate"].IsNull())
    {
        if (!value["Rotate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RrectF.Rotate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotate = value["Rotate"].GetDouble();
        m_rotateHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RrectF.Height` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetDouble();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RrectF::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_cyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cy, allocator);
    }

    if (m_cxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cx, allocator);
    }

    if (m_rotateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rotate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotate, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

}


double RrectF::GetWidth() const
{
    return m_width;
}

void RrectF::SetWidth(const double& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool RrectF::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

double RrectF::GetCy() const
{
    return m_cy;
}

void RrectF::SetCy(const double& _cy)
{
    m_cy = _cy;
    m_cyHasBeenSet = true;
}

bool RrectF::CyHasBeenSet() const
{
    return m_cyHasBeenSet;
}

double RrectF::GetCx() const
{
    return m_cx;
}

void RrectF::SetCx(const double& _cx)
{
    m_cx = _cx;
    m_cxHasBeenSet = true;
}

bool RrectF::CxHasBeenSet() const
{
    return m_cxHasBeenSet;
}

double RrectF::GetRotate() const
{
    return m_rotate;
}

void RrectF::SetRotate(const double& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool RrectF::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

double RrectF::GetHeight() const
{
    return m_height;
}

void RrectF::SetHeight(const double& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool RrectF::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

