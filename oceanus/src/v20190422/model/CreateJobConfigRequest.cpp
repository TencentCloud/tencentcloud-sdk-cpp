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

#include <tencentcloud/oceanus/v20190422/model/CreateJobConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateJobConfigRequest::CreateJobConfigRequest() :
    m_jobIdHasBeenSet(false),
    m_entrypointClassHasBeenSet(false),
    m_programArgsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_resourceRefsHasBeenSet(false),
    m_defaultParallelismHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_logCollectHasBeenSet(false)
{
}

string CreateJobConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntrypointClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entrypointClass.c_str(), allocator).Move(), allocator);
    }

    if (m_programArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefs.begin(); itr != m_resourceRefs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_defaultParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParallelism";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultParallelism, allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_cOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_logCollectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logCollect, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobConfigRequest::GetJobId() const
{
    return m_jobId;
}

void CreateJobConfigRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool CreateJobConfigRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string CreateJobConfigRequest::GetEntrypointClass() const
{
    return m_entrypointClass;
}

void CreateJobConfigRequest::SetEntrypointClass(const string& _entrypointClass)
{
    m_entrypointClass = _entrypointClass;
    m_entrypointClassHasBeenSet = true;
}

bool CreateJobConfigRequest::EntrypointClassHasBeenSet() const
{
    return m_entrypointClassHasBeenSet;
}

string CreateJobConfigRequest::GetProgramArgs() const
{
    return m_programArgs;
}

void CreateJobConfigRequest::SetProgramArgs(const string& _programArgs)
{
    m_programArgs = _programArgs;
    m_programArgsHasBeenSet = true;
}

bool CreateJobConfigRequest::ProgramArgsHasBeenSet() const
{
    return m_programArgsHasBeenSet;
}

string CreateJobConfigRequest::GetRemark() const
{
    return m_remark;
}

void CreateJobConfigRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateJobConfigRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<ResourceRef> CreateJobConfigRequest::GetResourceRefs() const
{
    return m_resourceRefs;
}

void CreateJobConfigRequest::SetResourceRefs(const vector<ResourceRef>& _resourceRefs)
{
    m_resourceRefs = _resourceRefs;
    m_resourceRefsHasBeenSet = true;
}

bool CreateJobConfigRequest::ResourceRefsHasBeenSet() const
{
    return m_resourceRefsHasBeenSet;
}

uint64_t CreateJobConfigRequest::GetDefaultParallelism() const
{
    return m_defaultParallelism;
}

void CreateJobConfigRequest::SetDefaultParallelism(const uint64_t& _defaultParallelism)
{
    m_defaultParallelism = _defaultParallelism;
    m_defaultParallelismHasBeenSet = true;
}

bool CreateJobConfigRequest::DefaultParallelismHasBeenSet() const
{
    return m_defaultParallelismHasBeenSet;
}

vector<Property> CreateJobConfigRequest::GetProperties() const
{
    return m_properties;
}

void CreateJobConfigRequest::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool CreateJobConfigRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

int64_t CreateJobConfigRequest::GetAutoDelete() const
{
    return m_autoDelete;
}

void CreateJobConfigRequest::SetAutoDelete(const int64_t& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool CreateJobConfigRequest::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string CreateJobConfigRequest::GetCOSBucket() const
{
    return m_cOSBucket;
}

void CreateJobConfigRequest::SetCOSBucket(const string& _cOSBucket)
{
    m_cOSBucket = _cOSBucket;
    m_cOSBucketHasBeenSet = true;
}

bool CreateJobConfigRequest::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

bool CreateJobConfigRequest::GetLogCollect() const
{
    return m_logCollect;
}

void CreateJobConfigRequest::SetLogCollect(const bool& _logCollect)
{
    m_logCollect = _logCollect;
    m_logCollectHasBeenSet = true;
}

bool CreateJobConfigRequest::LogCollectHasBeenSet() const
{
    return m_logCollectHasBeenSet;
}


