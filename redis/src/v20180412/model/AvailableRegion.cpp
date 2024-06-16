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

#include <tencentcloud/redis/v20180412/model/AvailableRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

AvailableRegion::AvailableRegion() :
    m_regionHasBeenSet(false),
    m_availableZonesHasBeenSet(false)
{
}

CoreInternalOutcome AvailableRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableRegion.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AvailableZones") && !value["AvailableZones"].IsNull())
    {
        if (!value["AvailableZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableRegion.AvailableZones` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailableZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableZones.push_back((*itr).GetString());
        }
        m_availableZonesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_availableZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availableZones.begin(); itr != m_availableZones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AvailableRegion::GetRegion() const
{
    return m_region;
}

void AvailableRegion::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AvailableRegion::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> AvailableRegion::GetAvailableZones() const
{
    return m_availableZones;
}

void AvailableRegion::SetAvailableZones(const vector<string>& _availableZones)
{
    m_availableZones = _availableZones;
    m_availableZonesHasBeenSet = true;
}

bool AvailableRegion::AvailableZonesHasBeenSet() const
{
    return m_availableZonesHasBeenSet;
}

