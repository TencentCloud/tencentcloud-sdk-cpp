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

#include <tencentcloud/dbbrain/v20210527/model/MongoDBProcessItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MongoDBProcessItem::MongoDBProcessItem() :
    m_isInternalIpHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_instanceNodeIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_shardNameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_dBHasBeenSet(false)
{
}

CoreInternalOutcome MongoDBProcessItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsInternalIp") && !value["IsInternalIp"].IsNull())
    {
        if (!value["IsInternalIp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.IsInternalIp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isInternalIp = value["IsInternalIp"].GetBool();
        m_isInternalIpHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("InstanceNodeId") && !value["InstanceNodeId"].IsNull())
    {
        if (!value["InstanceNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.InstanceNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNodeId = string(value["InstanceNodeId"].GetString());
        m_instanceNodeIdHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.Time` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetDouble();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ShardName") && !value["ShardName"].IsNull())
    {
        if (!value["ShardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.ShardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardName = string(value["ShardName"].GetString());
        m_shardNameHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("DB") && !value["DB"].IsNull())
    {
        if (!value["DB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBProcessItem.DB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dB = string(value["DB"].GetString());
        m_dBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoDBProcessItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isInternalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInternalIp, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_shardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardName.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dB.c_str(), allocator).Move(), allocator);
    }

}


bool MongoDBProcessItem::GetIsInternalIp() const
{
    return m_isInternalIp;
}

void MongoDBProcessItem::SetIsInternalIp(const bool& _isInternalIp)
{
    m_isInternalIp = _isInternalIp;
    m_isInternalIpHasBeenSet = true;
}

bool MongoDBProcessItem::IsInternalIpHasBeenSet() const
{
    return m_isInternalIpHasBeenSet;
}

string MongoDBProcessItem::GetType() const
{
    return m_type;
}

void MongoDBProcessItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MongoDBProcessItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MongoDBProcessItem::GetCommand() const
{
    return m_command;
}

void MongoDBProcessItem::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool MongoDBProcessItem::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string MongoDBProcessItem::GetInstanceNodeId() const
{
    return m_instanceNodeId;
}

void MongoDBProcessItem::SetInstanceNodeId(const string& _instanceNodeId)
{
    m_instanceNodeId = _instanceNodeId;
    m_instanceNodeIdHasBeenSet = true;
}

bool MongoDBProcessItem::InstanceNodeIdHasBeenSet() const
{
    return m_instanceNodeIdHasBeenSet;
}

string MongoDBProcessItem::GetHost() const
{
    return m_host;
}

void MongoDBProcessItem::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool MongoDBProcessItem::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

double MongoDBProcessItem::GetTime() const
{
    return m_time;
}

void MongoDBProcessItem::SetTime(const double& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool MongoDBProcessItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t MongoDBProcessItem::GetID() const
{
    return m_iD;
}

void MongoDBProcessItem::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool MongoDBProcessItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MongoDBProcessItem::GetShardName() const
{
    return m_shardName;
}

void MongoDBProcessItem::SetShardName(const string& _shardName)
{
    m_shardName = _shardName;
    m_shardNameHasBeenSet = true;
}

bool MongoDBProcessItem::ShardNameHasBeenSet() const
{
    return m_shardNameHasBeenSet;
}

string MongoDBProcessItem::GetUser() const
{
    return m_user;
}

void MongoDBProcessItem::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool MongoDBProcessItem::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string MongoDBProcessItem::GetDB() const
{
    return m_dB;
}

void MongoDBProcessItem::SetDB(const string& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool MongoDBProcessItem::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

