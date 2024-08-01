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

#include <tencentcloud/emr/v20190103/model/CreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CreateInstanceRequest::CreateInstanceRequest() :
    m_productIdHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_supportHAHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false),
    m_resourceSpecHasBeenSet(false),
    m_cOSSettingsHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_preExecutedFileSettingsHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_needMasterWanHasBeenSet(false),
    m_remoteLoginAtCreateHasBeenSet(false),
    m_checkSecurityHasBeenSet(false),
    m_extendFsFieldHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_cbsEncryptHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_unifyMetaInstanceIdHasBeenSet(false),
    m_metaDBInfoHasBeenSet(false),
    m_applicationRoleHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_externalServiceHasBeenSet(false),
    m_versionIDHasBeenSet(false),
    m_multiZoneHasBeenSet(false),
    m_multiZoneSettingsHasBeenSet(false),
    m_cosBucketHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_softwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Software";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_software.begin(); itr != m_software.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportHAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_supportHA, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cOSSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cOSSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sgId.c_str(), allocator).Move(), allocator);
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

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
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

    if (m_remoteLoginAtCreateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteLoginAtCreate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_remoteLoginAtCreate, allocator);
    }

    if (m_checkSecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckSecurity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkSecurity, allocator);
    }

    if (m_extendFsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendFsField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendFsField.c_str(), allocator).Move(), allocator);
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

    if (m_cbsEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CbsEncrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cbsEncrypt, allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_unifyMetaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifyMetaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unifyMetaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDBInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDBInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaDBInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_applicationRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationRole.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_externalServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalService.begin(); itr != m_externalService.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_versionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_versionID, allocator);
    }

    if (m_multiZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_multiZone, allocator);
    }

    if (m_multiZoneSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiZoneSettings.begin(); itr != m_multiZoneSettings.end(); ++itr, ++i)
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


uint64_t CreateInstanceRequest::GetProductId() const
{
    return m_productId;
}

