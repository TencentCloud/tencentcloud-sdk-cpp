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

#include <tencentcloud/oceanus/v20190422/model/ClusterBucketInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ClusterBucketInfo::ClusterBucketInfo() :
    m_serialIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_bucketTypeHasBeenSet(false),
    m_authModeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_jobCountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterBucketInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialId") && !value["SerialId"].IsNull())
    {
        if (!value["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(value["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.ClusterId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = value["ClusterId"].GetInt64();
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("BucketType") && !value["BucketType"].IsNull())
    {
        if (!value["BucketType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.BucketType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketType = value["BucketType"].GetInt64();
        m_bucketTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthMode") && !value["AuthMode"].IsNull())
    {
        if (!value["AuthMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.AuthMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authMode = value["AuthMode"].GetInt64();
        m_authModeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("JobCount") && !value["JobCount"].IsNull())
    {
        if (!value["JobCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.JobCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobCount = value["JobCount"].GetInt64();
        m_jobCountHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBucketInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterBucketInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterId, allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketType, allocator);
    }

    if (m_authModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authMode, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_jobCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobCount, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

}


string ClusterBucketInfo::GetSerialId() const
{
    return m_serialId;
}

void ClusterBucketInfo::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool ClusterBucketInfo::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

int64_t ClusterBucketInfo::GetClusterId() const
{
    return m_clusterId;
}

void ClusterBucketInfo::SetClusterId(const int64_t& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterBucketInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterBucketInfo::GetBucket() const
{
    return m_bucket;
}

void ClusterBucketInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool ClusterBucketInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

int64_t ClusterBucketInfo::GetBucketType() const
{
    return m_bucketType;
}

void ClusterBucketInfo::SetBucketType(const int64_t& _bucketType)
{
    m_bucketType = _bucketType;
    m_bucketTypeHasBeenSet = true;
}

bool ClusterBucketInfo::BucketTypeHasBeenSet() const
{
    return m_bucketTypeHasBeenSet;
}

int64_t ClusterBucketInfo::GetAuthMode() const
{
    return m_authMode;
}

void ClusterBucketInfo::SetAuthMode(const int64_t& _authMode)
{
    m_authMode = _authMode;
    m_authModeHasBeenSet = true;
}

bool ClusterBucketInfo::AuthModeHasBeenSet() const
{
    return m_authModeHasBeenSet;
}

int64_t ClusterBucketInfo::GetIsDefault() const
{
    return m_isDefault;
}

void ClusterBucketInfo::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool ClusterBucketInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

int64_t ClusterBucketInfo::GetStatus() const
{
    return m_status;
}

void ClusterBucketInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterBucketInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ClusterBucketInfo::GetJobCount() const
{
    return m_jobCount;
}

void ClusterBucketInfo::SetJobCount(const int64_t& _jobCount)
{
    m_jobCount = _jobCount;
    m_jobCountHasBeenSet = true;
}

bool ClusterBucketInfo::JobCountHasBeenSet() const
{
    return m_jobCountHasBeenSet;
}

string ClusterBucketInfo::GetRegion() const
{
    return m_region;
}

void ClusterBucketInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterBucketInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterBucketInfo::GetCreateTime() const
{
    return m_createTime;
}

void ClusterBucketInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterBucketInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterBucketInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ClusterBucketInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClusterBucketInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

