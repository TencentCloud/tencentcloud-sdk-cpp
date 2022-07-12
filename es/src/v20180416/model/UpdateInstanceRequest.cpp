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

#include <tencentcloud/es/v20180416/model/UpdateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateInstanceRequest::UpdateInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_esConfigHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_esAclHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_masterNodeNumHasBeenSet(false),
    m_masterNodeTypeHasBeenSet(false),
    m_masterNodeDiskSizeHasBeenSet(false),
    m_forceRestartHasBeenSet(false),
    m_cosBackupHasBeenSet(false),
    m_nodeInfoListHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_esPublicAclHasBeenSet(false),
    m_kibanaPublicAccessHasBeenSet(false),
    m_kibanaPrivateAccessHasBeenSet(false),
    m_basicSecurityTypeHasBeenSet(false),
    m_kibanaPrivatePortHasBeenSet(false),
    m_scaleTypeHasBeenSet(false),
    m_multiZoneInfoHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_kibanaConfigHasBeenSet(false),
    m_webNodeTypeInfoHasBeenSet(false),
    m_switchPrivateLinkHasBeenSet(false),
    m_enableCerebroHasBeenSet(false),
    m_cerebroPublicAccessHasBeenSet(false),
    m_cerebroPrivateAccessHasBeenSet(false),
    m_esConfigSetHasBeenSet(false),
    m_operationDurationHasBeenSet(false)
{
}

string UpdateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_esConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_esConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_esAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esAcl.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_masterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterNodeNum, allocator);
    }

    if (m_masterNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_masterNodeDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterNodeDiskSize, allocator);
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }

    if (m_cosBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosBackup.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nodeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfoList.begin(); itr != m_nodeInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_publicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_esPublicAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsPublicAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esPublicAcl.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_kibanaPublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPublicAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kibanaPublicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kibanaPrivateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_basicSecurityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicSecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicSecurityType, allocator);
    }

    if (m_kibanaPrivatePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivatePort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kibanaPrivatePort, allocator);
    }

    if (m_scaleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scaleType, allocator);
    }

    if (m_multiZoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiZoneInfo.begin(); itr != m_multiZoneInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneType, allocator);
    }

    if (m_kibanaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kibanaConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_webNodeTypeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebNodeTypeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webNodeTypeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_switchPrivateLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchPrivateLink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchPrivateLink.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCerebroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCerebro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCerebro, allocator);
    }

    if (m_cerebroPublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CerebroPublicAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cerebroPublicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_cerebroPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CerebroPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cerebroPrivateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_esConfigSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfigSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esConfigSet.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operationDuration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void UpdateInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool UpdateInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t UpdateInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void UpdateInstanceRequest::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool UpdateInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string UpdateInstanceRequest::GetEsConfig() const
{
    return m_esConfig;
}

void UpdateInstanceRequest::SetEsConfig(const string& _esConfig)
{
    m_esConfig = _esConfig;
    m_esConfigHasBeenSet = true;
}

bool UpdateInstanceRequest::EsConfigHasBeenSet() const
{
    return m_esConfigHasBeenSet;
}

string UpdateInstanceRequest::GetPassword() const
{
    return m_password;
}

void UpdateInstanceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool UpdateInstanceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

EsAcl UpdateInstanceRequest::GetEsAcl() const
{
    return m_esAcl;
}

void UpdateInstanceRequest::SetEsAcl(const EsAcl& _esAcl)
{
    m_esAcl = _esAcl;
    m_esAclHasBeenSet = true;
}

bool UpdateInstanceRequest::EsAclHasBeenSet() const
{
    return m_esAclHasBeenSet;
}

uint64_t UpdateInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void UpdateInstanceRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool UpdateInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string UpdateInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void UpdateInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool UpdateInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t UpdateInstanceRequest::GetMasterNodeNum() const
{
    return m_masterNodeNum;
}

void UpdateInstanceRequest::SetMasterNodeNum(const uint64_t& _masterNodeNum)
{
    m_masterNodeNum = _masterNodeNum;
    m_masterNodeNumHasBeenSet = true;
}

bool UpdateInstanceRequest::MasterNodeNumHasBeenSet() const
{
    return m_masterNodeNumHasBeenSet;
}

string UpdateInstanceRequest::GetMasterNodeType() const
{
    return m_masterNodeType;
}

void UpdateInstanceRequest::SetMasterNodeType(const string& _masterNodeType)
{
    m_masterNodeType = _masterNodeType;
    m_masterNodeTypeHasBeenSet = true;
}

bool UpdateInstanceRequest::MasterNodeTypeHasBeenSet() const
{
    return m_masterNodeTypeHasBeenSet;
}

uint64_t UpdateInstanceRequest::GetMasterNodeDiskSize() const
{
    return m_masterNodeDiskSize;
}

void UpdateInstanceRequest::SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize)
{
    m_masterNodeDiskSize = _masterNodeDiskSize;
    m_masterNodeDiskSizeHasBeenSet = true;
}

