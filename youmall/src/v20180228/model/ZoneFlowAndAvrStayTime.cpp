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

#include <tencentcloud/youmall/v20180228/model/ZoneFlowAndAvrStayTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ZoneFlowAndAvrStayTime::ZoneFlowAndAvrStayTime() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_flowCountHasBeenSet(false),
    m_avrStayTimeHasBeenSet(false)
{
}

CoreInternalOutcome ZoneFlowAndAvrStayTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFlowAndAvrStayTime.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFlowAndAvrStayTime.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("FlowCount") && !value["FlowCount"].IsNull())
    {
        if (!value["FlowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFlowAndAvrStayTime.FlowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowCount = value["FlowCount"].GetUint64();
        m_flowCountHasBeenSet = true;
    }

    if (value.HasMember("AvrStayTime") && !value["AvrStayTime"].IsNull())
    {
        if (!value["AvrStayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFlowAndAvrStayTime.AvrStayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_avrStayTime = value["AvrStayTime"].GetUint64();
        m_avrStayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneFlowAndAvrStayTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_flowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowCount, allocator);
    }

    if (m_avrStayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvrStayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avrStayTime, allocator);
    }

}


int64_t ZoneFlowAndAvrStayTime::GetZoneId() const
{
    return m_zoneId;
}

void ZoneFlowAndAvrStayTime::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneFlowAndAvrStayTime::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZoneFlowAndAvrStayTime::GetZoneName() const
{
    return m_zoneName;
}

void ZoneFlowAndAvrStayTime::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneFlowAndAvrStayTime::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

uint64_t ZoneFlowAndAvrStayTime::GetFlowCount() const
{
    return m_flowCount;
}

void ZoneFlowAndAvrStayTime::SetFlowCount(const uint64_t& _flowCount)
{
    m_flowCount = _flowCount;
    m_flowCountHasBeenSet = true;
}

bool ZoneFlowAndAvrStayTime::FlowCountHasBeenSet() const
{
    return m_flowCountHasBeenSet;
}

uint64_t ZoneFlowAndAvrStayTime::GetAvrStayTime() const
{
    return m_avrStayTime;
}

void ZoneFlowAndAvrStayTime::SetAvrStayTime(const uint64_t& _avrStayTime)
{
    m_avrStayTime = _avrStayTime;
    m_avrStayTimeHasBeenSet = true;
}

bool ZoneFlowAndAvrStayTime::AvrStayTimeHasBeenSet() const
{
    return m_avrStayTimeHasBeenSet;
}

