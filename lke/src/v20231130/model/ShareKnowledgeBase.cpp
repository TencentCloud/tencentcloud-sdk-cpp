/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/lke/v20231130/model/ShareKnowledgeBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ShareKnowledgeBase::ShareKnowledgeBase() :
    m_knowledgeBizIdHasBeenSet(false),
    m_searchRangeHasBeenSet(false)
{
}

CoreInternalOutcome ShareKnowledgeBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeBizId") && !value["KnowledgeBizId"].IsNull())
    {
        if (!value["KnowledgeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.KnowledgeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBizId = string(value["KnowledgeBizId"].GetString());
        m_knowledgeBizIdHasBeenSet = true;
    }

    if (value.HasMember("SearchRange") && !value["SearchRange"].IsNull())
    {
        if (!value["SearchRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShareKnowledgeBase.SearchRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchRange.Deserialize(value["SearchRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareKnowledgeBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchRange.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ShareKnowledgeBase::GetKnowledgeBizId() const
{
    return m_knowledgeBizId;
}

void ShareKnowledgeBase::SetKnowledgeBizId(const string& _knowledgeBizId)
{
    m_knowledgeBizId = _knowledgeBizId;
    m_knowledgeBizIdHasBeenSet = true;
}

bool ShareKnowledgeBase::KnowledgeBizIdHasBeenSet() const
{
    return m_knowledgeBizIdHasBeenSet;
}

SearchRange ShareKnowledgeBase::GetSearchRange() const
{
    return m_searchRange;
}

void ShareKnowledgeBase::SetSearchRange(const SearchRange& _searchRange)
{
    m_searchRange = _searchRange;
    m_searchRangeHasBeenSet = true;
}

bool ShareKnowledgeBase::SearchRangeHasBeenSet() const
{
    return m_searchRangeHasBeenSet;
}

