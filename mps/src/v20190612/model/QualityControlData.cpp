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

#include <tencentcloud/mps/v20190612/model/QualityControlData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

QualityControlData::QualityControlData() :
    m_noAudioHasBeenSet(false),
    m_noVideoHasBeenSet(false),
    m_qualityEvaluationScoreHasBeenSet(false),
    m_qualityEvaluationMeanOpinionScoreHasBeenSet(false),
    m_qualityControlResultSetHasBeenSet(false),
    m_containerDiagnoseResultSetHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoAudio") && !value["NoAudio"].IsNull())
    {
        if (!value["NoAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlData.NoAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noAudio = value["NoAudio"].GetBool();
        m_noAudioHasBeenSet = true;
    }

    if (value.HasMember("NoVideo") && !value["NoVideo"].IsNull())
    {
        if (!value["NoVideo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlData.NoVideo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noVideo = value["NoVideo"].GetBool();
        m_noVideoHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluationScore") && !value["QualityEvaluationScore"].IsNull())
    {
        if (!value["QualityEvaluationScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlData.QualityEvaluationScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityEvaluationScore = value["QualityEvaluationScore"].GetInt64();
        m_qualityEvaluationScoreHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluationMeanOpinionScore") && !value["QualityEvaluationMeanOpinionScore"].IsNull())
    {
        if (!value["QualityEvaluationMeanOpinionScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlData.QualityEvaluationMeanOpinionScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_qualityEvaluationMeanOpinionScore = value["QualityEvaluationMeanOpinionScore"].GetDouble();
        m_qualityEvaluationMeanOpinionScoreHasBeenSet = true;
    }

    if (value.HasMember("QualityControlResultSet") && !value["QualityControlResultSet"].IsNull())
    {
        if (!value["QualityControlResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlData.QualityControlResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["QualityControlResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qualityControlResultSet.push_back(item);
        }
        m_qualityControlResultSetHasBeenSet = true;
    }

    if (value.HasMember("ContainerDiagnoseResultSet") && !value["ContainerDiagnoseResultSet"].IsNull())
    {
        if (!value["ContainerDiagnoseResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlData.ContainerDiagnoseResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ContainerDiagnoseResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ContainerDiagnoseResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containerDiagnoseResultSet.push_back(item);
        }
        m_containerDiagnoseResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityControlData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noAudio, allocator);
    }

    if (m_noVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noVideo, allocator);
    }

    if (m_qualityEvaluationScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvaluationScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityEvaluationScore, allocator);
    }

    if (m_qualityEvaluationMeanOpinionScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvaluationMeanOpinionScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityEvaluationMeanOpinionScore, allocator);
    }

    if (m_qualityControlResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityControlResultSet.begin(); itr != m_qualityControlResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_containerDiagnoseResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerDiagnoseResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containerDiagnoseResultSet.begin(); itr != m_containerDiagnoseResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool QualityControlData::GetNoAudio() const
{
    return m_noAudio;
}

void QualityControlData::SetNoAudio(const bool& _noAudio)
{
    m_noAudio = _noAudio;
    m_noAudioHasBeenSet = true;
}

bool QualityControlData::NoAudioHasBeenSet() const
{
    return m_noAudioHasBeenSet;
}

bool QualityControlData::GetNoVideo() const
{
    return m_noVideo;
}

void QualityControlData::SetNoVideo(const bool& _noVideo)
{
    m_noVideo = _noVideo;
    m_noVideoHasBeenSet = true;
}

bool QualityControlData::NoVideoHasBeenSet() const
{
    return m_noVideoHasBeenSet;
}

int64_t QualityControlData::GetQualityEvaluationScore() const
{
    return m_qualityEvaluationScore;
}

void QualityControlData::SetQualityEvaluationScore(const int64_t& _qualityEvaluationScore)
{
    m_qualityEvaluationScore = _qualityEvaluationScore;
    m_qualityEvaluationScoreHasBeenSet = true;
}

bool QualityControlData::QualityEvaluationScoreHasBeenSet() const
{
    return m_qualityEvaluationScoreHasBeenSet;
}

double QualityControlData::GetQualityEvaluationMeanOpinionScore() const
{
    return m_qualityEvaluationMeanOpinionScore;
}

void QualityControlData::SetQualityEvaluationMeanOpinionScore(const double& _qualityEvaluationMeanOpinionScore)
{
    m_qualityEvaluationMeanOpinionScore = _qualityEvaluationMeanOpinionScore;
    m_qualityEvaluationMeanOpinionScoreHasBeenSet = true;
}

bool QualityControlData::QualityEvaluationMeanOpinionScoreHasBeenSet() const
{
    return m_qualityEvaluationMeanOpinionScoreHasBeenSet;
}

vector<QualityControlResult> QualityControlData::GetQualityControlResultSet() const
{
    return m_qualityControlResultSet;
}

void QualityControlData::SetQualityControlResultSet(const vector<QualityControlResult>& _qualityControlResultSet)
{
    m_qualityControlResultSet = _qualityControlResultSet;
    m_qualityControlResultSetHasBeenSet = true;
}

bool QualityControlData::QualityControlResultSetHasBeenSet() const
{
    return m_qualityControlResultSetHasBeenSet;
}

vector<ContainerDiagnoseResultItem> QualityControlData::GetContainerDiagnoseResultSet() const
{
    return m_containerDiagnoseResultSet;
}

void QualityControlData::SetContainerDiagnoseResultSet(const vector<ContainerDiagnoseResultItem>& _containerDiagnoseResultSet)
{
    m_containerDiagnoseResultSet = _containerDiagnoseResultSet;
    m_containerDiagnoseResultSetHasBeenSet = true;
}

bool QualityControlData::ContainerDiagnoseResultSetHasBeenSet() const
{
    return m_containerDiagnoseResultSetHasBeenSet;
}

