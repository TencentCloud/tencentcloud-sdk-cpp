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

#include <tencentcloud/dts/v20211206/model/CreateMigrationServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CreateMigrationServiceRequest::CreateMigrationServiceRequest() :
    m_srcDatabaseTypeHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_srcRegionHasBeenSet(false),
    m_dstRegionHasBeenSet(false),
    m_instanceClassHasBeenSet(false),
    m_countHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateMigrationServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMigrationServiceRequest::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void CreateMigrationServiceRequest::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool CreateMigrationServiceRequest::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

string CreateMigrationServiceRequest::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void CreateMigrationServiceRequest::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool CreateMigrationServiceRequest::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

string CreateMigrationServiceRequest::GetSrcRegion() const
{
    return m_srcRegion;
}

void CreateMigrationServiceRequest::SetSrcRegion(const string& _srcRegion)
{
    m_srcRegion = _srcRegion;
    m_srcRegionHasBeenSet = true;
}

bool CreateMigrationServiceRequest::SrcRegionHasBeenSet() const
{
    return m_srcRegionHasBeenSet;
}

string CreateMigrationServiceRequest::GetDstRegion() const
{
    return m_dstRegion;
}

void CreateMigrationServiceRequest::SetDstRegion(const string& _dstRegion)
{
    m_dstRegion = _dstRegion;
    m_dstRegionHasBeenSet = true;
}

bool CreateMigrationServiceRequest::DstRegionHasBeenSet() const
{
    return m_dstRegionHasBeenSet;
}

string CreateMigrationServiceRequest::GetInstanceClass() const
{
    return m_instanceClass;
}

void CreateMigrationServiceRequest::SetInstanceClass(const string& _instanceClass)
{
    m_instanceClass = _instanceClass;
    m_instanceClassHasBeenSet = true;
}

bool CreateMigrationServiceRequest::InstanceClassHasBeenSet() const
{
    return m_instanceClassHasBeenSet;
}

uint64_t CreateMigrationServiceRequest::GetCount() const
{
    return m_count;
}

void CreateMigrationServiceRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateMigrationServiceRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string CreateMigrationServiceRequest::GetJobName() const
{
    return m_jobName;
}

void CreateMigrationServiceRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool CreateMigrationServiceRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

vector<TagItem> CreateMigrationServiceRequest::GetTags() const
{
    return m_tags;
}

void CreateMigrationServiceRequest::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateMigrationServiceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


