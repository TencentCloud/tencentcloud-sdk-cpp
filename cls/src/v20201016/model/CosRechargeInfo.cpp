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

#include <tencentcloud/cls/v20201016/model/CosRechargeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CosRechargeInfo::CosRechargeInfo() :
    m_idHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_extractRuleInfoHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

CoreInternalOutcome CosRechargeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Compress") && !value["Compress"].IsNull())
    {
        if (!value["Compress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Compress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compress = string(value["Compress"].GetString());
        m_compressHasBeenSet = true;
    }

    if (value.HasMember("ExtractRuleInfo") && !value["ExtractRuleInfo"].IsNull())
    {
        if (!value["ExtractRuleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.ExtractRuleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractRuleInfo.Deserialize(value["ExtractRuleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractRuleInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosRechargeInfo.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metadata.push_back((*itr).GetString());
        }
        m_metadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRechargeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compress.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRuleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRuleInfo.ToJsonObject(value[key.c_str()], allocator);
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

}


string CosRechargeInfo::GetId() const
{
    return m_id;
}

void CosRechargeInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CosRechargeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CosRechargeInfo::GetTopicId() const
{
    return m_topicId;
}

void CosRechargeInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CosRechargeInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CosRechargeInfo::GetLogsetId() const
{
    return m_logsetId;
}

void CosRechargeInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CosRechargeInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CosRechargeInfo::GetName() const
{
    return m_name;
}

void CosRechargeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CosRechargeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CosRechargeInfo::GetBucket() const
{
    return m_bucket;
}

void CosRechargeInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CosRechargeInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CosRechargeInfo::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CosRechargeInfo::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CosRechargeInfo::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CosRechargeInfo::GetPrefix() const
{
    return m_prefix;
}

void CosRechargeInfo::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool CosRechargeInfo::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string CosRechargeInfo::GetLogType() const
{
    return m_logType;
}

void CosRechargeInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CosRechargeInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

uint64_t CosRechargeInfo::GetStatus() const
{
    return m_status;
}

void CosRechargeInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CosRechargeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CosRechargeInfo::GetEnable() const
{
    return m_enable;
}

void CosRechargeInfo::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CosRechargeInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CosRechargeInfo::GetCreateTime() const
{
    return m_createTime;
}

void CosRechargeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CosRechargeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CosRechargeInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void CosRechargeInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CosRechargeInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t CosRechargeInfo::GetProgress() const
{
    return m_progress;
}

void CosRechargeInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool CosRechargeInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string CosRechargeInfo::GetCompress() const
{
    return m_compress;
}

void CosRechargeInfo::SetCompress(const string& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool CosRechargeInfo::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ExtractRuleInfo CosRechargeInfo::GetExtractRuleInfo() const
{
    return m_extractRuleInfo;
}

void CosRechargeInfo::SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo)
{
    m_extractRuleInfo = _extractRuleInfo;
    m_extractRuleInfoHasBeenSet = true;
}

bool CosRechargeInfo::ExtractRuleInfoHasBeenSet() const
{
    return m_extractRuleInfoHasBeenSet;
}

uint64_t CosRechargeInfo::GetTaskType() const
{
    return m_taskType;
}

void CosRechargeInfo::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CosRechargeInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> CosRechargeInfo::GetMetadata() const
{
    return m_metadata;
}

void CosRechargeInfo::SetMetadata(const vector<string>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CosRechargeInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

