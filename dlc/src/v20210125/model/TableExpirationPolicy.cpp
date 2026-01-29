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

#include <tencentcloud/dlc/v20210125/model/TableExpirationPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TableExpirationPolicy::TableExpirationPolicy() :
    m_enabledHasBeenSet(false),
    m_expirationHasBeenSet(false)
{
}

CoreInternalOutcome TableExpirationPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableExpirationPolicy.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Expiration") && !value["Expiration"].IsNull())
    {
        if (!value["Expiration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableExpirationPolicy.Expiration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiration = value["Expiration"].GetUint64();
        m_expirationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableExpirationPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiration, allocator);
    }

}


bool TableExpirationPolicy::GetEnabled() const
{
    return m_enabled;
}

void TableExpirationPolicy::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TableExpirationPolicy::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t TableExpirationPolicy::GetExpiration() const
{
    return m_expiration;
}

void TableExpirationPolicy::SetExpiration(const uint64_t& _expiration)
{
    m_expiration = _expiration;
    m_expirationHasBeenSet = true;
}

bool TableExpirationPolicy::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

