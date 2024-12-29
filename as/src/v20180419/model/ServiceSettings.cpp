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

#include <tencentcloud/as/v20180419/model/ServiceSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ServiceSettings::ServiceSettings() :
    m_replaceMonitorUnhealthyHasBeenSet(false),
    m_scalingModeHasBeenSet(false),
    m_replaceLoadBalancerUnhealthyHasBeenSet(false),
    m_replaceModeHasBeenSet(false),
    m_autoUpdateInstanceTagsHasBeenSet(false),
    m_desiredCapacitySyncWithMaxMinSizeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplaceMonitorUnhealthy") && !value["ReplaceMonitorUnhealthy"].IsNull())
    {
        if (!value["ReplaceMonitorUnhealthy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSettings.ReplaceMonitorUnhealthy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_replaceMonitorUnhealthy = value["ReplaceMonitorUnhealthy"].GetBool();
        m_replaceMonitorUnhealthyHasBeenSet = true;
    }

    if (value.HasMember("ScalingMode") && !value["ScalingMode"].IsNull())
    {
        if (!value["ScalingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSettings.ScalingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingMode = string(value["ScalingMode"].GetString());
        m_scalingModeHasBeenSet = true;
    }

    if (value.HasMember("ReplaceLoadBalancerUnhealthy") && !value["ReplaceLoadBalancerUnhealthy"].IsNull())
    {
        if (!value["ReplaceLoadBalancerUnhealthy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSettings.ReplaceLoadBalancerUnhealthy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_replaceLoadBalancerUnhealthy = value["ReplaceLoadBalancerUnhealthy"].GetBool();
        m_replaceLoadBalancerUnhealthyHasBeenSet = true;
    }

    if (value.HasMember("ReplaceMode") && !value["ReplaceMode"].IsNull())
    {
        if (!value["ReplaceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSettings.ReplaceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replaceMode = string(value["ReplaceMode"].GetString());
        m_replaceModeHasBeenSet = true;
    }

    if (value.HasMember("AutoUpdateInstanceTags") && !value["AutoUpdateInstanceTags"].IsNull())
    {
        if (!value["AutoUpdateInstanceTags"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSettings.AutoUpdateInstanceTags` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpdateInstanceTags = value["AutoUpdateInstanceTags"].GetBool();
        m_autoUpdateInstanceTagsHasBeenSet = true;
    }

    if (value.HasMember("DesiredCapacitySyncWithMaxMinSize") && !value["DesiredCapacitySyncWithMaxMinSize"].IsNull())
    {
        if (!value["DesiredCapacitySyncWithMaxMinSize"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSettings.DesiredCapacitySyncWithMaxMinSize` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_desiredCapacitySyncWithMaxMinSize = value["DesiredCapacitySyncWithMaxMinSize"].GetBool();
        m_desiredCapacitySyncWithMaxMinSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replaceMonitorUnhealthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceMonitorUnhealthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replaceMonitorUnhealthy, allocator);
    }

    if (m_scalingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scalingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceLoadBalancerUnhealthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceLoadBalancerUnhealthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replaceLoadBalancerUnhealthy, allocator);
    }

    if (m_replaceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replaceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpdateInstanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpdateInstanceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoUpdateInstanceTags, allocator);
    }

    if (m_desiredCapacitySyncWithMaxMinSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredCapacitySyncWithMaxMinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredCapacitySyncWithMaxMinSize, allocator);
    }

}


bool ServiceSettings::GetReplaceMonitorUnhealthy() const
{
    return m_replaceMonitorUnhealthy;
}

void ServiceSettings::SetReplaceMonitorUnhealthy(const bool& _replaceMonitorUnhealthy)
{
    m_replaceMonitorUnhealthy = _replaceMonitorUnhealthy;
    m_replaceMonitorUnhealthyHasBeenSet = true;
}

bool ServiceSettings::ReplaceMonitorUnhealthyHasBeenSet() const
{
    return m_replaceMonitorUnhealthyHasBeenSet;
}

string ServiceSettings::GetScalingMode() const
{
    return m_scalingMode;
}

void ServiceSettings::SetScalingMode(const string& _scalingMode)
{
    m_scalingMode = _scalingMode;
    m_scalingModeHasBeenSet = true;
}

bool ServiceSettings::ScalingModeHasBeenSet() const
{
    return m_scalingModeHasBeenSet;
}

bool ServiceSettings::GetReplaceLoadBalancerUnhealthy() const
{
    return m_replaceLoadBalancerUnhealthy;
}

void ServiceSettings::SetReplaceLoadBalancerUnhealthy(const bool& _replaceLoadBalancerUnhealthy)
{
    m_replaceLoadBalancerUnhealthy = _replaceLoadBalancerUnhealthy;
    m_replaceLoadBalancerUnhealthyHasBeenSet = true;
}

bool ServiceSettings::ReplaceLoadBalancerUnhealthyHasBeenSet() const
{
    return m_replaceLoadBalancerUnhealthyHasBeenSet;
}

string ServiceSettings::GetReplaceMode() const
{
    return m_replaceMode;
}

void ServiceSettings::SetReplaceMode(const string& _replaceMode)
{
    m_replaceMode = _replaceMode;
    m_replaceModeHasBeenSet = true;
}

bool ServiceSettings::ReplaceModeHasBeenSet() const
{
    return m_replaceModeHasBeenSet;
}

bool ServiceSettings::GetAutoUpdateInstanceTags() const
{
    return m_autoUpdateInstanceTags;
}

void ServiceSettings::SetAutoUpdateInstanceTags(const bool& _autoUpdateInstanceTags)
{
    m_autoUpdateInstanceTags = _autoUpdateInstanceTags;
    m_autoUpdateInstanceTagsHasBeenSet = true;
}

bool ServiceSettings::AutoUpdateInstanceTagsHasBeenSet() const
{
    return m_autoUpdateInstanceTagsHasBeenSet;
}

bool ServiceSettings::GetDesiredCapacitySyncWithMaxMinSize() const
{
    return m_desiredCapacitySyncWithMaxMinSize;
}

void ServiceSettings::SetDesiredCapacitySyncWithMaxMinSize(const bool& _desiredCapacitySyncWithMaxMinSize)
{
    m_desiredCapacitySyncWithMaxMinSize = _desiredCapacitySyncWithMaxMinSize;
    m_desiredCapacitySyncWithMaxMinSizeHasBeenSet = true;
}

bool ServiceSettings::DesiredCapacitySyncWithMaxMinSizeHasBeenSet() const
{
    return m_desiredCapacitySyncWithMaxMinSizeHasBeenSet;
}

