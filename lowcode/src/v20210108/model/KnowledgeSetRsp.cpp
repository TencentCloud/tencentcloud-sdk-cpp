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

#include <tencentcloud/lowcode/v20210108/model/KnowledgeSetRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

KnowledgeSetRsp::KnowledgeSetRsp() :
    m_totalHasBeenSet(false),
    m_knowledgeSetsHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeSetRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSetRsp.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeSets") && !value["KnowledgeSets"].IsNull())
    {
        if (!value["KnowledgeSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeSetRsp.KnowledgeSets` is not array type"));

        const rapidjson::Value &tmpValue = value["KnowledgeSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KnowledgeSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_knowledgeSets.push_back(item);
        }
        m_knowledgeSetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeSetRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_knowledgeSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_knowledgeSets.begin(); itr != m_knowledgeSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t KnowledgeSetRsp::GetTotal() const
{
    return m_total;
}

void KnowledgeSetRsp::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool KnowledgeSetRsp::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<KnowledgeSet> KnowledgeSetRsp::GetKnowledgeSets() const
{
    return m_knowledgeSets;
}

void KnowledgeSetRsp::SetKnowledgeSets(const vector<KnowledgeSet>& _knowledgeSets)
{
    m_knowledgeSets = _knowledgeSets;
    m_knowledgeSetsHasBeenSet = true;
}

bool KnowledgeSetRsp::KnowledgeSetsHasBeenSet() const
{
    return m_knowledgeSetsHasBeenSet;
}

