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

#include <tencentcloud/adp/v20260520/model/AppealingStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppealingStatus::AppealingStatus() :
    m_avatarInAppealHasBeenSet(false),
    m_fallbackReplyInAppealHasBeenSet(false),
    m_greetingInAppealHasBeenSet(false),
    m_nameInAppealHasBeenSet(false),
    m_roleInAppealHasBeenSet(false)
{
}

CoreInternalOutcome AppealingStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AvatarInAppeal") && !value["AvatarInAppeal"].IsNull())
    {
        if (!value["AvatarInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppealingStatus.AvatarInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_avatarInAppeal = value["AvatarInAppeal"].GetBool();
        m_avatarInAppealHasBeenSet = true;
    }

    if (value.HasMember("FallbackReplyInAppeal") && !value["FallbackReplyInAppeal"].IsNull())
    {
        if (!value["FallbackReplyInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppealingStatus.FallbackReplyInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fallbackReplyInAppeal = value["FallbackReplyInAppeal"].GetBool();
        m_fallbackReplyInAppealHasBeenSet = true;
    }

    if (value.HasMember("GreetingInAppeal") && !value["GreetingInAppeal"].IsNull())
    {
        if (!value["GreetingInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppealingStatus.GreetingInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_greetingInAppeal = value["GreetingInAppeal"].GetBool();
        m_greetingInAppealHasBeenSet = true;
    }

    if (value.HasMember("NameInAppeal") && !value["NameInAppeal"].IsNull())
    {
        if (!value["NameInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppealingStatus.NameInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nameInAppeal = value["NameInAppeal"].GetBool();
        m_nameInAppealHasBeenSet = true;
    }

    if (value.HasMember("RoleInAppeal") && !value["RoleInAppeal"].IsNull())
    {
        if (!value["RoleInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppealingStatus.RoleInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_roleInAppeal = value["RoleInAppeal"].GetBool();
        m_roleInAppealHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppealingStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_avatarInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avatarInAppeal, allocator);
    }

    if (m_fallbackReplyInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackReplyInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fallbackReplyInAppeal, allocator);
    }

    if (m_greetingInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GreetingInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_greetingInAppeal, allocator);
    }

    if (m_nameInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameInAppeal, allocator);
    }

    if (m_roleInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleInAppeal, allocator);
    }

}


bool AppealingStatus::GetAvatarInAppeal() const
{
    return m_avatarInAppeal;
}

void AppealingStatus::SetAvatarInAppeal(const bool& _avatarInAppeal)
{
    m_avatarInAppeal = _avatarInAppeal;
    m_avatarInAppealHasBeenSet = true;
}

bool AppealingStatus::AvatarInAppealHasBeenSet() const
{
    return m_avatarInAppealHasBeenSet;
}

bool AppealingStatus::GetFallbackReplyInAppeal() const
{
    return m_fallbackReplyInAppeal;
}

void AppealingStatus::SetFallbackReplyInAppeal(const bool& _fallbackReplyInAppeal)
{
    m_fallbackReplyInAppeal = _fallbackReplyInAppeal;
    m_fallbackReplyInAppealHasBeenSet = true;
}

bool AppealingStatus::FallbackReplyInAppealHasBeenSet() const
{
    return m_fallbackReplyInAppealHasBeenSet;
}

bool AppealingStatus::GetGreetingInAppeal() const
{
    return m_greetingInAppeal;
}

void AppealingStatus::SetGreetingInAppeal(const bool& _greetingInAppeal)
{
    m_greetingInAppeal = _greetingInAppeal;
    m_greetingInAppealHasBeenSet = true;
}

bool AppealingStatus::GreetingInAppealHasBeenSet() const
{
    return m_greetingInAppealHasBeenSet;
}

bool AppealingStatus::GetNameInAppeal() const
{
    return m_nameInAppeal;
}

void AppealingStatus::SetNameInAppeal(const bool& _nameInAppeal)
{
    m_nameInAppeal = _nameInAppeal;
    m_nameInAppealHasBeenSet = true;
}

bool AppealingStatus::NameInAppealHasBeenSet() const
{
    return m_nameInAppealHasBeenSet;
}

bool AppealingStatus::GetRoleInAppeal() const
{
    return m_roleInAppeal;
}

void AppealingStatus::SetRoleInAppeal(const bool& _roleInAppeal)
{
    m_roleInAppeal = _roleInAppeal;
    m_roleInAppealHasBeenSet = true;
}

bool AppealingStatus::RoleInAppealHasBeenSet() const
{
    return m_roleInAppealHasBeenSet;
}

