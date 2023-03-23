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

#include <tencentcloud/as/v20180419/model/CreateScalingPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

CreateScalingPolicyRequest::CreateScalingPolicyRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_scalingPolicyNameHasBeenSet(false),
    m_scalingPolicyTypeHasBeenSet(false),
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

string CreateScalingPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scalingPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingPolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingPolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scalingPolicyType.c_str(), allocator).Move(), allocator);
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


string CreateScalingPolicyRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void CreateScalingPolicyRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool CreateScalingPolicyRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string CreateScalingPolicyRequest::GetScalingPolicyName() const
{
    return m_scalingPolicyName;
}

void CreateScalingPolicyRequest::SetScalingPolicyName(const string& _scalingPolicyName)
{
    m_scalingPolicyName = _scalingPolicyName;
    m_scalingPolicyNameHasBeenSet = true;
}

bool CreateScalingPolicyRequest::ScalingPolicyNameHasBeenSet() const
{
    return m_scalingPolicyNameHasBeenSet;
}

string CreateScalingPolicyRequest::GetScalingPolicyType() const
{
    return m_scalingPolicyType;
}

void CreateScalingPolicyRequest::SetScalingPolicyType(const string& _scalingPolicyType)
{
    m_scalingPolicyType = _scalingPolicyType;
    m_scalingPolicyTypeHasBeenSet = true;
}

bool CreateScalingPolicyRequest::ScalingPolicyTypeHasBeenSet() const
{
    return m_scalingPolicyTypeHasBeenSet;
}

string CreateScalingPolicyRequest::GetAdjustmentType() const
{
    return m_adjustmentType;
}

void CreateScalingPolicyRequest::SetAdjustmentType(const string& _adjustmentType)
{
    m_adjustmentType = _adjustmentType;
    m_adjustmentTypeHasBeenSet = true;
}

bool CreateScalingPolicyRequest::AdjustmentTypeHasBeenSet() const
{
    return m_adjustmentTypeHasBeenSet;
}

int64_t CreateScalingPolicyRequest::GetAdjustmentValue() const
{
    return m_adjustmentValue;
}

void CreateScalingPolicyRequest::SetAdjustmentValue(const int64_t& _adjustmentValue)
{
    m_adjustmentValue = _adjustmentValue;
    m_adjustmentValueHasBeenSet = true;
}

bool CreateScalingPolicyRequest::AdjustmentValueHasBeenSet() const
{
    return m_adjustmentValueHasBeenSet;
}

uint64_t CreateScalingPolicyRequest::GetCooldown() const
{
    return m_cooldown;
}

void CreateScalingPolicyRequest::SetCooldown(const uint64_t& _cooldown)
{
    m_cooldown = _cooldown;
    m_cooldownHasBeenSet = true;
}

bool CreateScalingPolicyRequest::CooldownHasBeenSet() const
{
    return m_cooldownHasBeenSet;
}

MetricAlarm CreateScalingPolicyRequest::GetMetricAlarm() const
{
    return m_metricAlarm;
}

void CreateScalingPolicyRequest::SetMetricAlarm(const MetricAlarm& _metricAlarm)
{
    m_metricAlarm = _metricAlarm;
    m_metricAlarmHasBeenSet = true;
}

bool CreateScalingPolicyRequest::MetricAlarmHasBeenSet() const
{
    return m_metricAlarmHasBeenSet;
}

string CreateScalingPolicyRequest::GetPredefinedMetricType() const
{
    return m_predefinedMetricType;
}

void CreateScalingPolicyRequest::SetPredefinedMetricType(const string& _predefinedMetricType)
{
    m_predefinedMetricType = _predefinedMetricType;
    m_predefinedMetricTypeHasBeenSet = true;
}

bool CreateScalingPolicyRequest::PredefinedMetricTypeHasBeenSet() const
{
    return m_predefinedMetricTypeHasBeenSet;
}

uint64_t CreateScalingPolicyRequest::GetTargetValue() const
{
    return m_targetValue;
}

void CreateScalingPolicyRequest::SetTargetValue(const uint64_t& _targetValue)
{
    m_targetValue = _targetValue;
    m_targetValueHasBeenSet = true;
}

bool CreateScalingPolicyRequest::TargetValueHasBeenSet() const
{
    return m_targetValueHasBeenSet;
}

uint64_t CreateScalingPolicyRequest::GetEstimatedInstanceWarmup() const
{
    return m_estimatedInstanceWarmup;
}

void CreateScalingPolicyRequest::SetEstimatedInstanceWarmup(const uint64_t& _estimatedInstanceWarmup)
{
    m_estimatedInstanceWarmup = _estimatedInstanceWarmup;
    m_estimatedInstanceWarmupHasBeenSet = true;
}

bool CreateScalingPolicyRequest::EstimatedInstanceWarmupHasBeenSet() const
{
    return m_estimatedInstanceWarmupHasBeenSet;
}

bool CreateScalingPolicyRequest::GetDisableScaleIn() const
{
    return m_disableScaleIn;
}

void CreateScalingPolicyRequest::SetDisableScaleIn(const bool& _disableScaleIn)
{
    m_disableScaleIn = _disableScaleIn;
    m_disableScaleInHasBeenSet = true;
}

bool CreateScalingPolicyRequest::DisableScaleInHasBeenSet() const
{
    return m_disableScaleInHasBeenSet;
}

vector<string> CreateScalingPolicyRequest::GetNotificationUserGroupIds() const
{
    return m_notificationUserGroupIds;
}

void CreateScalingPolicyRequest::SetNotificationUserGroupIds(const vector<string>& _notificationUserGroupIds)
{
    m_notificationUserGroupIds = _notificationUserGroupIds;
    m_notificationUserGroupIdsHasBeenSet = true;
}

bool CreateScalingPolicyRequest::NotificationUserGroupIdsHasBeenSet() const
{
    return m_notificationUserGroupIdsHasBeenSet;
}


