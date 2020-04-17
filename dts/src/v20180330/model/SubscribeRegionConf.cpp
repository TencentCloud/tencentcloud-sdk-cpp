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

#include <tencentcloud/dts/v20180330/model/SubscribeRegionConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SubscribeRegionConf::SubscribeRegionConf() :
    m_regionNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_isDefaultRegionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeRegionConf::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeRegionConf.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeRegionConf.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeRegionConf.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultRegion") && !value["IsDefaultRegion"].IsNull())
    {
        if (!value["IsDefaultRegion"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SubscribeRegionConf.IsDefaultRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultRegion = value["IsDefaultRegion"].GetInt64();
        m_isDefaultRegionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SubscribeRegionConf.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeRegionConf::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDefaultRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultRegion, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string SubscribeRegionConf::GetRegionName() const
{
    return m_regionName;
}

void SubscribeRegionConf::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool SubscribeRegionConf::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string SubscribeRegionConf::GetRegion() const
{
    return m_region;
}

void SubscribeRegionConf::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SubscribeRegionConf::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SubscribeRegionConf::GetArea() const
{
    return m_area;
}

void SubscribeRegionConf::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool SubscribeRegionConf::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t SubscribeRegionConf::GetIsDefaultRegion() const
{
    return m_isDefaultRegion;
}

void SubscribeRegionConf::SetIsDefaultRegion(const int64_t& _isDefaultRegion)
{
    m_isDefaultRegion = _isDefaultRegion;
    m_isDefaultRegionHasBeenSet = true;
}

bool SubscribeRegionConf::IsDefaultRegionHasBeenSet() const
{
    return m_isDefaultRegionHasBeenSet;
}

int64_t SubscribeRegionConf::GetStatus() const
{
    return m_status;
}

void SubscribeRegionConf::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SubscribeRegionConf::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

