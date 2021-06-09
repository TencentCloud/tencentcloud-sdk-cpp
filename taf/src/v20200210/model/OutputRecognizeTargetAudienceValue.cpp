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

#include <tencentcloud/taf/v20200210/model/OutputRecognizeTargetAudienceValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

OutputRecognizeTargetAudienceValue::OutputRecognizeTargetAudienceValue() :
    m_modelIdHasBeenSet(false),
    m_isFoundHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome OutputRecognizeTargetAudienceValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OutputRecognizeTargetAudienceValue.ModelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = value["ModelId"].GetUint64();
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("IsFound") && !value["IsFound"].IsNull())
    {
        if (!value["IsFound"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputRecognizeTargetAudienceValue.IsFound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFound = value["IsFound"].GetInt64();
        m_isFoundHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OutputRecognizeTargetAudienceValue.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputRecognizeTargetAudienceValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelId, allocator);
    }

    if (m_isFoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFound, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


uint64_t OutputRecognizeTargetAudienceValue::GetModelId() const
{
    return m_modelId;
}

void OutputRecognizeTargetAudienceValue::SetModelId(const uint64_t& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool OutputRecognizeTargetAudienceValue::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t OutputRecognizeTargetAudienceValue::GetIsFound() const
{
    return m_isFound;
}

void OutputRecognizeTargetAudienceValue::SetIsFound(const int64_t& _isFound)
{
    m_isFound = _isFound;
    m_isFoundHasBeenSet = true;
}

bool OutputRecognizeTargetAudienceValue::IsFoundHasBeenSet() const
{
    return m_isFoundHasBeenSet;
}

double OutputRecognizeTargetAudienceValue::GetScore() const
{
    return m_score;
}

void OutputRecognizeTargetAudienceValue::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool OutputRecognizeTargetAudienceValue::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

