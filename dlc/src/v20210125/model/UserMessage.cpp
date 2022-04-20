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

#include <tencentcloud/dlc/v20210125/model/UserMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UserMessage::UserMessage() :
    m_userIdHasBeenSet(false),
    m_userDescriptionHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userAliasHasBeenSet(false)
{
}

CoreInternalOutcome UserMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMessage.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserDescription") && !value["UserDescription"].IsNull())
    {
        if (!value["UserDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMessage.UserDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDescription = string(value["UserDescription"].GetString());
        m_userDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMessage.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMessage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMessage.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

}


string UserMessage::GetUserId() const
{
    return m_userId;
}

void UserMessage::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserMessage::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UserMessage::GetUserDescription() const
{
    return m_userDescription;
}

void UserMessage::SetUserDescription(const string& _userDescription)
{
    m_userDescription = _userDescription;
    m_userDescriptionHasBeenSet = true;
}

bool UserMessage::UserDescriptionHasBeenSet() const
{
    return m_userDescriptionHasBeenSet;
}

string UserMessage::GetCreator() const
{
    return m_creator;
}

void UserMessage::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool UserMessage::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string UserMessage::GetCreateTime() const
{
    return m_createTime;
}

void UserMessage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserMessage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserMessage::GetUserAlias() const
{
    return m_userAlias;
}

void UserMessage::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool UserMessage::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

