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

#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

CreateRabbitMQServerlessUserRequest::CreateRabbitMQServerlessUserRequest() :
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_maxConnectionsHasBeenSet(false),
    m_maxChannelsHasBeenSet(false)
{
}

string CreateRabbitMQServerlessUserRequest::ToJsonString() const
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


string CreateRabbitMQServerlessUserRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRabbitMQServerlessUserRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRabbitMQServerlessUserRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRabbitMQServerlessUserRequest::GetUser() const
{
    return m_user;
}

void CreateRabbitMQServerlessUserRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateRabbitMQServerlessUserRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string CreateRabbitMQServerlessUserRequest::GetPassword() const
{
    return m_password;
}

void CreateRabbitMQServerlessUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateRabbitMQServerlessUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateRabbitMQServerlessUserRequest::GetDescription() const
{
    return m_description;
}

void CreateRabbitMQServerlessUserRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRabbitMQServerlessUserRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> CreateRabbitMQServerlessUserRequest::GetTags() const
{
    return m_tags;
}

void CreateRabbitMQServerlessUserRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateRabbitMQServerlessUserRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateRabbitMQServerlessUserRequest::GetMaxConnections() const
{
    return m_maxConnections;
}

void CreateRabbitMQServerlessUserRequest::SetMaxConnections(const int64_t& _maxConnections)
{
    m_maxConnections = _maxConnections;
    m_maxConnectionsHasBeenSet = true;
}

bool CreateRabbitMQServerlessUserRequest::MaxConnectionsHasBeenSet() const
{
    return m_maxConnectionsHasBeenSet;
}

int64_t CreateRabbitMQServerlessUserRequest::GetMaxChannels() const
{
    return m_maxChannels;
}

void CreateRabbitMQServerlessUserRequest::SetMaxChannels(const int64_t& _maxChannels)
{
    m_maxChannels = _maxChannels;
    m_maxChannelsHasBeenSet = true;
}

bool CreateRabbitMQServerlessUserRequest::MaxChannelsHasBeenSet() const
{
    return m_maxChannelsHasBeenSet;
}


