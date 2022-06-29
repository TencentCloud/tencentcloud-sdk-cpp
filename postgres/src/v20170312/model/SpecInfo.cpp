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

#include <tencentcloud/postgres/v20170312/model/SpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

SpecInfo::SpecInfo() :
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_specItemInfoListHasBeenSet(false),
    m_supportKMSRegionsHasBeenSet(false)
{
}

CoreInternalOutcome SpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SpecItemInfoList") && !value["SpecItemInfoList"].IsNull())
    {
        if (!value["SpecItemInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpecInfo.SpecItemInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecItemInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpecItemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specItemInfoList.push_back(item);
        }
        m_specItemInfoListHasBeenSet = true;
    }

    if (value.HasMember("SupportKMSRegions") && !value["SupportKMSRegions"].IsNull())
    {
        if (!value["SupportKMSRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpecInfo.SupportKMSRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportKMSRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportKMSRegions.push_back((*itr).GetString());
        }
        m_supportKMSRegionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_specItemInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecItemInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specItemInfoList.begin(); itr != m_specItemInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportKMSRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportKMSRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportKMSRegions.begin(); itr != m_supportKMSRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SpecInfo::GetRegion() const
{
    return m_region;
}

void SpecInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SpecInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SpecInfo::GetZone() const
{
    return m_zone;
}

void SpecInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SpecInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<SpecItemInfo> SpecInfo::GetSpecItemInfoList() const
{
    return m_specItemInfoList;
}

void SpecInfo::SetSpecItemInfoList(const vector<SpecItemInfo>& _specItemInfoList)
{
    m_specItemInfoList = _specItemInfoList;
    m_specItemInfoListHasBeenSet = true;
}

bool SpecInfo::SpecItemInfoListHasBeenSet() const
{
    return m_specItemInfoListHasBeenSet;
}

vector<string> SpecInfo::GetSupportKMSRegions() const
{
    return m_supportKMSRegions;
}

void SpecInfo::SetSupportKMSRegions(const vector<string>& _supportKMSRegions)
{
    m_supportKMSRegions = _supportKMSRegions;
    m_supportKMSRegionsHasBeenSet = true;
}

bool SpecInfo::SupportKMSRegionsHasBeenSet() const
{
    return m_supportKMSRegionsHasBeenSet;
}

