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

#include <tencentcloud/bh/v20230418/model/AccessDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

AccessDevicesRequest::AccessDevicesRequest() :
    m_accountHasBeenSet(false),
    m_loginAccountHasBeenSet(false),
    m_loginPasswordHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_privateKeyPasswordHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_driversHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_intranetAccessHasBeenSet(false),
    m_autoManageAccessCredentialHasBeenSet(false)
{
}

string AccessDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_loginAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_loginPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deviceId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKeyPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateKeyPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_driversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Drivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drivers.begin(); itr != m_drivers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_intranetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intranetAccess, allocator);
    }

    if (m_autoManageAccessCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoManageAccessCredential";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoManageAccessCredential, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AccessDevicesRequest::GetAccount() const
{
    return m_account;
}

void AccessDevicesRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool AccessDevicesRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string AccessDevicesRequest::GetLoginAccount() const
{
    return m_loginAccount;
}

void AccessDevicesRequest::SetLoginAccount(const string& _loginAccount)
{
    m_loginAccount = _loginAccount;
    m_loginAccountHasBeenSet = true;
}

bool AccessDevicesRequest::LoginAccountHasBeenSet() const
{
    return m_loginAccountHasBeenSet;
}

string AccessDevicesRequest::GetLoginPassword() const
{
    return m_loginPassword;
}

void AccessDevicesRequest::SetLoginPassword(const string& _loginPassword)
{
    m_loginPassword = _loginPassword;
    m_loginPasswordHasBeenSet = true;
}

bool AccessDevicesRequest::LoginPasswordHasBeenSet() const
{
    return m_loginPasswordHasBeenSet;
}

uint64_t AccessDevicesRequest::GetDeviceId() const
{
    return m_deviceId;
}

void AccessDevicesRequest::SetDeviceId(const uint64_t& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool AccessDevicesRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string AccessDevicesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AccessDevicesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AccessDevicesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AccessDevicesRequest::GetPassword() const
{
    return m_password;
}

void AccessDevicesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AccessDevicesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string AccessDevicesRequest::GetPrivateKey() const
{
    return m_privateKey;
}

void AccessDevicesRequest::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool AccessDevicesRequest::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string AccessDevicesRequest::GetPrivateKeyPassword() const
{
    return m_privateKeyPassword;
}

void AccessDevicesRequest::SetPrivateKeyPassword(const string& _privateKeyPassword)
{
    m_privateKeyPassword = _privateKeyPassword;
    m_privateKeyPasswordHasBeenSet = true;
}

bool AccessDevicesRequest::PrivateKeyPasswordHasBeenSet() const
{
    return m_privateKeyPasswordHasBeenSet;
}

string AccessDevicesRequest::GetExe() const
{
    return m_exe;
}

void AccessDevicesRequest::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool AccessDevicesRequest::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

vector<string> AccessDevicesRequest::GetDrivers() const
{
    return m_drivers;
}

void AccessDevicesRequest::SetDrivers(const vector<string>& _drivers)
{
    m_drivers = _drivers;
    m_driversHasBeenSet = true;
}

bool AccessDevicesRequest::DriversHasBeenSet() const
{
    return m_driversHasBeenSet;
}

uint64_t AccessDevicesRequest::GetWidth() const
{
    return m_width;
}

void AccessDevicesRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool AccessDevicesRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t AccessDevicesRequest::GetHeight() const
{
    return m_height;
}

void AccessDevicesRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool AccessDevicesRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

bool AccessDevicesRequest::GetIntranetAccess() const
{
    return m_intranetAccess;
}

void AccessDevicesRequest::SetIntranetAccess(const bool& _intranetAccess)
{
    m_intranetAccess = _intranetAccess;
    m_intranetAccessHasBeenSet = true;
}

bool AccessDevicesRequest::IntranetAccessHasBeenSet() const
{
    return m_intranetAccessHasBeenSet;
}

bool AccessDevicesRequest::GetAutoManageAccessCredential() const
{
    return m_autoManageAccessCredential;
}

void AccessDevicesRequest::SetAutoManageAccessCredential(const bool& _autoManageAccessCredential)
{
    m_autoManageAccessCredential = _autoManageAccessCredential;
    m_autoManageAccessCredentialHasBeenSet = true;
}

bool AccessDevicesRequest::AutoManageAccessCredentialHasBeenSet() const
{
    return m_autoManageAccessCredentialHasBeenSet;
}


