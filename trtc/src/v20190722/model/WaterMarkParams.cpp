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

#include <tencentcloud/trtc/v20190722/model/WaterMarkParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

WaterMarkParams::WaterMarkParams() :
    m_waterMarkIdHasBeenSet(false),
    m_waterMarkWidthHasBeenSet(false),
    m_waterMarkHeightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false),
    m_waterMarkUrlHasBeenSet(false)
{
}

CoreInternalOutcome WaterMarkParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WaterMarkId") && !value["WaterMarkId"].IsNull())
    {
        if (!value["WaterMarkId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkParams.WaterMarkId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkId = value["WaterMarkId"].GetUint64();
        m_waterMarkIdHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkWidth") && !value["WaterMarkWidth"].IsNull())
    {
        if (!value["WaterMarkWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkParams.WaterMarkWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkWidth = value["WaterMarkWidth"].GetUint64();
        m_waterMarkWidthHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkHeight") && !value["WaterMarkHeight"].IsNull())
    {
        if (!value["WaterMarkHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkParams.WaterMarkHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkHeight = value["WaterMarkHeight"].GetUint64();
        m_waterMarkHeightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkParams.LocationX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetUint64();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkParams.LocationY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetUint64();
        m_locationYHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkUrl") && !value["WaterMarkUrl"].IsNull())
    {
        if (!value["WaterMarkUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkParams.WaterMarkUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkUrl = string(value["WaterMarkUrl"].GetString());
        m_waterMarkUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterMarkParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_waterMarkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkId, allocator);
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

    if (m_waterMarkUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waterMarkUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WaterMarkParams::GetWaterMarkId() const
{
    return m_waterMarkId;
}

void WaterMarkParams::SetWaterMarkId(const uint64_t& _waterMarkId)
{
    m_waterMarkId = _waterMarkId;
    m_waterMarkIdHasBeenSet = true;
}

bool WaterMarkParams::WaterMarkIdHasBeenSet() const
{
    return m_waterMarkIdHasBeenSet;
}

uint64_t WaterMarkParams::GetWaterMarkWidth() const
{
    return m_waterMarkWidth;
}

void WaterMarkParams::SetWaterMarkWidth(const uint64_t& _waterMarkWidth)
{
    m_waterMarkWidth = _waterMarkWidth;
    m_waterMarkWidthHasBeenSet = true;
}

bool WaterMarkParams::WaterMarkWidthHasBeenSet() const
{
    return m_waterMarkWidthHasBeenSet;
}

uint64_t WaterMarkParams::GetWaterMarkHeight() const
{
    return m_waterMarkHeight;
}

void WaterMarkParams::SetWaterMarkHeight(const uint64_t& _waterMarkHeight)
{
    m_waterMarkHeight = _waterMarkHeight;
    m_waterMarkHeightHasBeenSet = true;
}

bool WaterMarkParams::WaterMarkHeightHasBeenSet() const
{
    return m_waterMarkHeightHasBeenSet;
}

uint64_t WaterMarkParams::GetLocationX() const
{
    return m_locationX;
}

void WaterMarkParams::SetLocationX(const uint64_t& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool WaterMarkParams::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

uint64_t WaterMarkParams::GetLocationY() const
{
    return m_locationY;
}

void WaterMarkParams::SetLocationY(const uint64_t& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool WaterMarkParams::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

string WaterMarkParams::GetWaterMarkUrl() const
{
    return m_waterMarkUrl;
}

void WaterMarkParams::SetWaterMarkUrl(const string& _waterMarkUrl)
{
    m_waterMarkUrl = _waterMarkUrl;
    m_waterMarkUrlHasBeenSet = true;
}

bool WaterMarkParams::WaterMarkUrlHasBeenSet() const
{
    return m_waterMarkUrlHasBeenSet;
}

