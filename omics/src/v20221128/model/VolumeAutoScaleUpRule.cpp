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

#include <tencentcloud/omics/v20221128/model/VolumeAutoScaleUpRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

VolumeAutoScaleUpRule::VolumeAutoScaleUpRule() :
    m_statusHasBeenSet(false),
    m_scaleThresholdHasBeenSet(false),
    m_targetThresholdHasBeenSet(false)
{
}

CoreInternalOutcome VolumeAutoScaleUpRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeAutoScaleUpRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScaleThreshold") && !value["ScaleThreshold"].IsNull())
    {
        if (!value["ScaleThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeAutoScaleUpRule.ScaleThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleThreshold = value["ScaleThreshold"].GetInt64();
        m_scaleThresholdHasBeenSet = true;
    }

    if (value.HasMember("TargetThreshold") && !value["TargetThreshold"].IsNull())
    {
        if (!value["TargetThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeAutoScaleUpRule.TargetThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetThreshold = value["TargetThreshold"].GetInt64();
        m_targetThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeAutoScaleUpRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string VolumeAutoScaleUpRule::GetStatus() const
{
    return m_status;
}

void VolumeAutoScaleUpRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VolumeAutoScaleUpRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t VolumeAutoScaleUpRule::GetScaleThreshold() const
{
    return m_scaleThreshold;
}

void VolumeAutoScaleUpRule::SetScaleThreshold(const int64_t& _scaleThreshold)
{
    m_scaleThreshold = _scaleThreshold;
    m_scaleThresholdHasBeenSet = true;
}

bool VolumeAutoScaleUpRule::ScaleThresholdHasBeenSet() const
{
    return m_scaleThresholdHasBeenSet;
}

int64_t VolumeAutoScaleUpRule::GetTargetThreshold() const
{
    return m_targetThreshold;
}

void VolumeAutoScaleUpRule::SetTargetThreshold(const int64_t& _targetThreshold)
{
    m_targetThreshold = _targetThreshold;
    m_targetThresholdHasBeenSet = true;
}

bool VolumeAutoScaleUpRule::TargetThresholdHasBeenSet() const
{
    return m_targetThresholdHasBeenSet;
}

