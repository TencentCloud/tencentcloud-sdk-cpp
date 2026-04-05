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

#include <tencentcloud/teo/v20220901/model/KVNamespace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

KVNamespace::KVNamespace() :
    m_namespaceHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_capacityUsedHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false)
{
}

CoreInternalOutcome KVNamespace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KVNamespace.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KVNamespace.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KVNamespace.Capacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetInt64();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("CapacityUsed") && !value["CapacityUsed"].IsNull())
    {
        if (!value["CapacityUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KVNamespace.CapacityUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityUsed = value["CapacityUsed"].GetInt64();
        m_capacityUsedHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KVNamespace.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComponentReference item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_references.push_back(item);
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KVNamespace.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KVNamespace.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KVNamespace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_capacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityUsed, allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

}


string KVNamespace::GetNamespace() const
{
    return m_namespace;
}

void KVNamespace::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool KVNamespace::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string KVNamespace::GetRemark() const
{
    return m_remark;
}

void KVNamespace::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool KVNamespace::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t KVNamespace::GetCapacity() const
{
    return m_capacity;
}

void KVNamespace::SetCapacity(const int64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool KVNamespace::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

int64_t KVNamespace::GetCapacityUsed() const
{
    return m_capacityUsed;
}

void KVNamespace::SetCapacityUsed(const int64_t& _capacityUsed)
{
    m_capacityUsed = _capacityUsed;
    m_capacityUsedHasBeenSet = true;
}

bool KVNamespace::CapacityUsedHasBeenSet() const
{
    return m_capacityUsedHasBeenSet;
}

vector<ComponentReference> KVNamespace::GetReferences() const
{
    return m_references;
}

void KVNamespace::SetReferences(const vector<ComponentReference>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool KVNamespace::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string KVNamespace::GetCreatedOn() const
{
    return m_createdOn;
}

void KVNamespace::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool KVNamespace::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string KVNamespace::GetModifiedOn() const
{
    return m_modifiedOn;
}

void KVNamespace::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool KVNamespace::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

