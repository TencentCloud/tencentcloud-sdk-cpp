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

#include <tencentcloud/adp/v20260520/model/CorpShareConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CorpShareConfig::CorpShareConfig() :
    m_enabledHasBeenSet(false),
    m_shareScopeHasBeenSet(false),
    m_tagIdListHasBeenSet(false)
{
}

CoreInternalOutcome CorpShareConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CorpShareConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("ShareScope") && !value["ShareScope"].IsNull())
    {
        if (!value["ShareScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CorpShareConfig.ShareScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareScope = value["ShareScope"].GetInt64();
        m_shareScopeHasBeenSet = true;
    }

    if (value.HasMember("TagIdList") && !value["TagIdList"].IsNull())
    {
        if (!value["TagIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CorpShareConfig.TagIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIdList.push_back((*itr).GetString());
        }
        m_tagIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CorpShareConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_shareScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareScope, allocator);
    }

    if (m_tagIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIdList.begin(); itr != m_tagIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool CorpShareConfig::GetEnabled() const
{
    return m_enabled;
}

void CorpShareConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CorpShareConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t CorpShareConfig::GetShareScope() const
{
    return m_shareScope;
}

void CorpShareConfig::SetShareScope(const int64_t& _shareScope)
{
    m_shareScope = _shareScope;
    m_shareScopeHasBeenSet = true;
}

bool CorpShareConfig::ShareScopeHasBeenSet() const
{
    return m_shareScopeHasBeenSet;
}

vector<string> CorpShareConfig::GetTagIdList() const
{
    return m_tagIdList;
}

void CorpShareConfig::SetTagIdList(const vector<string>& _tagIdList)
{
    m_tagIdList = _tagIdList;
    m_tagIdListHasBeenSet = true;
}

bool CorpShareConfig::TagIdListHasBeenSet() const
{
    return m_tagIdListHasBeenSet;
}

