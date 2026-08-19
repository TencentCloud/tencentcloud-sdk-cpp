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

#include <tencentcloud/csip/v20221121/model/ModifyLoginTypeFailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyLoginTypeFailInfo::ModifyLoginTypeFailInfo() :
    m_machineNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_messageDescHasBeenSet(false)
{
}

CoreInternalOutcome ModifyLoginTypeFailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("MessageDesc") && !value["MessageDesc"].IsNull())
    {
        if (!value["MessageDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyLoginTypeFailInfo.MessageDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageDesc = string(value["MessageDesc"].GetString());
        m_messageDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyLoginTypeFailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_messageDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageDesc.c_str(), allocator).Move(), allocator);
    }

}


string ModifyLoginTypeFailInfo::GetMachineName() const
{
    return m_machineName;
}

void ModifyLoginTypeFailInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string ModifyLoginTypeFailInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyLoginTypeFailInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyLoginTypeFailInfo::GetMachineIp() const
{
    return m_machineIp;
}

void ModifyLoginTypeFailInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string ModifyLoginTypeFailInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void ModifyLoginTypeFailInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string ModifyLoginTypeFailInfo::GetRegion() const
{
    return m_region;
}

void ModifyLoginTypeFailInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ModifyLoginTypeFailInfo::GetMachineType() const
{
    return m_machineType;
}

void ModifyLoginTypeFailInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string ModifyLoginTypeFailInfo::GetMessage() const
{
    return m_message;
}

void ModifyLoginTypeFailInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ModifyLoginTypeFailInfo::GetMessageDesc() const
{
    return m_messageDesc;
}

void ModifyLoginTypeFailInfo::SetMessageDesc(const string& _messageDesc)
{
    m_messageDesc = _messageDesc;
    m_messageDescHasBeenSet = true;
}

bool ModifyLoginTypeFailInfo::MessageDescHasBeenSet() const
{
    return m_messageDescHasBeenSet;
}

