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
    m_sSLCertNameHasBeenSet(false)
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