void CreateInstanceRequest::SetProductId(const uint64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateInstanceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<string> CreateInstanceRequest::GetSoftware() const
{
    return m_software;
}

void CreateInstanceRequest::SetSoftware(const vector<string>& _software)
{
    m_software = _software;
    m_softwareHasBeenSet = true;
}

bool CreateInstanceRequest::SoftwareHasBeenSet() const
{
    return m_softwareHasBeenSet;
}

uint64_t CreateInstanceRequest::GetSupportHA() const
{
    return m_supportHA;
}

void CreateInstanceRequest::SetSupportHA(const uint64_t& _supportHA)
{
    m_supportHA = _supportHA;
    m_supportHAHasBeenSet = true;
}

bool CreateInstanceRequest::SupportHAHasBeenSet() const
{
    return m_supportHAHasBeenSet;
}

string CreateInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t CreateInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateInstanceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t CreateInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

LoginSettings CreateInstanceRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreateInstanceRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreateInstanceRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

VPCSettings CreateInstanceRequest::GetVPCSettings() const
{
    return m_vPCSettings;
}

void CreateInstanceRequest::SetVPCSettings(const VPCSettings& _vPCSettings)
{
    m_vPCSettings = _vPCSettings;
    m_vPCSettingsHasBeenSet = true;
}

bool CreateInstanceRequest::VPCSettingsHasBeenSet() const
{
    return m_vPCSettingsHasBeenSet;
}

NewResourceSpec CreateInstanceRequest::GetResourceSpec() const
{
    return m_resourceSpec;
}

void CreateInstanceRequest::SetResourceSpec(const NewResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool CreateInstanceRequest::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

COSSettings CreateInstanceRequest::GetCOSSettings() const
{
    return m_cOSSettings;
}

void CreateInstanceRequest::SetCOSSettings(const COSSettings& _cOSSettings)
{
    m_cOSSettings = _cOSSettings;
    m_cOSSettingsHasBeenSet = true;
}

bool CreateInstanceRequest::COSSettingsHasBeenSet() const
{
    return m_cOSSettingsHasBeenSet;
}

Placement CreateInstanceRequest::GetPlacement() const
{
    return m_placement;
}

void CreateInstanceRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateInstanceRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string CreateInstanceRequest::GetSgId() const
{
    return m_sgId;
}

void CreateInstanceRequest::SetSgId(const string& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool CreateInstanceRequest::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

vector<PreExecuteFileSettings> CreateInstanceRequest::GetPreExecutedFileSettings() const
{
    return m_preExecutedFileSettings;
}

void CreateInstanceRequest::SetPreExecutedFileSettings(const vector<PreExecuteFileSettings>& _preExecutedFileSettings)
{
    m_preExecutedFileSettings = _preExecutedFileSettings;
    m_preExecutedFileSettingsHasBeenSet = true;
}

bool CreateInstanceRequest::PreExecutedFileSettingsHasBeenSet() const
{
    return m_preExecutedFileSettingsHasBeenSet;
}

uint64_t CreateInstanceRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateInstanceRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateInstanceRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string CreateInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateInstanceRequest::GetNeedMasterWan() const
{
    return m_needMasterWan;
}

void CreateInstanceRequest::SetNeedMasterWan(const string& _needMasterWan)
{
    m_needMasterWan = _needMasterWan;
    m_needMasterWanHasBeenSet = true;
}

bool CreateInstanceRequest::NeedMasterWanHasBeenSet() const
{
    return m_needMasterWanHasBeenSet;
}

int64_t CreateInstanceRequest::GetRemoteLoginAtCreate() const
{
    return m_remoteLoginAtCreate;
}

void CreateInstanceRequest::SetRemoteLoginAtCreate(const int64_t& _remoteLoginAtCreate)
{
    m_remoteLoginAtCreate = _remoteLoginAtCreate;
    m_remoteLoginAtCreateHasBeenSet = true;
}

bool CreateInstanceRequest::RemoteLoginAtCreateHasBeenSet() const
{
    return m_remoteLoginAtCreateHasBeenSet;
}

int64_t CreateInstanceRequest::GetCheckSecurity() const
{
    return m_checkSecurity;
}

void CreateInstanceRequest::SetCheckSecurity(const int64_t& _checkSecurity)
{
    m_checkSecurity = _checkSecurity;
    m_checkSecurityHasBeenSet = true;
}

bool CreateInstanceRequest::CheckSecurityHasBeenSet() const
{
    return m_checkSecurityHasBeenSet;
}

string CreateInstanceRequest::GetExtendFsField() const
{
    return m_extendFsField;
}

void CreateInstanceRequest::SetExtendFsField(const string& _extendFsField)
{
    m_extendFsField = _extendFsField;
    m_extendFsFieldHasBeenSet = true;
}

bool CreateInstanceRequest::ExtendFsFieldHasBeenSet() const
{
    return m_extendFsFieldHasBeenSet;
}

vector<Tag> CreateInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> CreateInstanceRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void CreateInstanceRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool CreateInstanceRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

uint64_t CreateInstanceRequest::GetCbsEncrypt() const
{
    return m_cbsEncrypt;
}

void CreateInstanceRequest::SetCbsEncrypt(const uint64_t& _cbsEncrypt)
{
    m_cbsEncrypt = _cbsEncrypt;
    m_cbsEncryptHasBeenSet = true;
}

bool CreateInstanceRequest::CbsEncryptHasBeenSet() const
{
    return m_cbsEncryptHasBeenSet;
}

string CreateInstanceRequest::GetMetaType() const
{
    return m_metaType;
}

void CreateInstanceRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool CreateInstanceRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string CreateInstanceRequest::GetUnifyMetaInstanceId() const
{
    return m_unifyMetaInstanceId;
}

void CreateInstanceRequest::SetUnifyMetaInstanceId(const string& _unifyMetaInstanceId)
{
    m_unifyMetaInstanceId = _unifyMetaInstanceId;
    m_unifyMetaInstanceIdHasBeenSet = true;
}

bool CreateInstanceRequest::UnifyMetaInstanceIdHasBeenSet() const
{
    return m_unifyMetaInstanceIdHasBeenSet;
}

CustomMetaInfo CreateInstanceRequest::GetMetaDBInfo() const
{
    return m_metaDBInfo;
}

void CreateInstanceRequest::SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo)
{
    m_metaDBInfo = _metaDBInfo;
    m_metaDBInfoHasBeenSet = true;
}

bool CreateInstanceRequest::MetaDBInfoHasBeenSet() const
{
    return m_metaDBInfoHasBeenSet;
}

string CreateInstanceRequest::GetApplicationRole() const
{
    return m_applicationRole;
}

void CreateInstanceRequest::SetApplicationRole(const string& _applicationRole)
{
    m_applicationRole = _applicationRole;
    m_applicationRoleHasBeenSet = true;
}

bool CreateInstanceRequest::ApplicationRoleHasBeenSet() const
{
    return m_applicationRoleHasBeenSet;
}

string CreateInstanceRequest::GetSceneName() const
{
    return m_sceneName;
}

void CreateInstanceRequest::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool CreateInstanceRequest::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

vector<ExternalService> CreateInstanceRequest::GetExternalService() const
{
    return m_externalService;
}

void CreateInstanceRequest::SetExternalService(const vector<ExternalService>& _externalService)
{
    m_externalService = _externalService;
    m_externalServiceHasBeenSet = true;
}

bool CreateInstanceRequest::ExternalServiceHasBeenSet() const
{
    return m_externalServiceHasBeenSet;
}

int64_t CreateInstanceRequest::GetVersionID() const
{
    return m_versionID;
}

void CreateInstanceRequest::SetVersionID(const int64_t& _versionID)
{
    m_versionID = _versionID;
    m_versionIDHasBeenSet = true;
}

bool CreateInstanceRequest::VersionIDHasBeenSet() const
{
    return m_versionIDHasBeenSet;
}

bool CreateInstanceRequest::GetMultiZone() const
{
    return m_multiZone;
}

void CreateInstanceRequest::SetMultiZone(const bool& _multiZone)
{
    m_multiZone = _multiZone;
    m_multiZoneHasBeenSet = true;
}

bool CreateInstanceRequest::MultiZoneHasBeenSet() const
{
    return m_multiZoneHasBeenSet;
}

vector<MultiZoneSetting> CreateInstanceRequest::GetMultiZoneSettings() const
{
    return m_multiZoneSettings;
}

void CreateInstanceRequest::SetMultiZoneSettings(const vector<MultiZoneSetting>& _multiZoneSettings)
{
    m_multiZoneSettings = _multiZoneSettings;
    m_multiZoneSettingsHasBeenSet = true;
}

bool CreateInstanceRequest::MultiZoneSettingsHasBeenSet() const
{
    return m_multiZoneSettingsHasBeenSet;
}

string CreateInstanceRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void CreateInstanceRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CreateInstanceRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}


