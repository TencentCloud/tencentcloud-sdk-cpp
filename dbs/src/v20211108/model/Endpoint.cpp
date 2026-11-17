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

#include <tencentcloud/dbs/v20211108/model/Endpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

Endpoint::Endpoint() :
    m_roleHasBeenSet(false),
    m_databaseTypeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_uniqDcgIdHasBeenSet(false),
    m_uniqVpnGwIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_supplierHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBKernelHasBeenSet(false)
{
}

CoreInternalOutcome Endpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("DatabaseType") && !value["DatabaseType"].IsNull())
    {
        if (!value["DatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.DatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseType = string(value["DatabaseType"].GetString());
        m_databaseTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
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
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
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

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
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

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
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

    if (value.HasMember("DBKernel") && !value["DBKernel"].IsNull())
    {
        if (!value["DBKernel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.DBKernel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBKernel = string(value["DBKernel"].GetString());
        m_dBKernelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Endpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_dBKernelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBKernel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBKernel.c_str(), allocator).Move(), allocator);
    }

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

string Endpoint::GetDatabaseType() const
{
    return m_databaseType;
}

void Endpoint::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool Endpoint::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

string Endpoint::GetAccessType() const
{
    return m_accessType;
}

void Endpoint::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool Endpoint::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
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

int64_t Endpoint::GetPort() const
{
    return m_port;
}

void Endpoint::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool Endpoint::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string Endpoint::GetUserName() const
{
    return m_userName;
}

void Endpoint::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool Endpoint::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
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

string Endpoint::GetDBKernel() const
{
    return m_dBKernel;
}

void Endpoint::SetDBKernel(const string& _dBKernel)
{
    m_dBKernel = _dBKernel;
    m_dBKernelHasBeenSet = true;
}

bool Endpoint::DBKernelHasBeenSet() const
{
    return m_dBKernelHasBeenSet;
}

