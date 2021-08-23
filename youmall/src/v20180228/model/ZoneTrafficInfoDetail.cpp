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

#include <tencentcloud/youmall/v20180228/model/ZoneTrafficInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ZoneTrafficInfoDetail::ZoneTrafficInfoDetail() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_trafficTotalCountHasBeenSet(false),
    m_avgStayTimeHasBeenSet(false)
{
}

CoreInternalOutcome ZoneTrafficInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneTrafficInfoDetail.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneTrafficInfoDetail.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("TrafficTotalCount") && !value["TrafficTotalCount"].IsNull())
    {
        if (!value["TrafficTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneTrafficInfoDetail.TrafficTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficTotalCount = value["TrafficTotalCount"].GetUint64();
        m_trafficTotalCountHasBeenSet = true;
    }

    if (value.HasMember("AvgStayTime") && !value["AvgStayTime"].IsNull())
    {
        if (!value["AvgStayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneTrafficInfoDetail.AvgStayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_avgStayTime = value["AvgStayTime"].GetUint64();
        m_avgStayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneTrafficInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficTotalCount, allocator);
    }

    if (m_avgStayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgStayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgStayTime, allocator);
    }

}


uint64_t ZoneTrafficInfoDetail::GetZoneId() const
{
    return m_zoneId;
}

void ZoneTrafficInfoDetail::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneTrafficInfoDetail::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZoneTrafficInfoDetail::GetZoneName() const
{
    return m_zoneName;
}

void ZoneTrafficInfoDetail::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneTrafficInfoDetail::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

uint64_t ZoneTrafficInfoDetail::GetTrafficTotalCount() const
{
    return m_trafficTotalCount;
}

void ZoneTrafficInfoDetail::SetTrafficTotalCount(const uint64_t& _trafficTotalCount)
{
    m_trafficTotalCount = _trafficTotalCount;
    m_trafficTotalCountHasBeenSet = true;
}

bool ZoneTrafficInfoDetail::TrafficTotalCountHasBeenSet() const
{
    return m_trafficTotalCountHasBeenSet;
}

uint64_t ZoneTrafficInfoDetail::GetAvgStayTime() const
{
    return m_avgStayTime;
}

void ZoneTrafficInfoDetail::SetAvgStayTime(const uint64_t& _avgStayTime)
{
    m_avgStayTime = _avgStayTime;
    m_avgStayTimeHasBeenSet = true;
}

bool ZoneTrafficInfoDetail::AvgStayTimeHasBeenSet() const
{
    return m_avgStayTimeHasBeenSet;
}

