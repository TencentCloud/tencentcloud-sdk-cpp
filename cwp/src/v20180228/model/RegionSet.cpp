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

#include <tencentcloud/cwp/v20180228/model/RegionSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RegionSet::RegionSet() :
    m_regionNameHasBeenSet(false),
    m_zoneSetHasBeenSet(false)
{
}

CoreInternalOutcome RegionSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionSet.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneSet") && !value["ZoneSet"].IsNull())
    {
        if (!value["ZoneSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionSet.ZoneSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneInfo item;
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

void RegionSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
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

}


string RegionSet::GetRegionName() const
{
    return m_regionName;
}

void RegionSet::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionSet::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

vector<ZoneInfo> RegionSet::GetZoneSet() const
{
    return m_zoneSet;
}

void RegionSet::SetZoneSet(const vector<ZoneInfo>& _zoneSet)
{
    m_zoneSet = _zoneSet;
    m_zoneSetHasBeenSet = true;
}

bool RegionSet::ZoneSetHasBeenSet() const
{
    return m_zoneSetHasBeenSet;
}

