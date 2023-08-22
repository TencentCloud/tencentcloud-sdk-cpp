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

#include <tencentcloud/cls/v20201016/model/ContainerStdoutInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ContainerStdoutInfo::ContainerStdoutInfo() :
    m_allContainersHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_includeLabelsHasBeenSet(false),
    m_workLoadsHasBeenSet(false),
    m_excludeNamespaceHasBeenSet(false),
    m_excludeLabelsHasBeenSet(false),
    m_customLabelsHasBeenSet(false)
{
}

CoreInternalOutcome ContainerStdoutInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllContainers") && !value["AllContainers"].IsNull())
    {
        if (!value["AllContainers"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.AllContainers` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allContainers = value["AllContainers"].GetBool();
        m_allContainersHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("IncludeLabels") && !value["IncludeLabels"].IsNull())
    {
        if (!value["IncludeLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.IncludeLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeLabels.push_back((*itr).GetString());
        }
        m_includeLabelsHasBeenSet = true;
    }

    if (value.HasMember("WorkLoads") && !value["WorkLoads"].IsNull())
    {
        if (!value["WorkLoads"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.WorkLoads` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkLoads"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ContainerWorkLoadInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workLoads.push_back(item);
        }
        m_workLoadsHasBeenSet = true;
    }

    if (value.HasMember("ExcludeNamespace") && !value["ExcludeNamespace"].IsNull())
    {
        if (!value["ExcludeNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.ExcludeNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_excludeNamespace = string(value["ExcludeNamespace"].GetString());
        m_excludeNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ExcludeLabels") && !value["ExcludeLabels"].IsNull())
    {
        if (!value["ExcludeLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.ExcludeLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeLabels.push_back((*itr).GetString());
        }
        m_excludeLabelsHasBeenSet = true;
    }

    if (value.HasMember("CustomLabels") && !value["CustomLabels"].IsNull())
    {
        if (!value["CustomLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerStdoutInfo.CustomLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customLabels.push_back((*itr).GetString());
        }
        m_customLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerStdoutInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allContainersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllContainers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allContainers, allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_includeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeLabels.begin(); itr != m_includeLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workLoadsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkLoads";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workLoads.begin(); itr != m_workLoads.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_excludeNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_excludeNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeLabels.begin(); itr != m_excludeLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customLabels.begin(); itr != m_customLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool ContainerStdoutInfo::GetAllContainers() const
{
    return m_allContainers;
}

void ContainerStdoutInfo::SetAllContainers(const bool& _allContainers)
{
    m_allContainers = _allContainers;
    m_allContainersHasBeenSet = true;
}

bool ContainerStdoutInfo::AllContainersHasBeenSet() const
{
    return m_allContainersHasBeenSet;
}

string ContainerStdoutInfo::GetContainer() const
{
    return m_container;
}

void ContainerStdoutInfo::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool ContainerStdoutInfo::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

string ContainerStdoutInfo::GetNamespace() const
{
    return m_namespace;
}

void ContainerStdoutInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ContainerStdoutInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<string> ContainerStdoutInfo::GetIncludeLabels() const
{
    return m_includeLabels;
}

void ContainerStdoutInfo::SetIncludeLabels(const vector<string>& _includeLabels)
{
    m_includeLabels = _includeLabels;
    m_includeLabelsHasBeenSet = true;
}

bool ContainerStdoutInfo::IncludeLabelsHasBeenSet() const
{
    return m_includeLabelsHasBeenSet;
}

vector<ContainerWorkLoadInfo> ContainerStdoutInfo::GetWorkLoads() const
{
    return m_workLoads;
}

void ContainerStdoutInfo::SetWorkLoads(const vector<ContainerWorkLoadInfo>& _workLoads)
{
    m_workLoads = _workLoads;
    m_workLoadsHasBeenSet = true;
}

bool ContainerStdoutInfo::WorkLoadsHasBeenSet() const
{
    return m_workLoadsHasBeenSet;
}

string ContainerStdoutInfo::GetExcludeNamespace() const
{
    return m_excludeNamespace;
}

void ContainerStdoutInfo::SetExcludeNamespace(const string& _excludeNamespace)
{
    m_excludeNamespace = _excludeNamespace;
    m_excludeNamespaceHasBeenSet = true;
}

bool ContainerStdoutInfo::ExcludeNamespaceHasBeenSet() const
{
    return m_excludeNamespaceHasBeenSet;
}

vector<string> ContainerStdoutInfo::GetExcludeLabels() const
{
    return m_excludeLabels;
}

void ContainerStdoutInfo::SetExcludeLabels(const vector<string>& _excludeLabels)
{
    m_excludeLabels = _excludeLabels;
    m_excludeLabelsHasBeenSet = true;
}

bool ContainerStdoutInfo::ExcludeLabelsHasBeenSet() const
{
    return m_excludeLabelsHasBeenSet;
}

vector<string> ContainerStdoutInfo::GetCustomLabels() const
{
    return m_customLabels;
}

void ContainerStdoutInfo::SetCustomLabels(const vector<string>& _customLabels)
{
    m_customLabels = _customLabels;
    m_customLabelsHasBeenSet = true;
}

bool ContainerStdoutInfo::CustomLabelsHasBeenSet() const
{
    return m_customLabelsHasBeenSet;
}

