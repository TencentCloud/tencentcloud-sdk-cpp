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

#include <tencentcloud/cwp/v20180228/model/ClientSettingHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ClientSettingHost::ClientSettingHost() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_functionStatusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_messageDescHasBeenSet(false),
    m_instanceStatusHasBeenSet(false)
{
}

CoreInternalOutcome ClientSettingHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("FunctionStatus") && !value["FunctionStatus"].IsNull())
    {
        if (!value["FunctionStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.FunctionStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_functionStatus = value["FunctionStatus"].GetUint64();
        m_functionStatusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("MessageDesc") && !value["MessageDesc"].IsNull())
    {
        if (!value["MessageDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.MessageDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageDesc = string(value["MessageDesc"].GetString());
        m_messageDescHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSettingHost.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientSettingHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_functionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_functionStatus, allocator);
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

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ClientSettingHost::GetId() const
{
    return m_id;
}

void ClientSettingHost::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ClientSettingHost::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ClientSettingHost::GetName() const
{
    return m_name;
}

void ClientSettingHost::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClientSettingHost::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClientSettingHost::GetInstanceId() const
{
    return m_instanceId;
}

void ClientSettingHost::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClientSettingHost::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ClientSettingHost::GetPublicIp() const
{
    return m_publicIp;
}

void ClientSettingHost::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool ClientSettingHost::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string ClientSettingHost::GetPrivateIp() const
{
    return m_privateIp;
}

void ClientSettingHost::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool ClientSettingHost::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string ClientSettingHost::GetQuuid() const
{
    return m_quuid;
}

void ClientSettingHost::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ClientSettingHost::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string ClientSettingHost::GetStatus() const
{
    return m_status;
}

void ClientSettingHost::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClientSettingHost::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClientSettingHost::GetVpcId() const
{
    return m_vpcId;
}

void ClientSettingHost::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClientSettingHost::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

RegionInfo ClientSettingHost::GetRegionInfo() const
{
    return m_regionInfo;
}

void ClientSettingHost::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool ClientSettingHost::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

MachineExtraInfo ClientSettingHost::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void ClientSettingHost::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool ClientSettingHost::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

uint64_t ClientSettingHost::GetFunctionStatus() const
{
    return m_functionStatus;
}

void ClientSettingHost::SetFunctionStatus(const uint64_t& _functionStatus)
{
    m_functionStatus = _functionStatus;
    m_functionStatusHasBeenSet = true;
}

bool ClientSettingHost::FunctionStatusHasBeenSet() const
{
    return m_functionStatusHasBeenSet;
}

string ClientSettingHost::GetMessage() const
{
    return m_message;
}

void ClientSettingHost::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ClientSettingHost::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ClientSettingHost::GetMessageDesc() const
{
    return m_messageDesc;
}

void ClientSettingHost::SetMessageDesc(const string& _messageDesc)
{
    m_messageDesc = _messageDesc;
    m_messageDescHasBeenSet = true;
}

bool ClientSettingHost::MessageDescHasBeenSet() const
{
    return m_messageDescHasBeenSet;
}

string ClientSettingHost::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void ClientSettingHost::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool ClientSettingHost::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

