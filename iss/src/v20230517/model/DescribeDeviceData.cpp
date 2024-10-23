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

#include <tencentcloud/iss/v20230517/model/DescribeDeviceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeDeviceData::DescribeDeviceData() :
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
    m_sipIdHasBeenSet(false),
    m_sipDomainHasBeenSet(false),
    m_sipIpHasBeenSet(false),
    m_sipPortHasBeenSet(false),
    m_pushStreamUrlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_protocolTypeNameHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_audioSwitchHasBeenSet(false),
    m_subscribeSwitchHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_silentFrameSwitchHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AccessProtocol") && !value["AccessProtocol"].IsNull())
    {
        if (!value["AccessProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.AccessProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessProtocol = value["AccessProtocol"].GetInt64();
        m_accessProtocolHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("TransportProtocol") && !value["TransportProtocol"].IsNull())
    {
        if (!value["TransportProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.TransportProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transportProtocol = value["TransportProtocol"].GetInt64();
        m_transportProtocolHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SipId") && !value["SipId"].IsNull())
    {
        if (!value["SipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.SipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sipId = string(value["SipId"].GetString());
        m_sipIdHasBeenSet = true;
    }

    if (value.HasMember("SipDomain") && !value["SipDomain"].IsNull())
    {
        if (!value["SipDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.SipDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sipDomain = string(value["SipDomain"].GetString());
        m_sipDomainHasBeenSet = true;
    }

    if (value.HasMember("SipIp") && !value["SipIp"].IsNull())
    {
        if (!value["SipIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.SipIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sipIp = string(value["SipIp"].GetString());
        m_sipIpHasBeenSet = true;
    }

    if (value.HasMember("SipPort") && !value["SipPort"].IsNull())
    {
        if (!value["SipPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.SipPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sipPort = value["SipPort"].GetInt64();
        m_sipPortHasBeenSet = true;
    }

    if (value.HasMember("PushStreamUrl") && !value["PushStreamUrl"].IsNull())
    {
        if (!value["PushStreamUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.PushStreamUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushStreamUrl = string(value["PushStreamUrl"].GetString());
        m_pushStreamUrlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayName") && !value["GatewayName"].IsNull())
    {
        if (!value["GatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.GatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayName = string(value["GatewayName"].GetString());
        m_gatewayNameHasBeenSet = true;
    }

    if (value.HasMember("ProtocolTypeName") && !value["ProtocolTypeName"].IsNull())
    {
        if (!value["ProtocolTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.ProtocolTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolTypeName = string(value["ProtocolTypeName"].GetString());
        m_protocolTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ProtocolType") && !value["ProtocolType"].IsNull())
    {
        if (!value["ProtocolType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.ProtocolType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = value["ProtocolType"].GetInt64();
        m_protocolTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("AudioSwitch") && !value["AudioSwitch"].IsNull())
    {
        if (!value["AudioSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.AudioSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioSwitch = value["AudioSwitch"].GetInt64();
        m_audioSwitchHasBeenSet = true;
    }

    if (value.HasMember("SubscribeSwitch") && !value["SubscribeSwitch"].IsNull())
    {
        if (!value["SubscribeSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.SubscribeSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeSwitch = value["SubscribeSwitch"].GetInt64();
        m_subscribeSwitchHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("SilentFrameSwitch") && !value["SilentFrameSwitch"].IsNull())
    {
        if (!value["SilentFrameSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceData.SilentFrameSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_silentFrameSwitch = value["SilentFrameSwitch"].GetInt64();
        m_silentFrameSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sipId.c_str(), allocator).Move(), allocator);
    }

    if (m_sipDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sipDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_sipIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sipIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sipPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sipPort, allocator);
    }

    if (m_pushStreamUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushStreamUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushStreamUrl.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolTypeName.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_audioSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioSwitch, allocator);
    }

    if (m_subscribeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscribeSwitch, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_silentFrameSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SilentFrameSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_silentFrameSwitch, allocator);
    }

}


string DescribeDeviceData::GetDeviceId() const
{
    return m_deviceId;
}

void DescribeDeviceData::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DescribeDeviceData::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DescribeDeviceData::GetCode() const
{
    return m_code;
}

void DescribeDeviceData::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DescribeDeviceData::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DescribeDeviceData::GetName() const
{
    return m_name;
}

void DescribeDeviceData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDeviceData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeDeviceData::GetAccessProtocol() const
{
    return m_accessProtocol;
}

void DescribeDeviceData::SetAccessProtocol(const int64_t& _accessProtocol)
{
    m_accessProtocol = _accessProtocol;
    m_accessProtocolHasBeenSet = true;
}

bool DescribeDeviceData::AccessProtocolHasBeenSet() const
{
    return m_accessProtocolHasBeenSet;
}

int64_t DescribeDeviceData::GetType() const
{
    return m_type;
}

void DescribeDeviceData::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDeviceData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDeviceData::GetClusterId() const
{
    return m_clusterId;
}

void DescribeDeviceData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeDeviceData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeDeviceData::GetClusterName() const
{
    return m_clusterName;
}

void DescribeDeviceData::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeDeviceData::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t DescribeDeviceData::GetTransportProtocol() const
{
    return m_transportProtocol;
}

void DescribeDeviceData::SetTransportProtocol(const int64_t& _transportProtocol)
{
    m_transportProtocol = _transportProtocol;
    m_transportProtocolHasBeenSet = true;
}

bool DescribeDeviceData::TransportProtocolHasBeenSet() const
{
    return m_transportProtocolHasBeenSet;
}

string DescribeDeviceData::GetPassword() const
{
    return m_password;
}

void DescribeDeviceData::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DescribeDeviceData::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DescribeDeviceData::GetDescription() const
{
    return m_description;
}

void DescribeDeviceData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeDeviceData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeDeviceData::GetSipId() const
{
    return m_sipId;
}

void DescribeDeviceData::SetSipId(const string& _sipId)
{
    m_sipId = _sipId;
    m_sipIdHasBeenSet = true;
}

bool DescribeDeviceData::SipIdHasBeenSet() const
{
    return m_sipIdHasBeenSet;
}

string DescribeDeviceData::GetSipDomain() const
{
    return m_sipDomain;
}

void DescribeDeviceData::SetSipDomain(const string& _sipDomain)
{
    m_sipDomain = _sipDomain;
    m_sipDomainHasBeenSet = true;
}

bool DescribeDeviceData::SipDomainHasBeenSet() const
{
    return m_sipDomainHasBeenSet;
}

string DescribeDeviceData::GetSipIp() const
{
    return m_sipIp;
}

void DescribeDeviceData::SetSipIp(const string& _sipIp)
{
    m_sipIp = _sipIp;
    m_sipIpHasBeenSet = true;
}

bool DescribeDeviceData::SipIpHasBeenSet() const
{
    return m_sipIpHasBeenSet;
}

int64_t DescribeDeviceData::GetSipPort() const
{
    return m_sipPort;
}

void DescribeDeviceData::SetSipPort(const int64_t& _sipPort)
{
    m_sipPort = _sipPort;
    m_sipPortHasBeenSet = true;
}

bool DescribeDeviceData::SipPortHasBeenSet() const
{
    return m_sipPortHasBeenSet;
}

string DescribeDeviceData::GetPushStreamUrl() const
{
    return m_pushStreamUrl;
}

void DescribeDeviceData::SetPushStreamUrl(const string& _pushStreamUrl)
{
    m_pushStreamUrl = _pushStreamUrl;
    m_pushStreamUrlHasBeenSet = true;
}

bool DescribeDeviceData::PushStreamUrlHasBeenSet() const
{
    return m_pushStreamUrlHasBeenSet;
}

int64_t DescribeDeviceData::GetStatus() const
{
    return m_status;
}

void DescribeDeviceData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDeviceData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDeviceData::GetOrganizationId() const
{
    return m_organizationId;
}

void DescribeDeviceData::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool DescribeDeviceData::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string DescribeDeviceData::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeDeviceData::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeDeviceData::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeDeviceData::GetGatewayName() const
{
    return m_gatewayName;
}

void DescribeDeviceData::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool DescribeDeviceData::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

string DescribeDeviceData::GetProtocolTypeName() const
{
    return m_protocolTypeName;
}

void DescribeDeviceData::SetProtocolTypeName(const string& _protocolTypeName)
{
    m_protocolTypeName = _protocolTypeName;
    m_protocolTypeNameHasBeenSet = true;
}

bool DescribeDeviceData::ProtocolTypeNameHasBeenSet() const
{
    return m_protocolTypeNameHasBeenSet;
}

int64_t DescribeDeviceData::GetProtocolType() const
{
    return m_protocolType;
}

void DescribeDeviceData::SetProtocolType(const int64_t& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool DescribeDeviceData::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

string DescribeDeviceData::GetIp() const
{
    return m_ip;
}

void DescribeDeviceData::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeDeviceData::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DescribeDeviceData::GetPort() const
{
    return m_port;
}

void DescribeDeviceData::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescribeDeviceData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DescribeDeviceData::GetUsername() const
{
    return m_username;
}

void DescribeDeviceData::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool DescribeDeviceData::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string DescribeDeviceData::GetRegion() const
{
    return m_region;
}

void DescribeDeviceData::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeDeviceData::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeDeviceData::GetManufacturer() const
{
    return m_manufacturer;
}

void DescribeDeviceData::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool DescribeDeviceData::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

int64_t DescribeDeviceData::GetAudioSwitch() const
{
    return m_audioSwitch;
}

void DescribeDeviceData::SetAudioSwitch(const int64_t& _audioSwitch)
{
    m_audioSwitch = _audioSwitch;
    m_audioSwitchHasBeenSet = true;
}

bool DescribeDeviceData::AudioSwitchHasBeenSet() const
{
    return m_audioSwitchHasBeenSet;
}

int64_t DescribeDeviceData::GetSubscribeSwitch() const
{
    return m_subscribeSwitch;
}

void DescribeDeviceData::SetSubscribeSwitch(const int64_t& _subscribeSwitch)
{
    m_subscribeSwitch = _subscribeSwitch;
    m_subscribeSwitchHasBeenSet = true;
}

bool DescribeDeviceData::SubscribeSwitchHasBeenSet() const
{
    return m_subscribeSwitchHasBeenSet;
}

string DescribeDeviceData::GetAppName() const
{
    return m_appName;
}

void DescribeDeviceData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeDeviceData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeDeviceData::GetStreamName() const
{
    return m_streamName;
}

void DescribeDeviceData::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DescribeDeviceData::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

int64_t DescribeDeviceData::GetSilentFrameSwitch() const
{
    return m_silentFrameSwitch;
}

void DescribeDeviceData::SetSilentFrameSwitch(const int64_t& _silentFrameSwitch)
{
    m_silentFrameSwitch = _silentFrameSwitch;
    m_silentFrameSwitchHasBeenSet = true;
}

bool DescribeDeviceData::SilentFrameSwitchHasBeenSet() const
{
    return m_silentFrameSwitchHasBeenSet;
}

