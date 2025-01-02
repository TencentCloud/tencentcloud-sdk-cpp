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

#include <tencentcloud/dts/v20211206/model/CreateSyncJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CreateSyncJobRequest::CreateSyncJobRequest() :
    m_payModeHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_srcRegionHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_dstRegionHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_countHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_instanceClassHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_existedJobIdHasBeenSet(false)
{
}

string CreateSyncJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_instanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_existedJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_existedJobId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSyncJobRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateSyncJobRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateSyncJobRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateSyncJobRequest::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void CreateSyncJobRequest::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool CreateSyncJobRequest::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

string CreateSyncJobRequest::GetSrcRegion() const
{
    return m_srcRegion;
}

void CreateSyncJobRequest::SetSrcRegion(const string& _srcRegion)
{
    m_srcRegion = _srcRegion;
    m_srcRegionHasBeenSet = true;
}

bool CreateSyncJobRequest::SrcRegionHasBeenSet() const
{
    return m_srcRegionHasBeenSet;
}

string CreateSyncJobRequest::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void CreateSyncJobRequest::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool CreateSyncJobRequest::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

string CreateSyncJobRequest::GetDstRegion() const
{
    return m_dstRegion;
}

void CreateSyncJobRequest::SetDstRegion(const string& _dstRegion)
{
    m_dstRegion = _dstRegion;
    m_dstRegionHasBeenSet = true;
}

bool CreateSyncJobRequest::DstRegionHasBeenSet() const
{
    return m_dstRegionHasBeenSet;
}

string CreateSyncJobRequest::GetSpecification() const
{
    return m_specification;
}

void CreateSyncJobRequest::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool CreateSyncJobRequest::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

uint64_t CreateSyncJobRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateSyncJobRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateSyncJobRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

vector<TagItem> CreateSyncJobRequest::GetTags() const
{
    return m_tags;
}

void CreateSyncJobRequest::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateSyncJobRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t CreateSyncJobRequest::GetCount() const
{
    return m_count;
}

void CreateSyncJobRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateSyncJobRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t CreateSyncJobRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateSyncJobRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateSyncJobRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string CreateSyncJobRequest::GetInstanceClass() const
{
    return m_instanceClass;
}

void CreateSyncJobRequest::SetInstanceClass(const string& _instanceClass)
{
    m_instanceClass = _instanceClass;
    m_instanceClassHasBeenSet = true;
}

bool CreateSyncJobRequest::InstanceClassHasBeenSet() const
{
    return m_instanceClassHasBeenSet;
}

string CreateSyncJobRequest::GetJobName() const
{
    return m_jobName;
}

void CreateSyncJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool CreateSyncJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string CreateSyncJobRequest::GetExistedJobId() const
{
    return m_existedJobId;
}

void CreateSyncJobRequest::SetExistedJobId(const string& _existedJobId)
{
    m_existedJobId = _existedJobId;
    m_existedJobIdHasBeenSet = true;
}

bool CreateSyncJobRequest::ExistedJobIdHasBeenSet() const
{
    return m_existedJobIdHasBeenSet;
}


