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

#include <tencentcloud/emr/v20190103/model/CreateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CreateClusterRequest::CreateClusterRequest() :
    m_productVersionHasBeenSet(false),
    m_enableSupportHAFlagHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_sceneSoftwareConfigHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_scriptBootstrapActionConfigHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_needMasterWanHasBeenSet(false),
    m_enableRemoteLoginFlagHasBeenSet(false),
    m_enableKerberosFlagHasBeenSet(false),
    m_customConfHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_enableCbsEncryptFlagHasBeenSet(false),
    m_metaDBInfoHasBeenSet(false),
    m_dependServiceHasBeenSet(false),
    m_zoneResourceConfigurationHasBeenSet(false),
    m_cosBucketHasBeenSet(false)
{
}

string CreateClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSupportHAFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSupportHAFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSupportHAFlag, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sceneSoftwareConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneSoftwareConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sceneSoftwareConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_needMasterWanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedMasterWan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_needMasterWan.c_str(), allocator).Move(), allocator);
    }

    if (m_enableRemoteLoginFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRemoteLoginFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRemoteLoginFlag, allocator);
    }

    if (m_enableKerberosFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKerberosFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableKerberosFlag, allocator);
    }

    if (m_customConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customConf.c_str(), allocator).Move(), allocator);
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

    if (m_enableCbsEncryptFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCbsEncryptFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCbsEncryptFlag, allocator);
    }

    if (m_metaDBInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDBInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaDBInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dependServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependService.begin(); itr != m_dependService.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_zoneResourceConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneResourceConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneResourceConfiguration.begin(); itr != m_zoneResourceConfiguration.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterRequest::GetProductVersion() const
{
    return m_productVersion;
}

void CreateClusterRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool CreateClusterRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

bool CreateClusterRequest::GetEnableSupportHAFlag() const
{
    return m_enableSupportHAFlag;
}

void CreateClusterRequest::SetEnableSupportHAFlag(const bool& _enableSupportHAFlag)
{
    m_enableSupportHAFlag = _enableSupportHAFlag;
    m_enableSupportHAFlagHasBeenSet = true;
}

bool CreateClusterRequest::EnableSupportHAFlagHasBeenSet() const
{
    return m_enableSupportHAFlagHasBeenSet;
}

string CreateClusterRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateClusterRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateClusterRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateClusterRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateClusterRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateClusterRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

LoginSettings CreateClusterRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateClusterRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateClusterRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

SceneSoftwareConfig CreateClusterRequest::GetSceneSoftwareConfig() const
{
    return m_sceneSoftwareConfig;
}

void CreateClusterRequest::SetSceneSoftwareConfig(const SceneSoftwareConfig& _sceneSoftwareConfig)
{
    m_sceneSoftwareConfig = _sceneSoftwareConfig;
    m_sceneSoftwareConfigHasBeenSet = true;
}

bool CreateClusterRequest::SceneSoftwareConfigHasBeenSet() const
{
    return m_sceneSoftwareConfigHasBeenSet;
}

InstanceChargePrepaid CreateClusterRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateClusterRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateClusterRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

vector<string> CreateClusterRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateClusterRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateClusterRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<ScriptBootstrapActionConfig> CreateClusterRequest::GetScriptBootstrapActionConfig() const
{
    return m_scriptBootstrapActionConfig;
}

void CreateClusterRequest::SetScriptBootstrapActionConfig(const vector<ScriptBootstrapActionConfig>& _scriptBootstrapActionConfig)
{
    m_scriptBootstrapActionConfig = _scriptBootstrapActionConfig;
    m_scriptBootstrapActionConfigHasBeenSet = true;
}

bool CreateClusterRequest::ScriptBootstrapActionConfigHasBeenSet() const
{
    return m_scriptBootstrapActionConfigHasBeenSet;
}

string CreateClusterRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateClusterRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateClusterRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateClusterRequest::GetNeedMasterWan() const
{
    return m_needMasterWan;
}

void CreateClusterRequest::SetNeedMasterWan(const string& _needMasterWan)
{
    m_needMasterWan = _needMasterWan;
    m_needMasterWanHasBeenSet = true;
}

bool CreateClusterRequest::NeedMasterWanHasBeenSet() const
{
    return m_needMasterWanHasBeenSet;
}

bool CreateClusterRequest::GetEnableRemoteLoginFlag() const
{
    return m_enableRemoteLoginFlag;
}

void CreateClusterRequest::SetEnableRemoteLoginFlag(const bool& _enableRemoteLoginFlag)
{
    m_enableRemoteLoginFlag = _enableRemoteLoginFlag;
    m_enableRemoteLoginFlagHasBeenSet = true;
}

bool CreateClusterRequest::EnableRemoteLoginFlagHasBeenSet() const
{
    return m_enableRemoteLoginFlagHasBeenSet;
}

bool CreateClusterRequest::GetEnableKerberosFlag() const
{
    return m_enableKerberosFlag;
}

void CreateClusterRequest::SetEnableKerberosFlag(const bool& _enableKerberosFlag)
{
    m_enableKerberosFlag = _enableKerberosFlag;
    m_enableKerberosFlagHasBeenSet = true;
}

bool CreateClusterRequest::EnableKerberosFlagHasBeenSet() const
{
    return m_enableKerberosFlagHasBeenSet;
}

string CreateClusterRequest::GetCustomConf() const
{
    return m_customConf;
}

void CreateClusterRequest::SetCustomConf(const string& _customConf)
{
    m_customConf = _customConf;
    m_customConfHasBeenSet = true;
}

bool CreateClusterRequest::CustomConfHasBeenSet() const
{
    return m_customConfHasBeenSet;
}

vector<Tag> CreateClusterRequest::GetTags() const
{
    return m_tags;
}

void CreateClusterRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateClusterRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> CreateClusterRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void CreateClusterRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool CreateClusterRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

bool CreateClusterRequest::GetEnableCbsEncryptFlag() const
{
    return m_enableCbsEncryptFlag;
}

void CreateClusterRequest::SetEnableCbsEncryptFlag(const bool& _enableCbsEncryptFlag)
{
    m_enableCbsEncryptFlag = _enableCbsEncryptFlag;
    m_enableCbsEncryptFlagHasBeenSet = true;
}

bool CreateClusterRequest::EnableCbsEncryptFlagHasBeenSet() const
{
    return m_enableCbsEncryptFlagHasBeenSet;
}

CustomMetaDBInfo CreateClusterRequest::GetMetaDBInfo() const
{
    return m_metaDBInfo;
}

void CreateClusterRequest::SetMetaDBInfo(const CustomMetaDBInfo& _metaDBInfo)
{
    m_metaDBInfo = _metaDBInfo;
    m_metaDBInfoHasBeenSet = true;
}

bool CreateClusterRequest::MetaDBInfoHasBeenSet() const
{
    return m_metaDBInfoHasBeenSet;
}

vector<DependService> CreateClusterRequest::GetDependService() const
{
    return m_dependService;
}

void CreateClusterRequest::SetDependService(const vector<DependService>& _dependService)
{
    m_dependService = _dependService;
    m_dependServiceHasBeenSet = true;
}

bool CreateClusterRequest::DependServiceHasBeenSet() const
{
    return m_dependServiceHasBeenSet;
}

vector<ZoneResourceConfiguration> CreateClusterRequest::GetZoneResourceConfiguration() const
{
    return m_zoneResourceConfiguration;
}

void CreateClusterRequest::SetZoneResourceConfiguration(const vector<ZoneResourceConfiguration>& _zoneResourceConfiguration)
{
    m_zoneResourceConfiguration = _zoneResourceConfiguration;
    m_zoneResourceConfigurationHasBeenSet = true;
}

bool CreateClusterRequest::ZoneResourceConfigurationHasBeenSet() const
{
    return m_zoneResourceConfigurationHasBeenSet;
}

string CreateClusterRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void CreateClusterRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CreateClusterRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}


