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

#include <tencentcloud/tke/v20220501/model/RegularNodePoolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

RegularNodePoolInfo::RegularNodePoolInfo() :
    m_launchConfigurationIdHasBeenSet(false),
    m_autoscalingGroupIdHasBeenSet(false),
    m_nodeCountSummaryHasBeenSet(false),
    m_autoscalingGroupStatusHasBeenSet(false),
    m_maxNodesNumHasBeenSet(false),
    m_minNodesNumHasBeenSet(false),
    m_desiredNodesNumHasBeenSet(false),
    m_nodePoolOsHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false)
{
}

CoreInternalOutcome RegularNodePoolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LaunchConfigurationId") && !value["LaunchConfigurationId"].IsNull())
    {
        if (!value["LaunchConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.LaunchConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationId = string(value["LaunchConfigurationId"].GetString());
        m_launchConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupId") && !value["AutoscalingGroupId"].IsNull())
    {
        if (!value["AutoscalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.AutoscalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupId = string(value["AutoscalingGroupId"].GetString());
        m_autoscalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("NodeCountSummary") && !value["NodeCountSummary"].IsNull())
    {
        if (!value["NodeCountSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.NodeCountSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeCountSummary.Deserialize(value["NodeCountSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeCountSummaryHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupStatus") && !value["AutoscalingGroupStatus"].IsNull())
    {
        if (!value["AutoscalingGroupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.AutoscalingGroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupStatus = string(value["AutoscalingGroupStatus"].GetString());
        m_autoscalingGroupStatusHasBeenSet = true;
    }

    if (value.HasMember("MaxNodesNum") && !value["MaxNodesNum"].IsNull())
    {
        if (!value["MaxNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.MaxNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodesNum = value["MaxNodesNum"].GetInt64();
        m_maxNodesNumHasBeenSet = true;
    }

    if (value.HasMember("MinNodesNum") && !value["MinNodesNum"].IsNull())
    {
        if (!value["MinNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.MinNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNodesNum = value["MinNodesNum"].GetInt64();
        m_minNodesNumHasBeenSet = true;
    }

    if (value.HasMember("DesiredNodesNum") && !value["DesiredNodesNum"].IsNull())
    {
        if (!value["DesiredNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.DesiredNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredNodesNum = value["DesiredNodesNum"].GetInt64();
        m_desiredNodesNumHasBeenSet = true;
    }

    if (value.HasMember("NodePoolOs") && !value["NodePoolOs"].IsNull())
    {
        if (!value["NodePoolOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.NodePoolOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolOs = string(value["NodePoolOs"].GetString());
        m_nodePoolOsHasBeenSet = true;
    }

    if (value.HasMember("InstanceAdvancedSettings") && !value["InstanceAdvancedSettings"].IsNull())
    {
        if (!value["InstanceAdvancedSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodePoolInfo.InstanceAdvancedSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAdvancedSettings.Deserialize(value["InstanceAdvancedSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAdvancedSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegularNodePoolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCountSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeCountSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoscalingGroupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingGroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalingGroupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodesNum, allocator);
    }

    if (m_minNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNodesNum, allocator);
    }

    if (m_desiredNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredNodesNum, allocator);
    }

    if (m_nodePoolOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolOs.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RegularNodePoolInfo::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void RegularNodePoolInfo::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool RegularNodePoolInfo::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string RegularNodePoolInfo::GetAutoscalingGroupId() const
{
    return m_autoscalingGroupId;
}

void RegularNodePoolInfo::SetAutoscalingGroupId(const string& _autoscalingGroupId)
{
    m_autoscalingGroupId = _autoscalingGroupId;
    m_autoscalingGroupIdHasBeenSet = true;
}

bool RegularNodePoolInfo::AutoscalingGroupIdHasBeenSet() const
{
    return m_autoscalingGroupIdHasBeenSet;
}

NodeCountSummary RegularNodePoolInfo::GetNodeCountSummary() const
{
    return m_nodeCountSummary;
}

void RegularNodePoolInfo::SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary)
{
    m_nodeCountSummary = _nodeCountSummary;
    m_nodeCountSummaryHasBeenSet = true;
}

bool RegularNodePoolInfo::NodeCountSummaryHasBeenSet() const
{
    return m_nodeCountSummaryHasBeenSet;
}

string RegularNodePoolInfo::GetAutoscalingGroupStatus() const
{
    return m_autoscalingGroupStatus;
}

void RegularNodePoolInfo::SetAutoscalingGroupStatus(const string& _autoscalingGroupStatus)
{
    m_autoscalingGroupStatus = _autoscalingGroupStatus;
    m_autoscalingGroupStatusHasBeenSet = true;
}

bool RegularNodePoolInfo::AutoscalingGroupStatusHasBeenSet() const
{
    return m_autoscalingGroupStatusHasBeenSet;
}

int64_t RegularNodePoolInfo::GetMaxNodesNum() const
{
    return m_maxNodesNum;
}

void RegularNodePoolInfo::SetMaxNodesNum(const int64_t& _maxNodesNum)
{
    m_maxNodesNum = _maxNodesNum;
    m_maxNodesNumHasBeenSet = true;
}

bool RegularNodePoolInfo::MaxNodesNumHasBeenSet() const
{
    return m_maxNodesNumHasBeenSet;
}

int64_t RegularNodePoolInfo::GetMinNodesNum() const
{
    return m_minNodesNum;
}

void RegularNodePoolInfo::SetMinNodesNum(const int64_t& _minNodesNum)
{
    m_minNodesNum = _minNodesNum;
    m_minNodesNumHasBeenSet = true;
}

bool RegularNodePoolInfo::MinNodesNumHasBeenSet() const
{
    return m_minNodesNumHasBeenSet;
}

int64_t RegularNodePoolInfo::GetDesiredNodesNum() const
{
    return m_desiredNodesNum;
}

void RegularNodePoolInfo::SetDesiredNodesNum(const int64_t& _desiredNodesNum)
{
    m_desiredNodesNum = _desiredNodesNum;
    m_desiredNodesNumHasBeenSet = true;
}

bool RegularNodePoolInfo::DesiredNodesNumHasBeenSet() const
{
    return m_desiredNodesNumHasBeenSet;
}

string RegularNodePoolInfo::GetNodePoolOs() const
{
    return m_nodePoolOs;
}

void RegularNodePoolInfo::SetNodePoolOs(const string& _nodePoolOs)
{
    m_nodePoolOs = _nodePoolOs;
    m_nodePoolOsHasBeenSet = true;
}

bool RegularNodePoolInfo::NodePoolOsHasBeenSet() const
{
    return m_nodePoolOsHasBeenSet;
}

InstanceAdvancedSettings RegularNodePoolInfo::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void RegularNodePoolInfo::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool RegularNodePoolInfo::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

