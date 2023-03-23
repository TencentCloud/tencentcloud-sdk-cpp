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

#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ModifyScalingPolicyRequest::ModifyScalingPolicyRequest() :
    m_autoScalingPolicyIdHasBeenSet(false),
    m_scalingPolicyNameHasBeenSet(false),
    m_adjustmentTypeHasBeenSet(false),
    m_adjustmentValueHasBeenSet(false),
    m_cooldownHasBeenSet(false),
    m_metricAlarmHasBeenSet(false),
    m_predefinedMetricTypeHasBeenSet(false),
    m_targetValueHasBeenSet(false),
    m_estimatedInstanceWarmupHasBeenSet(false),
    m_disableScaleInHasBeenSet(false),
    m_notificationUserGroupIdsHasBeenSet(false)
{
}

string ModifyScalingPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scalingPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdjustmentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adjustmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustmentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdjustmentValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adjustmentValue, allocator);
    }

    if (m_cooldownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cooldown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cooldown, allocator);
    }

    if (m_metricAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricAlarm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metricAlarm.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_predefinedMetricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredefinedMetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_predefinedMetricType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetValue, allocator);
    }

    if (m_estimatedInstanceWarmupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedInstanceWarmup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_estimatedInstanceWarmup, allocator);
    }

    if (m_disableScaleInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableScaleIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableScaleIn, allocator);
    }

    if (m_notificationUserGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationUserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notificationUserGroupIds.begin(); itr != m_notificationUserGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyScalingPolicyRequest::GetAutoScalingPolicyId() const
{
    return m_autoScalingPolicyId;
}

void ModifyScalingPolicyRequest::SetAutoScalingPolicyId(const string& _autoScalingPolicyId)
{
    m_autoScalingPolicyId = _autoScalingPolicyId;
    m_autoScalingPolicyIdHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::AutoScalingPolicyIdHasBeenSet() const
{
    return m_autoScalingPolicyIdHasBeenSet;
}

string ModifyScalingPolicyRequest::GetScalingPolicyName() const
{
    return m_scalingPolicyName;
}

void ModifyScalingPolicyRequest::SetScalingPolicyName(const string& _scalingPolicyName)
{
    m_scalingPolicyName = _scalingPolicyName;
    m_scalingPolicyNameHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::ScalingPolicyNameHasBeenSet() const
{
    return m_scalingPolicyNameHasBeenSet;
}

string ModifyScalingPolicyRequest::GetAdjustmentType() const
{
    return m_adjustmentType;
}

void ModifyScalingPolicyRequest::SetAdjustmentType(const string& _adjustmentType)
{
    m_adjustmentType = _adjustmentType;
    m_adjustmentTypeHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::AdjustmentTypeHasBeenSet() const
{
    return m_adjustmentTypeHasBeenSet;
}

int64_t ModifyScalingPolicyRequest::GetAdjustmentValue() const
{
    return m_adjustmentValue;
}

void ModifyScalingPolicyRequest::SetAdjustmentValue(const int64_t& _adjustmentValue)
{
    m_adjustmentValue = _adjustmentValue;
    m_adjustmentValueHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::AdjustmentValueHasBeenSet() const
{
    return m_adjustmentValueHasBeenSet;
}

uint64_t ModifyScalingPolicyRequest::GetCooldown() const
{
    return m_cooldown;
}

void ModifyScalingPolicyRequest::SetCooldown(const uint64_t& _cooldown)
{
    m_cooldown = _cooldown;
    m_cooldownHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::CooldownHasBeenSet() const
{
    return m_cooldownHasBeenSet;
}

MetricAlarm ModifyScalingPolicyRequest::GetMetricAlarm() const
{
    return m_metricAlarm;
}

void ModifyScalingPolicyRequest::SetMetricAlarm(const MetricAlarm& _metricAlarm)
{
    m_metricAlarm = _metricAlarm;
    m_metricAlarmHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::MetricAlarmHasBeenSet() const
{
    return m_metricAlarmHasBeenSet;
}

string ModifyScalingPolicyRequest::GetPredefinedMetricType() const
{
    return m_predefinedMetricType;
}

void ModifyScalingPolicyRequest::SetPredefinedMetricType(const string& _predefinedMetricType)
{
    m_predefinedMetricType = _predefinedMetricType;
    m_predefinedMetricTypeHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::PredefinedMetricTypeHasBeenSet() const
{
    return m_predefinedMetricTypeHasBeenSet;
}

uint64_t ModifyScalingPolicyRequest::GetTargetValue() const
{
    return m_targetValue;
}

void ModifyScalingPolicyRequest::SetTargetValue(const uint64_t& _targetValue)
{
    m_targetValue = _targetValue;
    m_targetValueHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::TargetValueHasBeenSet() const
{
    return m_targetValueHasBeenSet;
}

uint64_t ModifyScalingPolicyRequest::GetEstimatedInstanceWarmup() const
{
    return m_estimatedInstanceWarmup;
}

void ModifyScalingPolicyRequest::SetEstimatedInstanceWarmup(const uint64_t& _estimatedInstanceWarmup)
{
    m_estimatedInstanceWarmup = _estimatedInstanceWarmup;
    m_estimatedInstanceWarmupHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::EstimatedInstanceWarmupHasBeenSet() const
{
    return m_estimatedInstanceWarmupHasBeenSet;
}

bool ModifyScalingPolicyRequest::GetDisableScaleIn() const
{
    return m_disableScaleIn;
}

void ModifyScalingPolicyRequest::SetDisableScaleIn(const bool& _disableScaleIn)
{
    m_disableScaleIn = _disableScaleIn;
    m_disableScaleInHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::DisableScaleInHasBeenSet() const
{
    return m_disableScaleInHasBeenSet;
}

vector<string> ModifyScalingPolicyRequest::GetNotificationUserGroupIds() const
{
    return m_notificationUserGroupIds;
}

void ModifyScalingPolicyRequest::SetNotificationUserGroupIds(const vector<string>& _notificationUserGroupIds)
{
    m_notificationUserGroupIds = _notificationUserGroupIds;
    m_notificationUserGroupIdsHasBeenSet = true;
}

bool ModifyScalingPolicyRequest::NotificationUserGroupIdsHasBeenSet() const
{
    return m_notificationUserGroupIdsHasBeenSet;
}


