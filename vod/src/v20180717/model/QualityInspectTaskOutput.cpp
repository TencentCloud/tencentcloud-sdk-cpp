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

#include <tencentcloud/vod/v20180717/model/QualityInspectTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityInspectTaskOutput::QualityInspectTaskOutput() :
    m_noAudioHasBeenSet(false),
    m_noVideoHasBeenSet(false),
    m_qualityEvaluationScoreHasBeenSet(false),
    m_qualityInspectResultSetHasBeenSet(false),
    m_qualityEvaluationMeanOpinionScoreHasBeenSet(false),
    m_aestheticEvaluationScoreHasBeenSet(false),
    m_containerDiagnoseResultSetHasBeenSet(false),
    m_lLMDetectionReportHasBeenSet(false)
{
}

CoreInternalOutcome QualityInspectTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoAudio") && !value["NoAudio"].IsNull())
    {
        if (!value["NoAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.NoAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noAudio = value["NoAudio"].GetInt64();
        m_noAudioHasBeenSet = true;
    }

    if (value.HasMember("NoVideo") && !value["NoVideo"].IsNull())
    {
        if (!value["NoVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.NoVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noVideo = value["NoVideo"].GetInt64();
        m_noVideoHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluationScore") && !value["QualityEvaluationScore"].IsNull())
    {
        if (!value["QualityEvaluationScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.QualityEvaluationScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityEvaluationScore = value["QualityEvaluationScore"].GetUint64();
        m_qualityEvaluationScoreHasBeenSet = true;
    }

    if (value.HasMember("QualityInspectResultSet") && !value["QualityInspectResultSet"].IsNull())
    {
        if (!value["QualityInspectResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.QualityInspectResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["QualityInspectResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityInspectResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qualityInspectResultSet.push_back(item);
        }
        m_qualityInspectResultSetHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluationMeanOpinionScore") && !value["QualityEvaluationMeanOpinionScore"].IsNull())
    {
        if (!value["QualityEvaluationMeanOpinionScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.QualityEvaluationMeanOpinionScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_qualityEvaluationMeanOpinionScore = value["QualityEvaluationMeanOpinionScore"].GetDouble();
        m_qualityEvaluationMeanOpinionScoreHasBeenSet = true;
    }

    if (value.HasMember("AestheticEvaluationScore") && !value["AestheticEvaluationScore"].IsNull())
    {
        if (!value["AestheticEvaluationScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.AestheticEvaluationScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aestheticEvaluationScore = value["AestheticEvaluationScore"].GetInt64();
        m_aestheticEvaluationScoreHasBeenSet = true;
    }

    if (value.HasMember("ContainerDiagnoseResultSet") && !value["ContainerDiagnoseResultSet"].IsNull())
    {
        if (!value["ContainerDiagnoseResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.ContainerDiagnoseResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ContainerDiagnoseResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityInspectContainerDiagnoseResultItem item;
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

    if (value.HasMember("LLMDetectionReport") && !value["LLMDetectionReport"].IsNull())
    {
        if (!value["LLMDetectionReport"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTaskOutput.LLMDetectionReport` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lLMDetectionReport.Deserialize(value["LLMDetectionReport"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lLMDetectionReportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityInspectTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_qualityInspectResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityInspectResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityInspectResultSet.begin(); itr != m_qualityInspectResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qualityEvaluationMeanOpinionScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvaluationMeanOpinionScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityEvaluationMeanOpinionScore, allocator);
    }

    if (m_aestheticEvaluationScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AestheticEvaluationScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aestheticEvaluationScore, allocator);
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

    if (m_lLMDetectionReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMDetectionReport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMDetectionReport.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t QualityInspectTaskOutput::GetNoAudio() const
{
    return m_noAudio;
}

void QualityInspectTaskOutput::SetNoAudio(const int64_t& _noAudio)
{
    m_noAudio = _noAudio;
    m_noAudioHasBeenSet = true;
}

bool QualityInspectTaskOutput::NoAudioHasBeenSet() const
{
    return m_noAudioHasBeenSet;
}

int64_t QualityInspectTaskOutput::GetNoVideo() const
{
    return m_noVideo;
}

void QualityInspectTaskOutput::SetNoVideo(const int64_t& _noVideo)
{
    m_noVideo = _noVideo;
    m_noVideoHasBeenSet = true;
}

bool QualityInspectTaskOutput::NoVideoHasBeenSet() const
{
    return m_noVideoHasBeenSet;
}

uint64_t QualityInspectTaskOutput::GetQualityEvaluationScore() const
{
    return m_qualityEvaluationScore;
}

void QualityInspectTaskOutput::SetQualityEvaluationScore(const uint64_t& _qualityEvaluationScore)
{
    m_qualityEvaluationScore = _qualityEvaluationScore;
    m_qualityEvaluationScoreHasBeenSet = true;
}

bool QualityInspectTaskOutput::QualityEvaluationScoreHasBeenSet() const
{
    return m_qualityEvaluationScoreHasBeenSet;
}

vector<QualityInspectResultItem> QualityInspectTaskOutput::GetQualityInspectResultSet() const
{
    return m_qualityInspectResultSet;
}

void QualityInspectTaskOutput::SetQualityInspectResultSet(const vector<QualityInspectResultItem>& _qualityInspectResultSet)
{
    m_qualityInspectResultSet = _qualityInspectResultSet;
    m_qualityInspectResultSetHasBeenSet = true;
}

bool QualityInspectTaskOutput::QualityInspectResultSetHasBeenSet() const
{
    return m_qualityInspectResultSetHasBeenSet;
}

double QualityInspectTaskOutput::GetQualityEvaluationMeanOpinionScore() const
{
    return m_qualityEvaluationMeanOpinionScore;
}

void QualityInspectTaskOutput::SetQualityEvaluationMeanOpinionScore(const double& _qualityEvaluationMeanOpinionScore)
{
    m_qualityEvaluationMeanOpinionScore = _qualityEvaluationMeanOpinionScore;
    m_qualityEvaluationMeanOpinionScoreHasBeenSet = true;
}

bool QualityInspectTaskOutput::QualityEvaluationMeanOpinionScoreHasBeenSet() const
{
    return m_qualityEvaluationMeanOpinionScoreHasBeenSet;
}

int64_t QualityInspectTaskOutput::GetAestheticEvaluationScore() const
{
    return m_aestheticEvaluationScore;
}

void QualityInspectTaskOutput::SetAestheticEvaluationScore(const int64_t& _aestheticEvaluationScore)
{
    m_aestheticEvaluationScore = _aestheticEvaluationScore;
    m_aestheticEvaluationScoreHasBeenSet = true;
}

bool QualityInspectTaskOutput::AestheticEvaluationScoreHasBeenSet() const
{
    return m_aestheticEvaluationScoreHasBeenSet;
}

vector<QualityInspectContainerDiagnoseResultItem> QualityInspectTaskOutput::GetContainerDiagnoseResultSet() const
{
    return m_containerDiagnoseResultSet;
}

void QualityInspectTaskOutput::SetContainerDiagnoseResultSet(const vector<QualityInspectContainerDiagnoseResultItem>& _containerDiagnoseResultSet)
{
    m_containerDiagnoseResultSet = _containerDiagnoseResultSet;
    m_containerDiagnoseResultSetHasBeenSet = true;
}

bool QualityInspectTaskOutput::ContainerDiagnoseResultSetHasBeenSet() const
{
    return m_containerDiagnoseResultSetHasBeenSet;
}

QualityInspectLLMDetectionReport QualityInspectTaskOutput::GetLLMDetectionReport() const
{
    return m_lLMDetectionReport;
}

void QualityInspectTaskOutput::SetLLMDetectionReport(const QualityInspectLLMDetectionReport& _lLMDetectionReport)
{
    m_lLMDetectionReport = _lLMDetectionReport;
    m_lLMDetectionReportHasBeenSet = true;
}

bool QualityInspectTaskOutput::LLMDetectionReportHasBeenSet() const
{
    return m_lLMDetectionReportHasBeenSet;
}

