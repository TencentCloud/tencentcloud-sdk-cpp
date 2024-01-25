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

#include <tencentcloud/wedata/v20210820/model/DependencyConfigDsDTONoRecurV3.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyConfigDsDTONoRecurV3::DependencyConfigDsDTONoRecurV3() :
    m_parentTaskHasBeenSet(false),
    m_sonTaskHasBeenSet(false),
    m_mainCyclicConfigHasBeenSet(false),
    m_subordinateCyclicConfigHasBeenSet(false),
    m_dependencyStrategyHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

CoreInternalOutcome DependencyConfigDsDTONoRecurV3::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentTask") && !value["ParentTask"].IsNull())
    {
        if (!value["ParentTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecurV3.ParentTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecurV3.SonTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecurV3.MainCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainCyclicConfig = string(value["MainCyclicConfig"].GetString());
        m_mainCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicConfig") && !value["SubordinateCyclicConfig"].IsNull())
    {
        if (!value["SubordinateCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecurV3.SubordinateCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicConfig = string(value["SubordinateCyclicConfig"].GetString());
        m_subordinateCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("DependencyStrategy") && !value["DependencyStrategy"].IsNull())
    {
        if (!value["DependencyStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecurV3.DependencyStrategy` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecurV3.Offset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offset = string(value["Offset"].GetString());
        m_offsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyConfigDsDTONoRecurV3::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


TaskDsDTONoRecurV3 DependencyConfigDsDTONoRecurV3::GetParentTask() const
{
    return m_parentTask;
}

void DependencyConfigDsDTONoRecurV3::SetParentTask(const TaskDsDTONoRecurV3& _parentTask)
{
    m_parentTask = _parentTask;
    m_parentTaskHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecurV3::ParentTaskHasBeenSet() const
{
    return m_parentTaskHasBeenSet;
}

TaskDsDTONoRecurV3 DependencyConfigDsDTONoRecurV3::GetSonTask() const
{
    return m_sonTask;
}

void DependencyConfigDsDTONoRecurV3::SetSonTask(const TaskDsDTONoRecurV3& _sonTask)
{
    m_sonTask = _sonTask;
    m_sonTaskHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecurV3::SonTaskHasBeenSet() const
{
    return m_sonTaskHasBeenSet;
}

string DependencyConfigDsDTONoRecurV3::GetMainCyclicConfig() const
{
    return m_mainCyclicConfig;
}

void DependencyConfigDsDTONoRecurV3::SetMainCyclicConfig(const string& _mainCyclicConfig)
{
    m_mainCyclicConfig = _mainCyclicConfig;
    m_mainCyclicConfigHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecurV3::MainCyclicConfigHasBeenSet() const
{
    return m_mainCyclicConfigHasBeenSet;
}

string DependencyConfigDsDTONoRecurV3::GetSubordinateCyclicConfig() const
{
    return m_subordinateCyclicConfig;
}

void DependencyConfigDsDTONoRecurV3::SetSubordinateCyclicConfig(const string& _subordinateCyclicConfig)
{
    m_subordinateCyclicConfig = _subordinateCyclicConfig;
    m_subordinateCyclicConfigHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecurV3::SubordinateCyclicConfigHasBeenSet() const
{
    return m_subordinateCyclicConfigHasBeenSet;
}

DependencyStrategyDs DependencyConfigDsDTONoRecurV3::GetDependencyStrategy() const
{
    return m_dependencyStrategy;
}

void DependencyConfigDsDTONoRecurV3::SetDependencyStrategy(const DependencyStrategyDs& _dependencyStrategy)
{
    m_dependencyStrategy = _dependencyStrategy;
    m_dependencyStrategyHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecurV3::DependencyStrategyHasBeenSet() const
{
    return m_dependencyStrategyHasBeenSet;
}

string DependencyConfigDsDTONoRecurV3::GetOffset() const
{
    return m_offset;
}

void DependencyConfigDsDTONoRecurV3::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecurV3::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

