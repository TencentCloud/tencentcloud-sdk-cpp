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

#include <tencentcloud/tke/v20180525/model/ClusterAdvancedSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterAdvancedSettings::ClusterAdvancedSettings() :
    m_asEnabledHasBeenSet(false),
    m_auditEnabledHasBeenSet(false),
    m_auditLogTopicIdHasBeenSet(false),
    m_auditLogsetIdHasBeenSet(false),
    m_basePodNumberHasBeenSet(false),
    m_ciliumModeHasBeenSet(false),
    m_containerRuntimeHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_enableCustomizedPodCIDRHasBeenSet(false),
    m_etcdOverrideConfigsHasBeenSet(false),
    m_extraArgsHasBeenSet(false),
    m_iPVSHasBeenSet(false),
    m_isDualStackHasBeenSet(false),
    m_isNonStaticIpModeHasBeenSet(false),
    m_kubeProxyModeHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_nodeNameTypeHasBeenSet(false),
    m_qGPUShareEnableHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_vpcCniTypeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterAdvancedSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsEnabled") && !value["AsEnabled"].IsNull())
    {
        if (!value["AsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.AsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asEnabled = value["AsEnabled"].GetBool();
        m_asEnabledHasBeenSet = true;
    }

    if (value.HasMember("AuditEnabled") && !value["AuditEnabled"].IsNull())
    {
        if (!value["AuditEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.AuditEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditEnabled = value["AuditEnabled"].GetBool();
        m_auditEnabledHasBeenSet = true;
    }

    if (value.HasMember("AuditLogTopicId") && !value["AuditLogTopicId"].IsNull())
    {
        if (!value["AuditLogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.AuditLogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditLogTopicId = string(value["AuditLogTopicId"].GetString());
        m_auditLogTopicIdHasBeenSet = true;
    }

    if (value.HasMember("AuditLogsetId") && !value["AuditLogsetId"].IsNull())
    {
        if (!value["AuditLogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.AuditLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditLogsetId = string(value["AuditLogsetId"].GetString());
        m_auditLogsetIdHasBeenSet = true;
    }

    if (value.HasMember("BasePodNumber") && !value["BasePodNumber"].IsNull())
    {
        if (!value["BasePodNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.BasePodNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_basePodNumber = value["BasePodNumber"].GetInt64();
        m_basePodNumberHasBeenSet = true;
    }

    if (value.HasMember("CiliumMode") && !value["CiliumMode"].IsNull())
    {
        if (!value["CiliumMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.CiliumMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ciliumMode = string(value["CiliumMode"].GetString());
        m_ciliumModeHasBeenSet = true;
    }

    if (value.HasMember("ContainerRuntime") && !value["ContainerRuntime"].IsNull())
    {
        if (!value["ContainerRuntime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.ContainerRuntime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerRuntime = string(value["ContainerRuntime"].GetString());
        m_containerRuntimeHasBeenSet = true;
    }

    if (value.HasMember("DeletionProtection") && !value["DeletionProtection"].IsNull())
    {
        if (!value["DeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.DeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionProtection = value["DeletionProtection"].GetBool();
        m_deletionProtectionHasBeenSet = true;
    }

    if (value.HasMember("EnableCustomizedPodCIDR") && !value["EnableCustomizedPodCIDR"].IsNull())
    {
        if (!value["EnableCustomizedPodCIDR"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.EnableCustomizedPodCIDR` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCustomizedPodCIDR = value["EnableCustomizedPodCIDR"].GetBool();
        m_enableCustomizedPodCIDRHasBeenSet = true;
    }

    if (value.HasMember("EtcdOverrideConfigs") && !value["EtcdOverrideConfigs"].IsNull())
    {
        if (!value["EtcdOverrideConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.EtcdOverrideConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["EtcdOverrideConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EtcdOverrideConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_etcdOverrideConfigs.push_back(item);
        }
        m_etcdOverrideConfigsHasBeenSet = true;
    }

    if (value.HasMember("ExtraArgs") && !value["ExtraArgs"].IsNull())
    {
        if (!value["ExtraArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.ExtraArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraArgs.Deserialize(value["ExtraArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraArgsHasBeenSet = true;
    }

    if (value.HasMember("IPVS") && !value["IPVS"].IsNull())
    {
        if (!value["IPVS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.IPVS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_iPVS = value["IPVS"].GetBool();
        m_iPVSHasBeenSet = true;
    }

    if (value.HasMember("IsDualStack") && !value["IsDualStack"].IsNull())
    {
        if (!value["IsDualStack"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.IsDualStack` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDualStack = value["IsDualStack"].GetBool();
        m_isDualStackHasBeenSet = true;
    }

    if (value.HasMember("IsNonStaticIpMode") && !value["IsNonStaticIpMode"].IsNull())
    {
        if (!value["IsNonStaticIpMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.IsNonStaticIpMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNonStaticIpMode = value["IsNonStaticIpMode"].GetBool();
        m_isNonStaticIpModeHasBeenSet = true;
    }

    if (value.HasMember("KubeProxyMode") && !value["KubeProxyMode"].IsNull())
    {
        if (!value["KubeProxyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.KubeProxyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kubeProxyMode = string(value["KubeProxyMode"].GetString());
        m_kubeProxyModeHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeNameType") && !value["NodeNameType"].IsNull())
    {
        if (!value["NodeNameType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.NodeNameType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNameType = string(value["NodeNameType"].GetString());
        m_nodeNameTypeHasBeenSet = true;
    }

    if (value.HasMember("QGPUShareEnable") && !value["QGPUShareEnable"].IsNull())
    {
        if (!value["QGPUShareEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.QGPUShareEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_qGPUShareEnable = value["QGPUShareEnable"].GetBool();
        m_qGPUShareEnableHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersion") && !value["RuntimeVersion"].IsNull())
    {
        if (!value["RuntimeVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.RuntimeVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeVersion = string(value["RuntimeVersion"].GetString());
        m_runtimeVersionHasBeenSet = true;
    }

    if (value.HasMember("VpcCniType") && !value["VpcCniType"].IsNull())
    {
        if (!value["VpcCniType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAdvancedSettings.VpcCniType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCniType = string(value["VpcCniType"].GetString());
        m_vpcCniTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterAdvancedSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asEnabled, allocator);
    }

    if (m_auditEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditEnabled, allocator);
    }

    if (m_auditLogTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditLogTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_basePodNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePodNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basePodNumber, allocator);
    }

    if (m_ciliumModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiliumMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ciliumMode.c_str(), allocator).Move(), allocator);
    }

    if (m_containerRuntimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRuntime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerRuntime.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionProtection, allocator);
    }

    if (m_enableCustomizedPodCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCustomizedPodCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCustomizedPodCIDR, allocator);
    }

    if (m_etcdOverrideConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtcdOverrideConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_etcdOverrideConfigs.begin(); itr != m_etcdOverrideConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extraArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPVSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPVS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPVS, allocator);
    }

    if (m_isDualStackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDualStack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDualStack, allocator);
    }

    if (m_isNonStaticIpModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNonStaticIpMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNonStaticIpMode, allocator);
    }

    if (m_kubeProxyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeProxyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kubeProxyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNameType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeNameType.c_str(), allocator).Move(), allocator);
    }

    if (m_qGPUShareEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QGPUShareEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qGPUShareEnable, allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCniTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCniType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCniType.c_str(), allocator).Move(), allocator);
    }

}


bool ClusterAdvancedSettings::GetAsEnabled() const
{
    return m_asEnabled;
}

void ClusterAdvancedSettings::SetAsEnabled(const bool& _asEnabled)
{
    m_asEnabled = _asEnabled;
    m_asEnabledHasBeenSet = true;
}

bool ClusterAdvancedSettings::AsEnabledHasBeenSet() const
{
    return m_asEnabledHasBeenSet;
}

bool ClusterAdvancedSettings::GetAuditEnabled() const
{
    return m_auditEnabled;
}

void ClusterAdvancedSettings::SetAuditEnabled(const bool& _auditEnabled)
{
    m_auditEnabled = _auditEnabled;
    m_auditEnabledHasBeenSet = true;
}

bool ClusterAdvancedSettings::AuditEnabledHasBeenSet() const
{
    return m_auditEnabledHasBeenSet;
}

string ClusterAdvancedSettings::GetAuditLogTopicId() const
{
    return m_auditLogTopicId;
}

void ClusterAdvancedSettings::SetAuditLogTopicId(const string& _auditLogTopicId)
{
    m_auditLogTopicId = _auditLogTopicId;
    m_auditLogTopicIdHasBeenSet = true;
}

bool ClusterAdvancedSettings::AuditLogTopicIdHasBeenSet() const
{
    return m_auditLogTopicIdHasBeenSet;
}

string ClusterAdvancedSettings::GetAuditLogsetId() const
{
    return m_auditLogsetId;
}

void ClusterAdvancedSettings::SetAuditLogsetId(const string& _auditLogsetId)
{
    m_auditLogsetId = _auditLogsetId;
    m_auditLogsetIdHasBeenSet = true;
}

bool ClusterAdvancedSettings::AuditLogsetIdHasBeenSet() const
{
    return m_auditLogsetIdHasBeenSet;
}

int64_t ClusterAdvancedSettings::GetBasePodNumber() const
{
    return m_basePodNumber;
}

void ClusterAdvancedSettings::SetBasePodNumber(const int64_t& _basePodNumber)
{
    m_basePodNumber = _basePodNumber;
    m_basePodNumberHasBeenSet = true;
}

bool ClusterAdvancedSettings::BasePodNumberHasBeenSet() const
{
    return m_basePodNumberHasBeenSet;
}

string ClusterAdvancedSettings::GetCiliumMode() const
{
    return m_ciliumMode;
}

void ClusterAdvancedSettings::SetCiliumMode(const string& _ciliumMode)
{
    m_ciliumMode = _ciliumMode;
    m_ciliumModeHasBeenSet = true;
}

bool ClusterAdvancedSettings::CiliumModeHasBeenSet() const
{
    return m_ciliumModeHasBeenSet;
}

string ClusterAdvancedSettings::GetContainerRuntime() const
{
    return m_containerRuntime;
}

void ClusterAdvancedSettings::SetContainerRuntime(const string& _containerRuntime)
{
    m_containerRuntime = _containerRuntime;
    m_containerRuntimeHasBeenSet = true;
}

bool ClusterAdvancedSettings::ContainerRuntimeHasBeenSet() const
{
    return m_containerRuntimeHasBeenSet;
}

bool ClusterAdvancedSettings::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void ClusterAdvancedSettings::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool ClusterAdvancedSettings::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

bool ClusterAdvancedSettings::GetEnableCustomizedPodCIDR() const
{
    return m_enableCustomizedPodCIDR;
}

void ClusterAdvancedSettings::SetEnableCustomizedPodCIDR(const bool& _enableCustomizedPodCIDR)
{
    m_enableCustomizedPodCIDR = _enableCustomizedPodCIDR;
    m_enableCustomizedPodCIDRHasBeenSet = true;
}

bool ClusterAdvancedSettings::EnableCustomizedPodCIDRHasBeenSet() const
{
    return m_enableCustomizedPodCIDRHasBeenSet;
}

vector<EtcdOverrideConfig> ClusterAdvancedSettings::GetEtcdOverrideConfigs() const
{
    return m_etcdOverrideConfigs;
}

void ClusterAdvancedSettings::SetEtcdOverrideConfigs(const vector<EtcdOverrideConfig>& _etcdOverrideConfigs)
{
    m_etcdOverrideConfigs = _etcdOverrideConfigs;
    m_etcdOverrideConfigsHasBeenSet = true;
}

bool ClusterAdvancedSettings::EtcdOverrideConfigsHasBeenSet() const
{
    return m_etcdOverrideConfigsHasBeenSet;
}

ClusterExtraArgs ClusterAdvancedSettings::GetExtraArgs() const
{
    return m_extraArgs;
}

void ClusterAdvancedSettings::SetExtraArgs(const ClusterExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool ClusterAdvancedSettings::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}

bool ClusterAdvancedSettings::GetIPVS() const
{
    return m_iPVS;
}

void ClusterAdvancedSettings::SetIPVS(const bool& _iPVS)
{
    m_iPVS = _iPVS;
    m_iPVSHasBeenSet = true;
}

bool ClusterAdvancedSettings::IPVSHasBeenSet() const
{
    return m_iPVSHasBeenSet;
}

bool ClusterAdvancedSettings::GetIsDualStack() const
{
    return m_isDualStack;
}

void ClusterAdvancedSettings::SetIsDualStack(const bool& _isDualStack)
{
    m_isDualStack = _isDualStack;
    m_isDualStackHasBeenSet = true;
}

bool ClusterAdvancedSettings::IsDualStackHasBeenSet() const
{
    return m_isDualStackHasBeenSet;
}

bool ClusterAdvancedSettings::GetIsNonStaticIpMode() const
{
    return m_isNonStaticIpMode;
}

void ClusterAdvancedSettings::SetIsNonStaticIpMode(const bool& _isNonStaticIpMode)
{
    m_isNonStaticIpMode = _isNonStaticIpMode;
    m_isNonStaticIpModeHasBeenSet = true;
}

bool ClusterAdvancedSettings::IsNonStaticIpModeHasBeenSet() const
{
    return m_isNonStaticIpModeHasBeenSet;
}

string ClusterAdvancedSettings::GetKubeProxyMode() const
{
    return m_kubeProxyMode;
}

void ClusterAdvancedSettings::SetKubeProxyMode(const string& _kubeProxyMode)
{
    m_kubeProxyMode = _kubeProxyMode;
    m_kubeProxyModeHasBeenSet = true;
}

bool ClusterAdvancedSettings::KubeProxyModeHasBeenSet() const
{
    return m_kubeProxyModeHasBeenSet;
}

string ClusterAdvancedSettings::GetNetworkType() const
{
    return m_networkType;
}

void ClusterAdvancedSettings::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool ClusterAdvancedSettings::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string ClusterAdvancedSettings::GetNodeNameType() const
{
    return m_nodeNameType;
}

void ClusterAdvancedSettings::SetNodeNameType(const string& _nodeNameType)
{
    m_nodeNameType = _nodeNameType;
    m_nodeNameTypeHasBeenSet = true;
}

bool ClusterAdvancedSettings::NodeNameTypeHasBeenSet() const
{
    return m_nodeNameTypeHasBeenSet;
}

bool ClusterAdvancedSettings::GetQGPUShareEnable() const
{
    return m_qGPUShareEnable;
}

void ClusterAdvancedSettings::SetQGPUShareEnable(const bool& _qGPUShareEnable)
{
    m_qGPUShareEnable = _qGPUShareEnable;
    m_qGPUShareEnableHasBeenSet = true;
}

bool ClusterAdvancedSettings::QGPUShareEnableHasBeenSet() const
{
    return m_qGPUShareEnableHasBeenSet;
}

string ClusterAdvancedSettings::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void ClusterAdvancedSettings::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool ClusterAdvancedSettings::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

string ClusterAdvancedSettings::GetVpcCniType() const
{
    return m_vpcCniType;
}

void ClusterAdvancedSettings::SetVpcCniType(const string& _vpcCniType)
{
    m_vpcCniType = _vpcCniType;
    m_vpcCniTypeHasBeenSet = true;
}

bool ClusterAdvancedSettings::VpcCniTypeHasBeenSet() const
{
    return m_vpcCniTypeHasBeenSet;
}

