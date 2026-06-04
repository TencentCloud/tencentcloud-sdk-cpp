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

#include <tencentcloud/adp/v20260520/model/PluginUserState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginUserState::PluginUserState() :
    m_isFavoriteHasBeenSet(false),
    m_isInWhiteListHasBeenSet(false),
    m_whiteListTypeHasBeenSet(false)
{
}

CoreInternalOutcome PluginUserState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsFavorite") && !value["IsFavorite"].IsNull())
    {
        if (!value["IsFavorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginUserState.IsFavorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFavorite = value["IsFavorite"].GetBool();
        m_isFavoriteHasBeenSet = true;
    }

    if (value.HasMember("IsInWhiteList") && !value["IsInWhiteList"].IsNull())
    {
        if (!value["IsInWhiteList"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginUserState.IsInWhiteList` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isInWhiteList = value["IsInWhiteList"].GetBool();
        m_isInWhiteListHasBeenSet = true;
    }

    if (value.HasMember("WhiteListType") && !value["WhiteListType"].IsNull())
    {
        if (!value["WhiteListType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginUserState.WhiteListType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteListType = value["WhiteListType"].GetInt64();
        m_whiteListTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginUserState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isFavoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFavorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFavorite, allocator);
    }

    if (m_isInWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInWhiteList, allocator);
    }

    if (m_whiteListTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteListType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteListType, allocator);
    }

}


bool PluginUserState::GetIsFavorite() const
{
    return m_isFavorite;
}

void PluginUserState::SetIsFavorite(const bool& _isFavorite)
{
    m_isFavorite = _isFavorite;
    m_isFavoriteHasBeenSet = true;
}

bool PluginUserState::IsFavoriteHasBeenSet() const
{
    return m_isFavoriteHasBeenSet;
}

bool PluginUserState::GetIsInWhiteList() const
{
    return m_isInWhiteList;
}

void PluginUserState::SetIsInWhiteList(const bool& _isInWhiteList)
{
    m_isInWhiteList = _isInWhiteList;
    m_isInWhiteListHasBeenSet = true;
}

bool PluginUserState::IsInWhiteListHasBeenSet() const
{
    return m_isInWhiteListHasBeenSet;
}

int64_t PluginUserState::GetWhiteListType() const
{
    return m_whiteListType;
}

void PluginUserState::SetWhiteListType(const int64_t& _whiteListType)
{
    m_whiteListType = _whiteListType;
    m_whiteListTypeHasBeenSet = true;
}

bool PluginUserState::WhiteListTypeHasBeenSet() const
{
    return m_whiteListTypeHasBeenSet;
}

