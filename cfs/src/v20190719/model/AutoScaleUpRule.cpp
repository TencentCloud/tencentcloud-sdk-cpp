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

#include <tencentcloud/cfs/v20190719/model/AutoScaleUpRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

AutoScaleUpRule::AutoScaleUpRule() :
    m_statusHasBeenSet(false),
    m_scaleThresholdHasBeenSet(false),
    m_targetThresholdHasBeenSet(false)
{
}

CoreInternalOutcome AutoScaleUpRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleUpRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScaleThreshold") && !value["ScaleThreshold"].IsNull())
    {
        if (!value["ScaleThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleUpRule.ScaleThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleThreshold = value["ScaleThreshold"].GetUint64();
        m_scaleThresholdHasBeenSet = true;
    }

    if (value.HasMember("TargetThreshold") && !value["TargetThreshold"].IsNull())
    {
        if (!value["TargetThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleUpRule.TargetThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetThreshold = value["TargetThreshold"].GetUint64();
        m_targetThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScaleUpRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleThreshold, allocator);
    }

    if (m_targetThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetThreshold, allocator);
    }

}


string AutoScaleUpRule::GetStatus() const
{
    return m_status;
}

void AutoScaleUpRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AutoScaleUpRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AutoScaleUpRule::GetScaleThreshold() const
{
    return m_scaleThreshold;
}

void AutoScaleUpRule::SetScaleThreshold(const uint64_t& _scaleThreshold)
{
    m_scaleThreshold = _scaleThreshold;
    m_scaleThresholdHasBeenSet = true;
}

bool AutoScaleUpRule::ScaleThresholdHasBeenSet() const
{
    return m_scaleThresholdHasBeenSet;
}

uint64_t AutoScaleUpRule::GetTargetThreshold() const
{
    return m_targetThreshold;
}

void AutoScaleUpRule::SetTargetThreshold(const uint64_t& _targetThreshold)
{
    m_targetThreshold = _targetThreshold;
    m_targetThresholdHasBeenSet = true;
}

bool AutoScaleUpRule::TargetThresholdHasBeenSet() const
{
    return m_targetThresholdHasBeenSet;
}

