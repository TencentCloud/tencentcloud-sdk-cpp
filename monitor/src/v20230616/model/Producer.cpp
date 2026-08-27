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

#include <tencentcloud/monitor/v20230616/model/Producer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

Producer::Producer() :
    m_protocolTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_brokersHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_mergeHasBeenSet(false),
    m_globalTagsHasBeenSet(false),
    m_defaultTagsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome Producer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtocolType") && !value["ProtocolType"].IsNull())
    {
        if (!value["ProtocolType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.ProtocolType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = value["ProtocolType"].GetInt64();
        m_protocolTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Brokers") && !value["Brokers"].IsNull())
    {
        if (!value["Brokers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.Brokers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokers = string(value["Brokers"].GetString());
        m_brokersHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Merge") && !value["Merge"].IsNull())
    {
        if (!value["Merge"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.Merge` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_merge = value["Merge"].GetInt64();
        m_mergeHasBeenSet = true;
    }

    if (value.HasMember("GlobalTags") && !value["GlobalTags"].IsNull())
    {
        if (!value["GlobalTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Producer.GlobalTags` is not array type"));

        const rapidjson::Value &tmpValue = value["GlobalTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DispenseGlobalTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_globalTags.push_back(item);
        }
        m_globalTagsHasBeenSet = true;
    }

    if (value.HasMember("DefaultTags") && !value["DefaultTags"].IsNull())
    {
        if (!value["DefaultTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Producer.DefaultTags` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_defaultTags.push_back((*itr).GetString());
        }
        m_defaultTagsHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Producer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolType, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_brokersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brokers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokers.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Merge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_merge, allocator);
    }

    if (m_globalTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_globalTags.begin(); itr != m_globalTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defaultTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_defaultTags.begin(); itr != m_defaultTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


int64_t Producer::GetProtocolType() const
{
    return m_protocolType;
}

void Producer::SetProtocolType(const int64_t& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool Producer::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

string Producer::GetType() const
{
    return m_type;
}

void Producer::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Producer::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Producer::GetBrokers() const
{
    return m_brokers;
}

void Producer::SetBrokers(const string& _brokers)
{
    m_brokers = _brokers;
    m_brokersHasBeenSet = true;
}

bool Producer::BrokersHasBeenSet() const
{
    return m_brokersHasBeenSet;
}

string Producer::GetTopic() const
{
    return m_topic;
}

void Producer::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool Producer::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t Producer::GetMerge() const
{
    return m_merge;
}

void Producer::SetMerge(const int64_t& _merge)
{
    m_merge = _merge;
    m_mergeHasBeenSet = true;
}

bool Producer::MergeHasBeenSet() const
{
    return m_mergeHasBeenSet;
}

vector<DispenseGlobalTag> Producer::GetGlobalTags() const
{
    return m_globalTags;
}

void Producer::SetGlobalTags(const vector<DispenseGlobalTag>& _globalTags)
{
    m_globalTags = _globalTags;
    m_globalTagsHasBeenSet = true;
}

bool Producer::GlobalTagsHasBeenSet() const
{
    return m_globalTagsHasBeenSet;
}

vector<string> Producer::GetDefaultTags() const
{
    return m_defaultTags;
}

void Producer::SetDefaultTags(const vector<string>& _defaultTags)
{
    m_defaultTags = _defaultTags;
    m_defaultTagsHasBeenSet = true;
}

bool Producer::DefaultTagsHasBeenSet() const
{
    return m_defaultTagsHasBeenSet;
}

string Producer::GetUsername() const
{
    return m_username;
}

void Producer::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool Producer::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string Producer::GetPassword() const
{
    return m_password;
}

void Producer::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool Producer::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

