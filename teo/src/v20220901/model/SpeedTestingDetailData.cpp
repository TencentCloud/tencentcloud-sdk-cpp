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

#include <tencentcloud/teo/v20220901/model/SpeedTestingDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SpeedTestingDetailData::SpeedTestingDetailData() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_districtStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome SpeedTestingDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingDetailData.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingDetailData.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("DistrictStatistics") && !value["DistrictStatistics"].IsNull())
    {
        if (!value["DistrictStatistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpeedTestingDetailData.DistrictStatistics` is not array type"));

        const rapidjson::Value &tmpValue = value["DistrictStatistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DistrictStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_districtStatistics.push_back(item);
        }
        m_districtStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedTestingDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_districtStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistrictStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_districtStatistics.begin(); itr != m_districtStatistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SpeedTestingDetailData::GetZoneId() const
{
    return m_zoneId;
}

void SpeedTestingDetailData::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SpeedTestingDetailData::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SpeedTestingDetailData::GetZoneName() const
{
    return m_zoneName;
}

void SpeedTestingDetailData::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool SpeedTestingDetailData::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

vector<DistrictStatistics> SpeedTestingDetailData::GetDistrictStatistics() const
{
    return m_districtStatistics;
}

void SpeedTestingDetailData::SetDistrictStatistics(const vector<DistrictStatistics>& _districtStatistics)
{
    m_districtStatistics = _districtStatistics;
    m_districtStatisticsHasBeenSet = true;
}

bool SpeedTestingDetailData::DistrictStatisticsHasBeenSet() const
{
    return m_districtStatisticsHasBeenSet;
}

