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

#include <tencentcloud/es/v20180416/model/CreateCollectorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CreateCollectorRequest::CreateCollectorRequest() :
    m_collectorNameHasBeenSet(false),
    m_collectorVersionHasBeenSet(false),
    m_collectorTypeHasBeenSet(false),
    m_outputInstanceHasBeenSet(false),
    m_collectorConfigsHasBeenSet(false),
    m_cVMInstanceIdsHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_containerClusterIdHasBeenSet(false),
    m_collectorTargetsHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string CreateCollectorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_collectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collectorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collectorType.c_str(), allocator).Move(), allocator);
    }

    if (m_outputInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputInstance.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_collectorConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectorConfigs.begin(); itr != m_collectorConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cVMInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cVMInstanceIds.begin(); itr != m_cVMInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_containerClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorTargetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorTargets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectorTargets.begin(); itr != m_collectorTargets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
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


string CreateCollectorRequest::GetCollectorName() const
{
    return m_collectorName;
}

void CreateCollectorRequest::SetCollectorName(const string& _collectorName)
{
    m_collectorName = _collectorName;
    m_collectorNameHasBeenSet = true;
}

bool CreateCollectorRequest::CollectorNameHasBeenSet() const
{
    return m_collectorNameHasBeenSet;
}

string CreateCollectorRequest::GetCollectorVersion() const
{
    return m_collectorVersion;
}

void CreateCollectorRequest::SetCollectorVersion(const string& _collectorVersion)
{
    m_collectorVersion = _collectorVersion;
    m_collectorVersionHasBeenSet = true;
}

bool CreateCollectorRequest::CollectorVersionHasBeenSet() const
{
    return m_collectorVersionHasBeenSet;
}

string CreateCollectorRequest::GetCollectorType() const
{
    return m_collectorType;
}

void CreateCollectorRequest::SetCollectorType(const string& _collectorType)
{
    m_collectorType = _collectorType;
    m_collectorTypeHasBeenSet = true;
}

bool CreateCollectorRequest::CollectorTypeHasBeenSet() const
{
    return m_collectorTypeHasBeenSet;
}

CollectorOutputInstance CreateCollectorRequest::GetOutputInstance() const
{
    return m_outputInstance;
}

void CreateCollectorRequest::SetOutputInstance(const CollectorOutputInstance& _outputInstance)
{
    m_outputInstance = _outputInstance;
    m_outputInstanceHasBeenSet = true;
}

bool CreateCollectorRequest::OutputInstanceHasBeenSet() const
{
    return m_outputInstanceHasBeenSet;
}

vector<CollectorConfigInfo> CreateCollectorRequest::GetCollectorConfigs() const
{
    return m_collectorConfigs;
}

void CreateCollectorRequest::SetCollectorConfigs(const vector<CollectorConfigInfo>& _collectorConfigs)
{
    m_collectorConfigs = _collectorConfigs;
    m_collectorConfigsHasBeenSet = true;
}

bool CreateCollectorRequest::CollectorConfigsHasBeenSet() const
{
    return m_collectorConfigsHasBeenSet;
}

vector<string> CreateCollectorRequest::GetCVMInstanceIds() const
{
    return m_cVMInstanceIds;
}

void CreateCollectorRequest::SetCVMInstanceIds(const vector<string>& _cVMInstanceIds)
{
    m_cVMInstanceIds = _cVMInstanceIds;
    m_cVMInstanceIdsHasBeenSet = true;
}

bool CreateCollectorRequest::CVMInstanceIdsHasBeenSet() const
{
    return m_cVMInstanceIdsHasBeenSet;
}

string CreateCollectorRequest::GetTargetType() const
{
    return m_targetType;
}

void CreateCollectorRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool CreateCollectorRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string CreateCollectorRequest::GetContainerClusterId() const
{
    return m_containerClusterId;
}

void CreateCollectorRequest::SetContainerClusterId(const string& _containerClusterId)
{
    m_containerClusterId = _containerClusterId;
    m_containerClusterIdHasBeenSet = true;
}

bool CreateCollectorRequest::ContainerClusterIdHasBeenSet() const
{
    return m_containerClusterIdHasBeenSet;
}

vector<CollectorTarget> CreateCollectorRequest::GetCollectorTargets() const
{
    return m_collectorTargets;
}

void CreateCollectorRequest::SetCollectorTargets(const vector<CollectorTarget>& _collectorTargets)
{
    m_collectorTargets = _collectorTargets;
    m_collectorTargetsHasBeenSet = true;
}

bool CreateCollectorRequest::CollectorTargetsHasBeenSet() const
{
    return m_collectorTargetsHasBeenSet;
}

vector<TagInfo> CreateCollectorRequest::GetTagList() const
{
    return m_tagList;
}

void CreateCollectorRequest::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateCollectorRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


