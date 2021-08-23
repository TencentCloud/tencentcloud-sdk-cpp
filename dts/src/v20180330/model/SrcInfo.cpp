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

#include <tencentcloud/dts/v20180330/model/SrcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

SrcInfo::SrcInfo() :
    m_accessKeyHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_rdsInstanceIdHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_uniqDcgIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_uniqVpnGwIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_supplierHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
}

CoreInternalOutcome SrcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("RdsInstanceId") && !value["RdsInstanceId"].IsNull())
    {
        if (!value["RdsInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.RdsInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rdsInstanceId = string(value["RdsInstanceId"].GetString());
        m_rdsInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("UniqDcgId") && !value["UniqDcgId"].IsNull())
    {
        if (!value["UniqDcgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.UniqDcgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqDcgId = string(value["UniqDcgId"].GetString());
        m_uniqDcgIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpnGwId") && !value["UniqVpnGwId"].IsNull())
    {
        if (!value["UniqVpnGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.UniqVpnGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpnGwId = string(value["UniqVpnGwId"].GetString());
        m_uniqVpnGwIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Supplier") && !value["Supplier"].IsNull())
    {
        if (!value["Supplier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.Supplier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supplier = string(value["Supplier"].GetString());
        m_supplierHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SrcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
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

    if (m_rdsInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RdsInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rdsInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_uniqVpnGwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpnGwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpnGwId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

}


string SrcInfo::GetAccessKey() const
{
    return m_accessKey;
}

void SrcInfo::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool SrcInfo::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string SrcInfo::GetIp() const
{
    return m_ip;
}

void SrcInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool SrcInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t SrcInfo::GetPort() const
{
    return m_port;
}

void SrcInfo::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SrcInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string SrcInfo::GetUser() const
{
    return m_user;
}

void SrcInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool SrcInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string SrcInfo::GetPassword() const
{
    return m_password;
}

void SrcInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool SrcInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string SrcInfo::GetRdsInstanceId() const
{
    return m_rdsInstanceId;
}

void SrcInfo::SetRdsInstanceId(const string& _rdsInstanceId)
{
    m_rdsInstanceId = _rdsInstanceId;
    m_rdsInstanceIdHasBeenSet = true;
}

bool SrcInfo::RdsInstanceIdHasBeenSet() const
{
    return m_rdsInstanceIdHasBeenSet;
}

string SrcInfo::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void SrcInfo::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool SrcInfo::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string SrcInfo::GetUniqDcgId() const
{
    return m_uniqDcgId;
}

void SrcInfo::SetUniqDcgId(const string& _uniqDcgId)
{
    m_uniqDcgId = _uniqDcgId;
    m_uniqDcgIdHasBeenSet = true;
}

bool SrcInfo::UniqDcgIdHasBeenSet() const
{
    return m_uniqDcgIdHasBeenSet;
}

string SrcInfo::GetVpcId() const
{
    return m_vpcId;
}

void SrcInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SrcInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SrcInfo::GetSubnetId() const
{
    return m_subnetId;
}

void SrcInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SrcInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SrcInfo::GetUniqVpnGwId() const
{
    return m_uniqVpnGwId;
}

void SrcInfo::SetUniqVpnGwId(const string& _uniqVpnGwId)
{
    m_uniqVpnGwId = _uniqVpnGwId;
    m_uniqVpnGwIdHasBeenSet = true;
}

bool SrcInfo::UniqVpnGwIdHasBeenSet() const
{
    return m_uniqVpnGwIdHasBeenSet;
}

string SrcInfo::GetInstanceId() const
{
    return m_instanceId;
}

void SrcInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SrcInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SrcInfo::GetRegion() const
{
    return m_region;
}

void SrcInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SrcInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SrcInfo::GetSupplier() const
{
    return m_supplier;
}

void SrcInfo::SetSupplier(const string& _supplier)
{
    m_supplier = _supplier;
    m_supplierHasBeenSet = true;
}

bool SrcInfo::SupplierHasBeenSet() const
{
    return m_supplierHasBeenSet;
}

string SrcInfo::GetCcnId() const
{
    return m_ccnId;
}

void SrcInfo::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool SrcInfo::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string SrcInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void SrcInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool SrcInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

