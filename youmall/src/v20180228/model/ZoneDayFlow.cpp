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

#include <tencentcloud/youmall/v20180228/model/ZoneDayFlow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ZoneDayFlow::ZoneDayFlow() :
    m_dayHasBeenSet(false),
    m_flowCountHasBeenSet(false)
{
}

CoreInternalOutcome ZoneDayFlow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Day") && !value["Day"].IsNull())
    {
        if (!value["Day"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDayFlow.Day` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_day = string(value["Day"].GetString());
        m_dayHasBeenSet = true;
    }

    if (value.HasMember("FlowCount") && !value["FlowCount"].IsNull())
    {
        if (!value["FlowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDayFlow.FlowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowCount = value["FlowCount"].GetInt64();
        m_flowCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneDayFlow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Day";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_day.c_str(), allocator).Move(), allocator);
    }

    if (m_flowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowCount, allocator);
    }

}


string ZoneDayFlow::GetDay() const
{
    return m_day;
}

void ZoneDayFlow::SetDay(const string& _day)
{
    m_day = _day;
    m_dayHasBeenSet = true;
}

bool ZoneDayFlow::DayHasBeenSet() const
{
    return m_dayHasBeenSet;
}

int64_t ZoneDayFlow::GetFlowCount() const
{
    return m_flowCount;
}

void ZoneDayFlow::SetFlowCount(const int64_t& _flowCount)
{
    m_flowCount = _flowCount;
    m_flowCountHasBeenSet = true;
}

bool ZoneDayFlow::FlowCountHasBeenSet() const
{
    return m_flowCountHasBeenSet;
}

