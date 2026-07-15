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

#include <tencentcloud/cls/v20201016/model/S3RechargeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

S3RechargeInfo::S3RechargeInfo() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_s3RegionHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_extractRuleHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome S3RechargeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("S3Region") && !value["S3Region"].IsNull())
    {
        if (!value["S3Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.S3Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3Region = string(value["S3Region"].GetString());
        m_s3RegionHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyId") && !value["AccessKeyId"].IsNull())
    {
        if (!value["AccessKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.AccessKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyId = string(value["AccessKeyId"].GetString());
        m_accessKeyIdHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }

    if (value.HasMember("Compress") && !value["Compress"].IsNull())
    {
        if (!value["Compress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Compress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compress = string(value["Compress"].GetString());
        m_compressHasBeenSet = true;
    }

    if (value.HasMember("ExtractRule") && !value["ExtractRule"].IsNull())
    {
        if (!value["ExtractRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.ExtractRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractRule.Deserialize(value["ExtractRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractRuleHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metadata.push_back((*itr).GetString());
        }
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `S3RechargeInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void S3RechargeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_s3RegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_s3Region.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compress.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string S3RechargeInfo::GetTaskId() const
{
    return m_taskId;
}

void S3RechargeInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool S3RechargeInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string S3RechargeInfo::GetTopicId() const
{
    return m_topicId;
}

void S3RechargeInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool S3RechargeInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string S3RechargeInfo::GetLogsetId() const
{
    return m_logsetId;
}

void S3RechargeInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool S3RechargeInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string S3RechargeInfo::GetName() const
{
    return m_name;
}

void S3RechargeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool S3RechargeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string S3RechargeInfo::GetBucket() const
{
    return m_bucket;
}

void S3RechargeInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool S3RechargeInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string S3RechargeInfo::GetS3Region() const
{
    return m_s3Region;
}

void S3RechargeInfo::SetS3Region(const string& _s3Region)
{
    m_s3Region = _s3Region;
    m_s3RegionHasBeenSet = true;
}

bool S3RechargeInfo::S3RegionHasBeenSet() const
{
    return m_s3RegionHasBeenSet;
}

string S3RechargeInfo::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void S3RechargeInfo::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool S3RechargeInfo::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string S3RechargeInfo::GetEndpoint() const
{
    return m_endpoint;
}

void S3RechargeInfo::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool S3RechargeInfo::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string S3RechargeInfo::GetLogType() const
{
    return m_logType;
}

void S3RechargeInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool S3RechargeInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string S3RechargeInfo::GetPrefix() const
{
    return m_prefix;
}

void S3RechargeInfo::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool S3RechargeInfo::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string S3RechargeInfo::GetCompress() const
{
    return m_compress;
}

void S3RechargeInfo::SetCompress(const string& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool S3RechargeInfo::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ExtractRuleInfo S3RechargeInfo::GetExtractRule() const
{
    return m_extractRule;
}

void S3RechargeInfo::SetExtractRule(const ExtractRuleInfo& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool S3RechargeInfo::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

uint64_t S3RechargeInfo::GetTaskType() const
{
    return m_taskType;
}

void S3RechargeInfo::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool S3RechargeInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> S3RechargeInfo::GetMetadata() const
{
    return m_metadata;
}

void S3RechargeInfo::SetMetadata(const vector<string>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool S3RechargeInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

uint64_t S3RechargeInfo::GetStatus() const
{
    return m_status;
}

void S3RechargeInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool S3RechargeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t S3RechargeInfo::GetEnable() const
{
    return m_enable;
}

void S3RechargeInfo::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool S3RechargeInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t S3RechargeInfo::GetProgress() const
{
    return m_progress;
}

void S3RechargeInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool S3RechargeInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t S3RechargeInfo::GetCreateTime() const
{
    return m_createTime;
}

void S3RechargeInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool S3RechargeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t S3RechargeInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void S3RechargeInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool S3RechargeInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

