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

#include <tencentcloud/csip/v20221121/model/ClbTargetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClbTargetItem::ClbTargetItem() :
    m_instanceIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_eniIDHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome ClbTargetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbTargetItem.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbTargetItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbTargetItem.PrivateIpAddresses` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddresses = string(value["PrivateIpAddresses"].GetString());
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("EniID") && !value["EniID"].IsNull())
    {
        if (!value["EniID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbTargetItem.EniID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniID = string(value["EniID"].GetString());
        m_eniIDHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbTargetItem.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClbTargetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniID.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

}


string ClbTargetItem::GetInstanceID() const
{
    return m_instanceID;
}

void ClbTargetItem::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ClbTargetItem::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ClbTargetItem::GetInstanceName() const
{
    return m_instanceName;
}

void ClbTargetItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ClbTargetItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ClbTargetItem::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void ClbTargetItem::SetPrivateIpAddresses(const string& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool ClbTargetItem::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

string ClbTargetItem::GetEniID() const
{
    return m_eniID;
}

void ClbTargetItem::SetEniID(const string& _eniID)
{
    m_eniID = _eniID;
    m_eniIDHasBeenSet = true;
}

bool ClbTargetItem::EniIDHasBeenSet() const
{
    return m_eniIDHasBeenSet;
}

uint64_t ClbTargetItem::GetPort() const
{
    return m_port;
}

void ClbTargetItem::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ClbTargetItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

