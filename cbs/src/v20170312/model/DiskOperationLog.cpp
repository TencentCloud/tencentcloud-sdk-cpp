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

#include <tencentcloud/cbs/v20170312/model/DiskOperationLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

DiskOperationLog::DiskOperationLog() :
    m_operatorHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_operationStateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome DiskOperationLog::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiskOperationLog.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiskOperationLog.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiskOperationLog.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("OperationState") && !value["OperationState"].IsNull())
    {
        if (!value["OperationState"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiskOperationLog.OperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationState = string(value["OperationState"].GetString());
        m_operationStateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiskOperationLog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiskOperationLog.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskOperationLog::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operationState.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string DiskOperationLog::GetOperator() const
{
    return m_operator;
}

void DiskOperationLog::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DiskOperationLog::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DiskOperationLog::GetOperation() const
{
    return m_operation;
}

void DiskOperationLog::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DiskOperationLog::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DiskOperationLog::GetDiskId() const
{
    return m_diskId;
}

void DiskOperationLog::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool DiskOperationLog::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string DiskOperationLog::GetOperationState() const
{
    return m_operationState;
}

void DiskOperationLog::SetOperationState(const string& _operationState)
{
    m_operationState = _operationState;
    m_operationStateHasBeenSet = true;
}

bool DiskOperationLog::OperationStateHasBeenSet() const
{
    return m_operationStateHasBeenSet;
}

string DiskOperationLog::GetStartTime() const
{
    return m_startTime;
}

void DiskOperationLog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DiskOperationLog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DiskOperationLog::GetEndTime() const
{
    return m_endTime;
}

void DiskOperationLog::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DiskOperationLog::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

