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

#include <tencentcloud/wedata/v20210820/model/DependencyConfigDsDTONoRecur.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyConfigDsDTONoRecur::DependencyConfigDsDTONoRecur() :
    m_parentTaskHasBeenSet(false),
    m_sonTaskHasBeenSet(false),
    m_mainCyclicConfigHasBeenSet(false),
    m_subordinateCyclicConfigHasBeenSet(false),
    m_dependencyStrategyHasBeenSet(false)
{
}

CoreInternalOutcome DependencyConfigDsDTONoRecur::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentTask") && !value["ParentTask"].IsNull())
    {
        if (!value["ParentTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecur.ParentTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecur.SonTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecur.MainCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainCyclicConfig = string(value["MainCyclicConfig"].GetString());
        m_mainCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicConfig") && !value["SubordinateCyclicConfig"].IsNull())
    {
        if (!value["SubordinateCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecur.SubordinateCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicConfig = string(value["SubordinateCyclicConfig"].GetString());
        m_subordinateCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("DependencyStrategy") && !value["DependencyStrategy"].IsNull())
    {
        if (!value["DependencyStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigDsDTONoRecur.DependencyStrategy` is not object type").SetRequestId(requestId));
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

void DependencyConfigDsDTONoRecur::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


TaskDsDTONoRecur DependencyConfigDsDTONoRecur::GetParentTask() const
{
    return m_parentTask;
}

void DependencyConfigDsDTONoRecur::SetParentTask(const TaskDsDTONoRecur& _parentTask)
{
    m_parentTask = _parentTask;
    m_parentTaskHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecur::ParentTaskHasBeenSet() const
{
    return m_parentTaskHasBeenSet;
}

TaskDsDTONoRecur DependencyConfigDsDTONoRecur::GetSonTask() const
{
    return m_sonTask;
}

void DependencyConfigDsDTONoRecur::SetSonTask(const TaskDsDTONoRecur& _sonTask)
{
    m_sonTask = _sonTask;
    m_sonTaskHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecur::SonTaskHasBeenSet() const
{
    return m_sonTaskHasBeenSet;
}

string DependencyConfigDsDTONoRecur::GetMainCyclicConfig() const
{
    return m_mainCyclicConfig;
}

void DependencyConfigDsDTONoRecur::SetMainCyclicConfig(const string& _mainCyclicConfig)
{
    m_mainCyclicConfig = _mainCyclicConfig;
    m_mainCyclicConfigHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecur::MainCyclicConfigHasBeenSet() const
{
    return m_mainCyclicConfigHasBeenSet;
}

string DependencyConfigDsDTONoRecur::GetSubordinateCyclicConfig() const
{
    return m_subordinateCyclicConfig;
}

void DependencyConfigDsDTONoRecur::SetSubordinateCyclicConfig(const string& _subordinateCyclicConfig)
{
    m_subordinateCyclicConfig = _subordinateCyclicConfig;
    m_subordinateCyclicConfigHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecur::SubordinateCyclicConfigHasBeenSet() const
{
    return m_subordinateCyclicConfigHasBeenSet;
}

DependencyStrategy DependencyConfigDsDTONoRecur::GetDependencyStrategy() const
{
    return m_dependencyStrategy;
}

void DependencyConfigDsDTONoRecur::SetDependencyStrategy(const DependencyStrategy& _dependencyStrategy)
{
    m_dependencyStrategy = _dependencyStrategy;
    m_dependencyStrategyHasBeenSet = true;
}

bool DependencyConfigDsDTONoRecur::DependencyStrategyHasBeenSet() const
{
    return m_dependencyStrategyHasBeenSet;
}

