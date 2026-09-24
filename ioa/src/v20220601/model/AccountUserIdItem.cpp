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

#include <tencentcloud/ioa/v20220601/model/AccountUserIdItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

AccountUserIdItem::AccountUserIdItem() :
    m_menuIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome AccountUserIdItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MenuId") && !value["MenuId"].IsNull())
    {
        if (!value["MenuId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountUserIdItem.MenuId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_menuId = value["MenuId"].GetUint64();
        m_menuIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountUserIdItem.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountUserIdItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_menuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_menuId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AccountUserIdItem::GetMenuId() const
{
    return m_menuId;
}

void AccountUserIdItem::SetMenuId(const uint64_t& _menuId)
{
    m_menuId = _menuId;
    m_menuIdHasBeenSet = true;
}

bool AccountUserIdItem::MenuIdHasBeenSet() const
{
    return m_menuIdHasBeenSet;
}

string AccountUserIdItem::GetUserId() const
{
    return m_userId;
}

void AccountUserIdItem::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AccountUserIdItem::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

