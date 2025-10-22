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

#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRabbitMQUserRequest::CreateRabbitMQUserRequest() :
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_maxConnectionsHasBeenSet(false),
    m_maxChannelsHasBeenSet(false)
{
}

string CreateRabbitMQUserRequest::ToJsonString() const
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

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnections";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConnections, allocator);
    }

    if (m_maxChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChannels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxChannels, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRabbitMQUserRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRabbitMQUserRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRabbitMQUserRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRabbitMQUserRequest::GetUser() const
{
    return m_user;
}

void CreateRabbitMQUserRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateRabbitMQUserRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string CreateRabbitMQUserRequest::GetPassword() const
{
    return m_password;
}

void CreateRabbitMQUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateRabbitMQUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateRabbitMQUserRequest::GetDescription() const
{
    return m_description;
}

void CreateRabbitMQUserRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRabbitMQUserRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> CreateRabbitMQUserRequest::GetTags() const
{
    return m_tags;
}

void CreateRabbitMQUserRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateRabbitMQUserRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateRabbitMQUserRequest::GetMaxConnections() const
{
    return m_maxConnections;
}

void CreateRabbitMQUserRequest::SetMaxConnections(const int64_t& _maxConnections)
{
    m_maxConnections = _maxConnections;
    m_maxConnectionsHasBeenSet = true;
}

bool CreateRabbitMQUserRequest::MaxConnectionsHasBeenSet() const
{
    return m_maxConnectionsHasBeenSet;
}

int64_t CreateRabbitMQUserRequest::GetMaxChannels() const
{
    return m_maxChannels;
}

void CreateRabbitMQUserRequest::SetMaxChannels(const int64_t& _maxChannels)
{
    m_maxChannels = _maxChannels;
    m_maxChannelsHasBeenSet = true;
}

bool CreateRabbitMQUserRequest::MaxChannelsHasBeenSet() const
{
    return m_maxChannelsHasBeenSet;
}


