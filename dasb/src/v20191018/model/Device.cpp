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

#include <tencentcloud/dasb/v20191018/model/Device.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

Device::Device() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_apCodeHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_portHasBeenSet(false),
    m_groupSetHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_ipPortSetHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_enableSSLHasBeenSet(false),
    m_sSLCertNameHasBeenSet(false)
{
}

CoreInternalOutcome Device::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("ApCode") && !value["ApCode"].IsNull())
    {
        if (!value["ApCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.ApCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apCode = string(value["ApCode"].GetString());
        m_apCodeHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Kind` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kind = value["Kind"].GetUint64();
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("GroupSet") && !value["GroupSet"].IsNull())
    {
        if (!value["GroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Device.GroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Group item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupSet.push_back(item);
        }
        m_groupSetHasBeenSet = true;
    }

    if (value.HasMember("AccountCount") && !value["AccountCount"].IsNull())
    {
        if (!value["AccountCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.AccountCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = value["AccountCount"].GetUint64();
        m_accountCountHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Department` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_department.Deserialize(value["Department"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("IpPortSet") && !value["IpPortSet"].IsNull())
    {
        if (!value["IpPortSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Device.IpPortSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IpPortSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipPortSet.push_back((*itr).GetString());
        }
        m_ipPortSetHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("EnableSSL") && !value["EnableSSL"].IsNull())
    {
        if (!value["EnableSSL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.EnableSSL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableSSL = value["EnableSSL"].GetInt64();
        m_enableSSLHasBeenSet = true;
    }

    if (value.HasMember("SSLCertName") && !value["SSLCertName"].IsNull())
    {
        if (!value["SSLCertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.SSLCertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLCertName = string(value["SSLCertName"].GetString());
        m_sSLCertNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Device::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_apCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apCode.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kind, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_groupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupSet.begin(); itr != m_groupSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountCount, allocator);
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

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_department.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSSL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSSL, allocator);
    }

    if (m_sSLCertNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLCertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLCertName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Device::GetId() const
{
    return m_id;
}

void Device::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Device::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Device::GetInstanceId() const
{
    return m_instanceId;
}

void Device::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Device::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Device::GetName() const
{
    return m_name;
}

void Device::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Device::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Device::GetPublicIp() const
{
    return m_publicIp;
}

void Device::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool Device::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string Device::GetPrivateIp() const
{
    return m_privateIp;
}

void Device::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool Device::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string Device::GetApCode() const
{
    return m_apCode;
}

void Device::SetApCode(const string& _apCode)
{
    m_apCode = _apCode;
    m_apCodeHasBeenSet = true;
}

bool Device::ApCodeHasBeenSet() const
{
    return m_apCodeHasBeenSet;
}

string Device::GetOsName() const
{
    return m_osName;
}

void Device::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool Device::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

uint64_t Device::GetKind() const
{
    return m_kind;
}

void Device::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool Device::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

uint64_t Device::GetPort() const
{
    return m_port;
}

void Device::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool Device::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<Group> Device::GetGroupSet() const
{
    return m_groupSet;
}

void Device::SetGroupSet(const vector<Group>& _groupSet)
{
    m_groupSet = _groupSet;
    m_groupSetHasBeenSet = true;
}

bool Device::GroupSetHasBeenSet() const
{
    return m_groupSetHasBeenSet;
}

uint64_t Device::GetAccountCount() const
{
    return m_accountCount;
}

void Device::SetAccountCount(const uint64_t& _accountCount)
{
    m_accountCount = _accountCount;
    m_accountCountHasBeenSet = true;
}

bool Device::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

string Device::GetVpcId() const
{
    return m_vpcId;
}

void Device::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Device::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Device::GetSubnetId() const
{
    return m_subnetId;
}

void Device::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Device::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

Resource Device::GetResource() const
{
    return m_resource;
}

void Device::SetResource(const Resource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool Device::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

Department Device::GetDepartment() const
{
    return m_department;
}

void Device::SetDepartment(const Department& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool Device::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

vector<string> Device::GetIpPortSet() const
{
    return m_ipPortSet;
}

void Device::SetIpPortSet(const vector<string>& _ipPortSet)
{
    m_ipPortSet = _ipPortSet;
    m_ipPortSetHasBeenSet = true;
}

bool Device::IpPortSetHasBeenSet() const
{
    return m_ipPortSetHasBeenSet;
}

string Device::GetDomainId() const
{
    return m_domainId;
}

void Device::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool Device::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string Device::GetDomainName() const
{
    return m_domainName;
}

void Device::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool Device::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t Device::GetEnableSSL() const
{
    return m_enableSSL;
}

void Device::SetEnableSSL(const int64_t& _enableSSL)
{
    m_enableSSL = _enableSSL;
    m_enableSSLHasBeenSet = true;
}

bool Device::EnableSSLHasBeenSet() const
{
    return m_enableSSLHasBeenSet;
}

string Device::GetSSLCertName() const
{
    return m_sSLCertName;
}

void Device::SetSSLCertName(const string& _sSLCertName)
{
    m_sSLCertName = _sSLCertName;
    m_sSLCertNameHasBeenSet = true;
}

bool Device::SSLCertNameHasBeenSet() const
{
    return m_sSLCertNameHasBeenSet;
}

