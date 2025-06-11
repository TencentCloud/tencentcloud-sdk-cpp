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

#include <tencentcloud/lke/v20231130/model/UserBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

UserBaseInfo::UserBaseInfo() :
    m_userBizIdHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome UserBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserBizId") && !value["UserBizId"].IsNull())
    {
        if (!value["UserBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserBaseInfo.UserBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userBizId = string(value["UserBizId"].GetString());
        m_userBizIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserBaseInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string UserBaseInfo::GetUserBizId() const
{
    return m_userBizId;
}

void UserBaseInfo::SetUserBizId(const string& _userBizId)
{
    m_userBizId = _userBizId;
    m_userBizIdHasBeenSet = true;
}

bool UserBaseInfo::UserBizIdHasBeenSet() const
{
    return m_userBizIdHasBeenSet;
}

string UserBaseInfo::GetUserName() const
{
    return m_userName;
}

void UserBaseInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserBaseInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

