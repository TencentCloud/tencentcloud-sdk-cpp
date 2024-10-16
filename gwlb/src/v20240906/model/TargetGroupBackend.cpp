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

#include <tencentcloud/gwlb/v20240906/model/TargetGroupBackend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

TargetGroupBackend::TargetGroupBackend() :
    m_targetGroupIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_registeredTimeHasBeenSet(false),
    m_eniIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupBackend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RegisteredTime") && !value["RegisteredTime"].IsNull())
    {
        if (!value["RegisteredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.RegisteredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registeredTime = string(value["RegisteredTime"].GetString());
        m_registeredTimeHasBeenSet = true;
    }

    if (value.HasMember("EniId") && !value["EniId"].IsNull())
    {
        if (!value["EniId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.EniId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniId = string(value["EniId"].GetString());
        m_eniIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupBackend.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupBackend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_registeredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registeredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

}


string TargetGroupBackend::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void TargetGroupBackend::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool TargetGroupBackend::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string TargetGroupBackend::GetType() const
{
    return m_type;
}

void TargetGroupBackend::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TargetGroupBackend::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TargetGroupBackend::GetInstanceId() const
{
    return m_instanceId;
}

void TargetGroupBackend::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TargetGroupBackend::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t TargetGroupBackend::GetPort() const
{
    return m_port;
}

void TargetGroupBackend::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetGroupBackend::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t TargetGroupBackend::GetWeight() const
{
    return m_weight;
}

void TargetGroupBackend::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool TargetGroupBackend::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

vector<string> TargetGroupBackend::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void TargetGroupBackend::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool TargetGroupBackend::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

vector<string> TargetGroupBackend::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void TargetGroupBackend::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool TargetGroupBackend::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

string TargetGroupBackend::GetInstanceName() const
{
    return m_instanceName;
}

void TargetGroupBackend::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool TargetGroupBackend::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string TargetGroupBackend::GetRegisteredTime() const
{
    return m_registeredTime;
}

void TargetGroupBackend::SetRegisteredTime(const string& _registeredTime)
{
    m_registeredTime = _registeredTime;
    m_registeredTimeHasBeenSet = true;
}

bool TargetGroupBackend::RegisteredTimeHasBeenSet() const
{
    return m_registeredTimeHasBeenSet;
}

string TargetGroupBackend::GetEniId() const
{
    return m_eniId;
}

void TargetGroupBackend::SetEniId(const string& _eniId)
{
    m_eniId = _eniId;
    m_eniIdHasBeenSet = true;
}

bool TargetGroupBackend::EniIdHasBeenSet() const
{
    return m_eniIdHasBeenSet;
}

uint64_t TargetGroupBackend::GetZoneId() const
{
    return m_zoneId;
}

void TargetGroupBackend::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool TargetGroupBackend::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

