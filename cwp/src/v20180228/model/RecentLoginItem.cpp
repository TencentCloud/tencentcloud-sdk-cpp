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

#include <tencentcloud/cwp/v20180228/model/RecentLoginItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RecentLoginItem::RecentLoginItem() :
    m_loginTimeHasBeenSet(false),
    m_loginTypeHasBeenSet(false),
    m_loginTypeDescHasBeenSet(false)
{
}

CoreInternalOutcome RecentLoginItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentLoginItem.LoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = string(value["LoginTime"].GetString());
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("LoginType") && !value["LoginType"].IsNull())
    {
        if (!value["LoginType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecentLoginItem.LoginType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginType = value["LoginType"].GetInt64();
        m_loginTypeHasBeenSet = true;
    }

    if (value.HasMember("LoginTypeDesc") && !value["LoginTypeDesc"].IsNull())
    {
        if (!value["LoginTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentLoginItem.LoginTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTypeDesc = string(value["LoginTypeDesc"].GetString());
        m_loginTypeDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecentLoginItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginType, allocator);
    }

    if (m_loginTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginTypeDesc.c_str(), allocator).Move(), allocator);
    }

}


string RecentLoginItem::GetLoginTime() const
{
    return m_loginTime;
}

void RecentLoginItem::SetLoginTime(const string& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool RecentLoginItem::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

int64_t RecentLoginItem::GetLoginType() const
{
    return m_loginType;
}

void RecentLoginItem::SetLoginType(const int64_t& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool RecentLoginItem::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

string RecentLoginItem::GetLoginTypeDesc() const
{
    return m_loginTypeDesc;
}

void RecentLoginItem::SetLoginTypeDesc(const string& _loginTypeDesc)
{
    m_loginTypeDesc = _loginTypeDesc;
    m_loginTypeDescHasBeenSet = true;
}

bool RecentLoginItem::LoginTypeDescHasBeenSet() const
{
    return m_loginTypeDescHasBeenSet;
}

