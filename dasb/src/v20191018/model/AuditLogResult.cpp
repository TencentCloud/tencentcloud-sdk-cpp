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

#include <tencentcloud/dasb/v20191018/model/AuditLogResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

AuditLogResult::AuditLogResult() :
    m_sidHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_subAccountUinHasBeenSet(false)
{
}

CoreInternalOutcome AuditLogResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sid") && !value["Sid"].IsNull())
    {
        if (!value["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(value["Sid"].GetString());
        m_sidHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.Operation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operation = value["Operation"].GetInt64();
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogResult.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLogResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operation, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

}


string AuditLogResult::GetSid() const
{
    return m_sid;
}

void AuditLogResult::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool AuditLogResult::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

string AuditLogResult::GetUin() const
{
    return m_uin;
}

void AuditLogResult::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AuditLogResult::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AuditLogResult::GetTime() const
{
    return m_time;
}

void AuditLogResult::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool AuditLogResult::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string AuditLogResult::GetClientIp() const
{
    return m_clientIp;
}

void AuditLogResult::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool AuditLogResult::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

int64_t AuditLogResult::GetOperation() const
{
    return m_operation;
}

void AuditLogResult::SetOperation(const int64_t& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool AuditLogResult::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string AuditLogResult::GetInstanceId() const
{
    return m_instanceId;
}

void AuditLogResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AuditLogResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AuditLogResult::GetDeviceName() const
{
    return m_deviceName;
}

void AuditLogResult::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool AuditLogResult::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string AuditLogResult::GetProtocol() const
{
    return m_protocol;
}

void AuditLogResult::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AuditLogResult::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AuditLogResult::GetPrivateIp() const
{
    return m_privateIp;
}

void AuditLogResult::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool AuditLogResult::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string AuditLogResult::GetPublicIp() const
{
    return m_publicIp;
}

void AuditLogResult::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool AuditLogResult::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string AuditLogResult::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void AuditLogResult::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool AuditLogResult::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

