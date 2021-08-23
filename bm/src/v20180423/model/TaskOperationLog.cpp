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

#include <tencentcloud/bm/v20180423/model/TaskOperationLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

TaskOperationLog::TaskOperationLog() :
    m_taskStepHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operationDetailHasBeenSet(false),
    m_operationTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskOperationLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskStep") && !value["TaskStep"].IsNull())
    {
        if (!value["TaskStep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOperationLog.TaskStep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStep = string(value["TaskStep"].GetString());
        m_taskStepHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOperationLog.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("OperationDetail") && !value["OperationDetail"].IsNull())
    {
        if (!value["OperationDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOperationLog.OperationDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationDetail = string(value["OperationDetail"].GetString());
        m_operationDetailHasBeenSet = true;
    }

    if (value.HasMember("OperationTime") && !value["OperationTime"].IsNull())
    {
        if (!value["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOperationLog.OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(value["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskOperationLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStep.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_operationDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskOperationLog::GetTaskStep() const
{
    return m_taskStep;
}

void TaskOperationLog::SetTaskStep(const string& _taskStep)
{
    m_taskStep = _taskStep;
    m_taskStepHasBeenSet = true;
}

bool TaskOperationLog::TaskStepHasBeenSet() const
{
    return m_taskStepHasBeenSet;
}

string TaskOperationLog::GetOperator() const
{
    return m_operator;
}

void TaskOperationLog::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool TaskOperationLog::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string TaskOperationLog::GetOperationDetail() const
{
    return m_operationDetail;
}

void TaskOperationLog::SetOperationDetail(const string& _operationDetail)
{
    m_operationDetail = _operationDetail;
    m_operationDetailHasBeenSet = true;
}

bool TaskOperationLog::OperationDetailHasBeenSet() const
{
    return m_operationDetailHasBeenSet;
}

string TaskOperationLog::GetOperationTime() const
{
    return m_operationTime;
}

void TaskOperationLog::SetOperationTime(const string& _operationTime)
{
    m_operationTime = _operationTime;
    m_operationTimeHasBeenSet = true;
}

bool TaskOperationLog::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

