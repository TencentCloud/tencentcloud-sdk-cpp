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

#include <tencentcloud/emr/v20190103/model/ScaleOutClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ScaleOutClusterRequest::ScaleOutClusterRequest() :
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_scaleOutNodeConfigHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_scriptBootstrapActionConfigHasBeenSet(false),
    m_softDeployInfoHasBeenSet(false),
    m_serviceNodeInfoHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hardwareSourceTypeHasBeenSet(false),
    m_podSpecInfoHasBeenSet(false),
    m_clickHouseClusterNameHasBeenSet(false),
    m_clickHouseClusterTypeHasBeenSet(false),
    m_yarnNodeLabelHasBeenSet(false),
    m_enableStartServiceFlagHasBeenSet(false),
    m_resourceSpecHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_scaleOutServiceConfGroupsInfoHasBeenSet(false)
{
}

string ScaleOutClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleOutNodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleOutNodeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scaleOutNodeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scriptBootstrapActionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptBootstrapActionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scriptBootstrapActionConfig.begin(); itr != m_scriptBootstrapActionConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_softDeployInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftDeployInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_softDeployInfo.begin(); itr != m_softDeployInfo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_serviceNodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNodeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceNodeInfo.begin(); itr != m_serviceNodeInfo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disasterRecoverGroupIds.begin(); itr != m_disasterRecoverGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hardwareSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hardwareSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_podSpecInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSpecInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podSpecInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clickHouseClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickHouseClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clickHouseClusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clickHouseClusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickHouseClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clickHouseClusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnNodeLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnNodeLabel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yarnNodeLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStartServiceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStartServiceFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableStartServiceFlag, allocator);
    }

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleOutServiceConfGroupsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleOutServiceConfGroupsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scaleOutServiceConfGroupsInfo.begin(); itr != m_scaleOutServiceConfGroupsInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutClusterRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void ScaleOutClusterRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool ScaleOutClusterRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string ScaleOutClusterRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutClusterRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutClusterRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ScaleOutNodeConfig ScaleOutClusterRequest::GetScaleOutNodeConfig() const
{
    return m_scaleOutNodeConfig;
}

void ScaleOutClusterRequest::SetScaleOutNodeConfig(const ScaleOutNodeConfig& _scaleOutNodeConfig)
{
    m_scaleOutNodeConfig = _scaleOutNodeConfig;
    m_scaleOutNodeConfigHasBeenSet = true;
}

bool ScaleOutClusterRequest::ScaleOutNodeConfigHasBeenSet() const
{
    return m_scaleOutNodeConfigHasBeenSet;
}

string ScaleOutClusterRequest::GetClientToken() const
{
    return m_clientToken;
}

void ScaleOutClusterRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ScaleOutClusterRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

InstanceChargePrepaid ScaleOutClusterRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void ScaleOutClusterRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool ScaleOutClusterRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

vector<ScriptBootstrapActionConfig> ScaleOutClusterRequest::GetScriptBootstrapActionConfig() const
{
    return m_scriptBootstrapActionConfig;
}

void ScaleOutClusterRequest::SetScriptBootstrapActionConfig(const vector<ScriptBootstrapActionConfig>& _scriptBootstrapActionConfig)
{
    m_scriptBootstrapActionConfig = _scriptBootstrapActionConfig;
    m_scriptBootstrapActionConfigHasBeenSet = true;
}

bool ScaleOutClusterRequest::ScriptBootstrapActionConfigHasBeenSet() const
{
    return m_scriptBootstrapActionConfigHasBeenSet;
}

vector<int64_t> ScaleOutClusterRequest::GetSoftDeployInfo() const
{
    return m_softDeployInfo;
}

void ScaleOutClusterRequest::SetSoftDeployInfo(const vector<int64_t>& _softDeployInfo)
{
    m_softDeployInfo = _softDeployInfo;
    m_softDeployInfoHasBeenSet = true;
}

bool ScaleOutClusterRequest::SoftDeployInfoHasBeenSet() const
{
    return m_softDeployInfoHasBeenSet;
}

vector<int64_t> ScaleOutClusterRequest::GetServiceNodeInfo() const
{
    return m_serviceNodeInfo;
}

void ScaleOutClusterRequest::SetServiceNodeInfo(const vector<int64_t>& _serviceNodeInfo)
{
    m_serviceNodeInfo = _serviceNodeInfo;
    m_serviceNodeInfoHasBeenSet = true;
}

bool ScaleOutClusterRequest::ServiceNodeInfoHasBeenSet() const
{
    return m_serviceNodeInfoHasBeenSet;
}

