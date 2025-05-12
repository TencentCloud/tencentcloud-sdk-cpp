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

#include <tencentcloud/wedata/v20210820/model/TaskFormParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskFormParams::TaskFormParams() :
    m_taskIdHasBeenSet(false),
    m_mapParamListHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_inChargeIdHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_latestSavedVersionHasBeenSet(false),
    m_latestSavedVersionIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskFormParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("MapParamList") && !value["MapParamList"].IsNull())
    {
        if (!value["MapParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.MapParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["MapParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamMapDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mapParamList.push_back(item);
        }
        m_mapParamListHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("InChargeId") && !value["InChargeId"].IsNull())
    {
        if (!value["InChargeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.InChargeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeId = string(value["InChargeId"].GetString());
        m_inChargeIdHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("LatestSavedVersion") && !value["LatestSavedVersion"].IsNull())
    {
        if (!value["LatestSavedVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.LatestSavedVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSavedVersion = string(value["LatestSavedVersion"].GetString());
        m_latestSavedVersionHasBeenSet = true;
    }

    if (value.HasMember("LatestSavedVersionId") && !value["LatestSavedVersionId"].IsNull())
    {
        if (!value["LatestSavedVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFormParams.LatestSavedVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSavedVersionId = string(value["LatestSavedVersionId"].GetString());
        m_latestSavedVersionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFormParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_mapParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mapParamList.begin(); itr != m_mapParamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeId.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSavedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSavedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSavedVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSavedVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSavedVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSavedVersionId.c_str(), allocator).Move(), allocator);
    }

}


string TaskFormParams::GetTaskId() const
{
    return m_taskId;
}

void TaskFormParams::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskFormParams::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<ParamMapDsDto> TaskFormParams::GetMapParamList() const
{
    return m_mapParamList;
}

void TaskFormParams::SetMapParamList(const vector<ParamMapDsDto>& _mapParamList)
{
    m_mapParamList = _mapParamList;
    m_mapParamListHasBeenSet = true;
}

bool TaskFormParams::MapParamListHasBeenSet() const
{
    return m_mapParamListHasBeenSet;
}

string TaskFormParams::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskFormParams::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskFormParams::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskFormParams::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskFormParams::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskFormParams::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskFormParams::GetInChargeId() const
{
    return m_inChargeId;
}

void TaskFormParams::SetInChargeId(const string& _inChargeId)
{
    m_inChargeId = _inChargeId;
    m_inChargeIdHasBeenSet = true;
}

bool TaskFormParams::InChargeIdHasBeenSet() const
{
    return m_inChargeIdHasBeenSet;
}

string TaskFormParams::GetInCharge() const
{
    return m_inCharge;
}

void TaskFormParams::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskFormParams::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string TaskFormParams::GetTaskName() const
{
    return m_taskName;
}

void TaskFormParams::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskFormParams::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskFormParams::GetProductName() const
{
    return m_productName;
}

void TaskFormParams::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool TaskFormParams::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string TaskFormParams::GetLatestSavedVersion() const
{
    return m_latestSavedVersion;
}

void TaskFormParams::SetLatestSavedVersion(const string& _latestSavedVersion)
{
    m_latestSavedVersion = _latestSavedVersion;
    m_latestSavedVersionHasBeenSet = true;
}

bool TaskFormParams::LatestSavedVersionHasBeenSet() const
{
    return m_latestSavedVersionHasBeenSet;
}

string TaskFormParams::GetLatestSavedVersionId() const
{
    return m_latestSavedVersionId;
}

void TaskFormParams::SetLatestSavedVersionId(const string& _latestSavedVersionId)
{
    m_latestSavedVersionId = _latestSavedVersionId;
    m_latestSavedVersionIdHasBeenSet = true;
}

bool TaskFormParams::LatestSavedVersionIdHasBeenSet() const
{
    return m_latestSavedVersionIdHasBeenSet;
}

