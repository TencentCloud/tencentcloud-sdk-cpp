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

#include <tencentcloud/cdb/v20170320/model/RegionSellConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

RegionSellConf::RegionSellConf() :
    m_regionNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_isDefaultRegionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zonesConfHasBeenSet(false)
{
}

CoreInternalOutcome RegionSellConf::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSellConf.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSellConf.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultRegion") && !value["IsDefaultRegion"].IsNull())
    {
        if (!value["IsDefaultRegion"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RegionSellConf.IsDefaultRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultRegion = value["IsDefaultRegion"].GetInt64();
        m_isDefaultRegionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSellConf.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ZonesConf") && !value["ZonesConf"].IsNull())
    {
        if (!value["ZonesConf"].IsArray())
            return CoreInternalOutcome(Error("response `RegionSellConf.ZonesConf` is not array type"));

        const Value &tmpValue = value["ZonesConf"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneSellConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zonesConf.push_back(item);
        }
        m_zonesConfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionSellConf::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZonesConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zonesConf.begin(); itr != m_zonesConf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RegionSellConf::GetRegionName() const
{
    return m_regionName;
}

void RegionSellConf::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionSellConf::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string RegionSellConf::GetArea() const
{
    return m_area;
}

void RegionSellConf::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool RegionSellConf::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t RegionSellConf::GetIsDefaultRegion() const
{
    return m_isDefaultRegion;
}

void RegionSellConf::SetIsDefaultRegion(const int64_t& _isDefaultRegion)
{
    m_isDefaultRegion = _isDefaultRegion;
    m_isDefaultRegionHasBeenSet = true;
}

bool RegionSellConf::IsDefaultRegionHasBeenSet() const
{
    return m_isDefaultRegionHasBeenSet;
}

string RegionSellConf::GetRegion() const
{
    return m_region;
}

void RegionSellConf::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionSellConf::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<ZoneSellConf> RegionSellConf::GetZonesConf() const
{
    return m_zonesConf;
}

void RegionSellConf::SetZonesConf(const vector<ZoneSellConf>& _zonesConf)
{
    m_zonesConf = _zonesConf;
    m_zonesConfHasBeenSet = true;
}

bool RegionSellConf::ZonesConfHasBeenSet() const
{
    return m_zonesConfHasBeenSet;
}

