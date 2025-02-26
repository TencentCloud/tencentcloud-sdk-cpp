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

#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetListRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DescribeKnowledgeDocumentSetListRsp::DescribeKnowledgeDocumentSetListRsp() :
    m_documentSetsHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKnowledgeDocumentSetListRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocumentSets") && !value["DocumentSets"].IsNull())
    {
        if (!value["DocumentSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeKnowledgeDocumentSetListRsp.DocumentSets` is not array type"));

        const rapidjson::Value &tmpValue = value["DocumentSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QureyKnowledgeDocumentSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_documentSets.push_back(item);
        }
        m_documentSetsHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKnowledgeDocumentSetListRsp.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeKnowledgeDocumentSetListRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_documentSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_documentSets.begin(); itr != m_documentSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


vector<QureyKnowledgeDocumentSet> DescribeKnowledgeDocumentSetListRsp::GetDocumentSets() const
{
    return m_documentSets;
}

void DescribeKnowledgeDocumentSetListRsp::SetDocumentSets(const vector<QureyKnowledgeDocumentSet>& _documentSets)
{
    m_documentSets = _documentSets;
    m_documentSetsHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetListRsp::DocumentSetsHasBeenSet() const
{
    return m_documentSetsHasBeenSet;
}

uint64_t DescribeKnowledgeDocumentSetListRsp::GetCount() const
{
    return m_count;
}

void DescribeKnowledgeDocumentSetListRsp::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetListRsp::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

