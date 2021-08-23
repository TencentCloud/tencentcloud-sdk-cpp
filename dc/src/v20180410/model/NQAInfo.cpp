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

#include <tencentcloud/dc/v20180410/model/NQAInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

NQAInfo::NQAInfo() :
    m_probeFailedTimesHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_destinationIpHasBeenSet(false)
{
}

CoreInternalOutcome NQAInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProbeFailedTimes") && !value["ProbeFailedTimes"].IsNull())
    {
        if (!value["ProbeFailedTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NQAInfo.ProbeFailedTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probeFailedTimes = value["ProbeFailedTimes"].GetInt64();
        m_probeFailedTimesHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NQAInfo.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("DestinationIp") && !value["DestinationIp"].IsNull())
    {
        if (!value["DestinationIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NQAInfo.DestinationIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationIp = string(value["DestinationIp"].GetString());
        m_destinationIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NQAInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_destinationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationIp.c_str(), allocator).Move(), allocator);
    }

}


int64_t NQAInfo::GetProbeFailedTimes() const
{
    return m_probeFailedTimes;
}

void NQAInfo::SetProbeFailedTimes(const int64_t& _probeFailedTimes)
{
    m_probeFailedTimes = _probeFailedTimes;
    m_probeFailedTimesHasBeenSet = true;
}

bool NQAInfo::ProbeFailedTimesHasBeenSet() const
{
    return m_probeFailedTimesHasBeenSet;
}

int64_t NQAInfo::GetInterval() const
{
    return m_interval;
}

void NQAInfo::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool NQAInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string NQAInfo::GetDestinationIp() const
{
    return m_destinationIp;
}

void NQAInfo::SetDestinationIp(const string& _destinationIp)
{
    m_destinationIp = _destinationIp;
    m_destinationIpHasBeenSet = true;
}

bool NQAInfo::DestinationIpHasBeenSet() const
{
    return m_destinationIpHasBeenSet;
}

