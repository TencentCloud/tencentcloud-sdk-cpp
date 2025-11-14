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

#include <tencentcloud/bh/v20230418/model/ExternalDevice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ExternalDevice::ExternalDevice() :
    m_osNameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_ipPortSetHasBeenSet(false),
    m_enableSSLHasBeenSet(false),
    m_sSLCertHasBeenSet(false),
    m_sSLCertNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_apCodeHasBeenSet(false),
    m_apNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
}

CoreInternalOutcome ExternalDevice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }

    if (value.HasMember("IpPortSet") && !value["IpPortSet"].IsNull())
    {
        if (!value["IpPortSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.IpPortSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IpPortSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipPortSet.push_back((*itr).GetString());
        }
        m_ipPortSetHasBeenSet = true;
    }

    if (value.HasMember("EnableSSL") && !value["EnableSSL"].IsNull())
    {
        if (!value["EnableSSL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.EnableSSL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableSSL = value["EnableSSL"].GetInt64();
        m_enableSSLHasBeenSet = true;
    }

    if (value.HasMember("SSLCert") && !value["SSLCert"].IsNull())
    {
        if (!value["SSLCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.SSLCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLCert = string(value["SSLCert"].GetString());
        m_sSLCertHasBeenSet = true;
    }

    if (value.HasMember("SSLCertName") && !value["SSLCertName"].IsNull())
    {
        if (!value["SSLCertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.SSLCertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLCertName = string(value["SSLCertName"].GetString());
        m_sSLCertNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ApCode") && !value["ApCode"].IsNull())
    {
        if (!value["ApCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.ApCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apCode = string(value["ApCode"].GetString());
        m_apCodeHasBeenSet = true;
    }

    if (value.HasMember("ApName") && !value["ApName"].IsNull())
    {
        if (!value["ApName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.ApName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apName = string(value["ApName"].GetString());
        m_apNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDevice.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalDevice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipPortSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpPortSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipPortSet.begin(); itr != m_ipPortSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableSSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSSL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSSL, allocator);
    }

    if (m_sSLCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLCert.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLCertNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLCertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLCertName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apCode.c_str(), allocator).Move(), allocator);
    }

    if (m_apNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apName.c_str(), allocator).Move(), allocator);
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

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

}


string ExternalDevice::GetOsName() const
{
    return m_osName;
}

void ExternalDevice::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ExternalDevice::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string ExternalDevice::GetIp() const
{
    return m_ip;
}

void ExternalDevice::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ExternalDevice::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t ExternalDevice::GetPort() const
{
    return m_port;
}

void ExternalDevice::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ExternalDevice::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ExternalDevice::GetName() const
{
    return m_name;
}

void ExternalDevice::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExternalDevice::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExternalDevice::GetDepartmentId() const
{
    return m_departmentId;
}

void ExternalDevice::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool ExternalDevice::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

vector<string> ExternalDevice::GetIpPortSet() const
{
    return m_ipPortSet;
}

void ExternalDevice::SetIpPortSet(const vector<string>& _ipPortSet)
{
    m_ipPortSet = _ipPortSet;
    m_ipPortSetHasBeenSet = true;
}

bool ExternalDevice::IpPortSetHasBeenSet() const
{
    return m_ipPortSetHasBeenSet;
}

int64_t ExternalDevice::GetEnableSSL() const
{
    return m_enableSSL;
}

void ExternalDevice::SetEnableSSL(const int64_t& _enableSSL)
{
    m_enableSSL = _enableSSL;
    m_enableSSLHasBeenSet = true;
}

bool ExternalDevice::EnableSSLHasBeenSet() const
{
    return m_enableSSLHasBeenSet;
}

string ExternalDevice::GetSSLCert() const
{
    return m_sSLCert;
}

void ExternalDevice::SetSSLCert(const string& _sSLCert)
{
    m_sSLCert = _sSLCert;
    m_sSLCertHasBeenSet = true;
}

bool ExternalDevice::SSLCertHasBeenSet() const
{
    return m_sSLCertHasBeenSet;
}

string ExternalDevice::GetSSLCertName() const
{
    return m_sSLCertName;
}

void ExternalDevice::SetSSLCertName(const string& _sSLCertName)
{
    m_sSLCertName = _sSLCertName;
    m_sSLCertNameHasBeenSet = true;
}

bool ExternalDevice::SSLCertNameHasBeenSet() const
{
    return m_sSLCertNameHasBeenSet;
}

string ExternalDevice::GetInstanceId() const
{
    return m_instanceId;
}

void ExternalDevice::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExternalDevice::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ExternalDevice::GetApCode() const
{
    return m_apCode;
}

void ExternalDevice::SetApCode(const string& _apCode)
{
    m_apCode = _apCode;
    m_apCodeHasBeenSet = true;
}

bool ExternalDevice::ApCodeHasBeenSet() const
{
    return m_apCodeHasBeenSet;
}

string ExternalDevice::GetApName() const
{
    return m_apName;
}

void ExternalDevice::SetApName(const string& _apName)
{
    m_apName = _apName;
    m_apNameHasBeenSet = true;
}

bool ExternalDevice::ApNameHasBeenSet() const
{
    return m_apNameHasBeenSet;
}

string ExternalDevice::GetVpcId() const
{
    return m_vpcId;
}

void ExternalDevice::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ExternalDevice::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ExternalDevice::GetSubnetId() const
{
    return m_subnetId;
}

void ExternalDevice::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ExternalDevice::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ExternalDevice::GetPublicIp() const
{
    return m_publicIp;
}

void ExternalDevice::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool ExternalDevice::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

