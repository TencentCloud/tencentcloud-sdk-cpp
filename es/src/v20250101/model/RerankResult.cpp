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

#include <tencentcloud/es/v20250101/model/RerankResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

RerankResult::RerankResult() :
    m_indexHasBeenSet(false),
    m_relevanceScoreHasBeenSet(false),
    m_documentHasBeenSet(false)
{
}

CoreInternalOutcome RerankResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RerankResult.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("RelevanceScore") && !value["RelevanceScore"].IsNull())
    {
        if (!value["RelevanceScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RerankResult.RelevanceScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_relevanceScore = value["RelevanceScore"].GetDouble();
        m_relevanceScoreHasBeenSet = true;
    }

    if (value.HasMember("Document") && !value["Document"].IsNull())
    {
        if (!value["Document"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RerankResult.Document` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_document = string(value["Document"].GetString());
        m_documentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RerankResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_relevanceScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelevanceScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relevanceScore, allocator);
    }

    if (m_documentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Document";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_document.c_str(), allocator).Move(), allocator);
    }

}


int64_t RerankResult::GetIndex() const
{
    return m_index;
}

void RerankResult::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool RerankResult::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

double RerankResult::GetRelevanceScore() const
{
    return m_relevanceScore;
}

void RerankResult::SetRelevanceScore(const double& _relevanceScore)
{
    m_relevanceScore = _relevanceScore;
    m_relevanceScoreHasBeenSet = true;
}

bool RerankResult::RelevanceScoreHasBeenSet() const
{
    return m_relevanceScoreHasBeenSet;
}

string RerankResult::GetDocument() const
{
    return m_document;
}

void RerankResult::SetDocument(const string& _document)
{
    m_document = _document;
    m_documentHasBeenSet = true;
}

bool RerankResult::DocumentHasBeenSet() const
{
    return m_documentHasBeenSet;
}

