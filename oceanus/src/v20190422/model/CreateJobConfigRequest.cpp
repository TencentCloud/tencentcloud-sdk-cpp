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
    m_logCollectHasBeenSet(false),
    m_jobManagerSpecHasBeenSet(false),
    m_taskManagerSpecHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_logCollectTypeHasBeenSet(false),
    m_pythonVersionHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
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

    if (m_jobManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobManagerSpec, allocator);
    }

    if (m_taskManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskManagerSpec, allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logCollectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logCollectType, allocator);
    }

    if (m_pythonVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pythonVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
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

double CreateJobConfigRequest::GetJobManagerSpec() const
{
    return m_jobManagerSpec;
}

void CreateJobConfigRequest::SetJobManagerSpec(const double& _jobManagerSpec)
{
    m_jobManagerSpec = _jobManagerSpec;
    m_jobManagerSpecHasBeenSet = true;
}

bool CreateJobConfigRequest::JobManagerSpecHasBeenSet() const
{
    return m_jobManagerSpecHasBeenSet;
}

double CreateJobConfigRequest::GetTaskManagerSpec() const
{
    return m_taskManagerSpec;
}

void CreateJobConfigRequest::SetTaskManagerSpec(const double& _taskManagerSpec)
{
    m_taskManagerSpec = _taskManagerSpec;
    m_taskManagerSpecHasBeenSet = true;
}

bool CreateJobConfigRequest::TaskManagerSpecHasBeenSet() const
{
    return m_taskManagerSpecHasBeenSet;
}

string CreateJobConfigRequest::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void CreateJobConfigRequest::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool CreateJobConfigRequest::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string CreateJobConfigRequest::GetClsTopicId() const
{
    return m_clsTopicId;
}

void CreateJobConfigRequest::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool CreateJobConfigRequest::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

int64_t CreateJobConfigRequest::GetLogCollectType() const
{
    return m_logCollectType;
}

void CreateJobConfigRequest::SetLogCollectType(const int64_t& _logCollectType)
{
    m_logCollectType = _logCollectType;
    m_logCollectTypeHasBeenSet = true;
}

bool CreateJobConfigRequest::LogCollectTypeHasBeenSet() const
{
    return m_logCollectTypeHasBeenSet;
}

string CreateJobConfigRequest::GetPythonVersion() const
{
    return m_pythonVersion;
}

void CreateJobConfigRequest::SetPythonVersion(const string& _pythonVersion)
{
    m_pythonVersion = _pythonVersion;
    m_pythonVersionHasBeenSet = true;
}

bool CreateJobConfigRequest::PythonVersionHasBeenSet() const
{
    return m_pythonVersionHasBeenSet;
}

string CreateJobConfigRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CreateJobConfigRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CreateJobConfigRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


