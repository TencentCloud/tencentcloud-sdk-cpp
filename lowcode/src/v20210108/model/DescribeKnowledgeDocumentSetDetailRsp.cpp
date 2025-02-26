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

#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DescribeKnowledgeDocumentSetDetailRsp::DescribeKnowledgeDocumentSetDetailRsp() :
    m_countHasBeenSet(false),
    m_documentSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKnowledgeDocumentSetDetailRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKnowledgeDocumentSetDetailRsp.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("DocumentSet") && !value["DocumentSet"].IsNull())
    {
        if (!value["DocumentSet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKnowledgeDocumentSetDetailRsp.DocumentSet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_documentSet.Deserialize(value["DocumentSet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_documentSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeKnowledgeDocumentSetDetailRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_documentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_documentSet.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t DescribeKnowledgeDocumentSetDetailRsp::GetCount() const
{
    return m_count;
}

void DescribeKnowledgeDocumentSetDetailRsp::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetDetailRsp::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

KnowledgeDocumentSet DescribeKnowledgeDocumentSetDetailRsp::GetDocumentSet() const
{
    return m_documentSet;
}

void DescribeKnowledgeDocumentSetDetailRsp::SetDocumentSet(const KnowledgeDocumentSet& _documentSet)
{
    m_documentSet = _documentSet;
    m_documentSetHasBeenSet = true;
}

bool DescribeKnowledgeDocumentSetDetailRsp::DocumentSetHasBeenSet() const
{
    return m_documentSetHasBeenSet;
}

