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

#include <tencentcloud/lke/v20231130/model/KnowledgeAdvancedConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeAdvancedConfig::KnowledgeAdvancedConfig() :
    m_rerankModelHasBeenSet(false),
    m_rerankRecallNumHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeAdvancedConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RerankModel") && !value["RerankModel"].IsNull())
    {
        if (!value["RerankModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeAdvancedConfig.RerankModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rerankModel = string(value["RerankModel"].GetString());
        m_rerankModelHasBeenSet = true;
    }

    if (value.HasMember("RerankRecallNum") && !value["RerankRecallNum"].IsNull())
    {
        if (!value["RerankRecallNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeAdvancedConfig.RerankRecallNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rerankRecallNum = value["RerankRecallNum"].GetInt64();
        m_rerankRecallNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeAdvancedConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rerankModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerankModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rerankModel.c_str(), allocator).Move(), allocator);
    }

    if (m_rerankRecallNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerankRecallNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rerankRecallNum, allocator);
    }

}


string KnowledgeAdvancedConfig::GetRerankModel() const
{
    return m_rerankModel;
}

void KnowledgeAdvancedConfig::SetRerankModel(const string& _rerankModel)
{
    m_rerankModel = _rerankModel;
    m_rerankModelHasBeenSet = true;
}

bool KnowledgeAdvancedConfig::RerankModelHasBeenSet() const
{
    return m_rerankModelHasBeenSet;
}

int64_t KnowledgeAdvancedConfig::GetRerankRecallNum() const
{
    return m_rerankRecallNum;
}

void KnowledgeAdvancedConfig::SetRerankRecallNum(const int64_t& _rerankRecallNum)
{
    m_rerankRecallNum = _rerankRecallNum;
    m_rerankRecallNumHasBeenSet = true;
}

bool KnowledgeAdvancedConfig::RerankRecallNumHasBeenSet() const
{
    return m_rerankRecallNumHasBeenSet;
}

