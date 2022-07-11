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

#include <tencentcloud/irp/v20220324/model/UserIdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

UserIdInfo::UserIdInfo() :
    m_userIdTypeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome UserIdInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserIdType") && !value["UserIdType"].IsNull())
    {
        if (!value["UserIdType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdInfo.UserIdType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userIdType = value["UserIdType"].GetInt64();
        m_userIdTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserIdInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userIdType, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


int64_t UserIdInfo::GetUserIdType() const
{
    return m_userIdType;
}

void UserIdInfo::SetUserIdType(const int64_t& _userIdType)
{
    m_userIdType = _userIdType;
    m_userIdTypeHasBeenSet = true;
}

bool UserIdInfo::UserIdTypeHasBeenSet() const
{
    return m_userIdTypeHasBeenSet;
}

string UserIdInfo::GetUserId() const
{
    return m_userId;
}

void UserIdInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserIdInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

