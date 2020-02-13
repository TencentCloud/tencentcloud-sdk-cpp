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

#include <tencentcloud/tcaplusdb/v20190823/model/AppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

AppInfo::AppInfo() :
    m_appNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_idlTypeHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_passwordStatusHasBeenSet(false),
    m_apiAccessIdHasBeenSet(false),
    m_apiAccessIpHasBeenSet(false),
    m_apiAccessPortHasBeenSet(false),
    m_oldPasswordExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome AppInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IdlType") && !value["IdlType"].IsNull())
    {
        if (!value["IdlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.IdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idlType = string(value["IdlType"].GetString());
        m_idlTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("PasswordStatus") && !value["PasswordStatus"].IsNull())
    {
        if (!value["PasswordStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.PasswordStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordStatus = string(value["PasswordStatus"].GetString());
        m_passwordStatusHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessId") && !value["ApiAccessId"].IsNull())
    {
        if (!value["ApiAccessId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.ApiAccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessId = string(value["ApiAccessId"].GetString());
        m_apiAccessIdHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessIp") && !value["ApiAccessIp"].IsNull())
    {
        if (!value["ApiAccessIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.ApiAccessIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessIp = string(value["ApiAccessIp"].GetString());
        m_apiAccessIpHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessPort") && !value["ApiAccessPort"].IsNull())
    {
        if (!value["ApiAccessPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AppInfo.ApiAccessPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessPort = value["ApiAccessPort"].GetInt64();
        m_apiAccessPortHasBeenSet = true;
    }

    if (value.HasMember("OldPasswordExpireTime") && !value["OldPasswordExpireTime"].IsNull())
    {
        if (!value["OldPasswordExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppInfo.OldPasswordExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldPasswordExpireTime = string(value["OldPasswordExpireTime"].GetString());
        m_oldPasswordExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_idlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_idlType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PasswordStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_passwordStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAccessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_apiAccessId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAccessIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_apiAccessIp.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAccessPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiAccessPort, allocator);
    }

    if (m_oldPasswordExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldPasswordExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_oldPasswordExpireTime.c_str(), allocator).Move(), allocator);
    }

}


string AppInfo::GetAppName() const
{
    return m_appName;
}

void AppInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AppInfo::GetApplicationId() const
{
    return m_applicationId;
}

void AppInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool AppInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string AppInfo::GetRegion() const
{
    return m_region;
}

void AppInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AppInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AppInfo::GetIdlType() const
{
    return m_idlType;
}

void AppInfo::SetIdlType(const string& _idlType)
{
    m_idlType = _idlType;
    m_idlTypeHasBeenSet = true;
}

bool AppInfo::IdlTypeHasBeenSet() const
{
    return m_idlTypeHasBeenSet;
}

string AppInfo::GetNetworkType() const
{
    return m_networkType;
}

void AppInfo::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool AppInfo::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string AppInfo::GetVpcId() const
{
    return m_vpcId;
}

void AppInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AppInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AppInfo::GetSubnetId() const
{
    return m_subnetId;
}

void AppInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool AppInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string AppInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void AppInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AppInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string AppInfo::GetPassword() const
{
    return m_password;
}

void AppInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AppInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string AppInfo::GetPasswordStatus() const
{
    return m_passwordStatus;
}

void AppInfo::SetPasswordStatus(const string& _passwordStatus)
{
    m_passwordStatus = _passwordStatus;
    m_passwordStatusHasBeenSet = true;
}

bool AppInfo::PasswordStatusHasBeenSet() const
{
    return m_passwordStatusHasBeenSet;
}

string AppInfo::GetApiAccessId() const
{
    return m_apiAccessId;
}

void AppInfo::SetApiAccessId(const string& _apiAccessId)
{
    m_apiAccessId = _apiAccessId;
    m_apiAccessIdHasBeenSet = true;
}

bool AppInfo::ApiAccessIdHasBeenSet() const
{
    return m_apiAccessIdHasBeenSet;
}

string AppInfo::GetApiAccessIp() const
{
    return m_apiAccessIp;
}

void AppInfo::SetApiAccessIp(const string& _apiAccessIp)
{
    m_apiAccessIp = _apiAccessIp;
    m_apiAccessIpHasBeenSet = true;
}

bool AppInfo::ApiAccessIpHasBeenSet() const
{
    return m_apiAccessIpHasBeenSet;
}

int64_t AppInfo::GetApiAccessPort() const
{
    return m_apiAccessPort;
}

void AppInfo::SetApiAccessPort(const int64_t& _apiAccessPort)
{
    m_apiAccessPort = _apiAccessPort;
    m_apiAccessPortHasBeenSet = true;
}

bool AppInfo::ApiAccessPortHasBeenSet() const
{
    return m_apiAccessPortHasBeenSet;
}

string AppInfo::GetOldPasswordExpireTime() const
{
    return m_oldPasswordExpireTime;
}

void AppInfo::SetOldPasswordExpireTime(const string& _oldPasswordExpireTime)
{
    m_oldPasswordExpireTime = _oldPasswordExpireTime;
    m_oldPasswordExpireTimeHasBeenSet = true;
}

bool AppInfo::OldPasswordExpireTimeHasBeenSet() const
{
    return m_oldPasswordExpireTimeHasBeenSet;
}

