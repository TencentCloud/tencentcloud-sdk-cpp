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

#include <tencentcloud/dlc/v20210125/model/PrestoMonitorMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PrestoMonitorMetrics::PrestoMonitorMetrics() :
    m_localCacheHitRateHasBeenSet(false),
    m_fragmentCacheHitRateHasBeenSet(false)
{
}

CoreInternalOutcome PrestoMonitorMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalCacheHitRate") && !value["LocalCacheHitRate"].IsNull())
    {
        if (!value["LocalCacheHitRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrestoMonitorMetrics.LocalCacheHitRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_localCacheHitRate = value["LocalCacheHitRate"].GetDouble();
        m_localCacheHitRateHasBeenSet = true;
    }

    if (value.HasMember("FragmentCacheHitRate") && !value["FragmentCacheHitRate"].IsNull())
    {
        if (!value["FragmentCacheHitRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrestoMonitorMetrics.FragmentCacheHitRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fragmentCacheHitRate = value["FragmentCacheHitRate"].GetDouble();
        m_fragmentCacheHitRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrestoMonitorMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localCacheHitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalCacheHitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localCacheHitRate, allocator);
    }

    if (m_fragmentCacheHitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentCacheHitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragmentCacheHitRate, allocator);
    }

}


double PrestoMonitorMetrics::GetLocalCacheHitRate() const
{
    return m_localCacheHitRate;
}

void PrestoMonitorMetrics::SetLocalCacheHitRate(const double& _localCacheHitRate)
{
    m_localCacheHitRate = _localCacheHitRate;
    m_localCacheHitRateHasBeenSet = true;
}

bool PrestoMonitorMetrics::LocalCacheHitRateHasBeenSet() const
{
    return m_localCacheHitRateHasBeenSet;
}

double PrestoMonitorMetrics::GetFragmentCacheHitRate() const
{
    return m_fragmentCacheHitRate;
}

void PrestoMonitorMetrics::SetFragmentCacheHitRate(const double& _fragmentCacheHitRate)
{
    m_fragmentCacheHitRate = _fragmentCacheHitRate;
    m_fragmentCacheHitRateHasBeenSet = true;
}

bool PrestoMonitorMetrics::FragmentCacheHitRateHasBeenSet() const
{
    return m_fragmentCacheHitRateHasBeenSet;
}

