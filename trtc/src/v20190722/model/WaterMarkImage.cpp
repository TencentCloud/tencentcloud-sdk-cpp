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

#include <tencentcloud/trtc/v20190722/model/WaterMarkImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

WaterMarkImage::WaterMarkImage() :
    m_waterMarkUrlHasBeenSet(false),
    m_topHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome WaterMarkImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WaterMarkUrl") && !value["WaterMarkUrl"].IsNull())
    {
        if (!value["WaterMarkUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkImage.WaterMarkUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkUrl = string(value["WaterMarkUrl"].GetString());
        m_waterMarkUrlHasBeenSet = true;
    }

    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkImage.Top` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetUint64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkImage.Left` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetUint64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkImage.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkImage.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterMarkImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_waterMarkUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waterMarkUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
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

}


string WaterMarkImage::GetWaterMarkUrl() const
{
    return m_waterMarkUrl;
}

void WaterMarkImage::SetWaterMarkUrl(const string& _waterMarkUrl)
{
    m_waterMarkUrl = _waterMarkUrl;
    m_waterMarkUrlHasBeenSet = true;
}

bool WaterMarkImage::WaterMarkUrlHasBeenSet() const
{
    return m_waterMarkUrlHasBeenSet;
}

uint64_t WaterMarkImage::GetTop() const
{
    return m_top;
}

void WaterMarkImage::SetTop(const uint64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool WaterMarkImage::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

uint64_t WaterMarkImage::GetLeft() const
{
    return m_left;
}

void WaterMarkImage::SetLeft(const uint64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool WaterMarkImage::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

uint64_t WaterMarkImage::GetWidth() const
{
    return m_width;
}

void WaterMarkImage::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool WaterMarkImage::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t WaterMarkImage::GetHeight() const
{
    return m_height;
}

void WaterMarkImage::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool WaterMarkImage::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

