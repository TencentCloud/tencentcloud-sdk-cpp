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

#include <tencentcloud/ioa/v20220601/model/BindVirtualAccountResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

BindVirtualAccountResultData::BindVirtualAccountResultData() :
    m_accountIdHasBeenSet(false),
    m_menuIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome BindVirtualAccountResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindVirtualAccountResultData.AccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = value["AccountId"].GetInt64();
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("MenuId") && !value["MenuId"].IsNull())
    {
        if (!value["MenuId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BindVirtualAccountResultData.MenuId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_menuId = value["MenuId"].GetUint64();
        m_menuIdHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindVirtualAccountResultData.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindVirtualAccountResultData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindVirtualAccountResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountId, allocator);
    }

    if (m_menuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_menuId, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


int64_t BindVirtualAccountResultData::GetAccountId() const
{
    return m_accountId;
}

void BindVirtualAccountResultData::SetAccountId(const int64_t& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool BindVirtualAccountResultData::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

uint64_t BindVirtualAccountResultData::GetMenuId() const
{
    return m_menuId;
}

void BindVirtualAccountResultData::SetMenuId(const uint64_t& _menuId)
{
    m_menuId = _menuId;
    m_menuIdHasBeenSet = true;
}

bool BindVirtualAccountResultData::MenuIdHasBeenSet() const
{
    return m_menuIdHasBeenSet;
}

string BindVirtualAccountResultData::GetReason() const
{
    return m_reason;
}

void BindVirtualAccountResultData::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool BindVirtualAccountResultData::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string BindVirtualAccountResultData::GetUserId() const
{
    return m_userId;
}

void BindVirtualAccountResultData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool BindVirtualAccountResultData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

