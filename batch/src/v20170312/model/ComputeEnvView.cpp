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

#include <tencentcloud/batch/v20170312/model/ComputeEnvView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

ComputeEnvView::ComputeEnvView() :
    m_envIdHasBeenSet(false),
    m_envNameHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computeNodeMetricsHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_nextActionHasBeenSet(false),
    m_attachedComputeNodeCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ComputeEnvView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeMetrics") && !value["ComputeNodeMetrics"].IsNull())
    {
        if (!value["ComputeNodeMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.ComputeNodeMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_computeNodeMetrics.Deserialize(value["ComputeNodeMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_computeNodeMetricsHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("DesiredComputeNodeCount") && !value["DesiredComputeNodeCount"].IsNull())
    {
        if (!value["DesiredComputeNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.DesiredComputeNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = value["DesiredComputeNodeCount"].GetUint64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("NextAction") && !value["NextAction"].IsNull())
    {
        if (!value["NextAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.NextAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextAction = string(value["NextAction"].GetString());
        m_nextActionHasBeenSet = true;
    }

    if (value.HasMember("AttachedComputeNodeCount") && !value["AttachedComputeNodeCount"].IsNull())
    {
        if (!value["AttachedComputeNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.AttachedComputeNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attachedComputeNodeCount = value["AttachedComputeNodeCount"].GetUint64();
        m_attachedComputeNodeCountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeEnvView.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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


    return CoreInternalOutcome(true);
}

void ComputeEnvView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeNodeMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredComputeNodeCount, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextAction.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachedComputeNodeCount, allocator);
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

}


string ComputeEnvView::GetEnvId() const
{
    return m_envId;
}

void ComputeEnvView::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ComputeEnvView::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ComputeEnvView::GetEnvName() const
{
    return m_envName;
}

void ComputeEnvView::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool ComputeEnvView::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

Placement ComputeEnvView::GetPlacement() const
{
    return m_placement;
}

void ComputeEnvView::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool ComputeEnvView::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string ComputeEnvView::GetCreateTime() const
{
    return m_createTime;
}

void ComputeEnvView::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ComputeEnvView::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

ComputeNodeMetrics ComputeEnvView::GetComputeNodeMetrics() const
{
    return m_computeNodeMetrics;
}

void ComputeEnvView::SetComputeNodeMetrics(const ComputeNodeMetrics& _computeNodeMetrics)
{
    m_computeNodeMetrics = _computeNodeMetrics;
    m_computeNodeMetricsHasBeenSet = true;
}

bool ComputeEnvView::ComputeNodeMetricsHasBeenSet() const
{
    return m_computeNodeMetricsHasBeenSet;
}

string ComputeEnvView::GetEnvType() const
{
    return m_envType;
}

void ComputeEnvView::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool ComputeEnvView::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

uint64_t ComputeEnvView::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

void ComputeEnvView::SetDesiredComputeNodeCount(const uint64_t& _desiredComputeNodeCount)
{
    m_desiredComputeNodeCount = _desiredComputeNodeCount;
    m_desiredComputeNodeCountHasBeenSet = true;
}

bool ComputeEnvView::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

string ComputeEnvView::GetResourceType() const
{
    return m_resourceType;
}

void ComputeEnvView::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ComputeEnvView::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ComputeEnvView::GetNextAction() const
{
    return m_nextAction;
}

void ComputeEnvView::SetNextAction(const string& _nextAction)
{
    m_nextAction = _nextAction;
    m_nextActionHasBeenSet = true;
}

bool ComputeEnvView::NextActionHasBeenSet() const
{
    return m_nextActionHasBeenSet;
}

uint64_t ComputeEnvView::GetAttachedComputeNodeCount() const
{
    return m_attachedComputeNodeCount;
}

void ComputeEnvView::SetAttachedComputeNodeCount(const uint64_t& _attachedComputeNodeCount)
{
    m_attachedComputeNodeCount = _attachedComputeNodeCount;
    m_attachedComputeNodeCountHasBeenSet = true;
}

bool ComputeEnvView::AttachedComputeNodeCountHasBeenSet() const
{
    return m_attachedComputeNodeCountHasBeenSet;
}

vector<Tag> ComputeEnvView::GetTags() const
{
    return m_tags;
}

void ComputeEnvView::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ComputeEnvView::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

