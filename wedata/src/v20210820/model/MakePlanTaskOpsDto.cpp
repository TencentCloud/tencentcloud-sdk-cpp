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

#include <tencentcloud/wedata/v20210820/model/MakePlanTaskOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

MakePlanTaskOpsDto::MakePlanTaskOpsDto() :
    m_taskBaseInfoHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_completePercentHasBeenSet(false),
    m_successPercentHasBeenSet(false),
    m_instanceTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome MakePlanTaskOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskBaseInfo") && !value["TaskBaseInfo"].IsNull())
    {
        if (!value["TaskBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanTaskOpsDto.TaskBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskBaseInfo.Deserialize(value["TaskBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanTaskOpsDto.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("CompletePercent") && !value["CompletePercent"].IsNull())
    {
        if (!value["CompletePercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanTaskOpsDto.CompletePercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completePercent = value["CompletePercent"].GetInt64();
        m_completePercentHasBeenSet = true;
    }

    if (value.HasMember("SuccessPercent") && !value["SuccessPercent"].IsNull())
    {
        if (!value["SuccessPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanTaskOpsDto.SuccessPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successPercent = value["SuccessPercent"].GetInt64();
        m_successPercentHasBeenSet = true;
    }

    if (value.HasMember("InstanceTotalCount") && !value["InstanceTotalCount"].IsNull())
    {
        if (!value["InstanceTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanTaskOpsDto.InstanceTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTotalCount = value["InstanceTotalCount"].GetInt64();
        m_instanceTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MakePlanTaskOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_completePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completePercent, allocator);
    }

    if (m_successPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successPercent, allocator);
    }

    if (m_instanceTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceTotalCount, allocator);
    }

}


TaskOpsDto MakePlanTaskOpsDto::GetTaskBaseInfo() const
{
    return m_taskBaseInfo;
}

void MakePlanTaskOpsDto::SetTaskBaseInfo(const TaskOpsDto& _taskBaseInfo)
{
    m_taskBaseInfo = _taskBaseInfo;
    m_taskBaseInfoHasBeenSet = true;
}

bool MakePlanTaskOpsDto::TaskBaseInfoHasBeenSet() const
{
    return m_taskBaseInfoHasBeenSet;
}

int64_t MakePlanTaskOpsDto::GetInstanceCount() const
{
    return m_instanceCount;
}

void MakePlanTaskOpsDto::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool MakePlanTaskOpsDto::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t MakePlanTaskOpsDto::GetCompletePercent() const
{
    return m_completePercent;
}

void MakePlanTaskOpsDto::SetCompletePercent(const int64_t& _completePercent)
{
    m_completePercent = _completePercent;
    m_completePercentHasBeenSet = true;
}

bool MakePlanTaskOpsDto::CompletePercentHasBeenSet() const
{
    return m_completePercentHasBeenSet;
}

int64_t MakePlanTaskOpsDto::GetSuccessPercent() const
{
    return m_successPercent;
}

void MakePlanTaskOpsDto::SetSuccessPercent(const int64_t& _successPercent)
{
    m_successPercent = _successPercent;
    m_successPercentHasBeenSet = true;
}

bool MakePlanTaskOpsDto::SuccessPercentHasBeenSet() const
{
    return m_successPercentHasBeenSet;
}

int64_t MakePlanTaskOpsDto::GetInstanceTotalCount() const
{
    return m_instanceTotalCount;
}

void MakePlanTaskOpsDto::SetInstanceTotalCount(const int64_t& _instanceTotalCount)
{
    m_instanceTotalCount = _instanceTotalCount;
    m_instanceTotalCountHasBeenSet = true;
}

bool MakePlanTaskOpsDto::InstanceTotalCountHasBeenSet() const
{
    return m_instanceTotalCountHasBeenSet;
}

