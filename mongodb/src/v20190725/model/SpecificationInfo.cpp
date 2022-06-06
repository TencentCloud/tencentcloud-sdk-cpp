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

#include <tencentcloud/mongodb/v20190725/model/SpecificationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SpecificationInfo::SpecificationInfo() :
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_specItemsHasBeenSet(false),
    m_supportMultiAZHasBeenSet(false)
{
}

CoreInternalOutcome SpecificationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecificationInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecificationInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SpecItems") && !value["SpecItems"].IsNull())
    {
        if (!value["SpecItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpecificationInfo.SpecItems` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpecItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specItems.push_back(item);
        }
        m_specItemsHasBeenSet = true;
    }

    if (value.HasMember("SupportMultiAZ") && !value["SupportMultiAZ"].IsNull())
    {
        if (!value["SupportMultiAZ"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecificationInfo.SupportMultiAZ` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportMultiAZ = value["SupportMultiAZ"].GetInt64();
        m_supportMultiAZHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecificationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_specItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specItems.begin(); itr != m_specItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportMultiAZHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportMultiAZ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportMultiAZ, allocator);
    }

}


string SpecificationInfo::GetRegion() const
{
    return m_region;
}

void SpecificationInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SpecificationInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SpecificationInfo::GetZone() const
{
    return m_zone;
}

void SpecificationInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SpecificationInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<SpecItem> SpecificationInfo::GetSpecItems() const
{
    return m_specItems;
}

void SpecificationInfo::SetSpecItems(const vector<SpecItem>& _specItems)
{
    m_specItems = _specItems;
    m_specItemsHasBeenSet = true;
}

bool SpecificationInfo::SpecItemsHasBeenSet() const
{
    return m_specItemsHasBeenSet;
}

int64_t SpecificationInfo::GetSupportMultiAZ() const
{
    return m_supportMultiAZ;
}

void SpecificationInfo::SetSupportMultiAZ(const int64_t& _supportMultiAZ)
{
    m_supportMultiAZ = _supportMultiAZ;
    m_supportMultiAZHasBeenSet = true;
}

bool SpecificationInfo::SupportMultiAZHasBeenSet() const
{
    return m_supportMultiAZHasBeenSet;
}

