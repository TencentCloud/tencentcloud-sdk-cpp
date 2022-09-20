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

#include <tencentcloud/teo/v20220901/model/DDoSGeoIp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSGeoIp::DDoSGeoIp() :
    m_switchHasBeenSet(false),
    m_regionIdsHasBeenSet(false)
{
}

CoreInternalOutcome DDoSGeoIp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIp.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RegionIds") && !value["RegionIds"].IsNull())
    {
        if (!value["RegionIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIp.RegionIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionIds.push_back((*itr).GetInt64());
        }
        m_regionIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSGeoIp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionIds.begin(); itr != m_regionIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string DDoSGeoIp::GetSwitch() const
{
    return m_switch;
}

void DDoSGeoIp::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DDoSGeoIp::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<int64_t> DDoSGeoIp::GetRegionIds() const
{
    return m_regionIds;
}

void DDoSGeoIp::SetRegionIds(const vector<int64_t>& _regionIds)
{
    m_regionIds = _regionIds;
    m_regionIdsHasBeenSet = true;
}

bool DDoSGeoIp::RegionIdsHasBeenSet() const
{
    return m_regionIdsHasBeenSet;
}

