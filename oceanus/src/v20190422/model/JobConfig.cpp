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

#include <tencentcloud/oceanus/v20190422/model/JobConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobConfig::JobConfig() :
    m_jobIdHasBeenSet(false),
    m_entrypointClassHasBeenSet(false),
    m_programArgsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_defaultParallelismHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_resourceRefDetailsHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_logCollectHasBeenSet(false),
    m_maxParallelismHasBeenSet(false),
    m_jobManagerSpecHasBeenSet(false),
    m_taskManagerSpecHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false)
{
}

CoreInternalOutcome JobConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("EntrypointClass") && !value["EntrypointClass"].IsNull())
    {
        if (!value["EntrypointClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.EntrypointClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypointClass = string(value["EntrypointClass"].GetString());
        m_entrypointClassHasBeenSet = true;
    }

    if (value.HasMember("ProgramArgs") && !value["ProgramArgs"].IsNull())
    {
        if (!value["ProgramArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ProgramArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programArgs = string(value["ProgramArgs"].GetString());
        m_programArgsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("DefaultParallelism") && !value["DefaultParallelism"].IsNull())
    {
        if (!value["DefaultParallelism"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.DefaultParallelism` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultParallelism = value["DefaultParallelism"].GetUint64();
        m_defaultParallelismHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobConfig.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("ResourceRefDetails") && !value["ResourceRefDetails"].IsNull())
    {
        if (!value["ResourceRefDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobConfig.ResourceRefDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceRefDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceRefDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceRefDetails.push_back(item);
        }
        m_resourceRefDetailsHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("COSBucket") && !value["COSBucket"].IsNull())
    {
        if (!value["COSBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.COSBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cOSBucket = string(value["COSBucket"].GetString());
        m_cOSBucketHasBeenSet = true;
    }

    if (value.HasMember("LogCollect") && !value["LogCollect"].IsNull())
    {
        if (!value["LogCollect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.LogCollect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logCollect = value["LogCollect"].GetInt64();
        m_logCollectHasBeenSet = true;
    }

    if (value.HasMember("MaxParallelism") && !value["MaxParallelism"].IsNull())
    {
        if (!value["MaxParallelism"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.MaxParallelism` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxParallelism = value["MaxParallelism"].GetUint64();
        m_maxParallelismHasBeenSet = true;
    }

    if (value.HasMember("JobManagerSpec") && !value["JobManagerSpec"].IsNull())
    {
        if (!value["JobManagerSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.JobManagerSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jobManagerSpec = value["JobManagerSpec"].GetDouble();
        m_jobManagerSpecHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerSpec") && !value["TaskManagerSpec"].IsNull())
    {
        if (!value["TaskManagerSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.TaskManagerSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerSpec = value["TaskManagerSpec"].GetDouble();
        m_taskManagerSpecHasBeenSet = true;
    }

    if (value.HasMember("ClsLogsetId") && !value["ClsLogsetId"].IsNull())
    {
        if (!value["ClsLogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ClsLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetId = string(value["ClsLogsetId"].GetString());
        m_clsLogsetIdHasBeenSet = true;
    }

    if (value.HasMember("ClsTopicId") && !value["ClsTopicId"].IsNull())
    {
        if (!value["ClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfig.ClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsTopicId = string(value["ClsTopicId"].GetString());
        m_clsTopicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntrypointClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entrypointClass.c_str(), allocator).Move(), allocator);
    }

    if (m_programArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_defaultParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultParallelism, allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceRefDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefDetails.begin(); itr != m_resourceRefDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_logCollectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logCollect, allocator);
    }

    if (m_maxParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxParallelism, allocator);
    }

    if (m_jobManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobManagerSpec, allocator);
    }

    if (m_taskManagerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerSpec, allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

}


string JobConfig::GetJobId() const
{
    return m_jobId;
}

void JobConfig::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobConfig::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobConfig::GetEntrypointClass() const
{
    return m_entrypointClass;
}

void JobConfig::SetEntrypointClass(const string& _entrypointClass)
{
    m_entrypointClass = _entrypointClass;
    m_entrypointClassHasBeenSet = true;
}

bool JobConfig::EntrypointClassHasBeenSet() const
{
    return m_entrypointClassHasBeenSet;
}

string JobConfig::GetProgramArgs() const
{
    return m_programArgs;
}

void JobConfig::SetProgramArgs(const string& _programArgs)
{
    m_programArgs = _programArgs;
    m_programArgsHasBeenSet = true;
}

bool JobConfig::ProgramArgsHasBeenSet() const
{
    return m_programArgsHasBeenSet;
}

string JobConfig::GetRemark() const
{
    return m_remark;
}

void JobConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool JobConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string JobConfig::GetCreateTime() const
{
    return m_createTime;
}

void JobConfig::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t JobConfig::GetVersion() const
{
    return m_version;
}

void JobConfig::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool JobConfig::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t JobConfig::GetDefaultParallelism() const
{
    return m_defaultParallelism;
}

void JobConfig::SetDefaultParallelism(const uint64_t& _defaultParallelism)
{
    m_defaultParallelism = _defaultParallelism;
    m_defaultParallelismHasBeenSet = true;
}

bool JobConfig::DefaultParallelismHasBeenSet() const
{
    return m_defaultParallelismHasBeenSet;
}

vector<Property> JobConfig::GetProperties() const
{
    return m_properties;
}

void JobConfig::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool JobConfig::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<ResourceRefDetail> JobConfig::GetResourceRefDetails() const
{
    return m_resourceRefDetails;
}

void JobConfig::SetResourceRefDetails(const vector<ResourceRefDetail>& _resourceRefDetails)
{
    m_resourceRefDetails = _resourceRefDetails;
    m_resourceRefDetailsHasBeenSet = true;
}

bool JobConfig::ResourceRefDetailsHasBeenSet() const
{
    return m_resourceRefDetailsHasBeenSet;
}

string JobConfig::GetCreatorUin() const
{
    return m_creatorUin;
}

void JobConfig::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool JobConfig::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string JobConfig::GetUpdateTime() const
{
    return m_updateTime;
}

void JobConfig::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobConfig::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string JobConfig::GetCOSBucket() const
{
    return m_cOSBucket;
}

void JobConfig::SetCOSBucket(const string& _cOSBucket)
{
    m_cOSBucket = _cOSBucket;
    m_cOSBucketHasBeenSet = true;
}

bool JobConfig::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

int64_t JobConfig::GetLogCollect() const
{
    return m_logCollect;
}

void JobConfig::SetLogCollect(const int64_t& _logCollect)
{
    m_logCollect = _logCollect;
    m_logCollectHasBeenSet = true;
}

bool JobConfig::LogCollectHasBeenSet() const
{
    return m_logCollectHasBeenSet;
}

uint64_t JobConfig::GetMaxParallelism() const
{
    return m_maxParallelism;
}

void JobConfig::SetMaxParallelism(const uint64_t& _maxParallelism)
{
    m_maxParallelism = _maxParallelism;
    m_maxParallelismHasBeenSet = true;
}

bool JobConfig::MaxParallelismHasBeenSet() const
{
    return m_maxParallelismHasBeenSet;
}

double JobConfig::GetJobManagerSpec() const
{
    return m_jobManagerSpec;
}

void JobConfig::SetJobManagerSpec(const double& _jobManagerSpec)
{
    m_jobManagerSpec = _jobManagerSpec;
    m_jobManagerSpecHasBeenSet = true;
}

bool JobConfig::JobManagerSpecHasBeenSet() const
{
    return m_jobManagerSpecHasBeenSet;
}

double JobConfig::GetTaskManagerSpec() const
{
    return m_taskManagerSpec;
}

void JobConfig::SetTaskManagerSpec(const double& _taskManagerSpec)
{
    m_taskManagerSpec = _taskManagerSpec;
    m_taskManagerSpecHasBeenSet = true;
}

bool JobConfig::TaskManagerSpecHasBeenSet() const
{
    return m_taskManagerSpecHasBeenSet;
}

string JobConfig::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void JobConfig::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool JobConfig::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string JobConfig::GetClsTopicId() const
{
    return m_clsTopicId;
}

void JobConfig::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool JobConfig::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

