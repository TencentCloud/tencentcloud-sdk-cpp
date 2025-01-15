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

#include <tencentcloud/dlc/v20210125/model/SmartOptimizerPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SmartOptimizerPolicy::SmartOptimizerPolicy() :
    m_inheritHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_writtenHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_changeTableHasBeenSet(false)
{
}

CoreInternalOutcome SmartOptimizerPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Inherit") && !value["Inherit"].IsNull())
    {
        if (!value["Inherit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerPolicy.Inherit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inherit = string(value["Inherit"].GetString());
        m_inheritHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerPolicy.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resources.push_back(item);
        }
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("Written") && !value["Written"].IsNull())
    {
        if (!value["Written"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerPolicy.Written` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_written.Deserialize(value["Written"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_writtenHasBeenSet = true;
    }

    if (value.HasMember("Lifecycle") && !value["Lifecycle"].IsNull())
    {
        if (!value["Lifecycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerPolicy.Lifecycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifecycle.Deserialize(value["Lifecycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifecycleHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerPolicy.Index` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_index.Deserialize(value["Index"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indexHasBeenSet = true;
    }

    if (value.HasMember("ChangeTable") && !value["ChangeTable"].IsNull())
    {
        if (!value["ChangeTable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerPolicy.ChangeTable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_changeTable.Deserialize(value["ChangeTable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_changeTableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartOptimizerPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inherit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inherit.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_writtenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Written";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_written.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lifecycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lifecycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_index.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_changeTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_changeTable.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SmartOptimizerPolicy::GetInherit() const
{
    return m_inherit;
}

void SmartOptimizerPolicy::SetInherit(const string& _inherit)
{
    m_inherit = _inherit;
    m_inheritHasBeenSet = true;
}

bool SmartOptimizerPolicy::InheritHasBeenSet() const
{
    return m_inheritHasBeenSet;
}

vector<ResourceInfo> SmartOptimizerPolicy::GetResources() const
{
    return m_resources;
}

void SmartOptimizerPolicy::SetResources(const vector<ResourceInfo>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool SmartOptimizerPolicy::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

SmartOptimizerWrittenPolicy SmartOptimizerPolicy::GetWritten() const
{
    return m_written;
}

void SmartOptimizerPolicy::SetWritten(const SmartOptimizerWrittenPolicy& _written)
{
    m_written = _written;
    m_writtenHasBeenSet = true;
}

bool SmartOptimizerPolicy::WrittenHasBeenSet() const
{
    return m_writtenHasBeenSet;
}

SmartOptimizerLifecyclePolicy SmartOptimizerPolicy::GetLifecycle() const
{
    return m_lifecycle;
}

void SmartOptimizerPolicy::SetLifecycle(const SmartOptimizerLifecyclePolicy& _lifecycle)
{
    m_lifecycle = _lifecycle;
    m_lifecycleHasBeenSet = true;
}

bool SmartOptimizerPolicy::LifecycleHasBeenSet() const
{
    return m_lifecycleHasBeenSet;
}

SmartOptimizerIndexPolicy SmartOptimizerPolicy::GetIndex() const
{
    return m_index;
}

void SmartOptimizerPolicy::SetIndex(const SmartOptimizerIndexPolicy& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool SmartOptimizerPolicy::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

SmartOptimizerChangeTablePolicy SmartOptimizerPolicy::GetChangeTable() const
{
    return m_changeTable;
}

void SmartOptimizerPolicy::SetChangeTable(const SmartOptimizerChangeTablePolicy& _changeTable)
{
    m_changeTable = _changeTable;
    m_changeTableHasBeenSet = true;
}

bool SmartOptimizerPolicy::ChangeTableHasBeenSet() const
{
    return m_changeTableHasBeenSet;
}

