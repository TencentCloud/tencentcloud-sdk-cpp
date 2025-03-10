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

#include <tencentcloud/tat/v20201028/model/RegisterInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

RegisterInstanceInfo::RegisterInstanceInfo() :
    m_registerCodeIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_machineIdHasBeenSet(false),
    m_systemNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_localIpHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome RegisterInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegisterCodeId") && !value["RegisterCodeId"].IsNull())
    {
        if (!value["RegisterCodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.RegisterCodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerCodeId = string(value["RegisterCodeId"].GetString());
        m_registerCodeIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("MachineId") && !value["MachineId"].IsNull())
    {
        if (!value["MachineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.MachineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineId = string(value["MachineId"].GetString());
        m_machineIdHasBeenSet = true;
    }

    if (value.HasMember("SystemName") && !value["SystemName"].IsNull())
    {
        if (!value["SystemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.SystemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemName = string(value["SystemName"].GetString());
        m_systemNameHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("LocalIp") && !value["LocalIp"].IsNull())
    {
        if (!value["LocalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.LocalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localIp = string(value["LocalIp"].GetString());
        m_localIpHasBeenSet = true;
    }

    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegisterInstanceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisterInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registerCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerCodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineId.c_str(), allocator).Move(), allocator);
    }

    if (m_systemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_localIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RegisterInstanceInfo::GetRegisterCodeId() const
{
    return m_registerCodeId;
}

void RegisterInstanceInfo::SetRegisterCodeId(const string& _registerCodeId)
{
    m_registerCodeId = _registerCodeId;
    m_registerCodeIdHasBeenSet = true;
}

bool RegisterInstanceInfo::RegisterCodeIdHasBeenSet() const
{
    return m_registerCodeIdHasBeenSet;
}

string RegisterInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void RegisterInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RegisterInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RegisterInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void RegisterInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RegisterInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RegisterInstanceInfo::GetMachineId() const
{
    return m_machineId;
}

void RegisterInstanceInfo::SetMachineId(const string& _machineId)
{
    m_machineId = _machineId;
    m_machineIdHasBeenSet = true;
}

bool RegisterInstanceInfo::MachineIdHasBeenSet() const
{
    return m_machineIdHasBeenSet;
}

string RegisterInstanceInfo::GetSystemName() const
{
    return m_systemName;
}

void RegisterInstanceInfo::SetSystemName(const string& _systemName)
{
    m_systemName = _systemName;
    m_systemNameHasBeenSet = true;
}

bool RegisterInstanceInfo::SystemNameHasBeenSet() const
{
    return m_systemNameHasBeenSet;
}

string RegisterInstanceInfo::GetHostName() const
{
    return m_hostName;
}

void RegisterInstanceInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool RegisterInstanceInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string RegisterInstanceInfo::GetLocalIp() const
{
    return m_localIp;
}

void RegisterInstanceInfo::SetLocalIp(const string& _localIp)
{
    m_localIp = _localIp;
    m_localIpHasBeenSet = true;
}

bool RegisterInstanceInfo::LocalIpHasBeenSet() const
{
    return m_localIpHasBeenSet;
}

string RegisterInstanceInfo::GetPublicKey() const
{
    return m_publicKey;
}

void RegisterInstanceInfo::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool RegisterInstanceInfo::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string RegisterInstanceInfo::GetStatus() const
{
    return m_status;
}

void RegisterInstanceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RegisterInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RegisterInstanceInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void RegisterInstanceInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RegisterInstanceInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string RegisterInstanceInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void RegisterInstanceInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool RegisterInstanceInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<Tag> RegisterInstanceInfo::GetTags() const
{
    return m_tags;
}

void RegisterInstanceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RegisterInstanceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

