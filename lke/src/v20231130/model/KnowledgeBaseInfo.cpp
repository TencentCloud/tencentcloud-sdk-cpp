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

#include <tencentcloud/lke/v20231130/model/KnowledgeBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeBaseInfo::KnowledgeBaseInfo() :
    m_knowledgeBizIdHasBeenSet(false),
    m_knowledgeNameHasBeenSet(false),
    m_knowledgeDescriptionHasBeenSet(false),
    m_embeddingModelHasBeenSet(false),
    m_qaExtractModelHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeBizId") && !value["KnowledgeBizId"].IsNull())
    {
        if (!value["KnowledgeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseInfo.KnowledgeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBizId = string(value["KnowledgeBizId"].GetString());
        m_knowledgeBizIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeName") && !value["KnowledgeName"].IsNull())
    {
        if (!value["KnowledgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseInfo.KnowledgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeName = string(value["KnowledgeName"].GetString());
        m_knowledgeNameHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeDescription") && !value["KnowledgeDescription"].IsNull())
    {
        if (!value["KnowledgeDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseInfo.KnowledgeDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeDescription = string(value["KnowledgeDescription"].GetString());
        m_knowledgeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EmbeddingModel") && !value["EmbeddingModel"].IsNull())
    {
        if (!value["EmbeddingModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseInfo.EmbeddingModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_embeddingModel = string(value["EmbeddingModel"].GetString());
        m_embeddingModelHasBeenSet = true;
    }

    if (value.HasMember("QaExtractModel") && !value["QaExtractModel"].IsNull())
    {
        if (!value["QaExtractModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseInfo.QaExtractModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaExtractModel = string(value["QaExtractModel"].GetString());
        m_qaExtractModelHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeName.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_embeddingModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbeddingModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_embeddingModel.c_str(), allocator).Move(), allocator);
    }

    if (m_qaExtractModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaExtractModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaExtractModel.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string KnowledgeBaseInfo::GetKnowledgeBizId() const
{
    return m_knowledgeBizId;
}

void KnowledgeBaseInfo::SetKnowledgeBizId(const string& _knowledgeBizId)
{
    m_knowledgeBizId = _knowledgeBizId;
    m_knowledgeBizIdHasBeenSet = true;
}

bool KnowledgeBaseInfo::KnowledgeBizIdHasBeenSet() const
{
    return m_knowledgeBizIdHasBeenSet;
}

string KnowledgeBaseInfo::GetKnowledgeName() const
{
    return m_knowledgeName;
}

void KnowledgeBaseInfo::SetKnowledgeName(const string& _knowledgeName)
{
    m_knowledgeName = _knowledgeName;
    m_knowledgeNameHasBeenSet = true;
}

bool KnowledgeBaseInfo::KnowledgeNameHasBeenSet() const
{
    return m_knowledgeNameHasBeenSet;
}

string KnowledgeBaseInfo::GetKnowledgeDescription() const
{
    return m_knowledgeDescription;
}

void KnowledgeBaseInfo::SetKnowledgeDescription(const string& _knowledgeDescription)
{
    m_knowledgeDescription = _knowledgeDescription;
    m_knowledgeDescriptionHasBeenSet = true;
}

bool KnowledgeBaseInfo::KnowledgeDescriptionHasBeenSet() const
{
    return m_knowledgeDescriptionHasBeenSet;
}

string KnowledgeBaseInfo::GetEmbeddingModel() const
{
    return m_embeddingModel;
}

void KnowledgeBaseInfo::SetEmbeddingModel(const string& _embeddingModel)
{
    m_embeddingModel = _embeddingModel;
    m_embeddingModelHasBeenSet = true;
}

bool KnowledgeBaseInfo::EmbeddingModelHasBeenSet() const
{
    return m_embeddingModelHasBeenSet;
}

string KnowledgeBaseInfo::GetQaExtractModel() const
{
    return m_qaExtractModel;
}

void KnowledgeBaseInfo::SetQaExtractModel(const string& _qaExtractModel)
{
    m_qaExtractModel = _qaExtractModel;
    m_qaExtractModelHasBeenSet = true;
}

bool KnowledgeBaseInfo::QaExtractModelHasBeenSet() const
{
    return m_qaExtractModelHasBeenSet;
}

string KnowledgeBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void KnowledgeBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool KnowledgeBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

