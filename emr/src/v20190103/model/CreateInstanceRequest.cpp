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
using namespace rapidjson;
using namespace std;

CreateInstanceRequest::CreateInstanceRequest() :
    m_productIdHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_resourceSpecHasBeenSet(false),
    m_supportHAHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_cOSSettingsHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_preExecutedFileSettingsHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_needMasterWanHasBeenSet(false),
    m_remoteLoginAtCreateHasBeenSet(false),
    m_checkSecurityHasBeenSet(false),
    m_extendFsFieldHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_softwareHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Software";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_software.begin(); itr != m_software.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_supportHAHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SupportHA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_supportHA, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cOSSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "COSSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cOSSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sgIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sgId.c_str(), allocator).Move(), allocator);
    }

    if (m_preExecutedFileSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PreExecutedFileSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_preExecutedFileSettings.begin(); itr != m_preExecutedFileSettings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoRenewHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_needMasterWanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedMasterWan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_needMasterWan.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteLoginAtCreateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemoteLoginAtCreate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_remoteLoginAtCreate, allocator);
    }

    if (m_checkSecurityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CheckSecurity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkSecurity, allocator);
    }

    if (m_extendFsFieldHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtendFsField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extendFsField.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


