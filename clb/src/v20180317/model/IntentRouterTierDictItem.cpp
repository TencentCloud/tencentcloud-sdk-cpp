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

#include <tencentcloud/clb/v20180317/model/IntentRouterTierDictItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

IntentRouterTierDictItem::IntentRouterTierDictItem() :
    m_tierIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome IntentRouterTierDictItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TierId") && !value["TierId"].IsNull())
    {
        if (!value["TierId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterTierDictItem.TierId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tierId = string(value["TierId"].GetString());
        m_tierIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterTierDictItem.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentRouterTierDictItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentRouterTierDictItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tierIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TierId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tierId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string IntentRouterTierDictItem::GetTierId() const
{
    return m_tierId;
}

void IntentRouterTierDictItem::SetTierId(const string& _tierId)
{
    m_tierId = _tierId;
    m_tierIdHasBeenSet = true;
}

bool IntentRouterTierDictItem::TierIdHasBeenSet() const
{
    return m_tierIdHasBeenSet;
}

string IntentRouterTierDictItem::GetDisplayName() const
{
    return m_displayName;
}

void IntentRouterTierDictItem::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool IntentRouterTierDictItem::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string IntentRouterTierDictItem::GetDescription() const
{
    return m_description;
}

void IntentRouterTierDictItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IntentRouterTierDictItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

