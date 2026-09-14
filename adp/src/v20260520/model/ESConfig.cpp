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

#include <tencentcloud/adp/v20260520/model/ESConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ESConfig::ESConfig() :
    m_canModifyHasBeenSet(false),
    m_encryptedPasswordHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome ESConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanModify") && !value["CanModify"].IsNull())
    {
        if (!value["CanModify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ESConfig.CanModify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canModify = value["CanModify"].GetBool();
        m_canModifyHasBeenSet = true;
    }

    if (value.HasMember("EncryptedPassword") && !value["EncryptedPassword"].IsNull())
    {
        if (!value["EncryptedPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESConfig.EncryptedPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptedPassword = string(value["EncryptedPassword"].GetString());
        m_encryptedPasswordHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESConfig.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESConfig.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESConfig.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ESConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanModify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canModify, allocator);
    }

    if (m_encryptedPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptedPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


bool ESConfig::GetCanModify() const
{
    return m_canModify;
}

void ESConfig::SetCanModify(const bool& _canModify)
{
    m_canModify = _canModify;
    m_canModifyHasBeenSet = true;
}

bool ESConfig::CanModifyHasBeenSet() const
{
    return m_canModifyHasBeenSet;
}

string ESConfig::GetEncryptedPassword() const
{
    return m_encryptedPassword;
}

void ESConfig::SetEncryptedPassword(const string& _encryptedPassword)
{
    m_encryptedPassword = _encryptedPassword;
    m_encryptedPasswordHasBeenSet = true;
}

bool ESConfig::EncryptedPasswordHasBeenSet() const
{
    return m_encryptedPasswordHasBeenSet;
}

string ESConfig::GetInstanceId() const
{
    return m_instanceId;
}

void ESConfig::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ESConfig::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ESConfig::GetStorageType() const
{
    return m_storageType;
}

void ESConfig::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ESConfig::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string ESConfig::GetUserName() const
{
    return m_userName;
}

void ESConfig::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ESConfig::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

