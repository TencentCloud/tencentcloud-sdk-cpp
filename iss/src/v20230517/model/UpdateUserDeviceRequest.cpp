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

#include <tencentcloud/iss/v20230517/model/UpdateUserDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateUserDeviceRequest::UpdateUserDeviceRequest() :
    m_deviceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_transportProtocolHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_audioSwitchHasBeenSet(false),
    m_subscribeSwitchHasBeenSet(false),
    m_silentFrameSwitchHasBeenSet(false)
{
}

string UpdateUserDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_transportProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransportProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transportProtocol, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protocolType, allocator);
    }

    if (m_audioSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioSwitch, allocator);
    }

    if (m_subscribeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subscribeSwitch, allocator);
    }

    if (m_silentFrameSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SilentFrameSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_silentFrameSwitch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUserDeviceRequest::GetDeviceId() const
{
    return m_deviceId;
}

void UpdateUserDeviceRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool UpdateUserDeviceRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string UpdateUserDeviceRequest::GetName() const
{
    return m_name;
}

void UpdateUserDeviceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateUserDeviceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t UpdateUserDeviceRequest::GetTransportProtocol() const
{
    return m_transportProtocol;
}

void UpdateUserDeviceRequest::SetTransportProtocol(const int64_t& _transportProtocol)
{
    m_transportProtocol = _transportProtocol;
    m_transportProtocolHasBeenSet = true;
}

bool UpdateUserDeviceRequest::TransportProtocolHasBeenSet() const
{
    return m_transportProtocolHasBeenSet;
}

string UpdateUserDeviceRequest::GetPassword() const
{
    return m_password;
}

void UpdateUserDeviceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool UpdateUserDeviceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string UpdateUserDeviceRequest::GetDescription() const
{
    return m_description;
}

void UpdateUserDeviceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateUserDeviceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateUserDeviceRequest::GetIp() const
{
    return m_ip;
}

void UpdateUserDeviceRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool UpdateUserDeviceRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t UpdateUserDeviceRequest::GetPort() const
{
    return m_port;
}

void UpdateUserDeviceRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool UpdateUserDeviceRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string UpdateUserDeviceRequest::GetUsername() const
{
    return m_username;
}

void UpdateUserDeviceRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool UpdateUserDeviceRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

int64_t UpdateUserDeviceRequest::GetProtocolType() const
{
    return m_protocolType;
}

void UpdateUserDeviceRequest::SetProtocolType(const int64_t& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool UpdateUserDeviceRequest::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

int64_t UpdateUserDeviceRequest::GetAudioSwitch() const
{
    return m_audioSwitch;
}

void UpdateUserDeviceRequest::SetAudioSwitch(const int64_t& _audioSwitch)
{
    m_audioSwitch = _audioSwitch;
    m_audioSwitchHasBeenSet = true;
}

bool UpdateUserDeviceRequest::AudioSwitchHasBeenSet() const
{
    return m_audioSwitchHasBeenSet;
}

int64_t UpdateUserDeviceRequest::GetSubscribeSwitch() const
{
    return m_subscribeSwitch;
}

void UpdateUserDeviceRequest::SetSubscribeSwitch(const int64_t& _subscribeSwitch)
{
    m_subscribeSwitch = _subscribeSwitch;
    m_subscribeSwitchHasBeenSet = true;
}

bool UpdateUserDeviceRequest::SubscribeSwitchHasBeenSet() const
{
    return m_subscribeSwitchHasBeenSet;
}

int64_t UpdateUserDeviceRequest::GetSilentFrameSwitch() const
{
    return m_silentFrameSwitch;
}

void UpdateUserDeviceRequest::SetSilentFrameSwitch(const int64_t& _silentFrameSwitch)
{
    m_silentFrameSwitch = _silentFrameSwitch;
    m_silentFrameSwitchHasBeenSet = true;
}

bool UpdateUserDeviceRequest::SilentFrameSwitchHasBeenSet() const
{
    return m_silentFrameSwitchHasBeenSet;
}


