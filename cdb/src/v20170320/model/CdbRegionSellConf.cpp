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

#include <tencentcloud/cdb/v20170320/model/CdbRegionSellConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CdbRegionSellConf::CdbRegionSellConf() :
    m_regionNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_isDefaultRegionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionConfigHasBeenSet(false)
{
}

CoreInternalOutcome CdbRegionSellConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbRegionSellConf.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbRegionSellConf.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultRegion") && !value["IsDefaultRegion"].IsNull())
    {
        if (!value["IsDefaultRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbRegionSellConf.IsDefaultRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultRegion = value["IsDefaultRegion"].GetInt64();
        m_isDefaultRegionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbRegionSellConf.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionConfig") && !value["RegionConfig"].IsNull())
    {
        if (!value["RegionConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbRegionSellConf.RegionConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdbZoneSellConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionConfig.push_back(item);
        }
        m_regionConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdbRegionSellConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultRegion, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionConfig.begin(); itr != m_regionConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CdbRegionSellConf::GetRegionName() const
{
    return m_regionName;
}

void CdbRegionSellConf::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool CdbRegionSellConf::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string CdbRegionSellConf::GetArea() const
{
    return m_area;
}

void CdbRegionSellConf::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CdbRegionSellConf::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t CdbRegionSellConf::GetIsDefaultRegion() const
{
    return m_isDefaultRegion;
}

void CdbRegionSellConf::SetIsDefaultRegion(const int64_t& _isDefaultRegion)
{
    m_isDefaultRegion = _isDefaultRegion;
    m_isDefaultRegionHasBeenSet = true;
}

bool CdbRegionSellConf::IsDefaultRegionHasBeenSet() const
{
    return m_isDefaultRegionHasBeenSet;
}

string CdbRegionSellConf::GetRegion() const
{
    return m_region;
}

void CdbRegionSellConf::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CdbRegionSellConf::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<CdbZoneSellConf> CdbRegionSellConf::GetRegionConfig() const
{
    return m_regionConfig;
}

void CdbRegionSellConf::SetRegionConfig(const vector<CdbZoneSellConf>& _regionConfig)
{
    m_regionConfig = _regionConfig;
    m_regionConfigHasBeenSet = true;
}

bool CdbRegionSellConf::RegionConfigHasBeenSet() const
{
    return m_regionConfigHasBeenSet;
}

