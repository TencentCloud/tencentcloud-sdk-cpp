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

#include <tencentcloud/iss/v20230517/model/ListDeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListDeviceInfo::ListDeviceInfo() :
    m_deviceIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_transportProtocolHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_accessProtocolHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_channelNumHasBeenSet(false)
{
}

CoreInternalOutcome ListDeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TransportProtocol") && !value["TransportProtocol"].IsNull())
    {
        if (!value["TransportProtocol"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.TransportProtocol` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transportProtocol = value["TransportProtocol"].GetUint64();
        m_transportProtocolHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("AccessProtocol") && !value["AccessProtocol"].IsNull())
    {
        if (!value["AccessProtocol"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.AccessProtocol` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessProtocol = value["AccessProtocol"].GetUint64();
        m_accessProtocolHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelNum") && !value["ChannelNum"].IsNull())
    {
        if (!value["ChannelNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDeviceInfo.ChannelNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelNum = value["ChannelNum"].GetUint64();
        m_channelNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListDeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_transportProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransportProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transportProtocol, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
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

    if (m_accessProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessProtocol, allocator);
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelNum, allocator);
    }

}


string ListDeviceInfo::GetDeviceId() const
{
    return m_deviceId;
}

void ListDeviceInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ListDeviceInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string ListDeviceInfo::GetCode() const
{
    return m_code;
}

void ListDeviceInfo::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ListDeviceInfo::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t ListDeviceInfo::GetStatus() const
{
    return m_status;
}

void ListDeviceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListDeviceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ListDeviceInfo::GetTransportProtocol() const
{
    return m_transportProtocol;
}

void ListDeviceInfo::SetTransportProtocol(const uint64_t& _transportProtocol)
{
    m_transportProtocol = _transportProtocol;
    m_transportProtocolHasBeenSet = true;
}

bool ListDeviceInfo::TransportProtocolHasBeenSet() const
{
    return m_transportProtocolHasBeenSet;
}

string ListDeviceInfo::GetName() const
{
    return m_name;
}

void ListDeviceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ListDeviceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ListDeviceInfo::GetType() const
{
    return m_type;
}

void ListDeviceInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ListDeviceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ListDeviceInfo::GetPassword() const
{
    return m_password;
}

void ListDeviceInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ListDeviceInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string ListDeviceInfo::GetDescription() const
{
    return m_description;
}

void ListDeviceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ListDeviceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ListDeviceInfo::GetClusterId() const
{
    return m_clusterId;
}

void ListDeviceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ListDeviceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ListDeviceInfo::GetClusterName() const
{
    return m_clusterName;
}

void ListDeviceInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ListDeviceInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t ListDeviceInfo::GetAccessProtocol() const
{
    return m_accessProtocol;
}

void ListDeviceInfo::SetAccessProtocol(const uint64_t& _accessProtocol)
{
    m_accessProtocol = _accessProtocol;
    m_accessProtocolHasBeenSet = true;
}

bool ListDeviceInfo::AccessProtocolHasBeenSet() const
{
    return m_accessProtocolHasBeenSet;
}

string ListDeviceInfo::GetOrganizationId() const
{
    return m_organizationId;
}

void ListDeviceInfo::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool ListDeviceInfo::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

uint64_t ListDeviceInfo::GetChannelNum() const
{
    return m_channelNum;
}

void ListDeviceInfo::SetChannelNum(const uint64_t& _channelNum)
{
    m_channelNum = _channelNum;
    m_channelNumHasBeenSet = true;
}

bool ListDeviceInfo::ChannelNumHasBeenSet() const
{
    return m_channelNumHasBeenSet;
}

