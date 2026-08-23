/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyImageRegistryRequest::ModifyImageRegistryRequest() :
    m_memberIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_registryVersionHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_speedLimitHasBeenSet(false),
    m_insecureHasBeenSet(false),
    m_needScanHasBeenSet(false),
    m_syncModeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_connectivityDetectConfigHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string ModifyImageRegistryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_registryVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_speedLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speedLimit, allocator);
    }

    if (m_insecureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Insecure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_insecure, allocator);
    }

    if (m_needScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needScan, allocator);
    }

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncMode, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectivityDetectConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityDetectConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_connectivityDetectConfig.begin(); itr != m_connectivityDetectConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyImageRegistryRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyImageRegistryRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyImageRegistryRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyImageRegistryRequest::GetName() const
{
    return m_name;
}

void ModifyImageRegistryRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyImageRegistryRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyImageRegistryRequest::GetUsername() const
{
    return m_username;
}

void ModifyImageRegistryRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyImageRegistryRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ModifyImageRegistryRequest::GetPassword() const
{
    return m_password;
}

void ModifyImageRegistryRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyImageRegistryRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string ModifyImageRegistryRequest::GetUrl() const
{
    return m_url;
}

void ModifyImageRegistryRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyImageRegistryRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ModifyImageRegistryRequest::GetRegistryType() const
{
    return m_registryType;
}

void ModifyImageRegistryRequest::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ModifyImageRegistryRequest::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string ModifyImageRegistryRequest::GetNetType() const
{
    return m_netType;
}

void ModifyImageRegistryRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool ModifyImageRegistryRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string ModifyImageRegistryRequest::GetRegistryVersion() const
{
    return m_registryVersion;
}

void ModifyImageRegistryRequest::SetRegistryVersion(const string& _registryVersion)
{
    m_registryVersion = _registryVersion;
    m_registryVersionHasBeenSet = true;
}

bool ModifyImageRegistryRequest::RegistryVersionHasBeenSet() const
{
    return m_registryVersionHasBeenSet;
}

string ModifyImageRegistryRequest::GetRegistryRegion() const
{
    return m_registryRegion;
}

void ModifyImageRegistryRequest::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool ModifyImageRegistryRequest::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

uint64_t ModifyImageRegistryRequest::GetSpeedLimit() const
{
    return m_speedLimit;
}

void ModifyImageRegistryRequest::SetSpeedLimit(const uint64_t& _speedLimit)
{
    m_speedLimit = _speedLimit;
    m_speedLimitHasBeenSet = true;
}

bool ModifyImageRegistryRequest::SpeedLimitHasBeenSet() const
{
    return m_speedLimitHasBeenSet;
}

uint64_t ModifyImageRegistryRequest::GetInsecure() const
{
    return m_insecure;
}

void ModifyImageRegistryRequest::SetInsecure(const uint64_t& _insecure)
{
    m_insecure = _insecure;
    m_insecureHasBeenSet = true;
}

bool ModifyImageRegistryRequest::InsecureHasBeenSet() const
{
    return m_insecureHasBeenSet;
}

bool ModifyImageRegistryRequest::GetNeedScan() const
{
    return m_needScan;
}

void ModifyImageRegistryRequest::SetNeedScan(const bool& _needScan)
{
    m_needScan = _needScan;
    m_needScanHasBeenSet = true;
}

bool ModifyImageRegistryRequest::NeedScanHasBeenSet() const
{
    return m_needScanHasBeenSet;
}

uint64_t ModifyImageRegistryRequest::GetSyncMode() const
{
    return m_syncMode;
}

void ModifyImageRegistryRequest::SetSyncMode(const uint64_t& _syncMode)
{
    m_syncMode = _syncMode;
    m_syncModeHasBeenSet = true;
}

bool ModifyImageRegistryRequest::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

string ModifyImageRegistryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyImageRegistryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyImageRegistryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<ConnectivityDetectConfig> ModifyImageRegistryRequest::GetConnectivityDetectConfig() const
{
    return m_connectivityDetectConfig;
}

void ModifyImageRegistryRequest::SetConnectivityDetectConfig(const vector<ConnectivityDetectConfig>& _connectivityDetectConfig)
{
    m_connectivityDetectConfig = _connectivityDetectConfig;
    m_connectivityDetectConfigHasBeenSet = true;
}

bool ModifyImageRegistryRequest::ConnectivityDetectConfigHasBeenSet() const
{
    return m_connectivityDetectConfigHasBeenSet;
}

uint64_t ModifyImageRegistryRequest::GetId() const
{
    return m_id;
}

void ModifyImageRegistryRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyImageRegistryRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


