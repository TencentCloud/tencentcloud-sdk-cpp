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

#include <tencentcloud/mongodb/v20190725/model/BackupDownloadTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

BackupDownloadTask::BackupDownloadTask() :
    m_createTimeHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_replicaSetIdHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_timeSpendHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupDescHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false)
{
}

CoreInternalOutcome BackupDownloadTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupName") && !value["BackupName"].IsNull())
    {
        if (!value["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(value["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSetId") && !value["ReplicaSetId"].IsNull())
    {
        if (!value["ReplicaSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.ReplicaSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetId = string(value["ReplicaSetId"].GetString());
        m_replicaSetIdHasBeenSet = true;
    }

    if (value.HasMember("BackupSize") && !value["BackupSize"].IsNull())
    {
        if (!value["BackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.BackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = value["BackupSize"].GetInt64();
        m_backupSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.Percent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetInt64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("TimeSpend") && !value["TimeSpend"].IsNull())
    {
        if (!value["TimeSpend"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.TimeSpend` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpend = value["TimeSpend"].GetInt64();
        m_timeSpendHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.BackupMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = value["BackupMethod"].GetInt64();
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupDesc") && !value["BackupDesc"].IsNull())
    {
        if (!value["BackupDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.BackupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupDesc = string(value["BackupDesc"].GetString());
        m_backupDescHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadTask.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupDownloadTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_timeSpendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpend, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupMethod, allocator);
    }

    if (m_backupDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

}


string BackupDownloadTask::GetCreateTime() const
{
    return m_createTime;
}

void BackupDownloadTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupDownloadTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BackupDownloadTask::GetBackupName() const
{
    return m_backupName;
}

void BackupDownloadTask::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool BackupDownloadTask::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

string BackupDownloadTask::GetReplicaSetId() const
{
    return m_replicaSetId;
}

void BackupDownloadTask::SetReplicaSetId(const string& _replicaSetId)
{
    m_replicaSetId = _replicaSetId;
    m_replicaSetIdHasBeenSet = true;
}

bool BackupDownloadTask::ReplicaSetIdHasBeenSet() const
{
    return m_replicaSetIdHasBeenSet;
}

int64_t BackupDownloadTask::GetBackupSize() const
{
    return m_backupSize;
}

void BackupDownloadTask::SetBackupSize(const int64_t& _backupSize)
{
    m_backupSize = _backupSize;
    m_backupSizeHasBeenSet = true;
}

bool BackupDownloadTask::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

int64_t BackupDownloadTask::GetStatus() const
{
    return m_status;
}

void BackupDownloadTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupDownloadTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t BackupDownloadTask::GetPercent() const
{
    return m_percent;
}

void BackupDownloadTask::SetPercent(const int64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool BackupDownloadTask::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

int64_t BackupDownloadTask::GetTimeSpend() const
{
    return m_timeSpend;
}

void BackupDownloadTask::SetTimeSpend(const int64_t& _timeSpend)
{
    m_timeSpend = _timeSpend;
    m_timeSpendHasBeenSet = true;
}

bool BackupDownloadTask::TimeSpendHasBeenSet() const
{
    return m_timeSpendHasBeenSet;
}

string BackupDownloadTask::GetUrl() const
{
    return m_url;
}

void BackupDownloadTask::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool BackupDownloadTask::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t BackupDownloadTask::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupDownloadTask::SetBackupMethod(const int64_t& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupDownloadTask::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupDownloadTask::GetBackupDesc() const
{
    return m_backupDesc;
}

void BackupDownloadTask::SetBackupDesc(const string& _backupDesc)
{
    m_backupDesc = _backupDesc;
    m_backupDescHasBeenSet = true;
}

bool BackupDownloadTask::BackupDescHasBeenSet() const
{
    return m_backupDescHasBeenSet;
}

string BackupDownloadTask::GetRegion() const
{
    return m_region;
}

void BackupDownloadTask::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupDownloadTask::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BackupDownloadTask::GetBucket() const
{
    return m_bucket;
}

void BackupDownloadTask::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool BackupDownloadTask::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

