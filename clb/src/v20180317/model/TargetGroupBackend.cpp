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

#include <tencentcloud/clb/v20180317/model/TargetGroupBackend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
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
    m_eniIdHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupBackend::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `TargetGroupBackend.PublicIpAddresses` is not array type"));

        const Value &tmpValue = value["PublicIpAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `TargetGroupBackend.PrivateIpAddresses` is not array type"));

        const Value &tmpValue = value["PrivateIpAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RegisteredTime") && !value["RegisteredTime"].IsNull())
    {
        if (!value["RegisteredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.RegisteredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registeredTime = string(value["RegisteredTime"].GetString());
        m_registeredTimeHasBeenSet = true;
    }

    if (value.HasMember("EniId") && !value["EniId"].IsNull())
    {
        if (!value["EniId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetGroupBackend.EniId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniId = string(value["EniId"].GetString());
        m_eniIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupBackend::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_targetGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_weightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_registeredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegisteredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_registeredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EniId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eniId.c_str(), allocator).Move(), allocator);
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

