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

#include <tencentcloud/trtc/v20190722/model/McuBackgroundCustomRender.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuBackgroundCustomRender::McuBackgroundCustomRender() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_radiusHasBeenSet(false)
{
}

CoreInternalOutcome McuBackgroundCustomRender::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuBackgroundCustomRender.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuBackgroundCustomRender.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Radius") && !value["Radius"].IsNull())
    {
        if (!value["Radius"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuBackgroundCustomRender.Radius` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_radius = value["Radius"].GetUint64();
        m_radiusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuBackgroundCustomRender::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_radiusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Radius";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_radius, allocator);
    }

}


uint64_t McuBackgroundCustomRender::GetWidth() const
{
    return m_width;
}

void McuBackgroundCustomRender::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool McuBackgroundCustomRender::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t McuBackgroundCustomRender::GetHeight() const
{
    return m_height;
}

void McuBackgroundCustomRender::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool McuBackgroundCustomRender::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t McuBackgroundCustomRender::GetRadius() const
{
    return m_radius;
}

void McuBackgroundCustomRender::SetRadius(const uint64_t& _radius)
{
    m_radius = _radius;
    m_radiusHasBeenSet = true;
}

bool McuBackgroundCustomRender::RadiusHasBeenSet() const
{
    return m_radiusHasBeenSet;
}

