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

#include <tencentcloud/adp/v20260520/model/KnowledgeScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KnowledgeScope::KnowledgeScope() :
    m_effectiveDomainHasBeenSet(false),
    m_labelRefListHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EffectiveDomain") && !value["EffectiveDomain"].IsNull())
    {
        if (!value["EffectiveDomain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeScope.EffectiveDomain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveDomain = value["EffectiveDomain"].GetInt64();
        m_effectiveDomainHasBeenSet = true;
    }

    if (value.HasMember("LabelRefList") && !value["LabelRefList"].IsNull())
    {
        if (!value["LabelRefList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeScope.LabelRefList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelRefList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelRef item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelRefList.push_back(item);
        }
        m_labelRefListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_effectiveDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveDomain, allocator);
    }

    if (m_labelRefListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelRefList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelRefList.begin(); itr != m_labelRefList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t KnowledgeScope::GetEffectiveDomain() const
{
    return m_effectiveDomain;
}

void KnowledgeScope::SetEffectiveDomain(const int64_t& _effectiveDomain)
{
    m_effectiveDomain = _effectiveDomain;
    m_effectiveDomainHasBeenSet = true;
}

bool KnowledgeScope::EffectiveDomainHasBeenSet() const
{
    return m_effectiveDomainHasBeenSet;
}

vector<LabelRef> KnowledgeScope::GetLabelRefList() const
{
    return m_labelRefList;
}

void KnowledgeScope::SetLabelRefList(const vector<LabelRef>& _labelRefList)
{
    m_labelRefList = _labelRefList;
    m_labelRefListHasBeenSet = true;
}

bool KnowledgeScope::LabelRefListHasBeenSet() const
{
    return m_labelRefListHasBeenSet;
}

