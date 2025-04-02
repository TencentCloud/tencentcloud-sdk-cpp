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

#include <tencentcloud/dts/v20211206/model/DBInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DBInfo::DBInfo() :
    m_roleHasBeenSet(false),
    m_dbKernelHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_uniqVpnGwIdHasBeenSet(false),
    m_uniqDcgIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ccnGwIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_accountRoleHasBeenSet(false),
    m_accountModeHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_tmpTokenHasBeenSet(false),
    m_encryptConnHasBeenSet(false),
    m_setIdHasBeenSet(false)
{
}

CoreInternalOutcome DBInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("DbKernel") && !value["DbKernel"].IsNull())
    {
        if (!value["DbKernel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.DbKernel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbKernel = string(value["DbKernel"].GetString());
        m_dbKernelHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpnGwId") && !value["UniqVpnGwId"].IsNull())
    {
        if (!value["UniqVpnGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.UniqVpnGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpnGwId = string(value["UniqVpnGwId"].GetString());
        m_uniqVpnGwIdHasBeenSet = true;
    }

    if (value.HasMember("UniqDcgId") && !value["UniqDcgId"].IsNull())
    {
        if (!value["UniqDcgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.UniqDcgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqDcgId = string(value["UniqDcgId"].GetString());
        m_uniqDcgIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CcnGwId") && !value["CcnGwId"].IsNull())
    {
        if (!value["CcnGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.CcnGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnGwId = string(value["CcnGwId"].GetString());
        m_ccnGwIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("AccountRole") && !value["AccountRole"].IsNull())
    {
        if (!value["AccountRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.AccountRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountRole = string(value["AccountRole"].GetString());
        m_accountRoleHasBeenSet = true;
    }

    if (value.HasMember("AccountMode") && !value["AccountMode"].IsNull())
    {
        if (!value["AccountMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.AccountMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountMode = string(value["AccountMode"].GetString());
        m_accountModeHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretId") && !value["TmpSecretId"].IsNull())
    {
        if (!value["TmpSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.TmpSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretId = string(value["TmpSecretId"].GetString());
        m_tmpSecretIdHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretKey") && !value["TmpSecretKey"].IsNull())
    {
        if (!value["TmpSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.TmpSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretKey = string(value["TmpSecretKey"].GetString());
        m_tmpSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("TmpToken") && !value["TmpToken"].IsNull())
    {
        if (!value["TmpToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.TmpToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpToken = string(value["TmpToken"].GetString());
        m_tmpTokenHasBeenSet = true;
    }

    if (value.HasMember("EncryptConn") && !value["EncryptConn"].IsNull())
    {
        if (!value["EncryptConn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.EncryptConn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptConn = string(value["EncryptConn"].GetString());
        m_encryptConnHasBeenSet = true;
    }

    if (value.HasMember("SetId") && !value["SetId"].IsNull())
    {
        if (!value["SetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInfo.SetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setId = string(value["SetId"].GetString());
        m_setIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_dbKernelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbKernel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbKernel.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpnGwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpnGwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpnGwId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqDcgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqDcgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqDcgId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnGwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnGwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnGwId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_accountRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountRole.c_str(), allocator).Move(), allocator);
    }

    if (m_accountModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpToken.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptConn.c_str(), allocator).Move(), allocator);
    }

    if (m_setIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setId.c_str(), allocator).Move(), allocator);
    }

}


string DBInfo::GetRole() const
{
    return m_role;
}

void DBInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool DBInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string DBInfo::GetDbKernel() const
{
    return m_dbKernel;
}

void DBInfo::SetDbKernel(const string& _dbKernel)
{
    m_dbKernel = _dbKernel;
    m_dbKernelHasBeenSet = true;
}

bool DBInfo::DbKernelHasBeenSet() const
{
    return m_dbKernelHasBeenSet;
}

string DBInfo::GetHost() const
{
    return m_host;
}

void DBInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DBInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t DBInfo::GetPort() const
{
    return m_port;
}

void DBInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DBInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DBInfo::GetUser() const
{
    return m_user;
}

void DBInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool DBInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string DBInfo::GetPassword() const
{
    return m_password;
}

void DBInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DBInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DBInfo::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void DBInfo::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool DBInfo::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string DBInfo::GetUniqVpnGwId() const
{
    return m_uniqVpnGwId;
}

void DBInfo::SetUniqVpnGwId(const string& _uniqVpnGwId)
{
    m_uniqVpnGwId = _uniqVpnGwId;
    m_uniqVpnGwIdHasBeenSet = true;
}

bool DBInfo::UniqVpnGwIdHasBeenSet() const
{
    return m_uniqVpnGwIdHasBeenSet;
}

string DBInfo::GetUniqDcgId() const
{
    return m_uniqDcgId;
}

void DBInfo::SetUniqDcgId(const string& _uniqDcgId)
{
    m_uniqDcgId = _uniqDcgId;
    m_uniqDcgIdHasBeenSet = true;
}

bool DBInfo::UniqDcgIdHasBeenSet() const
{
    return m_uniqDcgIdHasBeenSet;
}

string DBInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DBInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DBInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DBInfo::GetCcnGwId() const
{
    return m_ccnGwId;
}

void DBInfo::SetCcnGwId(const string& _ccnGwId)
{
    m_ccnGwId = _ccnGwId;
    m_ccnGwIdHasBeenSet = true;
}

bool DBInfo::CcnGwIdHasBeenSet() const
{
    return m_ccnGwIdHasBeenSet;
}

string DBInfo::GetVpcId() const
{
    return m_vpcId;
}

void DBInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DBInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DBInfo::GetSubnetId() const
{
    return m_subnetId;
}

void DBInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DBInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DBInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void DBInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool DBInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string DBInfo::GetAccount() const
{
    return m_account;
}

void DBInfo::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DBInfo::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DBInfo::GetAccountRole() const
{
    return m_accountRole;
}

void DBInfo::SetAccountRole(const string& _accountRole)
{
    m_accountRole = _accountRole;
    m_accountRoleHasBeenSet = true;
}

bool DBInfo::AccountRoleHasBeenSet() const
{
    return m_accountRoleHasBeenSet;
}

string DBInfo::GetAccountMode() const
{
    return m_accountMode;
}

void DBInfo::SetAccountMode(const string& _accountMode)
{
    m_accountMode = _accountMode;
    m_accountModeHasBeenSet = true;
}

bool DBInfo::AccountModeHasBeenSet() const
{
    return m_accountModeHasBeenSet;
}

string DBInfo::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

void DBInfo::SetTmpSecretId(const string& _tmpSecretId)
{
    m_tmpSecretId = _tmpSecretId;
    m_tmpSecretIdHasBeenSet = true;
}

bool DBInfo::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string DBInfo::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

void DBInfo::SetTmpSecretKey(const string& _tmpSecretKey)
{
    m_tmpSecretKey = _tmpSecretKey;
    m_tmpSecretKeyHasBeenSet = true;
}

bool DBInfo::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

string DBInfo::GetTmpToken() const
{
    return m_tmpToken;
}

void DBInfo::SetTmpToken(const string& _tmpToken)
{
    m_tmpToken = _tmpToken;
    m_tmpTokenHasBeenSet = true;
}

bool DBInfo::TmpTokenHasBeenSet() const
{
    return m_tmpTokenHasBeenSet;
}

string DBInfo::GetEncryptConn() const
{
    return m_encryptConn;
}

void DBInfo::SetEncryptConn(const string& _encryptConn)
{
    m_encryptConn = _encryptConn;
    m_encryptConnHasBeenSet = true;
}

bool DBInfo::EncryptConnHasBeenSet() const
{
    return m_encryptConnHasBeenSet;
}

string DBInfo::GetSetId() const
{
    return m_setId;
}

void DBInfo::SetSetId(const string& _setId)
{
    m_setId = _setId;
    m_setIdHasBeenSet = true;
}

bool DBInfo::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}

