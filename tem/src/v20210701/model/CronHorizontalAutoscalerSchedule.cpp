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

#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscalerSchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

CronHorizontalAutoscalerSchedule::CronHorizontalAutoscalerSchedule() :
    m_startAtHasBeenSet(false),
    m_targetReplicasHasBeenSet(false)
{
}

CoreInternalOutcome CronHorizontalAutoscalerSchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronHorizontalAutoscalerSchedule.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("TargetReplicas") && !value["TargetReplicas"].IsNull())
    {
        if (!value["TargetReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronHorizontalAutoscalerSchedule.TargetReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetReplicas = value["TargetReplicas"].GetInt64();
        m_targetReplicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CronHorizontalAutoscalerSchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_targetReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetReplicas, allocator);
    }

}


string CronHorizontalAutoscalerSchedule::GetStartAt() const
{
    return m_startAt;
}

void CronHorizontalAutoscalerSchedule::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool CronHorizontalAutoscalerSchedule::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

int64_t CronHorizontalAutoscalerSchedule::GetTargetReplicas() const
{
    return m_targetReplicas;
}

void CronHorizontalAutoscalerSchedule::SetTargetReplicas(const int64_t& _targetReplicas)
{
    m_targetReplicas = _targetReplicas;
    m_targetReplicasHasBeenSet = true;
}

bool CronHorizontalAutoscalerSchedule::TargetReplicasHasBeenSet() const
{
    return m_targetReplicasHasBeenSet;
}

