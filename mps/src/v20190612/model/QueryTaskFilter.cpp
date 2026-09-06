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

#include <tencentcloud/mps/v20190612/model/QueryTaskFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

QueryTaskFilter::QueryTaskFilter() :
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_executeModeHasBeenSet(false),
    m_videoTypeHasBeenSet(false),
    m_modelTierHasBeenSet(false)
{
}

CoreInternalOutcome QueryTaskFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("ExecuteMode") && !value["ExecuteMode"].IsNull())
    {
        if (!value["ExecuteMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.ExecuteMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeMode = string(value["ExecuteMode"].GetString());
        m_executeModeHasBeenSet = true;
    }

    if (value.HasMember("VideoType") && !value["VideoType"].IsNull())
    {
        if (!value["VideoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.VideoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoType = string(value["VideoType"].GetString());
        m_videoTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelTier") && !value["ModelTier"].IsNull())
    {
        if (!value["ModelTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTaskFilter.ModelTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelTier = string(value["ModelTier"].GetString());
        m_modelTierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryTaskFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

    if (m_executeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_videoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelTier.c_str(), allocator).Move(), allocator);
    }

}


string QueryTaskFilter::GetTaskId() const
{
    return m_taskId;
}

void QueryTaskFilter::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool QueryTaskFilter::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string QueryTaskFilter::GetTaskType() const
{
    return m_taskType;
}

void QueryTaskFilter::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool QueryTaskFilter::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string QueryTaskFilter::GetTaskStatus() const
{
    return m_taskStatus;
}

void QueryTaskFilter::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool QueryTaskFilter::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string QueryTaskFilter::GetResolution() const
{
    return m_resolution;
}

void QueryTaskFilter::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool QueryTaskFilter::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string QueryTaskFilter::GetRatio() const
{
    return m_ratio;
}

void QueryTaskFilter::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool QueryTaskFilter::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string QueryTaskFilter::GetExecuteMode() const
{
    return m_executeMode;
}

void QueryTaskFilter::SetExecuteMode(const string& _executeMode)
{
    m_executeMode = _executeMode;
    m_executeModeHasBeenSet = true;
}

bool QueryTaskFilter::ExecuteModeHasBeenSet() const
{
    return m_executeModeHasBeenSet;
}

string QueryTaskFilter::GetVideoType() const
{
    return m_videoType;
}

void QueryTaskFilter::SetVideoType(const string& _videoType)
{
    m_videoType = _videoType;
    m_videoTypeHasBeenSet = true;
}

bool QueryTaskFilter::VideoTypeHasBeenSet() const
{
    return m_videoTypeHasBeenSet;
}

string QueryTaskFilter::GetModelTier() const
{
    return m_modelTier;
}

void QueryTaskFilter::SetModelTier(const string& _modelTier)
{
    m_modelTier = _modelTier;
    m_modelTierHasBeenSet = true;
}

bool QueryTaskFilter::ModelTierHasBeenSet() const
{
    return m_modelTierHasBeenSet;
}

