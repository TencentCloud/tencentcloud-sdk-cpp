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

#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomClusterNodeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

ModifyDBCustomClusterNodeConfigRequest::ModifyDBCustomClusterNodeConfigRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodeIdsHasBeenSet(false),
    m_upsertLabelsHasBeenSet(false),
    m_deleteLabelKeysHasBeenSet(false),
    m_upsertTaintsHasBeenSet(false),
    m_deleteTaintsHasBeenSet(false)
{
}

string ModifyDBCustomClusterNodeConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIds.begin(); itr != m_nodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_upsertLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpsertLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upsertLabels.begin(); itr != m_upsertLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteLabelKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteLabelKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteLabelKeys.begin(); itr != m_deleteLabelKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_upsertTaintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpsertTaints";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upsertTaints.begin(); itr != m_upsertTaints.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteTaintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTaints";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteTaints.begin(); itr != m_deleteTaints.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBCustomClusterNodeConfigRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyDBCustomClusterNodeConfigRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyDBCustomClusterNodeConfigRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> ModifyDBCustomClusterNodeConfigRequest::GetNodeIds() const
{
    return m_nodeIds;
}

void ModifyDBCustomClusterNodeConfigRequest::SetNodeIds(const vector<string>& _nodeIds)
{
    m_nodeIds = _nodeIds;
    m_nodeIdsHasBeenSet = true;
}

bool ModifyDBCustomClusterNodeConfigRequest::NodeIdsHasBeenSet() const
{
    return m_nodeIdsHasBeenSet;
}

vector<Label> ModifyDBCustomClusterNodeConfigRequest::GetUpsertLabels() const
{
    return m_upsertLabels;
}

void ModifyDBCustomClusterNodeConfigRequest::SetUpsertLabels(const vector<Label>& _upsertLabels)
{
    m_upsertLabels = _upsertLabels;
    m_upsertLabelsHasBeenSet = true;
}

bool ModifyDBCustomClusterNodeConfigRequest::UpsertLabelsHasBeenSet() const
{
    return m_upsertLabelsHasBeenSet;
}

vector<string> ModifyDBCustomClusterNodeConfigRequest::GetDeleteLabelKeys() const
{
    return m_deleteLabelKeys;
}

void ModifyDBCustomClusterNodeConfigRequest::SetDeleteLabelKeys(const vector<string>& _deleteLabelKeys)
{
    m_deleteLabelKeys = _deleteLabelKeys;
    m_deleteLabelKeysHasBeenSet = true;
}

bool ModifyDBCustomClusterNodeConfigRequest::DeleteLabelKeysHasBeenSet() const
{
    return m_deleteLabelKeysHasBeenSet;
}

vector<Taint> ModifyDBCustomClusterNodeConfigRequest::GetUpsertTaints() const
{
    return m_upsertTaints;
}

void ModifyDBCustomClusterNodeConfigRequest::SetUpsertTaints(const vector<Taint>& _upsertTaints)
{
    m_upsertTaints = _upsertTaints;
    m_upsertTaintsHasBeenSet = true;
}

bool ModifyDBCustomClusterNodeConfigRequest::UpsertTaintsHasBeenSet() const
{
    return m_upsertTaintsHasBeenSet;
}

vector<Taint> ModifyDBCustomClusterNodeConfigRequest::GetDeleteTaints() const
{
    return m_deleteTaints;
}

void ModifyDBCustomClusterNodeConfigRequest::SetDeleteTaints(const vector<Taint>& _deleteTaints)
{
    m_deleteTaints = _deleteTaints;
    m_deleteTaintsHasBeenSet = true;
}

bool ModifyDBCustomClusterNodeConfigRequest::DeleteTaintsHasBeenSet() const
{
    return m_deleteTaintsHasBeenSet;
}


