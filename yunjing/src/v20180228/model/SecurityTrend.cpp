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

#include <tencentcloud/yunjing/v20180228/model/SecurityTrend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

SecurityTrend::SecurityTrend() :
    m_dateHasBeenSet(false),
    m_eventNumHasBeenSet(false)
{
}

CoreInternalOutcome SecurityTrend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityTrend.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("EventNum") && !value["EventNum"].IsNull())
    {
        if (!value["EventNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityTrend.EventNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventNum = value["EventNum"].GetUint64();
        m_eventNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityTrend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventNum, allocator);
    }

}


string SecurityTrend::GetDate() const
{
    return m_date;
}

void SecurityTrend::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool SecurityTrend::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t SecurityTrend::GetEventNum() const
{
    return m_eventNum;
}

void SecurityTrend::SetEventNum(const uint64_t& _eventNum)
{
    m_eventNum = _eventNum;
    m_eventNumHasBeenSet = true;
}

bool SecurityTrend::EventNumHasBeenSet() const
{
    return m_eventNumHasBeenSet;
}

