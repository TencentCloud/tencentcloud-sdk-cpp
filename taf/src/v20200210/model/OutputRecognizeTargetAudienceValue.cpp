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
    m_scoreHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_uidHasBeenSet(false)
{
}

CoreInternalOutcome OutputRecognizeTargetAudienceValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRecognizeTargetAudienceValue.ModelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = value["ModelId"].GetUint64();
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("IsFound") && !value["IsFound"].IsNull())
    {
        if (!value["IsFound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRecognizeTargetAudienceValue.IsFound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFound = value["IsFound"].GetInt64();
        m_isFoundHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRecognizeTargetAudienceValue.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRecognizeTargetAudienceValue.ModelType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = value["ModelType"].GetUint64();
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRecognizeTargetAudienceValue.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
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

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelType, allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
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

uint64_t OutputRecognizeTargetAudienceValue::GetModelType() const
{
    return m_modelType;
}

void OutputRecognizeTargetAudienceValue::SetModelType(const uint64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool OutputRecognizeTargetAudienceValue::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string OutputRecognizeTargetAudienceValue::GetUid() const
{
    return m_uid;
}

void OutputRecognizeTargetAudienceValue::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool OutputRecognizeTargetAudienceValue::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

