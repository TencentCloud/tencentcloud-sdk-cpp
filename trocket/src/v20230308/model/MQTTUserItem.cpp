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

#include <tencentcloud/trocket/v20230308/model/MQTTUserItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

MQTTUserItem::MQTTUserItem() :
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_permReadHasBeenSet(false),
    m_permWriteHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome MQTTUserItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTUserItem.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTUserItem.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("PermRead") && !value["PermRead"].IsNull())
    {
        if (!value["PermRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTUserItem.PermRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permRead = value["PermRead"].GetBool();
        m_permReadHasBeenSet = true;
    }

    if (value.HasMember("PermWrite") && !value["PermWrite"].IsNull())
    {
        if (!value["PermWrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTUserItem.PermWrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permWrite = value["PermWrite"].GetBool();
        m_permWriteHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTUserItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTUserItem.CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = value["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTUserItem.ModifiedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = value["ModifiedTime"].GetInt64();
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQTTUserItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_permReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permRead, allocator);
    }

    if (m_permWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permWrite, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifiedTime, allocator);
    }

}


string MQTTUserItem::GetUsername() const
{
    return m_username;
}

void MQTTUserItem::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool MQTTUserItem::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string MQTTUserItem::GetPassword() const
{
    return m_password;
}

void MQTTUserItem::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool MQTTUserItem::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

bool MQTTUserItem::GetPermRead() const
{
    return m_permRead;
}

void MQTTUserItem::SetPermRead(const bool& _permRead)
{
    m_permRead = _permRead;
    m_permReadHasBeenSet = true;
}

bool MQTTUserItem::PermReadHasBeenSet() const
{
    return m_permReadHasBeenSet;
}

bool MQTTUserItem::GetPermWrite() const
{
    return m_permWrite;
}

void MQTTUserItem::SetPermWrite(const bool& _permWrite)
{
    m_permWrite = _permWrite;
    m_permWriteHasBeenSet = true;
}

bool MQTTUserItem::PermWriteHasBeenSet() const
{
    return m_permWriteHasBeenSet;
}

string MQTTUserItem::GetRemark() const
{
    return m_remark;
}

void MQTTUserItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MQTTUserItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t MQTTUserItem::GetCreatedTime() const
{
    return m_createdTime;
}

void MQTTUserItem::SetCreatedTime(const int64_t& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool MQTTUserItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t MQTTUserItem::GetModifiedTime() const
{
    return m_modifiedTime;
}

void MQTTUserItem::SetModifiedTime(const int64_t& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool MQTTUserItem::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

