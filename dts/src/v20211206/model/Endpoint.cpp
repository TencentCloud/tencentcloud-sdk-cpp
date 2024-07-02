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

#include <tencentcloud/dts/v20211206/model/Endpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

Endpoint::Endpoint() :
    m_regionHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_dbKernelHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_uniqDcgIdHasBeenSet(false),
    m_uniqVpnGwIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_supplierHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_accountModeHasBeenSet(false),
    m_accountRoleHasBeenSet(false),
    m_roleExternalIdHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_tmpTokenHasBeenSet(false),
    m_encryptConnHasBeenSet(false),
    m_databaseNetEnvHasBeenSet(false),
    m_ccnOwnerUinHasBeenSet(false),
    m_childInstanceIdHasBeenSet(false),
    m_childInstanceTypeHasBeenSet(false),
    m_setIdHasBeenSet(false)
{
}

CoreInternalOutcome Endpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("DbKernel") && !value["DbKernel"].IsNull())
    {
        if (!value["DbKernel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.DbKernel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbKernel = string(value["DbKernel"].GetString());
        m_dbKernelHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("UniqDcgId") && !value["UniqDcgId"].IsNull())
    {
        if (!value["UniqDcgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.UniqDcgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqDcgId = string(value["UniqDcgId"].GetString());
        m_uniqDcgIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpnGwId") && !value["UniqVpnGwId"].IsNull())
    {
        if (!value["UniqVpnGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.UniqVpnGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpnGwId = string(value["UniqVpnGwId"].GetString());
        m_uniqVpnGwIdHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("Supplier") && !value["Supplier"].IsNull())
    {
        if (!value["Supplier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Supplier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supplier = string(value["Supplier"].GetString());
        m_supplierHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("AccountMode") && !value["AccountMode"].IsNull())
    {
        if (!value["AccountMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.AccountMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountMode = string(value["AccountMode"].GetString());
        m_accountModeHasBeenSet = true;
    }

    if (value.HasMember("AccountRole") && !value["AccountRole"].IsNull())
    {
        if (!value["AccountRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.AccountRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountRole = string(value["AccountRole"].GetString());
        m_accountRoleHasBeenSet = true;
    }

    if (value.HasMember("RoleExternalId") && !value["RoleExternalId"].IsNull())
    {
        if (!value["RoleExternalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.RoleExternalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleExternalId = string(value["RoleExternalId"].GetString());
        m_roleExternalIdHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretId") && !value["TmpSecretId"].IsNull())
    {
        if (!value["TmpSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.TmpSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretId = string(value["TmpSecretId"].GetString());
        m_tmpSecretIdHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretKey") && !value["TmpSecretKey"].IsNull())
    {
        if (!value["TmpSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.TmpSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretKey = string(value["TmpSecretKey"].GetString());
        m_tmpSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("TmpToken") && !value["TmpToken"].IsNull())
    {
        if (!value["TmpToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.TmpToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpToken = string(value["TmpToken"].GetString());
        m_tmpTokenHasBeenSet = true;
    }

    if (value.HasMember("EncryptConn") && !value["EncryptConn"].IsNull())
    {
        if (!value["EncryptConn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.EncryptConn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptConn = string(value["EncryptConn"].GetString());
        m_encryptConnHasBeenSet = true;
    }

    if (value.HasMember("DatabaseNetEnv") && !value["DatabaseNetEnv"].IsNull())
    {
        if (!value["DatabaseNetEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.DatabaseNetEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseNetEnv = string(value["DatabaseNetEnv"].GetString());
        m_databaseNetEnvHasBeenSet = true;
    }

    if (value.HasMember("CcnOwnerUin") && !value["CcnOwnerUin"].IsNull())
    {
        if (!value["CcnOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.CcnOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnOwnerUin = string(value["CcnOwnerUin"].GetString());
        m_ccnOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("ChildInstanceId") && !value["ChildInstanceId"].IsNull())
    {
        if (!value["ChildInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.ChildInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childInstanceId = string(value["ChildInstanceId"].GetString());
        m_childInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ChildInstanceType") && !value["ChildInstanceType"].IsNull())
    {
        if (!value["ChildInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.ChildInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childInstanceType = string(value["ChildInstanceType"].GetString());
        m_childInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SetId") && !value["SetId"].IsNull())
    {
        if (!value["SetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.SetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setId = string(value["SetId"].GetString());
        m_setIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Endpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
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

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
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

    if (m_cvmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqDcgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqDcgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqDcgId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpnGwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpnGwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpnGwId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_supplierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Supplier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supplier.c_str(), allocator).Move(), allocator);
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

    if (m_accountModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountMode.c_str(), allocator).Move(), allocator);
    }

    if (m_accountRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountRole.c_str(), allocator).Move(), allocator);
    }

    if (m_roleExternalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleExternalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleExternalId.c_str(), allocator).Move(), allocator);
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

    if (m_databaseNetEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNetEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseNetEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_childInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_childInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_setIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setId.c_str(), allocator).Move(), allocator);
    }

}


string Endpoint::GetRegion() const
{
    return m_region;
}

void Endpoint::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Endpoint::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Endpoint::GetRole() const
{
    return m_role;
}

void Endpoint::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool Endpoint::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string Endpoint::GetDbKernel() const
{
    return m_dbKernel;
}

void Endpoint::SetDbKernel(const string& _dbKernel)
{
    m_dbKernel = _dbKernel;
    m_dbKernelHasBeenSet = true;
}

bool Endpoint::DbKernelHasBeenSet() const
{
    return m_dbKernelHasBeenSet;
}

string Endpoint::GetInstanceId() const
{
    return m_instanceId;
}

void Endpoint::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Endpoint::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Endpoint::GetIp() const
{
    return m_ip;
}

void Endpoint::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool Endpoint::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t Endpoint::GetPort() const
{
    return m_port;
}

void Endpoint::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool Endpoint::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string Endpoint::GetUser() const
{
    return m_user;
}

void Endpoint::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool Endpoint::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string Endpoint::GetPassword() const
{
    return m_password;
}

void Endpoint::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool Endpoint::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string Endpoint::GetDbName() const
{
    return m_dbName;
}

void Endpoint::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool Endpoint::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string Endpoint::GetVpcId() const
{
    return m_vpcId;
}

void Endpoint::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Endpoint::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Endpoint::GetSubnetId() const
{
    return m_subnetId;
}

void Endpoint::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Endpoint::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string Endpoint::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void Endpoint::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool Endpoint::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string Endpoint::GetUniqDcgId() const
{
    return m_uniqDcgId;
}

void Endpoint::SetUniqDcgId(const string& _uniqDcgId)
{
    m_uniqDcgId = _uniqDcgId;
    m_uniqDcgIdHasBeenSet = true;
}

bool Endpoint::UniqDcgIdHasBeenSet() const
{
    return m_uniqDcgIdHasBeenSet;
}

string Endpoint::GetUniqVpnGwId() const
{
    return m_uniqVpnGwId;
}

void Endpoint::SetUniqVpnGwId(const string& _uniqVpnGwId)
{
    m_uniqVpnGwId = _uniqVpnGwId;
    m_uniqVpnGwIdHasBeenSet = true;
}

bool Endpoint::UniqVpnGwIdHasBeenSet() const
{
    return m_uniqVpnGwIdHasBeenSet;
}

string Endpoint::GetCcnId() const
{
    return m_ccnId;
}

void Endpoint::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool Endpoint::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string Endpoint::GetSupplier() const
{
    return m_supplier;
}

void Endpoint::SetSupplier(const string& _supplier)
{
    m_supplier = _supplier;
    m_supplierHasBeenSet = true;
}

bool Endpoint::SupplierHasBeenSet() const
{
    return m_supplierHasBeenSet;
}

string Endpoint::GetEngineVersion() const
{
    return m_engineVersion;
}

void Endpoint::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool Endpoint::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string Endpoint::GetAccount() const
{
    return m_account;
}

void Endpoint::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool Endpoint::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string Endpoint::GetAccountMode() const
{
    return m_accountMode;
}

void Endpoint::SetAccountMode(const string& _accountMode)
{
    m_accountMode = _accountMode;
    m_accountModeHasBeenSet = true;
}

bool Endpoint::AccountModeHasBeenSet() const
{
    return m_accountModeHasBeenSet;
}

string Endpoint::GetAccountRole() const
{
    return m_accountRole;
}

void Endpoint::SetAccountRole(const string& _accountRole)
{
    m_accountRole = _accountRole;
    m_accountRoleHasBeenSet = true;
}

bool Endpoint::AccountRoleHasBeenSet() const
{
    return m_accountRoleHasBeenSet;
}

string Endpoint::GetRoleExternalId() const
{
    return m_roleExternalId;
}

void Endpoint::SetRoleExternalId(const string& _roleExternalId)
{
    m_roleExternalId = _roleExternalId;
    m_roleExternalIdHasBeenSet = true;
}

bool Endpoint::RoleExternalIdHasBeenSet() const
{
    return m_roleExternalIdHasBeenSet;
}

string Endpoint::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

void Endpoint::SetTmpSecretId(const string& _tmpSecretId)
{
    m_tmpSecretId = _tmpSecretId;
    m_tmpSecretIdHasBeenSet = true;
}

bool Endpoint::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string Endpoint::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

void Endpoint::SetTmpSecretKey(const string& _tmpSecretKey)
{
    m_tmpSecretKey = _tmpSecretKey;
    m_tmpSecretKeyHasBeenSet = true;
}

bool Endpoint::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

string Endpoint::GetTmpToken() const
{
    return m_tmpToken;
}

void Endpoint::SetTmpToken(const string& _tmpToken)
{
    m_tmpToken = _tmpToken;
    m_tmpTokenHasBeenSet = true;
}

bool Endpoint::TmpTokenHasBeenSet() const
{
    return m_tmpTokenHasBeenSet;
}

string Endpoint::GetEncryptConn() const
{
    return m_encryptConn;
}

void Endpoint::SetEncryptConn(const string& _encryptConn)
{
    m_encryptConn = _encryptConn;
    m_encryptConnHasBeenSet = true;
}

bool Endpoint::EncryptConnHasBeenSet() const
{
    return m_encryptConnHasBeenSet;
}

string Endpoint::GetDatabaseNetEnv() const
{
    return m_databaseNetEnv;
}

void Endpoint::SetDatabaseNetEnv(const string& _databaseNetEnv)
{
    m_databaseNetEnv = _databaseNetEnv;
    m_databaseNetEnvHasBeenSet = true;
}

bool Endpoint::DatabaseNetEnvHasBeenSet() const
{
    return m_databaseNetEnvHasBeenSet;
}

string Endpoint::GetCcnOwnerUin() const
{
    return m_ccnOwnerUin;
}

void Endpoint::SetCcnOwnerUin(const string& _ccnOwnerUin)
{
    m_ccnOwnerUin = _ccnOwnerUin;
    m_ccnOwnerUinHasBeenSet = true;
}

bool Endpoint::CcnOwnerUinHasBeenSet() const
{
    return m_ccnOwnerUinHasBeenSet;
}

string Endpoint::GetChildInstanceId() const
{
    return m_childInstanceId;
}

void Endpoint::SetChildInstanceId(const string& _childInstanceId)
{
    m_childInstanceId = _childInstanceId;
    m_childInstanceIdHasBeenSet = true;
}

bool Endpoint::ChildInstanceIdHasBeenSet() const
{
    return m_childInstanceIdHasBeenSet;
}

string Endpoint::GetChildInstanceType() const
{
    return m_childInstanceType;
}

void Endpoint::SetChildInstanceType(const string& _childInstanceType)
{
    m_childInstanceType = _childInstanceType;
    m_childInstanceTypeHasBeenSet = true;
}

bool Endpoint::ChildInstanceTypeHasBeenSet() const
{
    return m_childInstanceTypeHasBeenSet;
}

string Endpoint::GetSetId() const
{
    return m_setId;
}

void Endpoint::SetSetId(const string& _setId)
{
    m_setId = _setId;
    m_setIdHasBeenSet = true;
}

bool Endpoint::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}

