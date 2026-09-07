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

#include <tencentcloud/rce/v20260130/model/LoginEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

LoginEvent::LoginEvent() :
    m_userInfoHasBeenSet(false),
    m_userLoginNameHasBeenSet(false),
    m_loginResultHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_isPaidUserHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome LoginEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("UserLoginName") && !value["UserLoginName"].IsNull())
    {
        if (!value["UserLoginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.UserLoginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userLoginName = string(value["UserLoginName"].GetString());
        m_userLoginNameHasBeenSet = true;
    }

    if (value.HasMember("LoginResult") && !value["LoginResult"].IsNull())
    {
        if (!value["LoginResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.LoginResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginResult.Deserialize(value["LoginResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginResultHasBeenSet = true;
    }

    if (value.HasMember("RegisterTime") && !value["RegisterTime"].IsNull())
    {
        if (!value["RegisterTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.RegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerTime = string(value["RegisterTime"].GetString());
        m_registerTimeHasBeenSet = true;
    }

    if (value.HasMember("IsPaidUser") && !value["IsPaidUser"].IsNull())
    {
        if (!value["IsPaidUser"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.IsPaidUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPaidUser = value["IsPaidUser"].GetBool();
        m_isPaidUserHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userLoginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserLoginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userLoginName.c_str(), allocator).Move(), allocator);
    }

    if (m_loginResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_registerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isPaidUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPaidUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPaidUser, allocator);
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


User LoginEvent::GetUserInfo() const
{
    return m_userInfo;
}

void LoginEvent::SetUserInfo(const User& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool LoginEvent::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

string LoginEvent::GetUserLoginName() const
{
    return m_userLoginName;
}

void LoginEvent::SetUserLoginName(const string& _userLoginName)
{
    m_userLoginName = _userLoginName;
    m_userLoginNameHasBeenSet = true;
}

bool LoginEvent::UserLoginNameHasBeenSet() const
{
    return m_userLoginNameHasBeenSet;
}

Result LoginEvent::GetLoginResult() const
{
    return m_loginResult;
}

void LoginEvent::SetLoginResult(const Result& _loginResult)
{
    m_loginResult = _loginResult;
    m_loginResultHasBeenSet = true;
}

bool LoginEvent::LoginResultHasBeenSet() const
{
    return m_loginResultHasBeenSet;
}

string LoginEvent::GetRegisterTime() const
{
    return m_registerTime;
}

void LoginEvent::SetRegisterTime(const string& _registerTime)
{
    m_registerTime = _registerTime;
    m_registerTimeHasBeenSet = true;
}

bool LoginEvent::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

bool LoginEvent::GetIsPaidUser() const
{
    return m_isPaidUser;
}

void LoginEvent::SetIsPaidUser(const bool& _isPaidUser)
{
    m_isPaidUser = _isPaidUser;
    m_isPaidUserHasBeenSet = true;
}

bool LoginEvent::IsPaidUserHasBeenSet() const
{
    return m_isPaidUserHasBeenSet;
}

vector<Cust> LoginEvent::GetCust() const
{
    return m_cust;
}

void LoginEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool LoginEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

