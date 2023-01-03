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

#include <tencentcloud/vod/v20180717/model/SplitMediaTaskSegmentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SplitMediaTaskSegmentInfo::SplitMediaTaskSegmentInfo() :
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_procedureTaskIdHasBeenSet(false),
    m_reviewAudioVideoTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome SplitMediaTaskSegmentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SplitMediaTaskSegmentInfo.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SplitMediaTaskSegmentInfo.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("ProcedureTaskId") && !value["ProcedureTaskId"].IsNull())
    {
        if (!value["ProcedureTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplitMediaTaskSegmentInfo.ProcedureTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedureTaskId = string(value["ProcedureTaskId"].GetString());
        m_procedureTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ReviewAudioVideoTaskId") && !value["ReviewAudioVideoTaskId"].IsNull())
    {
        if (!value["ReviewAudioVideoTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SplitMediaTaskSegmentInfo.ReviewAudioVideoTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewAudioVideoTaskId = string(value["ReviewAudioVideoTaskId"].GetString());
        m_reviewAudioVideoTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SplitMediaTaskSegmentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_procedureTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedureTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewAudioVideoTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewAudioVideoTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewAudioVideoTaskId.c_str(), allocator).Move(), allocator);
    }

}


SplitMediaTaskInput SplitMediaTaskSegmentInfo::GetInput() const
{
    return m_input;
}

void SplitMediaTaskSegmentInfo::SetInput(const SplitMediaTaskInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool SplitMediaTaskSegmentInfo::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

TaskOutputMediaInfo SplitMediaTaskSegmentInfo::GetOutput() const
{
    return m_output;
}

void SplitMediaTaskSegmentInfo::SetOutput(const TaskOutputMediaInfo& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool SplitMediaTaskSegmentInfo::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string SplitMediaTaskSegmentInfo::GetProcedureTaskId() const
{
    return m_procedureTaskId;
}

void SplitMediaTaskSegmentInfo::SetProcedureTaskId(const string& _procedureTaskId)
{
    m_procedureTaskId = _procedureTaskId;
    m_procedureTaskIdHasBeenSet = true;
}

bool SplitMediaTaskSegmentInfo::ProcedureTaskIdHasBeenSet() const
{
    return m_procedureTaskIdHasBeenSet;
}

string SplitMediaTaskSegmentInfo::GetReviewAudioVideoTaskId() const
{
    return m_reviewAudioVideoTaskId;
}

void SplitMediaTaskSegmentInfo::SetReviewAudioVideoTaskId(const string& _reviewAudioVideoTaskId)
{
    m_reviewAudioVideoTaskId = _reviewAudioVideoTaskId;
    m_reviewAudioVideoTaskIdHasBeenSet = true;
}

bool SplitMediaTaskSegmentInfo::ReviewAudioVideoTaskIdHasBeenSet() const
{
    return m_reviewAudioVideoTaskIdHasBeenSet;
}