bool UpdateInstanceRequest::MasterNodeDiskSizeHasBeenSet() const
{
    return m_masterNodeDiskSizeHasBeenSet;
}

bool UpdateInstanceRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void UpdateInstanceRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool UpdateInstanceRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}

CosBackup UpdateInstanceRequest::GetCosBackup() const
{
    return m_cosBackup;
}

void UpdateInstanceRequest::SetCosBackup(const CosBackup& _cosBackup)
{
    m_cosBackup = _cosBackup;
    m_cosBackupHasBeenSet = true;
}

bool UpdateInstanceRequest::CosBackupHasBeenSet() const
{
    return m_cosBackupHasBeenSet;
}

vector<NodeInfo> UpdateInstanceRequest::GetNodeInfoList() const
{
    return m_nodeInfoList;
}

void UpdateInstanceRequest::SetNodeInfoList(const vector<NodeInfo>& _nodeInfoList)
{
    m_nodeInfoList = _nodeInfoList;
    m_nodeInfoListHasBeenSet = true;
}

bool UpdateInstanceRequest::NodeInfoListHasBeenSet() const
{
    return m_nodeInfoListHasBeenSet;
}

string UpdateInstanceRequest::GetPublicAccess() const
{
    return m_publicAccess;
}

void UpdateInstanceRequest::SetPublicAccess(const string& _publicAccess)
{
    m_publicAccess = _publicAccess;
    m_publicAccessHasBeenSet = true;
}

bool UpdateInstanceRequest::PublicAccessHasBeenSet() const
{
    return m_publicAccessHasBeenSet;
}

EsPublicAcl UpdateInstanceRequest::GetEsPublicAcl() const
{
    return m_esPublicAcl;
}

void UpdateInstanceRequest::SetEsPublicAcl(const EsPublicAcl& _esPublicAcl)
{
    m_esPublicAcl = _esPublicAcl;
    m_esPublicAclHasBeenSet = true;
}

bool UpdateInstanceRequest::EsPublicAclHasBeenSet() const
{
    return m_esPublicAclHasBeenSet;
}

string UpdateInstanceRequest::GetKibanaPublicAccess() const
{
    return m_kibanaPublicAccess;
}

void UpdateInstanceRequest::SetKibanaPublicAccess(const string& _kibanaPublicAccess)
{
    m_kibanaPublicAccess = _kibanaPublicAccess;
    m_kibanaPublicAccessHasBeenSet = true;
}

bool UpdateInstanceRequest::KibanaPublicAccessHasBeenSet() const
{
    return m_kibanaPublicAccessHasBeenSet;
}

string UpdateInstanceRequest::GetKibanaPrivateAccess() const
{
    return m_kibanaPrivateAccess;
}

void UpdateInstanceRequest::SetKibanaPrivateAccess(const string& _kibanaPrivateAccess)
{
    m_kibanaPrivateAccess = _kibanaPrivateAccess;
    m_kibanaPrivateAccessHasBeenSet = true;
}

bool UpdateInstanceRequest::KibanaPrivateAccessHasBeenSet() const
{
    return m_kibanaPrivateAccessHasBeenSet;
}

int64_t UpdateInstanceRequest::GetBasicSecurityType() const
{
    return m_basicSecurityType;
}

void UpdateInstanceRequest::SetBasicSecurityType(const int64_t& _basicSecurityType)
{
    m_basicSecurityType = _basicSecurityType;
    m_basicSecurityTypeHasBeenSet = true;
}

bool UpdateInstanceRequest::BasicSecurityTypeHasBeenSet() const
{
    return m_basicSecurityTypeHasBeenSet;
}

uint64_t UpdateInstanceRequest::GetKibanaPrivatePort() const
{
    return m_kibanaPrivatePort;
}

void UpdateInstanceRequest::SetKibanaPrivatePort(const uint64_t& _kibanaPrivatePort)
{
    m_kibanaPrivatePort = _kibanaPrivatePort;
    m_kibanaPrivatePortHasBeenSet = true;
}

bool UpdateInstanceRequest::KibanaPrivatePortHasBeenSet() const
{
    return m_kibanaPrivatePortHasBeenSet;
}

int64_t UpdateInstanceRequest::GetScaleType() const
{
    return m_scaleType;
}

void UpdateInstanceRequest::SetScaleType(const int64_t& _scaleType)
{
    m_scaleType = _scaleType;
    m_scaleTypeHasBeenSet = true;
}

