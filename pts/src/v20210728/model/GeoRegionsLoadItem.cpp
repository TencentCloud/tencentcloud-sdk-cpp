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

#include <tencentcloud/pts/v20210728/model/GeoRegionsLoadItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

GeoRegionsLoadItem::GeoRegionsLoadItem() :
    m_regionIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_percentageHasBeenSet(false)
{
}

CoreInternalOutcome GeoRegionsLoadItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeoRegionsLoadItem.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoRegionsLoadItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeoRegionsLoadItem.Percentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetInt64();
        m_percentageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeoRegionsLoadItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

}


int64_t GeoRegionsLoadItem::GetRegionId() const
{
    return m_regionId;
}

void GeoRegionsLoadItem::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool GeoRegionsLoadItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string GeoRegionsLoadItem::GetRegion() const
{
    return m_region;
}

void GeoRegionsLoadItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool GeoRegionsLoadItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t GeoRegionsLoadItem::GetPercentage() const
{
    return m_percentage;
}

void GeoRegionsLoadItem::SetPercentage(const int64_t& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool GeoRegionsLoadItem::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

