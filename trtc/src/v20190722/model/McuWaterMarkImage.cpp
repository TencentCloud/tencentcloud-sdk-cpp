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

#include <tencentcloud/trtc/v20190722/model/McuWaterMarkImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuWaterMarkImage::McuWaterMarkImage() :
    m_waterMarkUrlHasBeenSet(false),
    m_waterMarkWidthHasBeenSet(false),
    m_waterMarkHeightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false),
    m_zOrderHasBeenSet(false),
    m_dynamicPosTypeHasBeenSet(false)
{
}

CoreInternalOutcome McuWaterMarkImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WaterMarkUrl") && !value["WaterMarkUrl"].IsNull())
    {
        if (!value["WaterMarkUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkImage.WaterMarkUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkUrl = string(value["WaterMarkUrl"].GetString());
        m_waterMarkUrlHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkWidth") && !value["WaterMarkWidth"].IsNull())
    {
        if (!value["WaterMarkWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkImage.WaterMarkWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkWidth = value["WaterMarkWidth"].GetUint64();
        m_waterMarkWidthHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkHeight") && !value["WaterMarkHeight"].IsNull())
    {
        if (!value["WaterMarkHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkImage.WaterMarkHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkHeight = value["WaterMarkHeight"].GetUint64();
        m_waterMarkHeightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkImage.LocationX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetUint64();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkImage.LocationY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetUint64();
        m_locationYHasBeenSet = true;
    }

    if (value.HasMember("ZOrder") && !value["ZOrder"].IsNull())
    {
        if (!value["ZOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkImage.ZOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zOrder = value["ZOrder"].GetUint64();
        m_zOrderHasBeenSet = true;
    }

    if (value.HasMember("DynamicPosType") && !value["DynamicPosType"].IsNull())
    {
        if (!value["DynamicPosType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkImage.DynamicPosType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicPosType = value["DynamicPosType"].GetUint64();
        m_dynamicPosTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuWaterMarkImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_waterMarkUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waterMarkUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_waterMarkWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkWidth, allocator);
    }

    if (m_waterMarkHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkHeight, allocator);
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

    if (m_zOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zOrder, allocator);
    }

    if (m_dynamicPosTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicPosType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dynamicPosType, allocator);
    }

}


string McuWaterMarkImage::GetWaterMarkUrl() const
{
    return m_waterMarkUrl;
}

void McuWaterMarkImage::SetWaterMarkUrl(const string& _waterMarkUrl)
{
    m_waterMarkUrl = _waterMarkUrl;
    m_waterMarkUrlHasBeenSet = true;
}

bool McuWaterMarkImage::WaterMarkUrlHasBeenSet() const
{
    return m_waterMarkUrlHasBeenSet;
}

uint64_t McuWaterMarkImage::GetWaterMarkWidth() const
{
    return m_waterMarkWidth;
}

void McuWaterMarkImage::SetWaterMarkWidth(const uint64_t& _waterMarkWidth)
{
    m_waterMarkWidth = _waterMarkWidth;
    m_waterMarkWidthHasBeenSet = true;
}

bool McuWaterMarkImage::WaterMarkWidthHasBeenSet() const
{
    return m_waterMarkWidthHasBeenSet;
}

uint64_t McuWaterMarkImage::GetWaterMarkHeight() const
{
    return m_waterMarkHeight;
}

void McuWaterMarkImage::SetWaterMarkHeight(const uint64_t& _waterMarkHeight)
{
    m_waterMarkHeight = _waterMarkHeight;
    m_waterMarkHeightHasBeenSet = true;
}

bool McuWaterMarkImage::WaterMarkHeightHasBeenSet() const
{
    return m_waterMarkHeightHasBeenSet;
}

uint64_t McuWaterMarkImage::GetLocationX() const
{
    return m_locationX;
}

void McuWaterMarkImage::SetLocationX(const uint64_t& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool McuWaterMarkImage::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

uint64_t McuWaterMarkImage::GetLocationY() const
{
    return m_locationY;
}

void McuWaterMarkImage::SetLocationY(const uint64_t& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool McuWaterMarkImage::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

uint64_t McuWaterMarkImage::GetZOrder() const
{
    return m_zOrder;
}

void McuWaterMarkImage::SetZOrder(const uint64_t& _zOrder)
{
    m_zOrder = _zOrder;
    m_zOrderHasBeenSet = true;
}

bool McuWaterMarkImage::ZOrderHasBeenSet() const
{
    return m_zOrderHasBeenSet;
}

uint64_t McuWaterMarkImage::GetDynamicPosType() const
{
    return m_dynamicPosType;
}

void McuWaterMarkImage::SetDynamicPosType(const uint64_t& _dynamicPosType)
{
    m_dynamicPosType = _dynamicPosType;
    m_dynamicPosTypeHasBeenSet = true;
}

bool McuWaterMarkImage::DynamicPosTypeHasBeenSet() const
{
    return m_dynamicPosTypeHasBeenSet;
}

