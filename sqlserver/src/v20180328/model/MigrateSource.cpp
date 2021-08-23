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

#include <tencentcloud/sqlserver/v20180328/model/MigrateSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

MigrateSource::MigrateSource() :
    m_instanceIdHasBeenSet(false),
    m_cvmIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_urlPasswordHasBeenSet(false)
{
}

CoreInternalOutcome MigrateSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CvmId") && !value["CvmId"].IsNull())
    {
        if (!value["CvmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.CvmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmId = string(value["CvmId"].GetString());
        m_cvmIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateSource.Url` is not array type"));

        const rapidjson::Value &tmpValue = value["Url"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_url.push_back((*itr).GetString());
        }
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("UrlPassword") && !value["UrlPassword"].IsNull())
    {
        if (!value["UrlPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateSource.UrlPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlPassword = string(value["UrlPassword"].GetString());
        m_urlPasswordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmId.c_str(), allocator).Move(), allocator);
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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_url.begin(); itr != m_url.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_urlPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlPassword.c_str(), allocator).Move(), allocator);
    }

}


string MigrateSource::GetInstanceId() const
{
    return m_instanceId;
}

void MigrateSource::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MigrateSource::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MigrateSource::GetCvmId() const
{
    return m_cvmId;
}

void MigrateSource::SetCvmId(const string& _cvmId)
{
    m_cvmId = _cvmId;
    m_cvmIdHasBeenSet = true;
}

bool MigrateSource::CvmIdHasBeenSet() const
{
    return m_cvmIdHasBeenSet;
}

string MigrateSource::GetVpcId() const
{
    return m_vpcId;
}

void MigrateSource::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool MigrateSource::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string MigrateSource::GetSubnetId() const
{
    return m_subnetId;
}

void MigrateSource::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool MigrateSource::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string MigrateSource::GetUserName() const
{
    return m_userName;
}

void MigrateSource::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool MigrateSource::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string MigrateSource::GetPassword() const
{
    return m_password;
}

void MigrateSource::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool MigrateSource::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string MigrateSource::GetIp() const
{
    return m_ip;
}

void MigrateSource::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool MigrateSource::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t MigrateSource::GetPort() const
{
    return m_port;
}

void MigrateSource::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool MigrateSource::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<string> MigrateSource::GetUrl() const
{
    return m_url;
}

void MigrateSource::SetUrl(const vector<string>& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MigrateSource::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string MigrateSource::GetUrlPassword() const
{
    return m_urlPassword;
}

void MigrateSource::SetUrlPassword(const string& _urlPassword)
{
    m_urlPassword = _urlPassword;
    m_urlPasswordHasBeenSet = true;
}

bool MigrateSource::UrlPasswordHasBeenSet() const
{
    return m_urlPasswordHasBeenSet;
}

