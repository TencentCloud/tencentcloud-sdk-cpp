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

#include <tencentcloud/dbs/v20211108/model/BackupEndpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupEndpoint::BackupEndpoint() :
    m_databaseTypeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_supplierHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_uniqDcgIdHasBeenSet(false),
    m_uniqVpnGwIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBKernelHasBeenSet(false)
{
}

CoreInternalOutcome BackupEndpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseType") && !value["DatabaseType"].IsNull())
    {
        if (!value["DatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.DatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseType = string(value["DatabaseType"].GetString());
        m_databaseTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Supplier") && !value["Supplier"].IsNull())
    {
        if (!value["Supplier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.Supplier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supplier = string(value["Supplier"].GetString());
        m_supplierHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("UniqDcgId") && !value["UniqDcgId"].IsNull())
    {
        if (!value["UniqDcgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.UniqDcgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqDcgId = string(value["UniqDcgId"].GetString());
        m_uniqDcgIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpnGwId") && !value["UniqVpnGwId"].IsNull())
    {
        if (!value["UniqVpnGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.UniqVpnGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpnGwId = string(value["UniqVpnGwId"].GetString());
        m_uniqVpnGwIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("DBKernel") && !value["DBKernel"].IsNull())
    {
        if (!value["DBKernel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEndpoint.DBKernel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBKernel = string(value["DBKernel"].GetString());
        m_dBKernelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupEndpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


string BackupEndpoint::GetDatabaseType() const
{
    return m_databaseType;
}

void BackupEndpoint::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool BackupEndpoint::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

string BackupEndpoint::GetAccessType() const
{
    return m_accessType;
}

void BackupEndpoint::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool BackupEndpoint::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string BackupEndpoint::GetUserName() const
{
    return m_userName;
}

void BackupEndpoint::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool BackupEndpoint::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string BackupEndpoint::GetPassword() const
{
    return m_password;
}

void BackupEndpoint::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool BackupEndpoint::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string BackupEndpoint::GetRegion() const
{
    return m_region;
}

void BackupEndpoint::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupEndpoint::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BackupEndpoint::GetSupplier() const
{
    return m_supplier;
}

void BackupEndpoint::SetSupplier(const string& _supplier)
{
    m_supplier = _supplier;
    m_supplierHasBeenSet = true;
}

bool BackupEndpoint::SupplierHasBeenSet() const
{
    return m_supplierHasBeenSet;
}

string BackupEndpoint::GetIp() const
{
    return m_ip;
}

void BackupEndpoint::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool BackupEndpoint::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t BackupEndpoint::GetPort() const
{
    return m_port;
}

void BackupEndpoint::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool BackupEndpoint::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string BackupEndpoint::GetInstanceId() const
{
    return m_instanceId;
}

void BackupEndpoint::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupEndpoint::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BackupEndpoint::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void BackupEndpoint::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool BackupEndpoint::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string BackupEndpoint::GetUniqDcgId() const
{
    return m_uniqDcgId;
}

void BackupEndpoint::SetUniqDcgId(const string& _uniqDcgId)
{
    m_uniqDcgId = _uniqDcgId;
    m_uniqDcgIdHasBeenSet = true;
}

bool BackupEndpoint::UniqDcgIdHasBeenSet() const
{
    return m_uniqDcgIdHasBeenSet;
}

string BackupEndpoint::GetUniqVpnGwId() const
{
    return m_uniqVpnGwId;
}

void BackupEndpoint::SetUniqVpnGwId(const string& _uniqVpnGwId)
{
    m_uniqVpnGwId = _uniqVpnGwId;
    m_uniqVpnGwIdHasBeenSet = true;
}

bool BackupEndpoint::UniqVpnGwIdHasBeenSet() const
{
    return m_uniqVpnGwIdHasBeenSet;
}

string BackupEndpoint::GetVpcId() const
{
    return m_vpcId;
}

void BackupEndpoint::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool BackupEndpoint::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string BackupEndpoint::GetSubnetId() const
{
    return m_subnetId;
}

void BackupEndpoint::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool BackupEndpoint::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string BackupEndpoint::GetCcnId() const
{
    return m_ccnId;
}

void BackupEndpoint::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool BackupEndpoint::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string BackupEndpoint::GetEngineVersion() const
{
    return m_engineVersion;
}

void BackupEndpoint::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool BackupEndpoint::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string BackupEndpoint::GetDBKernel() const
{
    return m_dBKernel;
}

void BackupEndpoint::SetDBKernel(const string& _dBKernel)
{
    m_dBKernel = _dBKernel;
    m_dBKernelHasBeenSet = true;
}

bool BackupEndpoint::DBKernelHasBeenSet() const
{
    return m_dBKernelHasBeenSet;
}

