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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQPermission::RabbitMQPermission() :
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_configRegexpHasBeenSet(false),
    m_writeRegexpHasBeenSet(false),
    m_readRegexpHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("VirtualHost") && !value["VirtualHost"].IsNull())
    {
        if (!value["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(value["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (value.HasMember("ConfigRegexp") && !value["ConfigRegexp"].IsNull())
    {
        if (!value["ConfigRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.ConfigRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRegexp = string(value["ConfigRegexp"].GetString());
        m_configRegexpHasBeenSet = true;
    }

    if (value.HasMember("WriteRegexp") && !value["WriteRegexp"].IsNull())
    {
        if (!value["WriteRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.WriteRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_writeRegexp = string(value["WriteRegexp"].GetString());
        m_writeRegexpHasBeenSet = true;
    }

    if (value.HasMember("ReadRegexp") && !value["ReadRegexp"].IsNull())
    {
        if (!value["ReadRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.ReadRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readRegexp = string(value["ReadRegexp"].GetString());
        m_readRegexpHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPermission.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_configRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_writeRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_writeRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_readRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQPermission::GetInstanceId() const
{
    return m_instanceId;
}

void RabbitMQPermission::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RabbitMQPermission::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RabbitMQPermission::GetUser() const
{
    return m_user;
}

void RabbitMQPermission::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool RabbitMQPermission::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string RabbitMQPermission::GetVirtualHost() const
{
    return m_virtualHost;
}

void RabbitMQPermission::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool RabbitMQPermission::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string RabbitMQPermission::GetConfigRegexp() const
{
    return m_configRegexp;
}

void RabbitMQPermission::SetConfigRegexp(const string& _configRegexp)
{
    m_configRegexp = _configRegexp;
    m_configRegexpHasBeenSet = true;
}

bool RabbitMQPermission::ConfigRegexpHasBeenSet() const
{
    return m_configRegexpHasBeenSet;
}

string RabbitMQPermission::GetWriteRegexp() const
{
    return m_writeRegexp;
}

void RabbitMQPermission::SetWriteRegexp(const string& _writeRegexp)
{
    m_writeRegexp = _writeRegexp;
    m_writeRegexpHasBeenSet = true;
}

bool RabbitMQPermission::WriteRegexpHasBeenSet() const
{
    return m_writeRegexpHasBeenSet;
}

string RabbitMQPermission::GetReadRegexp() const
{
    return m_readRegexp;
}

void RabbitMQPermission::SetReadRegexp(const string& _readRegexp)
{
    m_readRegexp = _readRegexp;
    m_readRegexpHasBeenSet = true;
}

bool RabbitMQPermission::ReadRegexpHasBeenSet() const
{
    return m_readRegexpHasBeenSet;
}

string RabbitMQPermission::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQPermission::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQPermission::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RabbitMQPermission::GetModifyTime() const
{
    return m_modifyTime;
}

void RabbitMQPermission::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RabbitMQPermission::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

