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

#include <tencentcloud/wedata/v20250806/model/DependencyTaskBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DependencyTaskBrief::DependencyTaskBrief() :
    m_taskIdHasBeenSet(false),
    m_mainCyclicConfigHasBeenSet(false),
    m_subordinateCyclicConfigHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_dependencyStrategyHasBeenSet(false)
{
}

CoreInternalOutcome DependencyTaskBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskBrief.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("MainCyclicConfig") && !value["MainCyclicConfig"].IsNull())
    {
        if (!value["MainCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskBrief.MainCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainCyclicConfig = string(value["MainCyclicConfig"].GetString());
        m_mainCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicConfig") && !value["SubordinateCyclicConfig"].IsNull())
    {
        if (!value["SubordinateCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskBrief.SubordinateCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicConfig = string(value["SubordinateCyclicConfig"].GetString());
        m_subordinateCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskBrief.Offset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offset = string(value["Offset"].GetString());
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("DependencyStrategy") && !value["DependencyStrategy"].IsNull())
    {
        if (!value["DependencyStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskBrief.DependencyStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dependencyStrategy.Deserialize(value["DependencyStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dependencyStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyTaskBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_mainCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainCyclicConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_subordinateCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubordinateCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subordinateCyclicConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dependencyStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DependencyTaskBrief::GetTaskId() const
{
    return m_taskId;
}

void DependencyTaskBrief::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DependencyTaskBrief::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DependencyTaskBrief::GetMainCyclicConfig() const
{
    return m_mainCyclicConfig;
}

void DependencyTaskBrief::SetMainCyclicConfig(const string& _mainCyclicConfig)
{
    m_mainCyclicConfig = _mainCyclicConfig;
    m_mainCyclicConfigHasBeenSet = true;
}

bool DependencyTaskBrief::MainCyclicConfigHasBeenSet() const
{
    return m_mainCyclicConfigHasBeenSet;
}

string DependencyTaskBrief::GetSubordinateCyclicConfig() const
{
    return m_subordinateCyclicConfig;
}

void DependencyTaskBrief::SetSubordinateCyclicConfig(const string& _subordinateCyclicConfig)
{
    m_subordinateCyclicConfig = _subordinateCyclicConfig;
    m_subordinateCyclicConfigHasBeenSet = true;
}

bool DependencyTaskBrief::SubordinateCyclicConfigHasBeenSet() const
{
    return m_subordinateCyclicConfigHasBeenSet;
}

string DependencyTaskBrief::GetOffset() const
{
    return m_offset;
}

void DependencyTaskBrief::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DependencyTaskBrief::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

DependencyStrategyTask DependencyTaskBrief::GetDependencyStrategy() const
{
    return m_dependencyStrategy;
}

void DependencyTaskBrief::SetDependencyStrategy(const DependencyStrategyTask& _dependencyStrategy)
{
    m_dependencyStrategy = _dependencyStrategy;
    m_dependencyStrategyHasBeenSet = true;
}

bool DependencyTaskBrief::DependencyStrategyHasBeenSet() const
{
    return m_dependencyStrategyHasBeenSet;
}

