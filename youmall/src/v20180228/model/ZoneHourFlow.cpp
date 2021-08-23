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

#include <tencentcloud/youmall/v20180228/model/ZoneHourFlow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ZoneHourFlow::ZoneHourFlow() :
    m_hourHasBeenSet(false),
    m_flowCountHasBeenSet(false)
{
}

CoreInternalOutcome ZoneHourFlow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneHourFlow.Hour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hour = value["Hour"].GetInt64();
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("FlowCount") && !value["FlowCount"].IsNull())
    {
        if (!value["FlowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneHourFlow.FlowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowCount = value["FlowCount"].GetInt64();
        m_flowCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneHourFlow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hour, allocator);
    }

    if (m_flowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowCount, allocator);
    }

}


int64_t ZoneHourFlow::GetHour() const
{
    return m_hour;
}

void ZoneHourFlow::SetHour(const int64_t& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool ZoneHourFlow::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

int64_t ZoneHourFlow::GetFlowCount() const
{
    return m_flowCount;
}

void ZoneHourFlow::SetFlowCount(const int64_t& _flowCount)
{
    m_flowCount = _flowCount;
    m_flowCountHasBeenSet = true;
}

bool ZoneHourFlow::FlowCountHasBeenSet() const
{
    return m_flowCountHasBeenSet;
}

