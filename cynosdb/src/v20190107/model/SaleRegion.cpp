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

#include <tencentcloud/cynosdb/v20190107/model/SaleRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SaleRegion::SaleRegion() :
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionZhHasBeenSet(false),
    m_zoneSetHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_modulesHasBeenSet(false)
{
}

CoreInternalOutcome SaleRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleRegion.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SaleRegion.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionZh") && !value["RegionZh"].IsNull())
    {
        if (!value["RegionZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleRegion.RegionZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionZh = string(value["RegionZh"].GetString());
        m_regionZhHasBeenSet = true;
    }

    if (value.HasMember("ZoneSet") && !value["ZoneSet"].IsNull())
    {
        if (!value["ZoneSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SaleRegion.ZoneSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SaleZone item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneSet.push_back(item);
        }
        m_zoneSetHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleRegion.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("Modules") && !value["Modules"].IsNull())
    {
        if (!value["Modules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SaleRegion.Modules` is not array type"));

        const rapidjson::Value &tmpValue = value["Modules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Module item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modules.push_back(item);
        }
        m_modulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SaleRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionZh.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneSet.begin(); itr != m_zoneSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_modulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modules.begin(); itr != m_modules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SaleRegion::GetRegion() const
{
    return m_region;
}

void SaleRegion::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SaleRegion::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t SaleRegion::GetRegionId() const
{
    return m_regionId;
}

void SaleRegion::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool SaleRegion::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string SaleRegion::GetRegionZh() const
{
    return m_regionZh;
}

void SaleRegion::SetRegionZh(const string& _regionZh)
{
    m_regionZh = _regionZh;
    m_regionZhHasBeenSet = true;
}

bool SaleRegion::RegionZhHasBeenSet() const
{
    return m_regionZhHasBeenSet;
}

vector<SaleZone> SaleRegion::GetZoneSet() const
{
    return m_zoneSet;
}

void SaleRegion::SetZoneSet(const vector<SaleZone>& _zoneSet)
{
    m_zoneSet = _zoneSet;
    m_zoneSetHasBeenSet = true;
}

bool SaleRegion::ZoneSetHasBeenSet() const
{
    return m_zoneSetHasBeenSet;
}

string SaleRegion::GetDbType() const
{
    return m_dbType;
}

void SaleRegion::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool SaleRegion::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

vector<Module> SaleRegion::GetModules() const
{
    return m_modules;
}

void SaleRegion::SetModules(const vector<Module>& _modules)
{
    m_modules = _modules;
    m_modulesHasBeenSet = true;
}

bool SaleRegion::ModulesHasBeenSet() const
{
    return m_modulesHasBeenSet;
}

