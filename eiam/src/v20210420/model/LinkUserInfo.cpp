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

#include <tencentcloud/eiam/v20210420/model/LinkUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

LinkUserInfo::LinkUserInfo() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome LinkUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkUserInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkUserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinkUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string LinkUserInfo::GetUserId() const
{
    return m_userId;
}

void LinkUserInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool LinkUserInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string LinkUserInfo::GetUserName() const
{
    return m_userName;
}

void LinkUserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool LinkUserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

