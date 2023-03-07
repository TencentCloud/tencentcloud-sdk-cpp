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

#include <tencentcloud/cwp/v20180228/model/BaselineWeakPassword.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineWeakPassword::BaselineWeakPassword() :
    m_passwordIdHasBeenSet(false),
    m_weakPasswordHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome BaselineWeakPassword::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PasswordId") && !value["PasswordId"].IsNull())
    {
        if (!value["PasswordId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineWeakPassword.PasswordId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordId = value["PasswordId"].GetInt64();
        m_passwordIdHasBeenSet = true;
    }

    if (value.HasMember("WeakPassword") && !value["WeakPassword"].IsNull())
    {
        if (!value["WeakPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineWeakPassword.WeakPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weakPassword = string(value["WeakPassword"].GetString());
        m_weakPasswordHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineWeakPassword.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineWeakPassword.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineWeakPassword::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_passwordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordId, allocator);
    }

    if (m_weakPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weakPassword.c_str(), allocator).Move(), allocator);
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

}


int64_t BaselineWeakPassword::GetPasswordId() const
{
    return m_passwordId;
}

void BaselineWeakPassword::SetPasswordId(const int64_t& _passwordId)
{
    m_passwordId = _passwordId;
    m_passwordIdHasBeenSet = true;
}

bool BaselineWeakPassword::PasswordIdHasBeenSet() const
{
    return m_passwordIdHasBeenSet;
}

string BaselineWeakPassword::GetWeakPassword() const
{
    return m_weakPassword;
}

void BaselineWeakPassword::SetWeakPassword(const string& _weakPassword)
{
    m_weakPassword = _weakPassword;
    m_weakPasswordHasBeenSet = true;
}

bool BaselineWeakPassword::WeakPasswordHasBeenSet() const
{
    return m_weakPasswordHasBeenSet;
}

string BaselineWeakPassword::GetCreateTime() const
{
    return m_createTime;
}

void BaselineWeakPassword::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaselineWeakPassword::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaselineWeakPassword::GetModifyTime() const
{
    return m_modifyTime;
}

void BaselineWeakPassword::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BaselineWeakPassword::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

