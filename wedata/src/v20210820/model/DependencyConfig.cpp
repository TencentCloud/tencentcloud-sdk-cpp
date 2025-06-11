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

#include <tencentcloud/wedata/v20210820/model/DependencyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyConfig::DependencyConfig() :
    m_dependConfTypeHasBeenSet(false),
    m_subordinateCyclicTypeHasBeenSet(false),
    m_dependencyStrategyHasBeenSet(false),
    m_parentTaskHasBeenSet(false),
    m_sonTaskHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

CoreInternalOutcome DependencyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DependConfType") && !value["DependConfType"].IsNull())
    {
        if (!value["DependConfType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfig.DependConfType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependConfType = string(value["DependConfType"].GetString());
        m_dependConfTypeHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicType") && !value["SubordinateCyclicType"].IsNull())
    {
        if (!value["SubordinateCyclicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfig.SubordinateCyclicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicType = string(value["SubordinateCyclicType"].GetString());
        m_subordinateCyclicTypeHasBeenSet = true;
    }

    if (value.HasMember("DependencyStrategy") && !value["DependencyStrategy"].IsNull())
    {
        if (!value["DependencyStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfig.DependencyStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyStrategy = string(value["DependencyStrategy"].GetString());
        m_dependencyStrategyHasBeenSet = true;
    }

    if (value.HasMember("ParentTask") && !value["ParentTask"].IsNull())
    {
        if (!value["ParentTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfig.ParentTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DependencyConfig.SonTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sonTask.Deserialize(value["SonTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sonTaskHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfig.Offset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offset = string(value["Offset"].GetString());
        m_offsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dependConfTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependConfType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependConfType.c_str(), allocator).Move(), allocator);
    }

    if (m_subordinateCyclicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubordinateCyclicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subordinateCyclicType.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyStrategy.c_str(), allocator).Move(), allocator);
    }

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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

}


string DependencyConfig::GetDependConfType() const
{
    return m_dependConfType;
}

void DependencyConfig::SetDependConfType(const string& _dependConfType)
{
    m_dependConfType = _dependConfType;
    m_dependConfTypeHasBeenSet = true;
}

bool DependencyConfig::DependConfTypeHasBeenSet() const
{
    return m_dependConfTypeHasBeenSet;
}

string DependencyConfig::GetSubordinateCyclicType() const
{
    return m_subordinateCyclicType;
}

void DependencyConfig::SetSubordinateCyclicType(const string& _subordinateCyclicType)
{
    m_subordinateCyclicType = _subordinateCyclicType;
    m_subordinateCyclicTypeHasBeenSet = true;
}

bool DependencyConfig::SubordinateCyclicTypeHasBeenSet() const
{
    return m_subordinateCyclicTypeHasBeenSet;
}

string DependencyConfig::GetDependencyStrategy() const
{
    return m_dependencyStrategy;
}

void DependencyConfig::SetDependencyStrategy(const string& _dependencyStrategy)
{
    m_dependencyStrategy = _dependencyStrategy;
    m_dependencyStrategyHasBeenSet = true;
}

bool DependencyConfig::DependencyStrategyHasBeenSet() const
{
    return m_dependencyStrategyHasBeenSet;
}

TaskInnerInfo DependencyConfig::GetParentTask() const
{
    return m_parentTask;
}

void DependencyConfig::SetParentTask(const TaskInnerInfo& _parentTask)
{
    m_parentTask = _parentTask;
    m_parentTaskHasBeenSet = true;
}

bool DependencyConfig::ParentTaskHasBeenSet() const
{
    return m_parentTaskHasBeenSet;
}

TaskInnerInfo DependencyConfig::GetSonTask() const
{
    return m_sonTask;
}

void DependencyConfig::SetSonTask(const TaskInnerInfo& _sonTask)
{
    m_sonTask = _sonTask;
    m_sonTaskHasBeenSet = true;
}

bool DependencyConfig::SonTaskHasBeenSet() const
{
    return m_sonTaskHasBeenSet;
}

string DependencyConfig::GetOffset() const
{
    return m_offset;
}

void DependencyConfig::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DependencyConfig::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

