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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQUser::RabbitMQUser() :
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_maxConnectionsHasBeenSet(false),
    m_maxChannelsHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MaxConnections") && !value["MaxConnections"].IsNull())
    {
        if (!value["MaxConnections"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.MaxConnections` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConnections = value["MaxConnections"].GetInt64();
        m_maxConnectionsHasBeenSet = true;
    }

    if (value.HasMember("MaxChannels") && !value["MaxChannels"].IsNull())
    {
        if (!value["MaxChannels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQUser.MaxChannels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxChannels = value["MaxChannels"].GetInt64();
        m_maxChannelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConnections, allocator);
    }

    if (m_maxChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxChannels, allocator);
    }

}


string RabbitMQUser::GetInstanceId() const
{
    return m_instanceId;
}

void RabbitMQUser::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RabbitMQUser::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RabbitMQUser::GetUser() const
{
    return m_user;
}

void RabbitMQUser::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool RabbitMQUser::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string RabbitMQUser::GetPassword() const
{
    return m_password;
}

void RabbitMQUser::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool RabbitMQUser::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string RabbitMQUser::GetDescription() const
{
    return m_description;
}

void RabbitMQUser::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RabbitMQUser::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> RabbitMQUser::GetTags() const
{
    return m_tags;
}

void RabbitMQUser::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RabbitMQUser::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string RabbitMQUser::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQUser::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQUser::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RabbitMQUser::GetModifyTime() const
{
    return m_modifyTime;
}

void RabbitMQUser::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RabbitMQUser::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string RabbitMQUser::GetType() const
{
    return m_type;
}

void RabbitMQUser::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RabbitMQUser::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RabbitMQUser::GetMaxConnections() const
{
    return m_maxConnections;
}

void RabbitMQUser::SetMaxConnections(const int64_t& _maxConnections)
{
    m_maxConnections = _maxConnections;
    m_maxConnectionsHasBeenSet = true;
}

bool RabbitMQUser::MaxConnectionsHasBeenSet() const
{
    return m_maxConnectionsHasBeenSet;
}

int64_t RabbitMQUser::GetMaxChannels() const
{
    return m_maxChannels;
}

void RabbitMQUser::SetMaxChannels(const int64_t& _maxChannels)
{
    m_maxChannels = _maxChannels;
    m_maxChannelsHasBeenSet = true;
}

bool RabbitMQUser::MaxChannelsHasBeenSet() const
{
    return m_maxChannelsHasBeenSet;
}

