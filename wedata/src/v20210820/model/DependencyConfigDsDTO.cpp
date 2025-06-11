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

#include <tencentcloud/wedata/v20210820/model/DependencyConfigDsDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyConfigDsDTO::DependencyConfigDsDTO() :
    m_parentTaskHasBeenSet(false),
    m_sonTaskHasBeenSet(false),
    m_mainCyclicConfigHasBeenSet(false),
    m_subordinateCyclicConfigHasBeenSet(false),
    m_dependencyStrategyHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

CoreInternalOutcome DependencyConfigDsDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentTask") && !value["ParentTask"].IsNull())
    {
        if (!value["ParentTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTO.ParentTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parentTask.Deserialize(value["ParentTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parentTaskHasBeenSet = true;
    }

    if (value.HasMember("SonTask") && !value["SonTask"].IsNull())
    {
        if (!value["SonTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTO.SonTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sonTask.Deserialize(value["SonTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sonTaskHasBeenSet = true;
    }

    if (value.HasMember("MainCyclicConfig") && !value["MainCyclicConfig"].IsNull())
    {
        if (!value["MainCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTO.MainCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainCyclicConfig = string(value["MainCyclicConfig"].GetString());
        m_mainCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicConfig") && !value["SubordinateCyclicConfig"].IsNull())
    {
        if (!value["SubordinateCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTO.SubordinateCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicConfig = string(value["SubordinateCyclicConfig"].GetString());
        m_subordinateCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("DependencyStrategy") && !value["DependencyStrategy"].IsNull())
    {
        if (!value["DependencyStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTO.DependencyStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dependencyStrategy.Deserialize(value["DependencyStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dependencyStrategyHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTO.Offset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offset = string(value["Offset"].GetString());
        m_offsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyConfigDsDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parentTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parentTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sonTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SonTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sonTask.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_dependencyStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dependencyStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

}


TaskDsDTO DependencyConfigDsDTO::GetParentTask() const
{
    return m_parentTask;
}

void DependencyConfigDsDTO::SetParentTask(const TaskDsDTO& _parentTask)
{
    m_parentTask = _parentTask;
    m_parentTaskHasBeenSet = true;
}

bool DependencyConfigDsDTO::ParentTaskHasBeenSet() const
{
    return m_parentTaskHasBeenSet;
}

TaskDsDTO DependencyConfigDsDTO::GetSonTask() const
{
    return m_sonTask;
}

void DependencyConfigDsDTO::SetSonTask(const TaskDsDTO& _sonTask)
{
    m_sonTask = _sonTask;
    m_sonTaskHasBeenSet = true;
}

bool DependencyConfigDsDTO::SonTaskHasBeenSet() const
{
    return m_sonTaskHasBeenSet;
}

string DependencyConfigDsDTO::GetMainCyclicConfig() const
{
    return m_mainCyclicConfig;
}

void DependencyConfigDsDTO::SetMainCyclicConfig(const string& _mainCyclicConfig)
{
    m_mainCyclicConfig = _mainCyclicConfig;
    m_mainCyclicConfigHasBeenSet = true;
}

bool DependencyConfigDsDTO::MainCyclicConfigHasBeenSet() const
{
    return m_mainCyclicConfigHasBeenSet;
}

string DependencyConfigDsDTO::GetSubordinateCyclicConfig() const
{
    return m_subordinateCyclicConfig;
}

void DependencyConfigDsDTO::SetSubordinateCyclicConfig(const string& _subordinateCyclicConfig)
{
    m_subordinateCyclicConfig = _subordinateCyclicConfig;
    m_subordinateCyclicConfigHasBeenSet = true;
}

bool DependencyConfigDsDTO::SubordinateCyclicConfigHasBeenSet() const
{
    return m_subordinateCyclicConfigHasBeenSet;
}

DependencyStrategyDs DependencyConfigDsDTO::GetDependencyStrategy() const
{
    return m_dependencyStrategy;
}

void DependencyConfigDsDTO::SetDependencyStrategy(const DependencyStrategyDs& _dependencyStrategy)
{
    m_dependencyStrategy = _dependencyStrategy;
    m_dependencyStrategyHasBeenSet = true;
}

bool DependencyConfigDsDTO::DependencyStrategyHasBeenSet() const
{
    return m_dependencyStrategyHasBeenSet;
}

string DependencyConfigDsDTO::GetOffset() const
{
    return m_offset;
}

void DependencyConfigDsDTO::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DependencyConfigDsDTO::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

