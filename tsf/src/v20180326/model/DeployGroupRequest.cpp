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

#include <tencentcloud/tsf/v20180326/model/DeployGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DeployGroupRequest::DeployGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_startupParametersHasBeenSet(false),
    m_deployDescHasBeenSet(false),
    m_forceStartHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_deployBetaEnableHasBeenSet(false),
    m_deployBatchHasBeenSet(false),
    m_deployExeModeHasBeenSet(false),
    m_deployWaitTimeHasBeenSet(false),
    m_startScriptHasBeenSet(false),
    m_stopScriptHasBeenSet(false),
    m_incrementalDeploymentHasBeenSet(false),
    m_jdkNameHasBeenSet(false),
    m_jdkVersionHasBeenSet(false),
    m_agentProfileListHasBeenSet(false),
    m_warmupSettingHasBeenSet(false),
    m_enableBatchHealthCheckHasBeenSet(false)
{
}

string DeployGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_startupParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startupParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_deployDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_forceStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceStart, allocator);
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateType, allocator);
    }

    if (m_deployBetaEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployBetaEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployBetaEnable, allocator);
    }

    if (m_deployBatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployBatch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deployBatch.begin(); itr != m_deployBatch.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_deployExeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployExeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployExeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_deployWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployWaitTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployWaitTime, allocator);
    }

    if (m_startScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startScript.c_str(), allocator).Move(), allocator);
    }

    if (m_stopScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stopScript.c_str(), allocator).Move(), allocator);
    }

    if (m_incrementalDeploymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementalDeployment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_incrementalDeployment, allocator);
    }

    if (m_jdkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JdkName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jdkName.c_str(), allocator).Move(), allocator);
    }

    if (m_jdkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JdkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_agentProfileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentProfileList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_agentProfileList.begin(); itr != m_agentProfileList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_warmupSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_warmupSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableBatchHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBatchHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableBatchHealthCheck, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void DeployGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeployGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeployGroupRequest::GetPkgId() const
{
    return m_pkgId;
}

void DeployGroupRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool DeployGroupRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string DeployGroupRequest::GetStartupParameters() const
{
    return m_startupParameters;
}

void DeployGroupRequest::SetStartupParameters(const string& _startupParameters)
{
    m_startupParameters = _startupParameters;
    m_startupParametersHasBeenSet = true;
}

bool DeployGroupRequest::StartupParametersHasBeenSet() const
{
    return m_startupParametersHasBeenSet;
}

string DeployGroupRequest::GetDeployDesc() const
{
    return m_deployDesc;
}

void DeployGroupRequest::SetDeployDesc(const string& _deployDesc)
{
    m_deployDesc = _deployDesc;
    m_deployDescHasBeenSet = true;
}

bool DeployGroupRequest::DeployDescHasBeenSet() const
{
    return m_deployDescHasBeenSet;
}

bool DeployGroupRequest::GetForceStart() const
{
    return m_forceStart;
}

void DeployGroupRequest::SetForceStart(const bool& _forceStart)
{
    m_forceStart = _forceStart;
    m_forceStartHasBeenSet = true;
}

bool DeployGroupRequest::ForceStartHasBeenSet() const
{
    return m_forceStartHasBeenSet;
}

bool DeployGroupRequest::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void DeployGroupRequest::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool DeployGroupRequest::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

HealthCheckSettings DeployGroupRequest::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void DeployGroupRequest::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool DeployGroupRequest::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

uint64_t DeployGroupRequest::GetUpdateType() const
{
    return m_updateType;
}

void DeployGroupRequest::SetUpdateType(const uint64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool DeployGroupRequest::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

bool DeployGroupRequest::GetDeployBetaEnable() const
{
    return m_deployBetaEnable;
}

void DeployGroupRequest::SetDeployBetaEnable(const bool& _deployBetaEnable)
{
    m_deployBetaEnable = _deployBetaEnable;
    m_deployBetaEnableHasBeenSet = true;
}

bool DeployGroupRequest::DeployBetaEnableHasBeenSet() const
{
    return m_deployBetaEnableHasBeenSet;
}

vector<double> DeployGroupRequest::GetDeployBatch() const
{
    return m_deployBatch;
}

void DeployGroupRequest::SetDeployBatch(const vector<double>& _deployBatch)
{
    m_deployBatch = _deployBatch;
    m_deployBatchHasBeenSet = true;
}

bool DeployGroupRequest::DeployBatchHasBeenSet() const
{
    return m_deployBatchHasBeenSet;
}

string DeployGroupRequest::GetDeployExeMode() const
{
    return m_deployExeMode;
}

void DeployGroupRequest::SetDeployExeMode(const string& _deployExeMode)
{
    m_deployExeMode = _deployExeMode;
    m_deployExeModeHasBeenSet = true;
}

bool DeployGroupRequest::DeployExeModeHasBeenSet() const
{
    return m_deployExeModeHasBeenSet;
}

uint64_t DeployGroupRequest::GetDeployWaitTime() const
{
    return m_deployWaitTime;
}

void DeployGroupRequest::SetDeployWaitTime(const uint64_t& _deployWaitTime)
{
    m_deployWaitTime = _deployWaitTime;
    m_deployWaitTimeHasBeenSet = true;
}

bool DeployGroupRequest::DeployWaitTimeHasBeenSet() const
{
    return m_deployWaitTimeHasBeenSet;
}

string DeployGroupRequest::GetStartScript() const
{
    return m_startScript;
}

void DeployGroupRequest::SetStartScript(const string& _startScript)
{
    m_startScript = _startScript;
    m_startScriptHasBeenSet = true;
}

bool DeployGroupRequest::StartScriptHasBeenSet() const
{
    return m_startScriptHasBeenSet;
}

string DeployGroupRequest::GetStopScript() const
{
    return m_stopScript;
}

void DeployGroupRequest::SetStopScript(const string& _stopScript)
{
    m_stopScript = _stopScript;
    m_stopScriptHasBeenSet = true;
}

bool DeployGroupRequest::StopScriptHasBeenSet() const
{
    return m_stopScriptHasBeenSet;
}

bool DeployGroupRequest::GetIncrementalDeployment() const
{
    return m_incrementalDeployment;
}

void DeployGroupRequest::SetIncrementalDeployment(const bool& _incrementalDeployment)
{
    m_incrementalDeployment = _incrementalDeployment;
    m_incrementalDeploymentHasBeenSet = true;
}

bool DeployGroupRequest::IncrementalDeploymentHasBeenSet() const
{
    return m_incrementalDeploymentHasBeenSet;
}

string DeployGroupRequest::GetJdkName() const
{
    return m_jdkName;
}

void DeployGroupRequest::SetJdkName(const string& _jdkName)
{
    m_jdkName = _jdkName;
    m_jdkNameHasBeenSet = true;
}

bool DeployGroupRequest::JdkNameHasBeenSet() const
{
    return m_jdkNameHasBeenSet;
}

string DeployGroupRequest::GetJdkVersion() const
{
    return m_jdkVersion;
}

void DeployGroupRequest::SetJdkVersion(const string& _jdkVersion)
{
    m_jdkVersion = _jdkVersion;
    m_jdkVersionHasBeenSet = true;
}

bool DeployGroupRequest::JdkVersionHasBeenSet() const
{
    return m_jdkVersionHasBeenSet;
}

vector<AgentProfile> DeployGroupRequest::GetAgentProfileList() const
{
    return m_agentProfileList;
}

void DeployGroupRequest::SetAgentProfileList(const vector<AgentProfile>& _agentProfileList)
{
    m_agentProfileList = _agentProfileList;
    m_agentProfileListHasBeenSet = true;
}

bool DeployGroupRequest::AgentProfileListHasBeenSet() const
{
    return m_agentProfileListHasBeenSet;
}

WarmupSetting DeployGroupRequest::GetWarmupSetting() const
{
    return m_warmupSetting;
}

void DeployGroupRequest::SetWarmupSetting(const WarmupSetting& _warmupSetting)
{
    m_warmupSetting = _warmupSetting;
    m_warmupSettingHasBeenSet = true;
}

bool DeployGroupRequest::WarmupSettingHasBeenSet() const
{
    return m_warmupSettingHasBeenSet;
}

bool DeployGroupRequest::GetEnableBatchHealthCheck() const
{
    return m_enableBatchHealthCheck;
}

void DeployGroupRequest::SetEnableBatchHealthCheck(const bool& _enableBatchHealthCheck)
{
    m_enableBatchHealthCheck = _enableBatchHealthCheck;
    m_enableBatchHealthCheckHasBeenSet = true;
}

bool DeployGroupRequest::EnableBatchHealthCheckHasBeenSet() const
{
    return m_enableBatchHealthCheckHasBeenSet;
}


