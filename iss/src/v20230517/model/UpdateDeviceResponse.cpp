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

#include <tencentcloud/iss/v20230517/model/UpdateDeviceResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateDeviceResponse::UpdateDeviceResponse() :
    m_deviceIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accessProtocolHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_transportProtocolHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome UpdateDeviceResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AccessProtocol") && !value["AccessProtocol"].IsNull())
    {
        if (!value["AccessProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.AccessProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessProtocol = value["AccessProtocol"].GetInt64();
        m_accessProtocolHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("TransportProtocol") && !value["TransportProtocol"].IsNull())
    {
        if (!value["TransportProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.TransportProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transportProtocol = value["TransportProtocol"].GetInt64();
        m_transportProtocolHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.OrganizationId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = value["OrganizationId"].GetInt64();
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("ProtocolType") && !value["ProtocolType"].IsNull())
    {
        if (!value["ProtocolType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.ProtocolType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = value["ProtocolType"].GetInt64();
        m_protocolTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateDeviceResponse.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateDeviceResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_accessProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessProtocol, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_transportProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransportProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transportProtocol, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_organizationId, allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolType, allocator);
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

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

}


string UpdateDeviceResponse::GetDeviceId() const
{
    return m_deviceId;
}

void UpdateDeviceResponse::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool UpdateDeviceResponse::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string UpdateDeviceResponse::GetCode() const
{
    return m_code;
}

void UpdateDeviceResponse::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool UpdateDeviceResponse::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string UpdateDeviceResponse::GetName() const
{
    return m_name;
}

void UpdateDeviceResponse::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateDeviceResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t UpdateDeviceResponse::GetAccessProtocol() const
{
    return m_accessProtocol;
}

void UpdateDeviceResponse::SetAccessProtocol(const int64_t& _accessProtocol)
{
    m_accessProtocol = _accessProtocol;
    m_accessProtocolHasBeenSet = true;
}

bool UpdateDeviceResponse::AccessProtocolHasBeenSet() const
{
    return m_accessProtocolHasBeenSet;
}

int64_t UpdateDeviceResponse::GetType() const
{
    return m_type;
}

void UpdateDeviceResponse::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateDeviceResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UpdateDeviceResponse::GetClusterId() const
{
    return m_clusterId;
}

void UpdateDeviceResponse::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateDeviceResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateDeviceResponse::GetClusterName() const
{
    return m_clusterName;
}

void UpdateDeviceResponse::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool UpdateDeviceResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t UpdateDeviceResponse::GetTransportProtocol() const
{
    return m_transportProtocol;
}

void UpdateDeviceResponse::SetTransportProtocol(const int64_t& _transportProtocol)
{
    m_transportProtocol = _transportProtocol;
    m_transportProtocolHasBeenSet = true;
}

bool UpdateDeviceResponse::TransportProtocolHasBeenSet() const
{
    return m_transportProtocolHasBeenSet;
}

string UpdateDeviceResponse::GetPassword() const
{
    return m_password;
}

void UpdateDeviceResponse::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool UpdateDeviceResponse::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string UpdateDeviceResponse::GetDescription() const
{
    return m_description;
}

void UpdateDeviceResponse::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateDeviceResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t UpdateDeviceResponse::GetStatus() const
{
    return m_status;
}

void UpdateDeviceResponse::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateDeviceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t UpdateDeviceResponse::GetOrganizationId() const
{
    return m_organizationId;
}

void UpdateDeviceResponse::SetOrganizationId(const int64_t& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool UpdateDeviceResponse::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string UpdateDeviceResponse::GetGatewayId() const
{
    return m_gatewayId;
}

void UpdateDeviceResponse::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool UpdateDeviceResponse::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

int64_t UpdateDeviceResponse::GetProtocolType() const
{
    return m_protocolType;
}

void UpdateDeviceResponse::SetProtocolType(const int64_t& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool UpdateDeviceResponse::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

string UpdateDeviceResponse::GetIp() const
{
    return m_ip;
}

void UpdateDeviceResponse::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool UpdateDeviceResponse::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t UpdateDeviceResponse::GetPort() const
{
    return m_port;
}

void UpdateDeviceResponse::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool UpdateDeviceResponse::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string UpdateDeviceResponse::GetUsername() const
{
    return m_username;
}

void UpdateDeviceResponse::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool UpdateDeviceResponse::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

int64_t UpdateDeviceResponse::GetAppId() const
{
    return m_appId;
}

void UpdateDeviceResponse::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UpdateDeviceResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

