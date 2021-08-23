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

#include <tencentcloud/youmall/v20180228/model/TrajectorySunData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

TrajectorySunData::TrajectorySunData() :
    m_zonesHasBeenSet(false),
    m_countHasBeenSet(false),
    m_avgStayTimeHasBeenSet(false)
{
}

CoreInternalOutcome TrajectorySunData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrajectorySunData.Zones` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zones = string(value["Zones"].GetString());
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrajectorySunData.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("AvgStayTime") && !value["AvgStayTime"].IsNull())
    {
        if (!value["AvgStayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrajectorySunData.AvgStayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgStayTime = value["AvgStayTime"].GetInt64();
        m_avgStayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrajectorySunData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zones.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_avgStayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgStayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgStayTime, allocator);
    }

}


string TrajectorySunData::GetZones() const
{
    return m_zones;
}

void TrajectorySunData::SetZones(const string& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool TrajectorySunData::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t TrajectorySunData::GetCount() const
{
    return m_count;
}

void TrajectorySunData::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TrajectorySunData::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t TrajectorySunData::GetAvgStayTime() const
{
    return m_avgStayTime;
}

void TrajectorySunData::SetAvgStayTime(const int64_t& _avgStayTime)
{
    m_avgStayTime = _avgStayTime;
    m_avgStayTimeHasBeenSet = true;
}

bool TrajectorySunData::AvgStayTimeHasBeenSet() const
{
    return m_avgStayTimeHasBeenSet;
}