bool UpdateInstanceRequest::ScaleTypeHasBeenSet() const
{
    return m_scaleTypeHasBeenSet;
}

vector<ZoneDetail> UpdateInstanceRequest::GetMultiZoneInfo() const
{
    return m_multiZoneInfo;
}

void UpdateInstanceRequest::SetMultiZoneInfo(const vector<ZoneDetail>& _multiZoneInfo)
{
    m_multiZoneInfo = _multiZoneInfo;
    m_multiZoneInfoHasBeenSet = true;
}

bool UpdateInstanceRequest::MultiZoneInfoHasBeenSet() const
{
    return m_multiZoneInfoHasBeenSet;
}

int64_t UpdateInstanceRequest::GetSceneType() const
{
    return m_sceneType;
}

void UpdateInstanceRequest::SetSceneType(const int64_t& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool UpdateInstanceRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string UpdateInstanceRequest::GetKibanaConfig() const
{
    return m_kibanaConfig;
}

void UpdateInstanceRequest::SetKibanaConfig(const string& _kibanaConfig)
{
    m_kibanaConfig = _kibanaConfig;
    m_kibanaConfigHasBeenSet = true;
}

bool UpdateInstanceRequest::KibanaConfigHasBeenSet() const
{
    return m_kibanaConfigHasBeenSet;
}

WebNodeTypeInfo UpdateInstanceRequest::GetWebNodeTypeInfo() const
{
    return m_webNodeTypeInfo;
}

void UpdateInstanceRequest::SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo)
{
    m_webNodeTypeInfo = _webNodeTypeInfo;
    m_webNodeTypeInfoHasBeenSet = true;
}

bool UpdateInstanceRequest::WebNodeTypeInfoHasBeenSet() const
{
    return m_webNodeTypeInfoHasBeenSet;
}

string UpdateInstanceRequest::GetSwitchPrivateLink() const
{
    return m_switchPrivateLink;
}

void UpdateInstanceRequest::SetSwitchPrivateLink(const string& _switchPrivateLink)
{
    m_switchPrivateLink = _switchPrivateLink;
    m_switchPrivateLinkHasBeenSet = true;
}

bool UpdateInstanceRequest::SwitchPrivateLinkHasBeenSet() const
{
    return m_switchPrivateLinkHasBeenSet;
}

bool UpdateInstanceRequest::GetEnableCerebro() const
{
    return m_enableCerebro;
}

void UpdateInstanceRequest::SetEnableCerebro(const bool& _enableCerebro)
{
    m_enableCerebro = _enableCerebro;
    m_enableCerebroHasBeenSet = true;
}

bool UpdateInstanceRequest::EnableCerebroHasBeenSet() const
{
    return m_enableCerebroHasBeenSet;
}

string UpdateInstanceRequest::GetCerebroPublicAccess() const
{
    return m_cerebroPublicAccess;
}

void UpdateInstanceRequest::SetCerebroPublicAccess(const string& _cerebroPublicAccess)
{
    m_cerebroPublicAccess = _cerebroPublicAccess;
    m_cerebroPublicAccessHasBeenSet = true;
}

bool UpdateInstanceRequest::CerebroPublicAccessHasBeenSet() const
{
    return m_cerebroPublicAccessHasBeenSet;
}

string UpdateInstanceRequest::GetCerebroPrivateAccess() const
{
    return m_cerebroPrivateAccess;
}

void UpdateInstanceRequest::SetCerebroPrivateAccess(const string& _cerebroPrivateAccess)
{
    m_cerebroPrivateAccess = _cerebroPrivateAccess;
    m_cerebroPrivateAccessHasBeenSet = true;
}

bool UpdateInstanceRequest::CerebroPrivateAccessHasBeenSet() const
{
    return m_cerebroPrivateAccessHasBeenSet;
}

EsConfigSetInfo UpdateInstanceRequest::GetEsConfigSet() const
{
    return m_esConfigSet;
}

void UpdateInstanceRequest::SetEsConfigSet(const EsConfigSetInfo& _esConfigSet)
{
    m_esConfigSet = _esConfigSet;
    m_esConfigSetHasBeenSet = true;
}

bool UpdateInstanceRequest::EsConfigSetHasBeenSet() const
{
    return m_esConfigSetHasBeenSet;
}

OperationDurationUpdated UpdateInstanceRequest::GetOperationDuration() const
{
    return m_operationDuration;
}

void UpdateInstanceRequest::SetOperationDuration(const OperationDurationUpdated& _operationDuration)
{
    m_operationDuration = _operationDuration;
    m_operationDurationHasBeenSet = true;
}

bool UpdateInstanceRequest::OperationDurationHasBeenSet() const
{
    return m_operationDurationHasBeenSet;
}


