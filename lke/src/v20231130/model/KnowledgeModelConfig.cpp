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

#include <tencentcloud/lke/v20231130/model/KnowledgeModelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeModelConfig::KnowledgeModelConfig() :
    m_embeddingModelHasBeenSet(false),
    m_qaExtractModelHasBeenSet(false),
    m_schemaModelHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeModelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EmbeddingModel") && !value["EmbeddingModel"].IsNull())
    {
        if (!value["EmbeddingModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeModelConfig.EmbeddingModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_embeddingModel = string(value["EmbeddingModel"].GetString());
        m_embeddingModelHasBeenSet = true;
    }

    if (value.HasMember("QaExtractModel") && !value["QaExtractModel"].IsNull())
    {
        if (!value["QaExtractModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeModelConfig.QaExtractModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaExtractModel = string(value["QaExtractModel"].GetString());
        m_qaExtractModelHasBeenSet = true;
    }

    if (value.HasMember("SchemaModel") && !value["SchemaModel"].IsNull())
    {
        if (!value["SchemaModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeModelConfig.SchemaModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaModel = string(value["SchemaModel"].GetString());
        m_schemaModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeModelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_schemaModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaModel.c_str(), allocator).Move(), allocator);
    }

}


string KnowledgeModelConfig::GetEmbeddingModel() const
{
    return m_embeddingModel;
}

void KnowledgeModelConfig::SetEmbeddingModel(const string& _embeddingModel)
{
    m_embeddingModel = _embeddingModel;
    m_embeddingModelHasBeenSet = true;
}

bool KnowledgeModelConfig::EmbeddingModelHasBeenSet() const
{
    return m_embeddingModelHasBeenSet;
}

string KnowledgeModelConfig::GetQaExtractModel() const
{
    return m_qaExtractModel;
}

void KnowledgeModelConfig::SetQaExtractModel(const string& _qaExtractModel)
{
    m_qaExtractModel = _qaExtractModel;
    m_qaExtractModelHasBeenSet = true;
}

bool KnowledgeModelConfig::QaExtractModelHasBeenSet() const
{
    return m_qaExtractModelHasBeenSet;
}

string KnowledgeModelConfig::GetSchemaModel() const
{
    return m_schemaModel;
}

void KnowledgeModelConfig::SetSchemaModel(const string& _schemaModel)
{
    m_schemaModel = _schemaModel;
    m_schemaModelHasBeenSet = true;
}

bool KnowledgeModelConfig::SchemaModelHasBeenSet() const
{
    return m_schemaModelHasBeenSet;
}

