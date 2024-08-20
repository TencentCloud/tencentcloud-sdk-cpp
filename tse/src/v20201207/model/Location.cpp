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

#include <tencentcloud/tse/v20201207/model/Location.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

Location::Location() :
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_campusHasBeenSet(false)
{
}

CoreInternalOutcome Location::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Campus") && !value["Campus"].IsNull())
    {
        if (!value["Campus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Campus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_campus = string(value["Campus"].GetString());
        m_campusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Location::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_campusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Campus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_campus.c_str(), allocator).Move(), allocator);
    }

}


string Location::GetRegion() const
{
    return m_region;
}

void Location::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Location::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Location::GetZone() const
{
    return m_zone;
}

void Location::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Location::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Location::GetCampus() const
{
    return m_campus;
}

void Location::SetCampus(const string& _campus)
{
    m_campus = _campus;
    m_campusHasBeenSet = true;
}

bool Location::CampusHasBeenSet() const
{
    return m_campusHasBeenSet;
}

