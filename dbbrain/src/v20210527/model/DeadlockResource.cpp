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

#include <tencentcloud/dbbrain/v20210527/model/DeadlockResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeadlockResource::DeadlockResource() :
    m_indexNameHasBeenSet(false),
    m_partitionIdHasBeenSet(false),
    m_waitersHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_associatedObjectIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_ownersHasBeenSet(false)
{
}

CoreInternalOutcome DeadlockResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionId") && !value["PartitionId"].IsNull())
    {
        if (!value["PartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.PartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionId = string(value["PartitionId"].GetString());
        m_partitionIdHasBeenSet = true;
    }

    if (value.HasMember("Waiters") && !value["Waiters"].IsNull())
    {
        if (!value["Waiters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.Waiters` is not array type"));

        const rapidjson::Value &tmpValue = value["Waiters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WaiterItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_waiters.push_back(item);
        }
        m_waitersHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("AssociatedObjectId") && !value["AssociatedObjectId"].IsNull())
    {
        if (!value["AssociatedObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.AssociatedObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associatedObjectId = string(value["AssociatedObjectId"].GetString());
        m_associatedObjectIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ObjectName") && !value["ObjectName"].IsNull())
    {
        if (!value["ObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.ObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectName = string(value["ObjectName"].GetString());
        m_objectNameHasBeenSet = true;
    }

    if (value.HasMember("Owners") && !value["Owners"].IsNull())
    {
        if (!value["Owners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadlockResource.Owners` is not array type"));

        const rapidjson::Value &tmpValue = value["Owners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OwnerItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_owners.push_back(item);
        }
        m_ownersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeadlockResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_waitersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Waiters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waiters.begin(); itr != m_waiters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedObjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associatedObjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_owners.begin(); itr != m_owners.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DeadlockResource::GetIndexName() const
{
    return m_indexName;
}

void DeadlockResource::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool DeadlockResource::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string DeadlockResource::GetPartitionId() const
{
    return m_partitionId;
}

void DeadlockResource::SetPartitionId(const string& _partitionId)
{
    m_partitionId = _partitionId;
    m_partitionIdHasBeenSet = true;
}

bool DeadlockResource::PartitionIdHasBeenSet() const
{
    return m_partitionIdHasBeenSet;
}

vector<WaiterItem> DeadlockResource::GetWaiters() const
{
    return m_waiters;
}

void DeadlockResource::SetWaiters(const vector<WaiterItem>& _waiters)
{
    m_waiters = _waiters;
    m_waitersHasBeenSet = true;
}

bool DeadlockResource::WaitersHasBeenSet() const
{
    return m_waitersHasBeenSet;
}

string DeadlockResource::GetKind() const
{
    return m_kind;
}

void DeadlockResource::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DeadlockResource::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string DeadlockResource::GetMode() const
{
    return m_mode;
}

void DeadlockResource::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DeadlockResource::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DeadlockResource::GetAssociatedObjectId() const
{
    return m_associatedObjectId;
}

void DeadlockResource::SetAssociatedObjectId(const string& _associatedObjectId)
{
    m_associatedObjectId = _associatedObjectId;
    m_associatedObjectIdHasBeenSet = true;
}

bool DeadlockResource::AssociatedObjectIdHasBeenSet() const
{
    return m_associatedObjectIdHasBeenSet;
}

string DeadlockResource::GetId() const
{
    return m_id;
}

void DeadlockResource::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeadlockResource::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeadlockResource::GetObjectName() const
{
    return m_objectName;
}

void DeadlockResource::SetObjectName(const string& _objectName)
{
    m_objectName = _objectName;
    m_objectNameHasBeenSet = true;
}

bool DeadlockResource::ObjectNameHasBeenSet() const
{
    return m_objectNameHasBeenSet;
}

vector<OwnerItem> DeadlockResource::GetOwners() const
{
    return m_owners;
}

void DeadlockResource::SetOwners(const vector<OwnerItem>& _owners)
{
    m_owners = _owners;
    m_ownersHasBeenSet = true;
}

bool DeadlockResource::OwnersHasBeenSet() const
{
    return m_ownersHasBeenSet;
}

