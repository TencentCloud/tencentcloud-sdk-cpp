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

#include <tencentcloud/mps/v20190612/model/AigcTaskListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AigcTaskListItem::AigcTaskListItem() :
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_taskResultCodeHasBeenSet(false),
    m_taskResultMsgHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_requestBodyHasBeenSet(false)
{
}

CoreInternalOutcome AigcTaskListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduledTime") && !value["ScheduledTime"].IsNull())
    {
        if (!value["ScheduledTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.ScheduledTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledTime = string(value["ScheduledTime"].GetString());
        m_scheduledTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishedTime") && !value["FinishedTime"].IsNull())
    {
        if (!value["FinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.FinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = string(value["FinishedTime"].GetString());
        m_finishedTimeHasBeenSet = true;
    }

    if (value.HasMember("Urls") && !value["Urls"].IsNull())
    {
        if (!value["Urls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.Urls` is not array type"));

        const rapidjson::Value &tmpValue = value["Urls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_urls.push_back((*itr).GetString());
        }
        m_urlsHasBeenSet = true;
    }

    if (value.HasMember("TaskResultCode") && !value["TaskResultCode"].IsNull())
    {
        if (!value["TaskResultCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.TaskResultCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskResultCode = value["TaskResultCode"].GetInt64();
        m_taskResultCodeHasBeenSet = true;
    }

    if (value.HasMember("TaskResultMsg") && !value["TaskResultMsg"].IsNull())
    {
        if (!value["TaskResultMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.TaskResultMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskResultMsg = string(value["TaskResultMsg"].GetString());
        m_taskResultMsgHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("RequestBody") && !value["RequestBody"].IsNull())
    {
        if (!value["RequestBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTaskListItem.RequestBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestBody = string(value["RequestBody"].GetString());
        m_requestBodyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcTaskListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskResultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskResultCode, allocator);
    }

    if (m_taskResultMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResultMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskResultMsg.c_str(), allocator).Move(), allocator);
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

    if (m_requestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestBody.c_str(), allocator).Move(), allocator);
    }

}


string AigcTaskListItem::GetTaskId() const
{
    return m_taskId;
}

void AigcTaskListItem::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AigcTaskListItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AigcTaskListItem::GetTaskType() const
{
    return m_taskType;
}

void AigcTaskListItem::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool AigcTaskListItem::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string AigcTaskListItem::GetTaskStatus() const
{
    return m_taskStatus;
}

void AigcTaskListItem::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool AigcTaskListItem::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string AigcTaskListItem::GetCreateTime() const
{
    return m_createTime;
}

void AigcTaskListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AigcTaskListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AigcTaskListItem::GetScheduledTime() const
{
    return m_scheduledTime;
}

void AigcTaskListItem::SetScheduledTime(const string& _scheduledTime)
{
    m_scheduledTime = _scheduledTime;
    m_scheduledTimeHasBeenSet = true;
}

bool AigcTaskListItem::ScheduledTimeHasBeenSet() const
{
    return m_scheduledTimeHasBeenSet;
}

string AigcTaskListItem::GetFinishedTime() const
{
    return m_finishedTime;
}

void AigcTaskListItem::SetFinishedTime(const string& _finishedTime)
{
    m_finishedTime = _finishedTime;
    m_finishedTimeHasBeenSet = true;
}

bool AigcTaskListItem::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

vector<string> AigcTaskListItem::GetUrls() const
{
    return m_urls;
}

void AigcTaskListItem::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool AigcTaskListItem::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

int64_t AigcTaskListItem::GetTaskResultCode() const
{
    return m_taskResultCode;
}

void AigcTaskListItem::SetTaskResultCode(const int64_t& _taskResultCode)
{
    m_taskResultCode = _taskResultCode;
    m_taskResultCodeHasBeenSet = true;
}

bool AigcTaskListItem::TaskResultCodeHasBeenSet() const
{
    return m_taskResultCodeHasBeenSet;
}

string AigcTaskListItem::GetTaskResultMsg() const
{
    return m_taskResultMsg;
}

void AigcTaskListItem::SetTaskResultMsg(const string& _taskResultMsg)
{
    m_taskResultMsg = _taskResultMsg;
    m_taskResultMsgHasBeenSet = true;
}

bool AigcTaskListItem::TaskResultMsgHasBeenSet() const
{
    return m_taskResultMsgHasBeenSet;
}

string AigcTaskListItem::GetResolution() const
{
    return m_resolution;
}

void AigcTaskListItem::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool AigcTaskListItem::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string AigcTaskListItem::GetRatio() const
{
    return m_ratio;
}

void AigcTaskListItem::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool AigcTaskListItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string AigcTaskListItem::GetRequestBody() const
{
    return m_requestBody;
}

void AigcTaskListItem::SetRequestBody(const string& _requestBody)
{
    m_requestBody = _requestBody;
    m_requestBodyHasBeenSet = true;
}

bool AigcTaskListItem::RequestBodyHasBeenSet() const
{
    return m_requestBodyHasBeenSet;
}

