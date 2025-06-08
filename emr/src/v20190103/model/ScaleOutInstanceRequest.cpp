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

#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ScaleOutInstanceRequest::ScaleOutInstanceRequest() :
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_preExecutedFileSettingsHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_coreCountHasBeenSet(false),
    m_unNecessaryNodeListHasBeenSet(false),
    m_routerCountHasBeenSet(false),
    m_softDeployInfoHasBeenSet(false),
    m_serviceNodeInfoHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hardwareResourceTypeHasBeenSet(false),
    m_podSpecHasBeenSet(false),
    m_clickHouseClusterNameHasBeenSet(false),
    m_clickHouseClusterTypeHasBeenSet(false),
    m_yarnNodeLabelHasBeenSet(false),
    m_podParameterHasBeenSet(false),
    m_masterCountHasBeenSet(false),
    m_startServiceAfterScaleOutHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_scaleOutServiceConfAssignHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_resourceBaseTypeHasBeenSet(false),
    m_computeResourceIdHasBeenSet(false),
    m_computeResourceAdvanceParamsHasBeenSet(false)
{
}

string ScaleOutInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_preExecutedFileSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreExecutedFileSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_preExecutedFileSettings.begin(); itr != m_preExecutedFileSettings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_coreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coreCount, allocator);
    }

    if (m_unNecessaryNodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnNecessaryNodeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unNecessaryNodeList.begin(); itr != m_unNecessaryNodeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_routerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routerCount, allocator);
    }

    if (m_softDeployInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftDeployInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_softDeployInfo.begin(); itr != m_softDeployInfo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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

    if (m_hardwareResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hardwareResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_podSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podSpec.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_podParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podParameter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_masterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterCount, allocator);
    }

    if (m_startServiceAfterScaleOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartServiceAfterScaleOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startServiceAfterScaleOut.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleOutServiceConfAssignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleOutServiceConfAssign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleOutServiceConfAssign.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_resourceBaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceBaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceAdvanceParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResourceAdvanceParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeResourceAdvanceParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void ScaleOutInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void ScaleOutInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string ScaleOutInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void ScaleOutInstanceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string ScaleOutInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void ScaleOutInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

vector<PreExecuteFileSettings> ScaleOutInstanceRequest::GetPreExecutedFileSettings() const
{
    return m_preExecutedFileSettings;
}

void ScaleOutInstanceRequest::SetPreExecutedFileSettings(const vector<PreExecuteFileSettings>& _preExecutedFileSettings)
{
    m_preExecutedFileSettings = _preExecutedFileSettings;
    m_preExecutedFileSettingsHasBeenSet = true;
}

bool ScaleOutInstanceRequest::PreExecutedFileSettingsHasBeenSet() const
{
    return m_preExecutedFileSettingsHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetTaskCount() const
{
    return m_taskCount;
}

void ScaleOutInstanceRequest::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetCoreCount() const
{
    return m_coreCount;
}

void ScaleOutInstanceRequest::SetCoreCount(const uint64_t& _coreCount)
{
    m_coreCount = _coreCount;
    m_coreCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::CoreCountHasBeenSet() const
{
    return m_coreCountHasBeenSet;
}

vector<uint64_t> ScaleOutInstanceRequest::GetUnNecessaryNodeList() const
{
    return m_unNecessaryNodeList;
}

void ScaleOutInstanceRequest::SetUnNecessaryNodeList(const vector<uint64_t>& _unNecessaryNodeList)
{
    m_unNecessaryNodeList = _unNecessaryNodeList;
    m_unNecessaryNodeListHasBeenSet = true;
}

bool ScaleOutInstanceRequest::UnNecessaryNodeListHasBeenSet() const
{
    return m_unNecessaryNodeListHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetRouterCount() const
{
    return m_routerCount;
}

void ScaleOutInstanceRequest::SetRouterCount(const uint64_t& _routerCount)
{
    m_routerCount = _routerCount;
    m_routerCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::RouterCountHasBeenSet() const
{
    return m_routerCountHasBeenSet;
}

vector<uint64_t> ScaleOutInstanceRequest::GetSoftDeployInfo() const
{
    return m_softDeployInfo;
}

void ScaleOutInstanceRequest::SetSoftDeployInfo(const vector<uint64_t>& _softDeployInfo)
{
    m_softDeployInfo = _softDeployInfo;
    m_softDeployInfoHasBeenSet = true;
}

bool ScaleOutInstanceRequest::SoftDeployInfoHasBeenSet() const
{
    return m_softDeployInfoHasBeenSet;
}

vector<uint64_t> ScaleOutInstanceRequest::GetServiceNodeInfo() const
{
    return m_serviceNodeInfo;
}

void ScaleOutInstanceRequest::SetServiceNodeInfo(const vector<uint64_t>& _serviceNodeInfo)
{
    m_serviceNodeInfo = _serviceNodeInfo;
    m_serviceNodeInfoHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ServiceNodeInfoHasBeenSet() const
{
    return m_serviceNodeInfoHasBeenSet;
}

vector<string> ScaleOutInstanceRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void ScaleOutInstanceRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool ScaleOutInstanceRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

vector<Tag> ScaleOutInstanceRequest::GetTags() const
{
    return m_tags;
}

void ScaleOutInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ScaleOutInstanceRequest::GetHardwareResourceType() const
{
    return m_hardwareResourceType;
}

void ScaleOutInstanceRequest::SetHardwareResourceType(const string& _hardwareResourceType)
{
    m_hardwareResourceType = _hardwareResourceType;
    m_hardwareResourceTypeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::HardwareResourceTypeHasBeenSet() const
{
    return m_hardwareResourceTypeHasBeenSet;
}

PodSpec ScaleOutInstanceRequest::GetPodSpec() const
{
    return m_podSpec;
}

void ScaleOutInstanceRequest::SetPodSpec(const PodSpec& _podSpec)
{
    m_podSpec = _podSpec;
    m_podSpecHasBeenSet = true;
}

bool ScaleOutInstanceRequest::PodSpecHasBeenSet() const
{
    return m_podSpecHasBeenSet;
}

string ScaleOutInstanceRequest::GetClickHouseClusterName() const
{
    return m_clickHouseClusterName;
}

void ScaleOutInstanceRequest::SetClickHouseClusterName(const string& _clickHouseClusterName)
{
    m_clickHouseClusterName = _clickHouseClusterName;
    m_clickHouseClusterNameHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ClickHouseClusterNameHasBeenSet() const
{
    return m_clickHouseClusterNameHasBeenSet;
}

string ScaleOutInstanceRequest::GetClickHouseClusterType() const
{
    return m_clickHouseClusterType;
}

void ScaleOutInstanceRequest::SetClickHouseClusterType(const string& _clickHouseClusterType)
{
    m_clickHouseClusterType = _clickHouseClusterType;
    m_clickHouseClusterTypeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ClickHouseClusterTypeHasBeenSet() const
{
    return m_clickHouseClusterTypeHasBeenSet;
}

string ScaleOutInstanceRequest::GetYarnNodeLabel() const
{
    return m_yarnNodeLabel;
}

void ScaleOutInstanceRequest::SetYarnNodeLabel(const string& _yarnNodeLabel)
{
    m_yarnNodeLabel = _yarnNodeLabel;
    m_yarnNodeLabelHasBeenSet = true;
}

bool ScaleOutInstanceRequest::YarnNodeLabelHasBeenSet() const
{
    return m_yarnNodeLabelHasBeenSet;
}

PodParameter ScaleOutInstanceRequest::GetPodParameter() const
{
    return m_podParameter;
}

void ScaleOutInstanceRequest::SetPodParameter(const PodParameter& _podParameter)
{
    m_podParameter = _podParameter;
    m_podParameterHasBeenSet = true;
}

bool ScaleOutInstanceRequest::PodParameterHasBeenSet() const
{
    return m_podParameterHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetMasterCount() const
{
    return m_masterCount;
}

void ScaleOutInstanceRequest::SetMasterCount(const uint64_t& _masterCount)
{
    m_masterCount = _masterCount;
    m_masterCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::MasterCountHasBeenSet() const
{
    return m_masterCountHasBeenSet;
}

string ScaleOutInstanceRequest::GetStartServiceAfterScaleOut() const
{
    return m_startServiceAfterScaleOut;
}

void ScaleOutInstanceRequest::SetStartServiceAfterScaleOut(const string& _startServiceAfterScaleOut)
{
    m_startServiceAfterScaleOut = _startServiceAfterScaleOut;
    m_startServiceAfterScaleOutHasBeenSet = true;
}

bool ScaleOutInstanceRequest::StartServiceAfterScaleOutHasBeenSet() const
{
    return m_startServiceAfterScaleOutHasBeenSet;
}

int64_t ScaleOutInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void ScaleOutInstanceRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ScaleOutInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ScaleOutInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ScaleOutInstanceRequest::GetScaleOutServiceConfAssign() const
{
    return m_scaleOutServiceConfAssign;
}

void ScaleOutInstanceRequest::SetScaleOutServiceConfAssign(const string& _scaleOutServiceConfAssign)
{
    m_scaleOutServiceConfAssign = _scaleOutServiceConfAssign;
    m_scaleOutServiceConfAssignHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ScaleOutServiceConfAssignHasBeenSet() const
{
    return m_scaleOutServiceConfAssignHasBeenSet;
}

int64_t ScaleOutInstanceRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void ScaleOutInstanceRequest::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool ScaleOutInstanceRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string ScaleOutInstanceRequest::GetResourceBaseType() const
{
    return m_resourceBaseType;
}

void ScaleOutInstanceRequest::SetResourceBaseType(const string& _resourceBaseType)
{
    m_resourceBaseType = _resourceBaseType;
    m_resourceBaseTypeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ResourceBaseTypeHasBeenSet() const
{
    return m_resourceBaseTypeHasBeenSet;
}

string ScaleOutInstanceRequest::GetComputeResourceId() const
{
    return m_computeResourceId;
}

void ScaleOutInstanceRequest::SetComputeResourceId(const string& _computeResourceId)
{
    m_computeResourceId = _computeResourceId;
    m_computeResourceIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ComputeResourceIdHasBeenSet() const
{
    return m_computeResourceIdHasBeenSet;
}

ComputeResourceAdvanceParams ScaleOutInstanceRequest::GetComputeResourceAdvanceParams() const
{
    return m_computeResourceAdvanceParams;
}

void ScaleOutInstanceRequest::SetComputeResourceAdvanceParams(const ComputeResourceAdvanceParams& _computeResourceAdvanceParams)
{
    m_computeResourceAdvanceParams = _computeResourceAdvanceParams;
    m_computeResourceAdvanceParamsHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ComputeResourceAdvanceParamsHasBeenSet() const
{
    return m_computeResourceAdvanceParamsHasBeenSet;
}


