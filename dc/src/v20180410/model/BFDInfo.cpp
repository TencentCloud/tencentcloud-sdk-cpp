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

#include <tencentcloud/dc/v20180410/model/BFDInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

BFDInfo::BFDInfo() :
    m_probeFailedTimesHasBeenSet(false),
    m_intervalHasBeenSet(false)
{
}

CoreInternalOutcome BFDInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProbeFailedTimes") && !value["ProbeFailedTimes"].IsNull())
    {
        if (!value["ProbeFailedTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BFDInfo.ProbeFailedTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probeFailedTimes = value["ProbeFailedTimes"].GetInt64();
        m_probeFailedTimesHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BFDInfo.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BFDInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_probeFailedTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeFailedTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeFailedTimes, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

}


int64_t BFDInfo::GetProbeFailedTimes() const
{
    return m_probeFailedTimes;
}

void BFDInfo::SetProbeFailedTimes(const int64_t& _probeFailedTimes)
{
    m_probeFailedTimes = _probeFailedTimes;
    m_probeFailedTimesHasBeenSet = true;
}

bool BFDInfo::ProbeFailedTimesHasBeenSet() const
{
    return m_probeFailedTimesHasBeenSet;
}

int64_t BFDInfo::GetInterval() const
{
    return m_interval;
}

void BFDInfo::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool BFDInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

