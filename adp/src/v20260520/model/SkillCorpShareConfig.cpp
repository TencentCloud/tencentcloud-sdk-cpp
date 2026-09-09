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

#include <tencentcloud/adp/v20260520/model/SkillCorpShareConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillCorpShareConfig::SkillCorpShareConfig() :
    m_shareScopeHasBeenSet(false),
    m_shareScopeListHasBeenSet(false)
{
}

CoreInternalOutcome SkillCorpShareConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShareScope") && !value["ShareScope"].IsNull())
    {
        if (!value["ShareScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillCorpShareConfig.ShareScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareScope = value["ShareScope"].GetInt64();
        m_shareScopeHasBeenSet = true;
    }

    if (value.HasMember("ShareScopeList") && !value["ShareScopeList"].IsNull())
    {
        if (!value["ShareScopeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillCorpShareConfig.ShareScopeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ShareScopeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Identity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shareScopeList.push_back(item);
        }
        m_shareScopeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillCorpShareConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shareScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareScope, allocator);
    }

    if (m_shareScopeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareScopeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shareScopeList.begin(); itr != m_shareScopeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SkillCorpShareConfig::GetShareScope() const
{
    return m_shareScope;
}

void SkillCorpShareConfig::SetShareScope(const int64_t& _shareScope)
{
    m_shareScope = _shareScope;
    m_shareScopeHasBeenSet = true;
}

bool SkillCorpShareConfig::ShareScopeHasBeenSet() const
{
    return m_shareScopeHasBeenSet;
}

vector<Identity> SkillCorpShareConfig::GetShareScopeList() const
{
    return m_shareScopeList;
}

void SkillCorpShareConfig::SetShareScopeList(const vector<Identity>& _shareScopeList)
{
    m_shareScopeList = _shareScopeList;
    m_shareScopeListHasBeenSet = true;
}

bool SkillCorpShareConfig::ShareScopeListHasBeenSet() const
{
    return m_shareScopeListHasBeenSet;
}

