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

#include <tencentcloud/tke/v20180525/model/InstanceUpgradePreCheckResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

InstanceUpgradePreCheckResultItem::InstanceUpgradePreCheckResultItem() :
    m_namespaceHasBeenSet(false),
    m_workLoadKindHasBeenSet(false),
    m_workLoadNameHasBeenSet(false),
    m_beforeHasBeenSet(false),
    m_afterHasBeenSet(false),
    m_podsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceUpgradePreCheckResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResultItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("WorkLoadKind") && !value["WorkLoadKind"].IsNull())
    {
        if (!value["WorkLoadKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResultItem.WorkLoadKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workLoadKind = string(value["WorkLoadKind"].GetString());
        m_workLoadKindHasBeenSet = true;
    }

    if (value.HasMember("WorkLoadName") && !value["WorkLoadName"].IsNull())
    {
        if (!value["WorkLoadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResultItem.WorkLoadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workLoadName = string(value["WorkLoadName"].GetString());
        m_workLoadNameHasBeenSet = true;
    }

    if (value.HasMember("Before") && !value["Before"].IsNull())
    {
        if (!value["Before"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResultItem.Before` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_before = value["Before"].GetUint64();
        m_beforeHasBeenSet = true;
    }

    if (value.HasMember("After") && !value["After"].IsNull())
    {
        if (!value["After"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResultItem.After` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_after = value["After"].GetUint64();
        m_afterHasBeenSet = true;
    }

    if (value.HasMember("Pods") && !value["Pods"].IsNull())
    {
        if (!value["Pods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResultItem.Pods` is not array type"));

        const rapidjson::Value &tmpValue = value["Pods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pods.push_back((*itr).GetString());
        }
        m_podsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceUpgradePreCheckResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workLoadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkLoadKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workLoadKind.c_str(), allocator).Move(), allocator);
    }

    if (m_workLoadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkLoadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workLoadName.c_str(), allocator).Move(), allocator);
    }

    if (m_beforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Before";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_before, allocator);
    }

    if (m_afterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "After";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_after, allocator);
    }

    if (m_podsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pods.begin(); itr != m_pods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InstanceUpgradePreCheckResultItem::GetNamespace() const
{
    return m_namespace;
}

void InstanceUpgradePreCheckResultItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool InstanceUpgradePreCheckResultItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string InstanceUpgradePreCheckResultItem::GetWorkLoadKind() const
{
    return m_workLoadKind;
}

void InstanceUpgradePreCheckResultItem::SetWorkLoadKind(const string& _workLoadKind)
{
    m_workLoadKind = _workLoadKind;
    m_workLoadKindHasBeenSet = true;
}

bool InstanceUpgradePreCheckResultItem::WorkLoadKindHasBeenSet() const
{
    return m_workLoadKindHasBeenSet;
}

string InstanceUpgradePreCheckResultItem::GetWorkLoadName() const
{
    return m_workLoadName;
}

void InstanceUpgradePreCheckResultItem::SetWorkLoadName(const string& _workLoadName)
{
    m_workLoadName = _workLoadName;
    m_workLoadNameHasBeenSet = true;
}

bool InstanceUpgradePreCheckResultItem::WorkLoadNameHasBeenSet() const
{
    return m_workLoadNameHasBeenSet;
}

uint64_t InstanceUpgradePreCheckResultItem::GetBefore() const
{
    return m_before;
}

void InstanceUpgradePreCheckResultItem::SetBefore(const uint64_t& _before)
{
    m_before = _before;
    m_beforeHasBeenSet = true;
}

bool InstanceUpgradePreCheckResultItem::BeforeHasBeenSet() const
{
    return m_beforeHasBeenSet;
}

uint64_t InstanceUpgradePreCheckResultItem::GetAfter() const
{
    return m_after;
}

void InstanceUpgradePreCheckResultItem::SetAfter(const uint64_t& _after)
{
    m_after = _after;
    m_afterHasBeenSet = true;
}

bool InstanceUpgradePreCheckResultItem::AfterHasBeenSet() const
{
    return m_afterHasBeenSet;
}

vector<string> InstanceUpgradePreCheckResultItem::GetPods() const
{
    return m_pods;
}

void InstanceUpgradePreCheckResultItem::SetPods(const vector<string>& _pods)
{
    m_pods = _pods;
    m_podsHasBeenSet = true;
}

bool InstanceUpgradePreCheckResultItem::PodsHasBeenSet() const
{
    return m_podsHasBeenSet;
}

