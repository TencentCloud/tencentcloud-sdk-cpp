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

#include <tencentcloud/csip/v20221121/model/AbTestUserItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AbTestUserItem::AbTestUserItem() :
    m_appIdHasBeenSet(false),
    m_isAbTestUserHasBeenSet(false)
{
}

CoreInternalOutcome AbTestUserItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbTestUserItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("IsAbTestUser") && !value["IsAbTestUser"].IsNull())
    {
        if (!value["IsAbTestUser"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbTestUserItem.IsAbTestUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAbTestUser = value["IsAbTestUser"].GetBool();
        m_isAbTestUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbTestUserItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_isAbTestUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAbTestUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAbTestUser, allocator);
    }

}


uint64_t AbTestUserItem::GetAppId() const
{
    return m_appId;
}

void AbTestUserItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AbTestUserItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

bool AbTestUserItem::GetIsAbTestUser() const
{
    return m_isAbTestUser;
}

void AbTestUserItem::SetIsAbTestUser(const bool& _isAbTestUser)
{
    m_isAbTestUser = _isAbTestUser;
    m_isAbTestUserHasBeenSet = true;
}

bool AbTestUserItem::IsAbTestUserHasBeenSet() const
{
    return m_isAbTestUserHasBeenSet;
}

