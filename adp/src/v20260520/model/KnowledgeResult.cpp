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

#include <tencentcloud/adp/v20260520/model/KnowledgeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KnowledgeResult::KnowledgeResult() :
    m_confidenceHasBeenSet(false),
    m_knowledgeTypeHasBeenSet(false),
    m_recallTypeListHasBeenSet(false),
    m_resultPayloadHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_similarQuestionExtraHasBeenSet(false),
    m_snippetProfileHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeType") && !value["KnowledgeType"].IsNull())
    {
        if (!value["KnowledgeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.KnowledgeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeType = value["KnowledgeType"].GetInt64();
        m_knowledgeTypeHasBeenSet = true;
    }

    if (value.HasMember("RecallTypeList") && !value["RecallTypeList"].IsNull())
    {
        if (!value["RecallTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.RecallTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["RecallTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recallTypeList.push_back((*itr).GetInt64());
        }
        m_recallTypeListHasBeenSet = true;
    }

    if (value.HasMember("ResultPayload") && !value["ResultPayload"].IsNull())
    {
        if (!value["ResultPayload"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.ResultPayload` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resultPayload.Deserialize(value["ResultPayload"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultPayloadHasBeenSet = true;
    }

    if (value.HasMember("ResultType") && !value["ResultType"].IsNull())
    {
        if (!value["ResultType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.ResultType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = value["ResultType"].GetInt64();
        m_resultTypeHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestionExtra") && !value["SimilarQuestionExtra"].IsNull())
    {
        if (!value["SimilarQuestionExtra"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.SimilarQuestionExtra` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_similarQuestionExtra.Deserialize(value["SimilarQuestionExtra"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_similarQuestionExtraHasBeenSet = true;
    }

    if (value.HasMember("SnippetProfile") && !value["SnippetProfile"].IsNull())
    {
        if (!value["SnippetProfile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.SnippetProfile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snippetProfile.Deserialize(value["SnippetProfile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snippetProfileHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeResult.SourceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceInfo.Deserialize(value["SourceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_knowledgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_knowledgeType, allocator);
    }

    if (m_recallTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecallTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recallTypeList.begin(); itr != m_recallTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_resultPayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultPayload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resultPayload.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultType, allocator);
    }

    if (m_similarQuestionExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_similarQuestionExtra.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snippetProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnippetProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snippetProfile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


double KnowledgeResult::GetConfidence() const
{
    return m_confidence;
}

void KnowledgeResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool KnowledgeResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t KnowledgeResult::GetKnowledgeType() const
{
    return m_knowledgeType;
}

void KnowledgeResult::SetKnowledgeType(const int64_t& _knowledgeType)
{
    m_knowledgeType = _knowledgeType;
    m_knowledgeTypeHasBeenSet = true;
}

bool KnowledgeResult::KnowledgeTypeHasBeenSet() const
{
    return m_knowledgeTypeHasBeenSet;
}

vector<int64_t> KnowledgeResult::GetRecallTypeList() const
{
    return m_recallTypeList;
}

void KnowledgeResult::SetRecallTypeList(const vector<int64_t>& _recallTypeList)
{
    m_recallTypeList = _recallTypeList;
    m_recallTypeListHasBeenSet = true;
}

bool KnowledgeResult::RecallTypeListHasBeenSet() const
{
    return m_recallTypeListHasBeenSet;
}

SearchResultPayload KnowledgeResult::GetResultPayload() const
{
    return m_resultPayload;
}

void KnowledgeResult::SetResultPayload(const SearchResultPayload& _resultPayload)
{
    m_resultPayload = _resultPayload;
    m_resultPayloadHasBeenSet = true;
}

bool KnowledgeResult::ResultPayloadHasBeenSet() const
{
    return m_resultPayloadHasBeenSet;
}

int64_t KnowledgeResult::GetResultType() const
{
    return m_resultType;
}

void KnowledgeResult::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool KnowledgeResult::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

SimilarQuestionExtra KnowledgeResult::GetSimilarQuestionExtra() const
{
    return m_similarQuestionExtra;
}

void KnowledgeResult::SetSimilarQuestionExtra(const SimilarQuestionExtra& _similarQuestionExtra)
{
    m_similarQuestionExtra = _similarQuestionExtra;
    m_similarQuestionExtraHasBeenSet = true;
}

bool KnowledgeResult::SimilarQuestionExtraHasBeenSet() const
{
    return m_similarQuestionExtraHasBeenSet;
}

KnowledgeSnippetProfile KnowledgeResult::GetSnippetProfile() const
{
    return m_snippetProfile;
}

void KnowledgeResult::SetSnippetProfile(const KnowledgeSnippetProfile& _snippetProfile)
{
    m_snippetProfile = _snippetProfile;
    m_snippetProfileHasBeenSet = true;
}

bool KnowledgeResult::SnippetProfileHasBeenSet() const
{
    return m_snippetProfileHasBeenSet;
}

KnowledgeSource KnowledgeResult::GetSourceInfo() const
{
    return m_sourceInfo;
}

void KnowledgeResult::SetSourceInfo(const KnowledgeSource& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool KnowledgeResult::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

