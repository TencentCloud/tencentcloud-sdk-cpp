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

#include <tencentcloud/clb/v20180317/model/TargetGroupInstanceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TargetGroupInstanceStatus::TargetGroupInstanceStatus() :
    m_instanceIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_eniIdHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupInstanceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceIp") && !value["InstanceIp"].IsNull())
    {
        if (!value["InstanceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstanceStatus.InstanceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceIp = string(value["InstanceIp"].GetString());
        m_instanceIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstanceStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstanceStatus.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstanceStatus.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("EniId") && !value["EniId"].IsNull())
    {
        if (!value["EniId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstanceStatus.EniId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniId = string(value["EniId"].GetString());
        m_eniIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupInstanceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_eniIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniId.c_str(), allocator).Move(), allocator);
    }

}


string TargetGroupInstanceStatus::GetInstanceIp() const
{
    return m_instanceIp;
}

void TargetGroupInstanceStatus::SetInstanceIp(const string& _instanceIp)
{
    m_instanceIp = _instanceIp;
    m_instanceIpHasBeenSet = true;
}

bool TargetGroupInstanceStatus::InstanceIpHasBeenSet() const
{
    return m_instanceIpHasBeenSet;
}

string TargetGroupInstanceStatus::GetStatus() const
{
    return m_status;
}

void TargetGroupInstanceStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TargetGroupInstanceStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TargetGroupInstanceStatus::GetInstanceId() const
{
    return m_instanceId;
}

void TargetGroupInstanceStatus::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TargetGroupInstanceStatus::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t TargetGroupInstanceStatus::GetPort() const
{
    return m_port;
}

void TargetGroupInstanceStatus::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetGroupInstanceStatus::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string TargetGroupInstanceStatus::GetEniId() const
{
    return m_eniId;
}

void TargetGroupInstanceStatus::SetEniId(const string& _eniId)
{
    m_eniId = _eniId;
    m_eniIdHasBeenSet = true;
}

bool TargetGroupInstanceStatus::EniIdHasBeenSet() const
{
    return m_eniIdHasBeenSet;
}

