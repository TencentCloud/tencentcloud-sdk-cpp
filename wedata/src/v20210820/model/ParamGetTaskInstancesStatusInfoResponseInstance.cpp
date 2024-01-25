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

#include <tencentcloud/wedata/v20210820/model/ParamGetTaskInstancesStatusInfoResponseInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ParamGetTaskInstancesStatusInfoResponseInstance::ParamGetTaskInstancesStatusInfoResponseInstance() :
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome ParamGetTaskInstancesStatusInfoResponseInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamGetTaskInstancesStatusInfoResponseInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamGetTaskInstancesStatusInfoResponseInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamGetTaskInstancesStatusInfoResponseInstance.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamGetTaskInstancesStatusInfoResponseInstance.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamGetTaskInstancesStatusInfoResponseInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

}


string ParamGetTaskInstancesStatusInfoResponseInstance::GetInstanceId() const
{
    return m_instanceId;
}

void ParamGetTaskInstancesStatusInfoResponseInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ParamGetTaskInstancesStatusInfoResponseInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ParamGetTaskInstancesStatusInfoResponseInstance::GetStatus() const
{
    return m_status;
}

void ParamGetTaskInstancesStatusInfoResponseInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ParamGetTaskInstancesStatusInfoResponseInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ParamGetTaskInstancesStatusInfoResponseInstance::GetRecordId() const
{
    return m_recordId;
}

void ParamGetTaskInstancesStatusInfoResponseInstance::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ParamGetTaskInstancesStatusInfoResponseInstance::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string ParamGetTaskInstancesStatusInfoResponseInstance::GetTaskId() const
{
    return m_taskId;
}

void ParamGetTaskInstancesStatusInfoResponseInstance::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ParamGetTaskInstancesStatusInfoResponseInstance::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

