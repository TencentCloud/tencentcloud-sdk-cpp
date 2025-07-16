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

#include <tencentcloud/mps/v20190612/model/EvaluationTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

EvaluationTaskInput::EvaluationTaskInput() :
    m_taskTypeHasBeenSet(false),
    m_evaluationTypeSetHasBeenSet(false),
    m_evaluationRangeTypeHasBeenSet(false),
    m_contrastInfoSetHasBeenSet(false),
    m_contrastMediaSetHasBeenSet(false),
    m_contrastTemplateSetHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startFrameIndexHasBeenSet(false),
    m_endFrameIndexHasBeenSet(false),
    m_resolutionAlignmentModeHasBeenSet(false),
    m_bitrateSetHasBeenSet(false),
    m_vCRFSetHasBeenSet(false)
{
}

CoreInternalOutcome EvaluationTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("EvaluationTypeSet") && !value["EvaluationTypeSet"].IsNull())
    {
        if (!value["EvaluationTypeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.EvaluationTypeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EvaluationTypeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_evaluationTypeSet.push_back((*itr).GetString());
        }
        m_evaluationTypeSetHasBeenSet = true;
    }

    if (value.HasMember("EvaluationRangeType") && !value["EvaluationRangeType"].IsNull())
    {
        if (!value["EvaluationRangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.EvaluationRangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evaluationRangeType = string(value["EvaluationRangeType"].GetString());
        m_evaluationRangeTypeHasBeenSet = true;
    }

    if (value.HasMember("ContrastInfoSet") && !value["ContrastInfoSet"].IsNull())
    {
        if (!value["ContrastInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.ContrastInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ContrastInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contrastInfoSet.push_back(item);
        }
        m_contrastInfoSetHasBeenSet = true;
    }

    if (value.HasMember("ContrastMediaSet") && !value["ContrastMediaSet"].IsNull())
    {
        if (!value["ContrastMediaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.ContrastMediaSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ContrastMediaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EvaluationMediaInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contrastMediaSet.push_back(item);
        }
        m_contrastMediaSetHasBeenSet = true;
    }

    if (value.HasMember("ContrastTemplateSet") && !value["ContrastTemplateSet"].IsNull())
    {
        if (!value["ContrastTemplateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.ContrastTemplateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ContrastTemplateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EvaluationTemplateInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contrastTemplateSet.push_back(item);
        }
        m_contrastTemplateSetHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StartFrameIndex") && !value["StartFrameIndex"].IsNull())
    {
        if (!value["StartFrameIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.StartFrameIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startFrameIndex = value["StartFrameIndex"].GetUint64();
        m_startFrameIndexHasBeenSet = true;
    }

    if (value.HasMember("EndFrameIndex") && !value["EndFrameIndex"].IsNull())
    {
        if (!value["EndFrameIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.EndFrameIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endFrameIndex = value["EndFrameIndex"].GetUint64();
        m_endFrameIndexHasBeenSet = true;
    }

    if (value.HasMember("ResolutionAlignmentMode") && !value["ResolutionAlignmentMode"].IsNull())
    {
        if (!value["ResolutionAlignmentMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.ResolutionAlignmentMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionAlignmentMode = string(value["ResolutionAlignmentMode"].GetString());
        m_resolutionAlignmentModeHasBeenSet = true;
    }

    if (value.HasMember("BitrateSet") && !value["BitrateSet"].IsNull())
    {
        if (!value["BitrateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.BitrateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BitrateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bitrateSet.push_back((*itr).GetInt64());
        }
        m_bitrateSetHasBeenSet = true;
    }

    if (value.HasMember("VCRFSet") && !value["VCRFSet"].IsNull())
    {
        if (!value["VCRFSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EvaluationTaskInput.VCRFSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VCRFSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vCRFSet.push_back((*itr).GetInt64());
        }
        m_vCRFSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EvaluationTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_evaluationTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvaluationTypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_evaluationTypeSet.begin(); itr != m_evaluationTypeSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_evaluationRangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvaluationRangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evaluationRangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_contrastInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContrastInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contrastInfoSet.begin(); itr != m_contrastInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_contrastMediaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContrastMediaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contrastMediaSet.begin(); itr != m_contrastMediaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_contrastTemplateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContrastTemplateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contrastTemplateSet.begin(); itr != m_contrastTemplateSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startFrameIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartFrameIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startFrameIndex, allocator);
    }

    if (m_endFrameIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFrameIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endFrameIndex, allocator);
    }

    if (m_resolutionAlignmentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionAlignmentMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolutionAlignmentMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitrateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bitrateSet.begin(); itr != m_bitrateSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_vCRFSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCRFSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vCRFSet.begin(); itr != m_vCRFSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string EvaluationTaskInput::GetTaskType() const
{
    return m_taskType;
}

void EvaluationTaskInput::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool EvaluationTaskInput::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> EvaluationTaskInput::GetEvaluationTypeSet() const
{
    return m_evaluationTypeSet;
}

void EvaluationTaskInput::SetEvaluationTypeSet(const vector<string>& _evaluationTypeSet)
{
    m_evaluationTypeSet = _evaluationTypeSet;
    m_evaluationTypeSetHasBeenSet = true;
}

bool EvaluationTaskInput::EvaluationTypeSetHasBeenSet() const
{
    return m_evaluationTypeSetHasBeenSet;
}

string EvaluationTaskInput::GetEvaluationRangeType() const
{
    return m_evaluationRangeType;
}

void EvaluationTaskInput::SetEvaluationRangeType(const string& _evaluationRangeType)
{
    m_evaluationRangeType = _evaluationRangeType;
    m_evaluationRangeTypeHasBeenSet = true;
}

bool EvaluationTaskInput::EvaluationRangeTypeHasBeenSet() const
{
    return m_evaluationRangeTypeHasBeenSet;
}

vector<MediaInputInfo> EvaluationTaskInput::GetContrastInfoSet() const
{
    return m_contrastInfoSet;
}

void EvaluationTaskInput::SetContrastInfoSet(const vector<MediaInputInfo>& _contrastInfoSet)
{
    m_contrastInfoSet = _contrastInfoSet;
    m_contrastInfoSetHasBeenSet = true;
}

bool EvaluationTaskInput::ContrastInfoSetHasBeenSet() const
{
    return m_contrastInfoSetHasBeenSet;
}

vector<EvaluationMediaInputInfo> EvaluationTaskInput::GetContrastMediaSet() const
{
    return m_contrastMediaSet;
}

void EvaluationTaskInput::SetContrastMediaSet(const vector<EvaluationMediaInputInfo>& _contrastMediaSet)
{
    m_contrastMediaSet = _contrastMediaSet;
    m_contrastMediaSetHasBeenSet = true;
}

bool EvaluationTaskInput::ContrastMediaSetHasBeenSet() const
{
    return m_contrastMediaSetHasBeenSet;
}

vector<EvaluationTemplateInputInfo> EvaluationTaskInput::GetContrastTemplateSet() const
{
    return m_contrastTemplateSet;
}

void EvaluationTaskInput::SetContrastTemplateSet(const vector<EvaluationTemplateInputInfo>& _contrastTemplateSet)
{
    m_contrastTemplateSet = _contrastTemplateSet;
    m_contrastTemplateSetHasBeenSet = true;
}

bool EvaluationTaskInput::ContrastTemplateSetHasBeenSet() const
{
    return m_contrastTemplateSetHasBeenSet;
}

uint64_t EvaluationTaskInput::GetStartTime() const
{
    return m_startTime;
}

void EvaluationTaskInput::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool EvaluationTaskInput::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t EvaluationTaskInput::GetEndTime() const
{
    return m_endTime;
}

void EvaluationTaskInput::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool EvaluationTaskInput::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t EvaluationTaskInput::GetStartFrameIndex() const
{
    return m_startFrameIndex;
}

void EvaluationTaskInput::SetStartFrameIndex(const uint64_t& _startFrameIndex)
{
    m_startFrameIndex = _startFrameIndex;
    m_startFrameIndexHasBeenSet = true;
}

bool EvaluationTaskInput::StartFrameIndexHasBeenSet() const
{
    return m_startFrameIndexHasBeenSet;
}

uint64_t EvaluationTaskInput::GetEndFrameIndex() const
{
    return m_endFrameIndex;
}

void EvaluationTaskInput::SetEndFrameIndex(const uint64_t& _endFrameIndex)
{
    m_endFrameIndex = _endFrameIndex;
    m_endFrameIndexHasBeenSet = true;
}

bool EvaluationTaskInput::EndFrameIndexHasBeenSet() const
{
    return m_endFrameIndexHasBeenSet;
}

string EvaluationTaskInput::GetResolutionAlignmentMode() const
{
    return m_resolutionAlignmentMode;
}

void EvaluationTaskInput::SetResolutionAlignmentMode(const string& _resolutionAlignmentMode)
{
    m_resolutionAlignmentMode = _resolutionAlignmentMode;
    m_resolutionAlignmentModeHasBeenSet = true;
}

bool EvaluationTaskInput::ResolutionAlignmentModeHasBeenSet() const
{
    return m_resolutionAlignmentModeHasBeenSet;
}

vector<int64_t> EvaluationTaskInput::GetBitrateSet() const
{
    return m_bitrateSet;
}

void EvaluationTaskInput::SetBitrateSet(const vector<int64_t>& _bitrateSet)
{
    m_bitrateSet = _bitrateSet;
    m_bitrateSetHasBeenSet = true;
}

bool EvaluationTaskInput::BitrateSetHasBeenSet() const
{
    return m_bitrateSetHasBeenSet;
}

vector<int64_t> EvaluationTaskInput::GetVCRFSet() const
{
    return m_vCRFSet;
}

void EvaluationTaskInput::SetVCRFSet(const vector<int64_t>& _vCRFSet)
{
    m_vCRFSet = _vCRFSet;
    m_vCRFSetHasBeenSet = true;
}

bool EvaluationTaskInput::VCRFSetHasBeenSet() const
{
    return m_vCRFSetHasBeenSet;
}