vector<string> ScaleOutClusterRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void ScaleOutClusterRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool ScaleOutClusterRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

vector<Tag> ScaleOutClusterRequest::GetTags() const
{
    return m_tags;
}

void ScaleOutClusterRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ScaleOutClusterRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ScaleOutClusterRequest::GetHardwareSourceType() const
{
    return m_hardwareSourceType;
}

void ScaleOutClusterRequest::SetHardwareSourceType(const string& _hardwareSourceType)
{
    m_hardwareSourceType = _hardwareSourceType;
    m_hardwareSourceTypeHasBeenSet = true;
}

bool ScaleOutClusterRequest::HardwareSourceTypeHasBeenSet() const
{
    return m_hardwareSourceTypeHasBeenSet;
}

PodSpecInfo ScaleOutClusterRequest::GetPodSpecInfo() const
{
    return m_podSpecInfo;
}

void ScaleOutClusterRequest::SetPodSpecInfo(const PodSpecInfo& _podSpecInfo)
{
    m_podSpecInfo = _podSpecInfo;
    m_podSpecInfoHasBeenSet = true;
}

bool ScaleOutClusterRequest::PodSpecInfoHasBeenSet() const
{
    return m_podSpecInfoHasBeenSet;
}

string ScaleOutClusterRequest::GetClickHouseClusterName() const
{
    return m_clickHouseClusterName;
}

void ScaleOutClusterRequest::SetClickHouseClusterName(const string& _clickHouseClusterName)
{
    m_clickHouseClusterName = _clickHouseClusterName;
    m_clickHouseClusterNameHasBeenSet = true;
}

bool ScaleOutClusterRequest::ClickHouseClusterNameHasBeenSet() const
{
    return m_clickHouseClusterNameHasBeenSet;
}

string ScaleOutClusterRequest::GetClickHouseClusterType() const
{
    return m_clickHouseClusterType;
}

void ScaleOutClusterRequest::SetClickHouseClusterType(const string& _clickHouseClusterType)
{
    m_clickHouseClusterType = _clickHouseClusterType;
    m_clickHouseClusterTypeHasBeenSet = true;
}

bool ScaleOutClusterRequest::ClickHouseClusterTypeHasBeenSet() const
{
    return m_clickHouseClusterTypeHasBeenSet;
}

string ScaleOutClusterRequest::GetYarnNodeLabel() const
{
    return m_yarnNodeLabel;
}

void ScaleOutClusterRequest::SetYarnNodeLabel(const string& _yarnNodeLabel)
{
    m_yarnNodeLabel = _yarnNodeLabel;
    m_yarnNodeLabelHasBeenSet = true;
}

bool ScaleOutClusterRequest::YarnNodeLabelHasBeenSet() const
{
    return m_yarnNodeLabelHasBeenSet;
}

bool ScaleOutClusterRequest::GetEnableStartServiceFlag() const
{
    return m_enableStartServiceFlag;
}

void ScaleOutClusterRequest::SetEnableStartServiceFlag(const bool& _enableStartServiceFlag)
{
    m_enableStartServiceFlag = _enableStartServiceFlag;
    m_enableStartServiceFlagHasBeenSet = true;
}

bool ScaleOutClusterRequest::EnableStartServiceFlagHasBeenSet() const
{
    return m_enableStartServiceFlagHasBeenSet;
}

NodeResourceSpec ScaleOutClusterRequest::GetResourceSpec() const
{
    return m_resourceSpec;
}

void ScaleOutClusterRequest::SetResourceSpec(const NodeResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool ScaleOutClusterRequest::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

string ScaleOutClusterRequest::GetZone() const
{
    return m_zone;
}

void ScaleOutClusterRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ScaleOutClusterRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ScaleOutClusterRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ScaleOutClusterRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ScaleOutClusterRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<ScaleOutServiceConfGroupsInfo> ScaleOutClusterRequest::GetScaleOutServiceConfGroupsInfo() const
{
    return m_scaleOutServiceConfGroupsInfo;
}

void ScaleOutClusterRequest::SetScaleOutServiceConfGroupsInfo(const vector<ScaleOutServiceConfGroupsInfo>& _scaleOutServiceConfGroupsInfo)
{
    m_scaleOutServiceConfGroupsInfo = _scaleOutServiceConfGroupsInfo;
    m_scaleOutServiceConfGroupsInfoHasBeenSet = true;
}

bool ScaleOutClusterRequest::ScaleOutServiceConfGroupsInfoHasBeenSet() const
{
    return m_scaleOutServiceConfGroupsInfoHasBeenSet;
}


