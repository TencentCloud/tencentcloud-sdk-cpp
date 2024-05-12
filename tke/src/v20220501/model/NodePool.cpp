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

#include <tencentcloud/tke/v20220501/model/NodePool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

NodePool::NodePool() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_unschedulableHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nativeHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_superHasBeenSet(false),
    m_regularHasBeenSet(false),
    m_externalHasBeenSet(false)
{
}

CoreInternalOutcome NodePool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagSpecification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Taints") && !value["Taints"].IsNull())
    {
        if (!value["Taints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Taints` is not array type"));

        const rapidjson::Value &tmpValue = value["Taints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Taint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taints.push_back(item);
        }
        m_taintsHasBeenSet = true;
    }

    if (value.HasMember("DeletionProtection") && !value["DeletionProtection"].IsNull())
    {
        if (!value["DeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.DeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionProtection = value["DeletionProtection"].GetBool();
        m_deletionProtectionHasBeenSet = true;
    }

    if (value.HasMember("Unschedulable") && !value["Unschedulable"].IsNull())
    {
        if (!value["Unschedulable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Unschedulable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unschedulable = value["Unschedulable"].GetBool();
        m_unschedulableHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Native") && !value["Native"].IsNull())
    {
        if (!value["Native"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Native` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_native.Deserialize(value["Native"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nativeHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Annotations` is not array type"));

        const rapidjson::Value &tmpValue = value["Annotations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Annotation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_annotations.push_back(item);
        }
        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("Super") && !value["Super"].IsNull())
    {
        if (!value["Super"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Super` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_super.Deserialize(value["Super"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_superHasBeenSet = true;
    }

    if (value.HasMember("Regular") && !value["Regular"].IsNull())
    {
        if (!value["Regular"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Regular` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regular.Deserialize(value["Regular"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regularHasBeenSet = true;
    }

    if (value.HasMember("External") && !value["External"].IsNull())
    {
        if (!value["External"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.External` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_external.Deserialize(value["External"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodePool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionProtection, allocator);
    }

    if (m_unschedulableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unschedulable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unschedulable, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Native";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_native.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_annotations.begin(); itr != m_annotations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_superHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Super";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_super.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regularHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regular.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "External";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_external.ToJsonObject(value[key.c_str()], allocator);
    }

}


string NodePool::GetClusterId() const
{
    return m_clusterId;
}

void NodePool::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool NodePool::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string NodePool::GetNodePoolId() const
{
    return m_nodePoolId;
}

void NodePool::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool NodePool::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

vector<TagSpecification> NodePool::GetTags() const
{
    return m_tags;
}

void NodePool::SetTags(const vector<TagSpecification>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NodePool::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<Taint> NodePool::GetTaints() const
{
    return m_taints;
}

void NodePool::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool NodePool::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

bool NodePool::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void NodePool::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool NodePool::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

bool NodePool::GetUnschedulable() const
{
    return m_unschedulable;
}

void NodePool::SetUnschedulable(const bool& _unschedulable)
{
    m_unschedulable = _unschedulable;
    m_unschedulableHasBeenSet = true;
}

bool NodePool::UnschedulableHasBeenSet() const
{
    return m_unschedulableHasBeenSet;
}

string NodePool::GetType() const
{
    return m_type;
}

void NodePool::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NodePool::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Label> NodePool::GetLabels() const
{
    return m_labels;
}

void NodePool::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool NodePool::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string NodePool::GetLifeState() const
{
    return m_lifeState;
}

void NodePool::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool NodePool::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string NodePool::GetCreatedAt() const
{
    return m_createdAt;
}

void NodePool::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool NodePool::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string NodePool::GetName() const
{
    return m_name;
}

void NodePool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodePool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

NativeNodePoolInfo NodePool::GetNative() const
{
    return m_native;
}

void NodePool::SetNative(const NativeNodePoolInfo& _native)
{
    m_native = _native;
    m_nativeHasBeenSet = true;
}

bool NodePool::NativeHasBeenSet() const
{
    return m_nativeHasBeenSet;
}

vector<Annotation> NodePool::GetAnnotations() const
{
    return m_annotations;
}

void NodePool::SetAnnotations(const vector<Annotation>& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool NodePool::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

SuperNodePoolInfo NodePool::GetSuper() const
{
    return m_super;
}

void NodePool::SetSuper(const SuperNodePoolInfo& _super)
{
    m_super = _super;
    m_superHasBeenSet = true;
}

bool NodePool::SuperHasBeenSet() const
{
    return m_superHasBeenSet;
}

RegularNodePoolInfo NodePool::GetRegular() const
{
    return m_regular;
}

void NodePool::SetRegular(const RegularNodePoolInfo& _regular)
{
    m_regular = _regular;
    m_regularHasBeenSet = true;
}

bool NodePool::RegularHasBeenSet() const
{
    return m_regularHasBeenSet;
}

ExternalNodePoolInfo NodePool::GetExternal() const
{
    return m_external;
}

void NodePool::SetExternal(const ExternalNodePoolInfo& _external)
{
    m_external = _external;
    m_externalHasBeenSet = true;
}

bool NodePool::ExternalHasBeenSet() const
{
    return m_externalHasBeenSet;
}

