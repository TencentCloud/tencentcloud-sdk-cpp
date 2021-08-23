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

#include <tencentcloud/ie/v20200304/model/QualityControlInfoTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

QualityControlInfoTaskResult::QualityControlInfoTaskResult() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_noAudioHasBeenSet(false),
    m_noVideoHasBeenSet(false),
    m_qualityEvaluationScoreHasBeenSet(false),
    m_qualityEvaluationResultsHasBeenSet(false),
    m_jitterResultsHasBeenSet(false),
    m_blurResultsHasBeenSet(false),
    m_abnormalLightingResultsHasBeenSet(false),
    m_crashScreenResultsHasBeenSet(false),
    m_blackWhiteEdgeResultsHasBeenSet(false),
    m_noiseResultsHasBeenSet(false),
    m_mosaicResultsHasBeenSet(false),
    m_qRCodeResultsHasBeenSet(false),
    m_voiceResultsHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlInfoTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.UsedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = value["UsedTime"].GetUint64();
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("NoAudio") && !value["NoAudio"].IsNull())
    {
        if (!value["NoAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.NoAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noAudio = value["NoAudio"].GetBool();
        m_noAudioHasBeenSet = true;
    }

    if (value.HasMember("NoVideo") && !value["NoVideo"].IsNull())
    {
        if (!value["NoVideo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.NoVideo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noVideo = value["NoVideo"].GetBool();
        m_noVideoHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluationScore") && !value["QualityEvaluationScore"].IsNull())
    {
        if (!value["QualityEvaluationScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.QualityEvaluationScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityEvaluationScore = value["QualityEvaluationScore"].GetUint64();
        m_qualityEvaluationScoreHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluationResults") && !value["QualityEvaluationResults"].IsNull())
    {
        if (!value["QualityEvaluationResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.QualityEvaluationResults` is not array type"));

        const rapidjson::Value &tmpValue = value["QualityEvaluationResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qualityEvaluationResults.push_back(item);
        }
        m_qualityEvaluationResultsHasBeenSet = true;
    }

    if (value.HasMember("JitterResults") && !value["JitterResults"].IsNull())
    {
        if (!value["JitterResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.JitterResults` is not array type"));

        const rapidjson::Value &tmpValue = value["JitterResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_jitterResults.push_back(item);
        }
        m_jitterResultsHasBeenSet = true;
    }

    if (value.HasMember("BlurResults") && !value["BlurResults"].IsNull())
    {
        if (!value["BlurResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.BlurResults` is not array type"));

        const rapidjson::Value &tmpValue = value["BlurResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_blurResults.push_back(item);
        }
        m_blurResultsHasBeenSet = true;
    }

    if (value.HasMember("AbnormalLightingResults") && !value["AbnormalLightingResults"].IsNull())
    {
        if (!value["AbnormalLightingResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.AbnormalLightingResults` is not array type"));

        const rapidjson::Value &tmpValue = value["AbnormalLightingResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_abnormalLightingResults.push_back(item);
        }
        m_abnormalLightingResultsHasBeenSet = true;
    }

    if (value.HasMember("CrashScreenResults") && !value["CrashScreenResults"].IsNull())
    {
        if (!value["CrashScreenResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.CrashScreenResults` is not array type"));

        const rapidjson::Value &tmpValue = value["CrashScreenResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_crashScreenResults.push_back(item);
        }
        m_crashScreenResultsHasBeenSet = true;
    }

    if (value.HasMember("BlackWhiteEdgeResults") && !value["BlackWhiteEdgeResults"].IsNull())
    {
        if (!value["BlackWhiteEdgeResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.BlackWhiteEdgeResults` is not array type"));

        const rapidjson::Value &tmpValue = value["BlackWhiteEdgeResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_blackWhiteEdgeResults.push_back(item);
        }
        m_blackWhiteEdgeResultsHasBeenSet = true;
    }

    if (value.HasMember("NoiseResults") && !value["NoiseResults"].IsNull())
    {
        if (!value["NoiseResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.NoiseResults` is not array type"));

        const rapidjson::Value &tmpValue = value["NoiseResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noiseResults.push_back(item);
        }
        m_noiseResultsHasBeenSet = true;
    }

    if (value.HasMember("MosaicResults") && !value["MosaicResults"].IsNull())
    {
        if (!value["MosaicResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.MosaicResults` is not array type"));

        const rapidjson::Value &tmpValue = value["MosaicResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mosaicResults.push_back(item);
        }
        m_mosaicResultsHasBeenSet = true;
    }

    if (value.HasMember("QRCodeResults") && !value["QRCodeResults"].IsNull())
    {
        if (!value["QRCodeResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.QRCodeResults` is not array type"));

        const rapidjson::Value &tmpValue = value["QRCodeResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qRCodeResults.push_back(item);
        }
        m_qRCodeResultsHasBeenSet = true;
    }

    if (value.HasMember("VoiceResults") && !value["VoiceResults"].IsNull())
    {
        if (!value["VoiceResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.VoiceResults` is not array type"));

        const rapidjson::Value &tmpValue = value["VoiceResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResultItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_voiceResults.push_back(item);
        }
        m_voiceResultsHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfoTaskResult.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityControlInfoTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_usedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

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

    if (m_qualityEvaluationResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvaluationResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityEvaluationResults.begin(); itr != m_qualityEvaluationResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jitterResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JitterResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jitterResults.begin(); itr != m_jitterResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_blurResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlurResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_blurResults.begin(); itr != m_blurResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_abnormalLightingResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalLightingResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_abnormalLightingResults.begin(); itr != m_abnormalLightingResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_crashScreenResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrashScreenResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_crashScreenResults.begin(); itr != m_crashScreenResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_blackWhiteEdgeResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackWhiteEdgeResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_blackWhiteEdgeResults.begin(); itr != m_blackWhiteEdgeResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_noiseResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoiseResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noiseResults.begin(); itr != m_noiseResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mosaicResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MosaicResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mosaicResults.begin(); itr != m_mosaicResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qRCodeResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qRCodeResults.begin(); itr != m_qRCodeResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_voiceResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_voiceResults.begin(); itr != m_voiceResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


string QualityControlInfoTaskResult::GetTaskId() const
{
    return m_taskId;
}

void QualityControlInfoTaskResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool QualityControlInfoTaskResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t QualityControlInfoTaskResult::GetStatus() const
{
    return m_status;
}

void QualityControlInfoTaskResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QualityControlInfoTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t QualityControlInfoTaskResult::GetProgress() const
{
    return m_progress;
}

void QualityControlInfoTaskResult::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool QualityControlInfoTaskResult::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t QualityControlInfoTaskResult::GetUsedTime() const
{
    return m_usedTime;
}

void QualityControlInfoTaskResult::SetUsedTime(const uint64_t& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool QualityControlInfoTaskResult::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

uint64_t QualityControlInfoTaskResult::GetDuration() const
{
    return m_duration;
}

void QualityControlInfoTaskResult::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool QualityControlInfoTaskResult::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

bool QualityControlInfoTaskResult::GetNoAudio() const
{
    return m_noAudio;
}

void QualityControlInfoTaskResult::SetNoAudio(const bool& _noAudio)
{
    m_noAudio = _noAudio;
    m_noAudioHasBeenSet = true;
}

bool QualityControlInfoTaskResult::NoAudioHasBeenSet() const
{
    return m_noAudioHasBeenSet;
}

bool QualityControlInfoTaskResult::GetNoVideo() const
{
    return m_noVideo;
}

void QualityControlInfoTaskResult::SetNoVideo(const bool& _noVideo)
{
    m_noVideo = _noVideo;
    m_noVideoHasBeenSet = true;
}

bool QualityControlInfoTaskResult::NoVideoHasBeenSet() const
{
    return m_noVideoHasBeenSet;
}

uint64_t QualityControlInfoTaskResult::GetQualityEvaluationScore() const
{
    return m_qualityEvaluationScore;
}

void QualityControlInfoTaskResult::SetQualityEvaluationScore(const uint64_t& _qualityEvaluationScore)
{
    m_qualityEvaluationScore = _qualityEvaluationScore;
    m_qualityEvaluationScoreHasBeenSet = true;
}

bool QualityControlInfoTaskResult::QualityEvaluationScoreHasBeenSet() const
{
    return m_qualityEvaluationScoreHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetQualityEvaluationResults() const
{
    return m_qualityEvaluationResults;
}

void QualityControlInfoTaskResult::SetQualityEvaluationResults(const vector<QualityControlResultItems>& _qualityEvaluationResults)
{
    m_qualityEvaluationResults = _qualityEvaluationResults;
    m_qualityEvaluationResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::QualityEvaluationResultsHasBeenSet() const
{
    return m_qualityEvaluationResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetJitterResults() const
{
    return m_jitterResults;
}

void QualityControlInfoTaskResult::SetJitterResults(const vector<QualityControlResultItems>& _jitterResults)
{
    m_jitterResults = _jitterResults;
    m_jitterResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::JitterResultsHasBeenSet() const
{
    return m_jitterResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetBlurResults() const
{
    return m_blurResults;
}

void QualityControlInfoTaskResult::SetBlurResults(const vector<QualityControlResultItems>& _blurResults)
{
    m_blurResults = _blurResults;
    m_blurResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::BlurResultsHasBeenSet() const
{
    return m_blurResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetAbnormalLightingResults() const
{
    return m_abnormalLightingResults;
}

void QualityControlInfoTaskResult::SetAbnormalLightingResults(const vector<QualityControlResultItems>& _abnormalLightingResults)
{
    m_abnormalLightingResults = _abnormalLightingResults;
    m_abnormalLightingResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::AbnormalLightingResultsHasBeenSet() const
{
    return m_abnormalLightingResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetCrashScreenResults() const
{
    return m_crashScreenResults;
}

void QualityControlInfoTaskResult::SetCrashScreenResults(const vector<QualityControlResultItems>& _crashScreenResults)
{
    m_crashScreenResults = _crashScreenResults;
    m_crashScreenResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::CrashScreenResultsHasBeenSet() const
{
    return m_crashScreenResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetBlackWhiteEdgeResults() const
{
    return m_blackWhiteEdgeResults;
}

void QualityControlInfoTaskResult::SetBlackWhiteEdgeResults(const vector<QualityControlResultItems>& _blackWhiteEdgeResults)
{
    m_blackWhiteEdgeResults = _blackWhiteEdgeResults;
    m_blackWhiteEdgeResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::BlackWhiteEdgeResultsHasBeenSet() const
{
    return m_blackWhiteEdgeResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetNoiseResults() const
{
    return m_noiseResults;
}

void QualityControlInfoTaskResult::SetNoiseResults(const vector<QualityControlResultItems>& _noiseResults)
{
    m_noiseResults = _noiseResults;
    m_noiseResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::NoiseResultsHasBeenSet() const
{
    return m_noiseResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetMosaicResults() const
{
    return m_mosaicResults;
}

void QualityControlInfoTaskResult::SetMosaicResults(const vector<QualityControlResultItems>& _mosaicResults)
{
    m_mosaicResults = _mosaicResults;
    m_mosaicResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::MosaicResultsHasBeenSet() const
{
    return m_mosaicResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetQRCodeResults() const
{
    return m_qRCodeResults;
}

void QualityControlInfoTaskResult::SetQRCodeResults(const vector<QualityControlResultItems>& _qRCodeResults)
{
    m_qRCodeResults = _qRCodeResults;
    m_qRCodeResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::QRCodeResultsHasBeenSet() const
{
    return m_qRCodeResultsHasBeenSet;
}

vector<QualityControlResultItems> QualityControlInfoTaskResult::GetVoiceResults() const
{
    return m_voiceResults;
}

void QualityControlInfoTaskResult::SetVoiceResults(const vector<QualityControlResultItems>& _voiceResults)
{
    m_voiceResults = _voiceResults;
    m_voiceResultsHasBeenSet = true;
}

bool QualityControlInfoTaskResult::VoiceResultsHasBeenSet() const
{
    return m_voiceResultsHasBeenSet;
}

int64_t QualityControlInfoTaskResult::GetErrCode() const
{
    return m_errCode;
}

void QualityControlInfoTaskResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool QualityControlInfoTaskResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string QualityControlInfoTaskResult::GetErrMsg() const
{
    return m_errMsg;
}

void QualityControlInfoTaskResult::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool QualityControlInfoTaskResult::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

