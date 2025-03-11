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

#include <tencentcloud/oceanus/v20190422/model/CreateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateJobRequest::CreateJobRequest() :
    m_nameHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_cuMemHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_openJobDefaultAlarmHasBeenSet(false)
{
}

string CreateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobType, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cuMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cuMem, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_openJobDefaultAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenJobDefaultAlarm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openJobDefaultAlarm, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobRequest::GetName() const
{
    return m_name;
}

void CreateJobRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateJobRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateJobRequest::GetJobType() const
{
    return m_jobType;
}

void CreateJobRequest::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool CreateJobRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

int64_t CreateJobRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateJobRequest::SetClusterType(const int64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateJobRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string CreateJobRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateJobRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateJobRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t CreateJobRequest::GetCuMem() const
{
    return m_cuMem;
}

void CreateJobRequest::SetCuMem(const uint64_t& _cuMem)
{
    m_cuMem = _cuMem;
    m_cuMemHasBeenSet = true;
}

bool CreateJobRequest::CuMemHasBeenSet() const
{
    return m_cuMemHasBeenSet;
}

string CreateJobRequest::GetRemark() const
{
    return m_remark;
}

void CreateJobRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateJobRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateJobRequest::GetFolderId() const
{
    return m_folderId;
}

void CreateJobRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool CreateJobRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string CreateJobRequest::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void CreateJobRequest::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool CreateJobRequest::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

string CreateJobRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CreateJobRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CreateJobRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

vector<Tag> CreateJobRequest::GetTags() const
{
    return m_tags;
}

void CreateJobRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateJobRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateJobRequest::GetDescription() const
{
    return m_description;
}

void CreateJobRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateJobRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateJobRequest::GetOpenJobDefaultAlarm() const
{
    return m_openJobDefaultAlarm;
}

void CreateJobRequest::SetOpenJobDefaultAlarm(const int64_t& _openJobDefaultAlarm)
{
    m_openJobDefaultAlarm = _openJobDefaultAlarm;
    m_openJobDefaultAlarmHasBeenSet = true;
}

bool CreateJobRequest::OpenJobDefaultAlarmHasBeenSet() const
{
    return m_openJobDefaultAlarmHasBeenSet;
}


