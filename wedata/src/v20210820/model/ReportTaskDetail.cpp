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

#include <tencentcloud/wedata/v20210820/model/ReportTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ReportTaskDetail::ReportTaskDetail() :
    m_engineTaskIdHasBeenSet(false),
    m_engineExeStatusHasBeenSet(false),
    m_engineExeStartTimeHasBeenSet(false),
    m_engineExeEndTimeHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_businessInfoHasBeenSet(false),
    m_engineTaskInfoHasBeenSet(false)
{
}

CoreInternalOutcome ReportTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineTaskId") && !value["EngineTaskId"].IsNull())
    {
        if (!value["EngineTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskDetail.EngineTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineTaskId = string(value["EngineTaskId"].GetString());
        m_engineTaskIdHasBeenSet = true;
    }

    if (value.HasMember("EngineExeStatus") && !value["EngineExeStatus"].IsNull())
    {
        if (!value["EngineExeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskDetail.EngineExeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeStatus = string(value["EngineExeStatus"].GetString());
        m_engineExeStatusHasBeenSet = true;
    }

    if (value.HasMember("EngineExeStartTime") && !value["EngineExeStartTime"].IsNull())
    {
        if (!value["EngineExeStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskDetail.EngineExeStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeStartTime = string(value["EngineExeStartTime"].GetString());
        m_engineExeStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EngineExeEndTime") && !value["EngineExeEndTime"].IsNull())
    {
        if (!value["EngineExeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskDetail.EngineExeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeEndTime = string(value["EngineExeEndTime"].GetString());
        m_engineExeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskDetail.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessInfo") && !value["BusinessInfo"].IsNull())
    {
        if (!value["BusinessInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskDetail.BusinessInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessInfo = string(value["BusinessInfo"].GetString());
        m_businessInfoHasBeenSet = true;
    }

    if (value.HasMember("EngineTaskInfo") && !value["EngineTaskInfo"].IsNull())
    {
        if (!value["EngineTaskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTaskDetail.EngineTaskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_engineTaskInfo.Deserialize(value["EngineTaskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_engineTaskInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_businessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTaskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_engineTaskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ReportTaskDetail::GetEngineTaskId() const
{
    return m_engineTaskId;
}

void ReportTaskDetail::SetEngineTaskId(const string& _engineTaskId)
{
    m_engineTaskId = _engineTaskId;
    m_engineTaskIdHasBeenSet = true;
}

bool ReportTaskDetail::EngineTaskIdHasBeenSet() const
{
    return m_engineTaskIdHasBeenSet;
}

string ReportTaskDetail::GetEngineExeStatus() const
{
    return m_engineExeStatus;
}

void ReportTaskDetail::SetEngineExeStatus(const string& _engineExeStatus)
{
    m_engineExeStatus = _engineExeStatus;
    m_engineExeStatusHasBeenSet = true;
}

bool ReportTaskDetail::EngineExeStatusHasBeenSet() const
{
    return m_engineExeStatusHasBeenSet;
}

string ReportTaskDetail::GetEngineExeStartTime() const
{
    return m_engineExeStartTime;
}

void ReportTaskDetail::SetEngineExeStartTime(const string& _engineExeStartTime)
{
    m_engineExeStartTime = _engineExeStartTime;
    m_engineExeStartTimeHasBeenSet = true;
}

bool ReportTaskDetail::EngineExeStartTimeHasBeenSet() const
{
    return m_engineExeStartTimeHasBeenSet;
}

string ReportTaskDetail::GetEngineExeEndTime() const
{
    return m_engineExeEndTime;
}

void ReportTaskDetail::SetEngineExeEndTime(const string& _engineExeEndTime)
{
    m_engineExeEndTime = _engineExeEndTime;
    m_engineExeEndTimeHasBeenSet = true;
}

bool ReportTaskDetail::EngineExeEndTimeHasBeenSet() const
{
    return m_engineExeEndTimeHasBeenSet;
}

uint64_t ReportTaskDetail::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void ReportTaskDetail::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool ReportTaskDetail::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string ReportTaskDetail::GetBusinessInfo() const
{
    return m_businessInfo;
}

void ReportTaskDetail::SetBusinessInfo(const string& _businessInfo)
{
    m_businessInfo = _businessInfo;
    m_businessInfoHasBeenSet = true;
}

bool ReportTaskDetail::BusinessInfoHasBeenSet() const
{
    return m_businessInfoHasBeenSet;
}

EngineTaskInfo ReportTaskDetail::GetEngineTaskInfo() const
{
    return m_engineTaskInfo;
}

void ReportTaskDetail::SetEngineTaskInfo(const EngineTaskInfo& _engineTaskInfo)
{
    m_engineTaskInfo = _engineTaskInfo;
    m_engineTaskInfoHasBeenSet = true;
}

bool ReportTaskDetail::EngineTaskInfoHasBeenSet() const
{
    return m_engineTaskInfoHasBeenSet;
}

