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

#include <tencentcloud/dlc/v20210125/model/FlowDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

FlowDetail::FlowDetail() :
    m_flowIdHasBeenSet(false),
    m_workFlowIdHasBeenSet(false),
    m_workFlowCodeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_activitiesHasBeenSet(false)
{
}

CoreInternalOutcome FlowDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetail.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowId") && !value["WorkFlowId"].IsNull())
    {
        if (!value["WorkFlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetail.WorkFlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowId = string(value["WorkFlowId"].GetString());
        m_workFlowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowCode") && !value["WorkFlowCode"].IsNull())
    {
        if (!value["WorkFlowCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetail.WorkFlowCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowCode = string(value["WorkFlowCode"].GetString());
        m_workFlowCodeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetail.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Activities") && !value["Activities"].IsNull())
    {
        if (!value["Activities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowDetail.Activities` is not array type"));

        const rapidjson::Value &tmpValue = value["Activities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowActivityDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activities.push_back(item);
        }
        m_activitiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_workFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowCode.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_activitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Activities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activities.begin(); itr != m_activities.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t FlowDetail::GetFlowId() const
{
    return m_flowId;
}

void FlowDetail::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowDetail::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string FlowDetail::GetWorkFlowId() const
{
    return m_workFlowId;
}

void FlowDetail::SetWorkFlowId(const string& _workFlowId)
{
    m_workFlowId = _workFlowId;
    m_workFlowIdHasBeenSet = true;
}

bool FlowDetail::WorkFlowIdHasBeenSet() const
{
    return m_workFlowIdHasBeenSet;
}

string FlowDetail::GetWorkFlowCode() const
{
    return m_workFlowCode;
}

void FlowDetail::SetWorkFlowCode(const string& _workFlowCode)
{
    m_workFlowCode = _workFlowCode;
    m_workFlowCodeHasBeenSet = true;
}

bool FlowDetail::WorkFlowCodeHasBeenSet() const
{
    return m_workFlowCodeHasBeenSet;
}

int64_t FlowDetail::GetProgress() const
{
    return m_progress;
}

void FlowDetail::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool FlowDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t FlowDetail::GetStatus() const
{
    return m_status;
}

void FlowDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FlowDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string FlowDetail::GetCreateTime() const
{
    return m_createTime;
}

void FlowDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FlowDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<FlowActivityDetail> FlowDetail::GetActivities() const
{
    return m_activities;
}

void FlowDetail::SetActivities(const vector<FlowActivityDetail>& _activities)
{
    m_activities = _activities;
    m_activitiesHasBeenSet = true;
}

bool FlowDetail::ActivitiesHasBeenSet() const
{
    return m_activitiesHasBeenSet;
}

