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

#include <tencentcloud/wedata/v20210820/model/TaskByCycle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskByCycle::TaskByCycle() :
    m_numberHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskByCycle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByCycle.Number` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_number = value["Number"].GetUint64();
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByCycle.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByCycle.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskByCycle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_number, allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TaskByCycle::GetNumber() const
{
    return m_number;
}

void TaskByCycle::SetNumber(const uint64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool TaskByCycle::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string TaskByCycle::GetCycleUnit() const
{
    return m_cycleUnit;
}

void TaskByCycle::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool TaskByCycle::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string TaskByCycle::GetProjectId() const
{
    return m_projectId;
}

void TaskByCycle::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskByCycle::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

