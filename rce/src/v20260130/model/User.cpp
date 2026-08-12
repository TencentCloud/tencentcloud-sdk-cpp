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

#include <tencentcloud/rce/v20260130/model/User.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

User::User() :
    m_userLevelHasBeenSet(false),
    m_userPointHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

CoreInternalOutcome User::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserLevel") && !value["UserLevel"].IsNull())
    {
        if (!value["UserLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userLevel = string(value["UserLevel"].GetString());
        m_userLevelHasBeenSet = true;
    }

    if (value.HasMember("UserPoint") && !value["UserPoint"].IsNull())
    {
        if (!value["UserPoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserPoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userPoint.Deserialize(value["UserPoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userPointHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void User::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_userPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userPoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

}


string User::GetUserLevel() const
{
    return m_userLevel;
}

void User::SetUserLevel(const string& _userLevel)
{
    m_userLevel = _userLevel;
    m_userLevelHasBeenSet = true;
}

bool User::UserLevelHasBeenSet() const
{
    return m_userLevelHasBeenSet;
}

CreditPoint User::GetUserPoint() const
{
    return m_userPoint;
}

void User::SetUserPoint(const CreditPoint& _userPoint)
{
    m_userPoint = _userPoint;
    m_userPointHasBeenSet = true;
}

bool User::UserPointHasBeenSet() const
{
    return m_userPointHasBeenSet;
}

string User::GetUserType() const
{
    return m_userType;
}

void User::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool User::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

