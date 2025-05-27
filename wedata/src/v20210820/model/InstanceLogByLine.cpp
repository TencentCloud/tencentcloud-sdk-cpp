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

#include <tencentcloud/wedata/v20210820/model/InstanceLogByLine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLogByLine::InstanceLogByLine() :
    m_countHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_overHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_workerTypeHasBeenSet(false),
    m_jobLogErrorTipHasBeenSet(false),
    m_executionExtendedPropsHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLogByLine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_content.push_back((*itr).GetString());
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Over") && !value["Over"].IsNull())
    {
        if (!value["Over"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.Over` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_over = value["Over"].GetBool();
        m_overHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("WorkerType") && !value["WorkerType"].IsNull())
    {
        if (!value["WorkerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.WorkerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerType = value["WorkerType"].GetInt64();
        m_workerTypeHasBeenSet = true;
    }

    if (value.HasMember("JobLogErrorTip") && !value["JobLogErrorTip"].IsNull())
    {
        if (!value["JobLogErrorTip"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.JobLogErrorTip` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobLogErrorTip.Deserialize(value["JobLogErrorTip"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobLogErrorTipHasBeenSet = true;
    }

    if (value.HasMember("ExecutionExtendedProps") && !value["ExecutionExtendedProps"].IsNull())
    {
        if (!value["ExecutionExtendedProps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.ExecutionExtendedProps` is not array type"));

        const rapidjson::Value &tmpValue = value["ExecutionExtendedProps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExtensionInfoVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_executionExtendedProps.push_back(item);
        }
        m_executionExtendedPropsHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogByLine.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLogByLine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_overHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Over";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_over, allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_workerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerType, allocator);
    }

    if (m_jobLogErrorTipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobLogErrorTip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobLogErrorTip.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_executionExtendedPropsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionExtendedProps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_executionExtendedProps.begin(); itr != m_executionExtendedProps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceLogByLine::GetCount() const
{
    return m_count;
}

void InstanceLogByLine::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool InstanceLogByLine::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<string> InstanceLogByLine::GetContent() const
{
    return m_content;
}

void InstanceLogByLine::SetContent(const vector<string>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool InstanceLogByLine::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

bool InstanceLogByLine::GetOver() const
{
    return m_over;
}

void InstanceLogByLine::SetOver(const bool& _over)
{
    m_over = _over;
    m_overHasBeenSet = true;
}

bool InstanceLogByLine::OverHasBeenSet() const
{
    return m_overHasBeenSet;
}

string InstanceLogByLine::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceLogByLine::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceLogByLine::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string InstanceLogByLine::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceLogByLine::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceLogByLine::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceLogByLine::GetTaskId() const
{
    return m_taskId;
}

void InstanceLogByLine::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceLogByLine::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t InstanceLogByLine::GetWorkerType() const
{
    return m_workerType;
}

void InstanceLogByLine::SetWorkerType(const int64_t& _workerType)
{
    m_workerType = _workerType;
    m_workerTypeHasBeenSet = true;
}

bool InstanceLogByLine::WorkerTypeHasBeenSet() const
{
    return m_workerTypeHasBeenSet;
}

JobLogErrorTip InstanceLogByLine::GetJobLogErrorTip() const
{
    return m_jobLogErrorTip;
}

void InstanceLogByLine::SetJobLogErrorTip(const JobLogErrorTip& _jobLogErrorTip)
{
    m_jobLogErrorTip = _jobLogErrorTip;
    m_jobLogErrorTipHasBeenSet = true;
}

bool InstanceLogByLine::JobLogErrorTipHasBeenSet() const
{
    return m_jobLogErrorTipHasBeenSet;
}

vector<ExtensionInfoVO> InstanceLogByLine::GetExecutionExtendedProps() const
{
    return m_executionExtendedProps;
}

void InstanceLogByLine::SetExecutionExtendedProps(const vector<ExtensionInfoVO>& _executionExtendedProps)
{
    m_executionExtendedProps = _executionExtendedProps;
    m_executionExtendedPropsHasBeenSet = true;
}

bool InstanceLogByLine::ExecutionExtendedPropsHasBeenSet() const
{
    return m_executionExtendedPropsHasBeenSet;
}

string InstanceLogByLine::GetExtInfo() const
{
    return m_extInfo;
}

void InstanceLogByLine::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool InstanceLogByLine::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

