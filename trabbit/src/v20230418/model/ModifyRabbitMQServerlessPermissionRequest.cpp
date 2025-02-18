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

#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessPermissionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

ModifyRabbitMQServerlessPermissionRequest::ModifyRabbitMQServerlessPermissionRequest() :
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_configRegexpHasBeenSet(false),
    m_writeRegexpHasBeenSet(false),
    m_readRegexpHasBeenSet(false)
{
}

string ModifyRabbitMQServerlessPermissionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_configRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRegexp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_writeRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteRegexp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_writeRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_readRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadRegexp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readRegexp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRabbitMQServerlessPermissionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRabbitMQServerlessPermissionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRabbitMQServerlessPermissionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRabbitMQServerlessPermissionRequest::GetUser() const
{
    return m_user;
}

void ModifyRabbitMQServerlessPermissionRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ModifyRabbitMQServerlessPermissionRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string ModifyRabbitMQServerlessPermissionRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void ModifyRabbitMQServerlessPermissionRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool ModifyRabbitMQServerlessPermissionRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string ModifyRabbitMQServerlessPermissionRequest::GetConfigRegexp() const
{
    return m_configRegexp;
}

void ModifyRabbitMQServerlessPermissionRequest::SetConfigRegexp(const string& _configRegexp)
{
    m_configRegexp = _configRegexp;
    m_configRegexpHasBeenSet = true;
}

bool ModifyRabbitMQServerlessPermissionRequest::ConfigRegexpHasBeenSet() const
{
    return m_configRegexpHasBeenSet;
}

string ModifyRabbitMQServerlessPermissionRequest::GetWriteRegexp() const
{
    return m_writeRegexp;
}

void ModifyRabbitMQServerlessPermissionRequest::SetWriteRegexp(const string& _writeRegexp)
{
    m_writeRegexp = _writeRegexp;
    m_writeRegexpHasBeenSet = true;
}

bool ModifyRabbitMQServerlessPermissionRequest::WriteRegexpHasBeenSet() const
{
    return m_writeRegexpHasBeenSet;
}

string ModifyRabbitMQServerlessPermissionRequest::GetReadRegexp() const
{
    return m_readRegexp;
}

void ModifyRabbitMQServerlessPermissionRequest::SetReadRegexp(const string& _readRegexp)
{
    m_readRegexp = _readRegexp;
    m_readRegexpHasBeenSet = true;
}

bool ModifyRabbitMQServerlessPermissionRequest::ReadRegexpHasBeenSet() const
{
    return m_readRegexpHasBeenSet;
}


