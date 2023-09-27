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

#include <tencentcloud/dbbrain/v20210527/model/Process.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

Process::Process() :
    m_idHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_fileDescriptorHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lastCommandHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_idleHasBeenSet(false),
    m_proxyIdHasBeenSet(false)
{
}

CoreInternalOutcome Process::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("FileDescriptor") && !value["FileDescriptor"].IsNull())
    {
        if (!value["FileDescriptor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Process.FileDescriptor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileDescriptor = value["FileDescriptor"].GetInt64();
        m_fileDescriptorHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LastCommand") && !value["LastCommand"].IsNull())
    {
        if (!value["LastCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.LastCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCommand = string(value["LastCommand"].GetString());
        m_lastCommandHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Idle") && !value["Idle"].IsNull())
    {
        if (!value["Idle"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Idle` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idle = value["Idle"].GetInt64();
        m_idleHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Process::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDescriptorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDescriptor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileDescriptor, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_idleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idle, allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

}


int64_t Process::GetId() const
{
    return m_id;
}

void Process::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Process::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Process::GetAddress() const
{
    return m_address;
}

void Process::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Process::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

int64_t Process::GetFileDescriptor() const
{
    return m_fileDescriptor;
}

void Process::SetFileDescriptor(const int64_t& _fileDescriptor)
{
    m_fileDescriptor = _fileDescriptor;
    m_fileDescriptorHasBeenSet = true;
}

bool Process::FileDescriptorHasBeenSet() const
{
    return m_fileDescriptorHasBeenSet;
}

string Process::GetName() const
{
    return m_name;
}

void Process::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Process::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Process::GetLastCommand() const
{
    return m_lastCommand;
}

void Process::SetLastCommand(const string& _lastCommand)
{
    m_lastCommand = _lastCommand;
    m_lastCommandHasBeenSet = true;
}

bool Process::LastCommandHasBeenSet() const
{
    return m_lastCommandHasBeenSet;
}

int64_t Process::GetAge() const
{
    return m_age;
}

void Process::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool Process::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t Process::GetIdle() const
{
    return m_idle;
}

void Process::SetIdle(const int64_t& _idle)
{
    m_idle = _idle;
    m_idleHasBeenSet = true;
}

bool Process::IdleHasBeenSet() const
{
    return m_idleHasBeenSet;
}

string Process::GetProxyId() const
{
    return m_proxyId;
}

void Process::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool Process::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

