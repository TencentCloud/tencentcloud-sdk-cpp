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

#include <tencentcloud/redis/v20180412/model/RegionConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

RegionConf::RegionConf() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionShortNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_zoneSetHasBeenSet(false)
{
}

CoreInternalOutcome RegionConf::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionConf.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionConf.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionShortName") && !value["RegionShortName"].IsNull())
    {
        if (!value["RegionShortName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionConf.RegionShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionShortName = string(value["RegionShortName"].GetString());
        m_regionShortNameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionConf.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("ZoneSet") && !value["ZoneSet"].IsNull())
    {
        if (!value["ZoneSet"].IsArray())
            return CoreInternalOutcome(Error("response `RegionConf.ZoneSet` is not array type"));

        const Value &tmpValue = value["ZoneSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneCapacityConf item;
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


    return CoreInternalOutcome(true);
}

void RegionConf::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionShortNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionShortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneSet.begin(); itr != m_zoneSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RegionConf::GetRegionId() const
{
    return m_regionId;
}

void RegionConf::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionConf::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string RegionConf::GetRegionName() const
{
    return m_regionName;
}

void RegionConf::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionConf::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string RegionConf::GetRegionShortName() const
{
    return m_regionShortName;
}

void RegionConf::SetRegionShortName(const string& _regionShortName)
{
    m_regionShortName = _regionShortName;
    m_regionShortNameHasBeenSet = true;
}

bool RegionConf::RegionShortNameHasBeenSet() const
{
    return m_regionShortNameHasBeenSet;
}

string RegionConf::GetArea() const
{
    return m_area;
}

void RegionConf::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool RegionConf::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

vector<ZoneCapacityConf> RegionConf::GetZoneSet() const
{
    return m_zoneSet;
}

void RegionConf::SetZoneSet(const vector<ZoneCapacityConf>& _zoneSet)
{
    m_zoneSet = _zoneSet;
    m_zoneSetHasBeenSet = true;
}

bool RegionConf::ZoneSetHasBeenSet() const
{
    return m_zoneSetHasBeenSet;
}

