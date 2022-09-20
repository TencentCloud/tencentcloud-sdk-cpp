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

#include <tencentcloud/teo/v20220901/model/SpeedTestingQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SpeedTestingQuota::SpeedTestingQuota() :
    m_totalTestRunsHasBeenSet(false),
    m_availableTestRunsHasBeenSet(false)
{
}

CoreInternalOutcome SpeedTestingQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalTestRuns") && !value["TotalTestRuns"].IsNull())
    {
        if (!value["TotalTestRuns"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingQuota.TotalTestRuns` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTestRuns = value["TotalTestRuns"].GetInt64();
        m_totalTestRunsHasBeenSet = true;
    }

    if (value.HasMember("AvailableTestRuns") && !value["AvailableTestRuns"].IsNull())
    {
        if (!value["AvailableTestRuns"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingQuota.AvailableTestRuns` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableTestRuns = value["AvailableTestRuns"].GetInt64();
        m_availableTestRunsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedTestingQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTestRunsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTestRuns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTestRuns, allocator);
    }

    if (m_availableTestRunsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableTestRuns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableTestRuns, allocator);
    }

}


int64_t SpeedTestingQuota::GetTotalTestRuns() const
{
    return m_totalTestRuns;
}

void SpeedTestingQuota::SetTotalTestRuns(const int64_t& _totalTestRuns)
{
    m_totalTestRuns = _totalTestRuns;
    m_totalTestRunsHasBeenSet = true;
}

bool SpeedTestingQuota::TotalTestRunsHasBeenSet() const
{
    return m_totalTestRunsHasBeenSet;
}

int64_t SpeedTestingQuota::GetAvailableTestRuns() const
{
    return m_availableTestRuns;
}

void SpeedTestingQuota::SetAvailableTestRuns(const int64_t& _availableTestRuns)
{
    m_availableTestRuns = _availableTestRuns;
    m_availableTestRunsHasBeenSet = true;
}

bool SpeedTestingQuota::AvailableTestRunsHasBeenSet() const
{
    return m_availableTestRunsHasBeenSet;
}

