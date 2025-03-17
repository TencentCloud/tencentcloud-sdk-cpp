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

#include <tencentcloud/hunyuan/v20230901/model/GroupChatConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GroupChatConfig::GroupChatConfig() :
    m_userNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_charactersHasBeenSet(false)
{
}

CoreInternalOutcome GroupChatConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupChatConfig.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupChatConfig.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Characters") && !value["Characters"].IsNull())
    {
        if (!value["Characters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupChatConfig.Characters` is not array type"));

        const rapidjson::Value &tmpValue = value["Characters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Character item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_characters.push_back(item);
        }
        m_charactersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupChatConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_charactersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Characters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_characters.begin(); itr != m_characters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GroupChatConfig::GetUserName() const
{
    return m_userName;
}

void GroupChatConfig::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool GroupChatConfig::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string GroupChatConfig::GetDescription() const
{
    return m_description;
}

void GroupChatConfig::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GroupChatConfig::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Character> GroupChatConfig::GetCharacters() const
{
    return m_characters;
}

void GroupChatConfig::SetCharacters(const vector<Character>& _characters)
{
    m_characters = _characters;
    m_charactersHasBeenSet = true;
}

bool GroupChatConfig::CharactersHasBeenSet() const
{
    return m_charactersHasBeenSet;
}

