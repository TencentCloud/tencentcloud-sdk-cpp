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

#include <tencentcloud/gse/v20191112/model/FleetStatisticTimes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

FleetStatisticTimes::FleetStatisticTimes() :
    m_beginTimeHasBeenSet(false),
    m_totalUsedTimeSecondsHasBeenSet(false)
{
}

CoreInternalOutcome FleetStatisticTimes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticTimes.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalUsedTimeSeconds") && !value["TotalUsedTimeSeconds"].IsNull())
    {
        if (!value["TotalUsedTimeSeconds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticTimes.TotalUsedTimeSeconds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedTimeSeconds = string(value["TotalUsedTimeSeconds"].GetString());
        m_totalUsedTimeSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FleetStatisticTimes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalUsedTimeSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedTimeSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalUsedTimeSeconds.c_str(), allocator).Move(), allocator);
    }

}


string FleetStatisticTimes::GetBeginTime() const
{
    return m_beginTime;
}

void FleetStatisticTimes::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool FleetStatisticTimes::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string FleetStatisticTimes::GetTotalUsedTimeSeconds() const
{
    return m_totalUsedTimeSeconds;
}

void FleetStatisticTimes::SetTotalUsedTimeSeconds(const string& _totalUsedTimeSeconds)
{
    m_totalUsedTimeSeconds = _totalUsedTimeSeconds;
    m_totalUsedTimeSecondsHasBeenSet = true;
}

bool FleetStatisticTimes::TotalUsedTimeSecondsHasBeenSet() const
{
    return m_totalUsedTimeSecondsHasBeenSet;
}

