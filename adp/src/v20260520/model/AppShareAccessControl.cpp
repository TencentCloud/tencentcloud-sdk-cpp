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

#include <tencentcloud/adp/v20260520/model/AppShareAccessControl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppShareAccessControl::AppShareAccessControl() :
    m_accessTypeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_whitelistHasBeenSet(false)
{
}

CoreInternalOutcome AppShareAccessControl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppShareAccessControl.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppShareAccessControl.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Whitelist") && !value["Whitelist"].IsNull())
    {
        if (!value["Whitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppShareAccessControl.Whitelist` is not array type"));

        const rapidjson::Value &tmpValue = value["Whitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppShareWhitelistItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_whitelist.push_back(item);
        }
        m_whitelistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppShareAccessControl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_whitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_whitelist.begin(); itr != m_whitelist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AppShareAccessControl::GetAccessType() const
{
    return m_accessType;
}

void AppShareAccessControl::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool AppShareAccessControl::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

bool AppShareAccessControl::GetEnabled() const
{
    return m_enabled;
}

void AppShareAccessControl::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AppShareAccessControl::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<AppShareWhitelistItem> AppShareAccessControl::GetWhitelist() const
{
    return m_whitelist;
}

void AppShareAccessControl::SetWhitelist(const vector<AppShareWhitelistItem>& _whitelist)
{
    m_whitelist = _whitelist;
    m_whitelistHasBeenSet = true;
}

bool AppShareAccessControl::WhitelistHasBeenSet() const
{
    return m_whitelistHasBeenSet;
}

