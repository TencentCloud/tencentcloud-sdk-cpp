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

#include <tencentcloud/bm/v20180423/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

RegionInfo::RegionInfo() :
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionDescriptionHasBeenSet(false),
    m_zoneInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome RegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionDescription") && !value["RegionDescription"].IsNull())
    {
        if (!value["RegionDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionDescription = string(value["RegionDescription"].GetString());
        m_regionDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ZoneInfoSet") && !value["ZoneInfoSet"].IsNull())
    {
        if (!value["ZoneInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionInfo.ZoneInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneInfoSet.push_back(item);
        }
        m_zoneInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneInfoSet.begin(); itr != m_zoneInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RegionInfo::GetRegion() const
{
    return m_region;
}

void RegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t RegionInfo::GetRegionId() const
{
    return m_regionId;
}

void RegionInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string RegionInfo::GetRegionDescription() const
{
    return m_regionDescription;
}

void RegionInfo::SetRegionDescription(const string& _regionDescription)
{
    m_regionDescription = _regionDescription;
    m_regionDescriptionHasBeenSet = true;
}

bool RegionInfo::RegionDescriptionHasBeenSet() const
{
    return m_regionDescriptionHasBeenSet;
}

vector<ZoneInfo> RegionInfo::GetZoneInfoSet() const
{
    return m_zoneInfoSet;
}

void RegionInfo::SetZoneInfoSet(const vector<ZoneInfo>& _zoneInfoSet)
{
    m_zoneInfoSet = _zoneInfoSet;
    m_zoneInfoSetHasBeenSet = true;
}

bool RegionInfo::ZoneInfoSetHasBeenSet() const
{
    return m_zoneInfoSetHasBeenSet;
}

