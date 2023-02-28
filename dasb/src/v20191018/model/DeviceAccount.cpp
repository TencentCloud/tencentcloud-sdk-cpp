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

#include <tencentcloud/dasb/v20191018/model/DeviceAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

DeviceAccount::DeviceAccount() :
    m_idHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_boundPasswordHasBeenSet(false),
    m_boundPrivateKeyHasBeenSet(false)
{
}

CoreInternalOutcome DeviceAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceAccount.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceAccount.DeviceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = value["DeviceId"].GetUint64();
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceAccount.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("BoundPassword") && !value["BoundPassword"].IsNull())
    {
        if (!value["BoundPassword"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceAccount.BoundPassword` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_boundPassword = value["BoundPassword"].GetBool();
        m_boundPasswordHasBeenSet = true;
    }

    if (value.HasMember("BoundPrivateKey") && !value["BoundPrivateKey"].IsNull())
    {
        if (!value["BoundPrivateKey"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceAccount.BoundPrivateKey` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_boundPrivateKey = value["BoundPrivateKey"].GetBool();
        m_boundPrivateKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceId, allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_boundPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundPassword, allocator);
    }

    if (m_boundPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundPrivateKey, allocator);
    }

}


uint64_t DeviceAccount::GetId() const
{
    return m_id;
}

void DeviceAccount::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeviceAccount::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t DeviceAccount::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceAccount::SetDeviceId(const uint64_t& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceAccount::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DeviceAccount::GetAccount() const
{
    return m_account;
}

void DeviceAccount::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DeviceAccount::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

bool DeviceAccount::GetBoundPassword() const
{
    return m_boundPassword;
}

void DeviceAccount::SetBoundPassword(const bool& _boundPassword)
{
    m_boundPassword = _boundPassword;
    m_boundPasswordHasBeenSet = true;
}

bool DeviceAccount::BoundPasswordHasBeenSet() const
{
    return m_boundPasswordHasBeenSet;
}

bool DeviceAccount::GetBoundPrivateKey() const
{
    return m_boundPrivateKey;
}

void DeviceAccount::SetBoundPrivateKey(const bool& _boundPrivateKey)
{
    m_boundPrivateKey = _boundPrivateKey;
    m_boundPrivateKeyHasBeenSet = true;
}

bool DeviceAccount::BoundPrivateKeyHasBeenSet() const
{
    return m_boundPrivateKeyHasBeenSet;
}

