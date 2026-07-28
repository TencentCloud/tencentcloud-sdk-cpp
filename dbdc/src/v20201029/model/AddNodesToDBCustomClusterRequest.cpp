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

#include <tencentcloud/dbdc/v20201029/model/AddNodesToDBCustomClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

AddNodesToDBCustomClusterRequest::AddNodesToDBCustomClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodeIdsHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostNameTypeHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string AddNodesToDBCustomClusterRequest::ToJsonString() const
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

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNameType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hostNameType, allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddNodesToDBCustomClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddNodesToDBCustomClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> AddNodesToDBCustomClusterRequest::GetNodeIds() const
{
    return m_nodeIds;
}

void AddNodesToDBCustomClusterRequest::SetNodeIds(const vector<string>& _nodeIds)
{
    m_nodeIds = _nodeIds;
    m_nodeIdsHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::NodeIdsHasBeenSet() const
{
    return m_nodeIdsHasBeenSet;
}

string AddNodesToDBCustomClusterRequest::GetImageId() const
{
    return m_imageId;
}

void AddNodesToDBCustomClusterRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

LoginSettings AddNodesToDBCustomClusterRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void AddNodesToDBCustomClusterRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<Label> AddNodesToDBCustomClusterRequest::GetLabels() const
{
    return m_labels;
}

void AddNodesToDBCustomClusterRequest::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> AddNodesToDBCustomClusterRequest::GetTaints() const
{
    return m_taints;
}

void AddNodesToDBCustomClusterRequest::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

string AddNodesToDBCustomClusterRequest::GetHostName() const
{
    return m_hostName;
}

void AddNodesToDBCustomClusterRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

int64_t AddNodesToDBCustomClusterRequest::GetHostNameType() const
{
    return m_hostNameType;
}

void AddNodesToDBCustomClusterRequest::SetHostNameType(const int64_t& _hostNameType)
{
    m_hostNameType = _hostNameType;
    m_hostNameTypeHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::HostNameTypeHasBeenSet() const
{
    return m_hostNameTypeHasBeenSet;
}

bool AddNodesToDBCustomClusterRequest::GetDryRun() const
{
    return m_dryRun;
}

void AddNodesToDBCustomClusterRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool AddNodesToDBCustomClusterRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


