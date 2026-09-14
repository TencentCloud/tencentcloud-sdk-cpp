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

#include <tencentcloud/adp/v20260520/model/QASummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QASummary::QASummary() :
    m_categoryPathHasBeenSet(false),
    m_knowledgeScopeHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_operatorInfoHasBeenSet(false),
    m_qaIdHasBeenSet(false),
    m_similarQuestionHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

CoreInternalOutcome QASummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryPath") && !value["CategoryPath"].IsNull())
    {
        if (!value["CategoryPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.CategoryPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_categoryPath.Deserialize(value["CategoryPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_categoryPathHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeScope") && !value["KnowledgeScope"].IsNull())
    {
        if (!value["KnowledgeScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.KnowledgeScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledgeScope.Deserialize(value["KnowledgeScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeScopeHasBeenSet = true;
    }

    if (value.HasMember("Lifecycle") && !value["Lifecycle"].IsNull())
    {
        if (!value["Lifecycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.Lifecycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifecycle.Deserialize(value["Lifecycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifecycleHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.Metadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadata.Deserialize(value["Metadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("OperatorInfo") && !value["OperatorInfo"].IsNull())
    {
        if (!value["OperatorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.OperatorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operatorInfo.Deserialize(value["OperatorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operatorInfoHasBeenSet = true;
    }

    if (value.HasMember("QaId") && !value["QaId"].IsNull())
    {
        if (!value["QaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.QaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaId = string(value["QaId"].GetString());
        m_qaIdHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestion") && !value["SimilarQuestion"].IsNull())
    {
        if (!value["SimilarQuestion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.SimilarQuestion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_similarQuestion.Deserialize(value["SimilarQuestion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_similarQuestionHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QASummary.SourceInfo` is not object type").SetRequestId(requestId));
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

void QASummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_categoryPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_knowledgeScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledgeScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lifecycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lifecycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_operatorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operatorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaId.c_str(), allocator).Move(), allocator);
    }

    if (m_similarQuestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_similarQuestion.ToJsonObject(value[key.c_str()], allocator);
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


CategoryPath QASummary::GetCategoryPath() const
{
    return m_categoryPath;
}

void QASummary::SetCategoryPath(const CategoryPath& _categoryPath)
{
    m_categoryPath = _categoryPath;
    m_categoryPathHasBeenSet = true;
}

bool QASummary::CategoryPathHasBeenSet() const
{
    return m_categoryPathHasBeenSet;
}

KnowledgeScope QASummary::GetKnowledgeScope() const
{
    return m_knowledgeScope;
}

void QASummary::SetKnowledgeScope(const KnowledgeScope& _knowledgeScope)
{
    m_knowledgeScope = _knowledgeScope;
    m_knowledgeScopeHasBeenSet = true;
}

bool QASummary::KnowledgeScopeHasBeenSet() const
{
    return m_knowledgeScopeHasBeenSet;
}

QALifecycle QASummary::GetLifecycle() const
{
    return m_lifecycle;
}

void QASummary::SetLifecycle(const QALifecycle& _lifecycle)
{
    m_lifecycle = _lifecycle;
    m_lifecycleHasBeenSet = true;
}

bool QASummary::LifecycleHasBeenSet() const
{
    return m_lifecycleHasBeenSet;
}

QAMetadata QASummary::GetMetadata() const
{
    return m_metadata;
}

void QASummary::SetMetadata(const QAMetadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool QASummary::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

QAOperator QASummary::GetOperatorInfo() const
{
    return m_operatorInfo;
}

void QASummary::SetOperatorInfo(const QAOperator& _operatorInfo)
{
    m_operatorInfo = _operatorInfo;
    m_operatorInfoHasBeenSet = true;
}

bool QASummary::OperatorInfoHasBeenSet() const
{
    return m_operatorInfoHasBeenSet;
}

string QASummary::GetQaId() const
{
    return m_qaId;
}

void QASummary::SetQaId(const string& _qaId)
{
    m_qaId = _qaId;
    m_qaIdHasBeenSet = true;
}

bool QASummary::QaIdHasBeenSet() const
{
    return m_qaIdHasBeenSet;
}

SimilarQuestionStat QASummary::GetSimilarQuestion() const
{
    return m_similarQuestion;
}

void QASummary::SetSimilarQuestion(const SimilarQuestionStat& _similarQuestion)
{
    m_similarQuestion = _similarQuestion;
    m_similarQuestionHasBeenSet = true;
}

bool QASummary::SimilarQuestionHasBeenSet() const
{
    return m_similarQuestionHasBeenSet;
}

QASourceInfo QASummary::GetSourceInfo() const
{
    return m_sourceInfo;
}

void QASummary::SetSourceInfo(const QASourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool QASummary::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

