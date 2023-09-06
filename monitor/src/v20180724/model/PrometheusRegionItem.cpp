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

#include <tencentcloud/monitor/v20180724/model/PrometheusRegionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusRegionItem::PrometheusRegionItem() :
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionStateHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionShortNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_regionPayModeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusRegionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRegionItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRegionItem.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionState") && !value["RegionState"].IsNull())
    {
        if (!value["RegionState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRegionItem.RegionState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionState = value["RegionState"].GetInt64();
        m_regionStateHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRegionItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionShortName") && !value["RegionShortName"].IsNull())
    {
        if (!value["RegionShortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRegionItem.RegionShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionShortName = string(value["RegionShortName"].GetString());
        m_regionShortNameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRegionItem.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("RegionPayMode") && !value["RegionPayMode"].IsNull())
    {
        if (!value["RegionPayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRegionItem.RegionPayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionPayMode = value["RegionPayMode"].GetInt64();
        m_regionPayModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusRegionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionState, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionShortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_regionPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionPayMode, allocator);
    }

}


string PrometheusRegionItem::GetRegion() const
{
    return m_region;
}

void PrometheusRegionItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PrometheusRegionItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t PrometheusRegionItem::GetRegionId() const
{
    return m_regionId;
}

void PrometheusRegionItem::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool PrometheusRegionItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t PrometheusRegionItem::GetRegionState() const
{
    return m_regionState;
}

void PrometheusRegionItem::SetRegionState(const int64_t& _regionState)
{
    m_regionState = _regionState;
    m_regionStateHasBeenSet = true;
}

bool PrometheusRegionItem::RegionStateHasBeenSet() const
{
    return m_regionStateHasBeenSet;
}

string PrometheusRegionItem::GetRegionName() const
{
    return m_regionName;
}

void PrometheusRegionItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool PrometheusRegionItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string PrometheusRegionItem::GetRegionShortName() const
{
    return m_regionShortName;
}

void PrometheusRegionItem::SetRegionShortName(const string& _regionShortName)
{
    m_regionShortName = _regionShortName;
    m_regionShortNameHasBeenSet = true;
}

bool PrometheusRegionItem::RegionShortNameHasBeenSet() const
{
    return m_regionShortNameHasBeenSet;
}

string PrometheusRegionItem::GetArea() const
{
    return m_area;
}

void PrometheusRegionItem::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool PrometheusRegionItem::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t PrometheusRegionItem::GetRegionPayMode() const
{
    return m_regionPayMode;
}

void PrometheusRegionItem::SetRegionPayMode(const int64_t& _regionPayMode)
{
    m_regionPayMode = _regionPayMode;
    m_regionPayModeHasBeenSet = true;
}

bool PrometheusRegionItem::RegionPayModeHasBeenSet() const
{
    return m_regionPayModeHasBeenSet;
}

