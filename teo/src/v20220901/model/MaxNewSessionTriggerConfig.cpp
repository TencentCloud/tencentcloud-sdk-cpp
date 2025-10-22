/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/MaxNewSessionTriggerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MaxNewSessionTriggerConfig::MaxNewSessionTriggerConfig() :
    m_maxNewSessionCountIntervalHasBeenSet(false),
    m_maxNewSessionCountThresholdHasBeenSet(false)
{
}

CoreInternalOutcome MaxNewSessionTriggerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxNewSessionCountInterval") && !value["MaxNewSessionCountInterval"].IsNull())
    {
        if (!value["MaxNewSessionCountInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaxNewSessionTriggerConfig.MaxNewSessionCountInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxNewSessionCountInterval = string(value["MaxNewSessionCountInterval"].GetString());
        m_maxNewSessionCountIntervalHasBeenSet = true;
    }

    if (value.HasMember("MaxNewSessionCountThreshold") && !value["MaxNewSessionCountThreshold"].IsNull())
    {
        if (!value["MaxNewSessionCountThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxNewSessionTriggerConfig.MaxNewSessionCountThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNewSessionCountThreshold = value["MaxNewSessionCountThreshold"].GetInt64();
        m_maxNewSessionCountThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxNewSessionTriggerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxNewSessionCountIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNewSessionCountInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxNewSessionCountInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNewSessionCountThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNewSessionCountThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNewSessionCountThreshold, allocator);
    }

}


string MaxNewSessionTriggerConfig::GetMaxNewSessionCountInterval() const
{
    return m_maxNewSessionCountInterval;
}

void MaxNewSessionTriggerConfig::SetMaxNewSessionCountInterval(const string& _maxNewSessionCountInterval)
{
    m_maxNewSessionCountInterval = _maxNewSessionCountInterval;
    m_maxNewSessionCountIntervalHasBeenSet = true;
}

bool MaxNewSessionTriggerConfig::MaxNewSessionCountIntervalHasBeenSet() const
{
    return m_maxNewSessionCountIntervalHasBeenSet;
}

int64_t MaxNewSessionTriggerConfig::GetMaxNewSessionCountThreshold() const
{
    return m_maxNewSessionCountThreshold;
}

void MaxNewSessionTriggerConfig::SetMaxNewSessionCountThreshold(const int64_t& _maxNewSessionCountThreshold)
{
    m_maxNewSessionCountThreshold = _maxNewSessionCountThreshold;
    m_maxNewSessionCountThresholdHasBeenSet = true;
}

bool MaxNewSessionTriggerConfig::MaxNewSessionCountThresholdHasBeenSet() const
{
    return m_maxNewSessionCountThresholdHasBeenSet;
}

