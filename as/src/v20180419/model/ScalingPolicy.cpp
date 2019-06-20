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

#include <tencentcloud/as/v20180419/model/ScalingPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

ScalingPolicy::ScalingPolicy() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_autoScalingPolicyIdHasBeenSet(false),
    m_scalingPolicyNameHasBeenSet(false),
    m_adjustmentTypeHasBeenSet(false),
    m_adjustmentValueHasBeenSet(false),
    m_cooldownHasBeenSet(false),
    m_metricAlarmHasBeenSet(false),
    m_notificationUserGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome ScalingPolicy::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScalingPolicy.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingPolicyId") && !value["AutoScalingPolicyId"].IsNull())
    {
        if (!value["AutoScalingPolicyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScalingPolicy.AutoScalingPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingPolicyId = string(value["AutoScalingPolicyId"].GetString());
        m_autoScalingPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("ScalingPolicyName") && !value["ScalingPolicyName"].IsNull())
    {
        if (!value["ScalingPolicyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScalingPolicy.ScalingPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingPolicyName = string(value["ScalingPolicyName"].GetString());
        m_scalingPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("AdjustmentType") && !value["AdjustmentType"].IsNull())
    {
        if (!value["AdjustmentType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScalingPolicy.AdjustmentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adjustmentType = string(value["AdjustmentType"].GetString());
        m_adjustmentTypeHasBeenSet = true;
    }

    if (value.HasMember("AdjustmentValue") && !value["AdjustmentValue"].IsNull())
    {
        if (!value["AdjustmentValue"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ScalingPolicy.AdjustmentValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_adjustmentValue = value["AdjustmentValue"].GetInt64();
        m_adjustmentValueHasBeenSet = true;
    }

    if (value.HasMember("Cooldown") && !value["Cooldown"].IsNull())
    {
        if (!value["Cooldown"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScalingPolicy.Cooldown` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cooldown = value["Cooldown"].GetUint64();
        m_cooldownHasBeenSet = true;
    }

    if (value.HasMember("MetricAlarm") && !value["MetricAlarm"].IsNull())
    {
        if (!value["MetricAlarm"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ScalingPolicy.MetricAlarm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metricAlarm.Deserialize(value["MetricAlarm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricAlarmHasBeenSet = true;
    }

    if (value.HasMember("NotificationUserGroupIds") && !value["NotificationUserGroupIds"].IsNull())
    {
        if (!value["NotificationUserGroupIds"].IsArray())
            return CoreInternalOutcome(Error("response `ScalingPolicy.NotificationUserGroupIds` is not array type"));

        const Value &tmpValue = value["NotificationUserGroupIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notificationUserGroupIds.push_back((*itr).GetString());
        }
        m_notificationUserGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScalingPolicy::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingPolicyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingPolicyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScalingPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scalingPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustmentTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdjustmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_adjustmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustmentValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdjustmentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adjustmentValue, allocator);
    }

    if (m_cooldownHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cooldown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cooldown, allocator);
    }

    if (m_metricAlarmHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_metricAlarm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_notificationUserGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationUserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_notificationUserGroupIds.begin(); itr != m_notificationUserGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ScalingPolicy::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void ScalingPolicy::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool ScalingPolicy::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string ScalingPolicy::GetAutoScalingPolicyId() const
{
    return m_autoScalingPolicyId;
}

void ScalingPolicy::SetAutoScalingPolicyId(const string& _autoScalingPolicyId)
{
    m_autoScalingPolicyId = _autoScalingPolicyId;
    m_autoScalingPolicyIdHasBeenSet = true;
}

bool ScalingPolicy::AutoScalingPolicyIdHasBeenSet() const
{
    return m_autoScalingPolicyIdHasBeenSet;
}

string ScalingPolicy::GetScalingPolicyName() const
{
    return m_scalingPolicyName;
}

void ScalingPolicy::SetScalingPolicyName(const string& _scalingPolicyName)
{
    m_scalingPolicyName = _scalingPolicyName;
    m_scalingPolicyNameHasBeenSet = true;
}

bool ScalingPolicy::ScalingPolicyNameHasBeenSet() const
{
    return m_scalingPolicyNameHasBeenSet;
}

string ScalingPolicy::GetAdjustmentType() const
{
    return m_adjustmentType;
}

void ScalingPolicy::SetAdjustmentType(const string& _adjustmentType)
{
    m_adjustmentType = _adjustmentType;
    m_adjustmentTypeHasBeenSet = true;
}

bool ScalingPolicy::AdjustmentTypeHasBeenSet() const
{
    return m_adjustmentTypeHasBeenSet;
}

int64_t ScalingPolicy::GetAdjustmentValue() const
{
    return m_adjustmentValue;
}

void ScalingPolicy::SetAdjustmentValue(const int64_t& _adjustmentValue)
{
    m_adjustmentValue = _adjustmentValue;
    m_adjustmentValueHasBeenSet = true;
}

bool ScalingPolicy::AdjustmentValueHasBeenSet() const
{
    return m_adjustmentValueHasBeenSet;
}

uint64_t ScalingPolicy::GetCooldown() const
{
    return m_cooldown;
}

void ScalingPolicy::SetCooldown(const uint64_t& _cooldown)
{
    m_cooldown = _cooldown;
    m_cooldownHasBeenSet = true;
}

bool ScalingPolicy::CooldownHasBeenSet() const
{
    return m_cooldownHasBeenSet;
}

MetricAlarm ScalingPolicy::GetMetricAlarm() const
{
    return m_metricAlarm;
}

void ScalingPolicy::SetMetricAlarm(const MetricAlarm& _metricAlarm)
{
    m_metricAlarm = _metricAlarm;
    m_metricAlarmHasBeenSet = true;
}

bool ScalingPolicy::MetricAlarmHasBeenSet() const
{
    return m_metricAlarmHasBeenSet;
}

vector<string> ScalingPolicy::GetNotificationUserGroupIds() const
{
    return m_notificationUserGroupIds;
}

void ScalingPolicy::SetNotificationUserGroupIds(const vector<string>& _notificationUserGroupIds)
{
    m_notificationUserGroupIds = _notificationUserGroupIds;
    m_notificationUserGroupIdsHasBeenSet = true;
}

bool ScalingPolicy::NotificationUserGroupIdsHasBeenSet() const
{
    return m_notificationUserGroupIdsHasBeenSet;
}

