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

#include <tencentcloud/af/v20200226/model/FinanceOtherModelScores.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

FinanceOtherModelScores::FinanceOtherModelScores() :
    m_modelIdHasBeenSet(false),
    m_modelScoreHasBeenSet(false)
{
}

CoreInternalOutcome FinanceOtherModelScores::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceOtherModelScores.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelScore") && !value["ModelScore"].IsNull())
    {
        if (!value["ModelScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinanceOtherModelScores.ModelScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelScore = string(value["ModelScore"].GetString());
        m_modelScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FinanceOtherModelScores::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelScore.c_str(), allocator).Move(), allocator);
    }

}


string FinanceOtherModelScores::GetModelId() const
{
    return m_modelId;
}

void FinanceOtherModelScores::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool FinanceOtherModelScores::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string FinanceOtherModelScores::GetModelScore() const
{
    return m_modelScore;
}

void FinanceOtherModelScores::SetModelScore(const string& _modelScore)
{
    m_modelScore = _modelScore;
    m_modelScoreHasBeenSet = true;
}

bool FinanceOtherModelScores::ModelScoreHasBeenSet() const
{
    return m_modelScoreHasBeenSet;
}

