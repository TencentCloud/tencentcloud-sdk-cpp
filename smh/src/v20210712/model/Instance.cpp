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

#include <tencentcloud/smh/v20210712/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_userLimitHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_storageLimitGBHasBeenSet(false),
    m_isolatedHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_superAdminAccountHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_logBucketHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.EffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = string(value["EffectiveTime"].GetString());
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("UserLimit") && !value["UserLimit"].IsNull())
    {
        if (!value["UserLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.UserLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userLimit = value["UserLimit"].GetUint64();
        m_userLimitHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.StorageLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = string(value["StorageLimit"].GetString());
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("StorageLimitGB") && !value["StorageLimitGB"].IsNull())
    {
        if (!value["StorageLimitGB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.StorageLimitGB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimitGB = value["StorageLimitGB"].GetUint64();
        m_storageLimitGBHasBeenSet = true;
    }

    if (value.HasMember("Isolated") && !value["Isolated"].IsNull())
    {
        if (!value["Isolated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Isolated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isolated = value["Isolated"].GetBool();
        m_isolatedHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AutoRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetUint64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("SuperAdminAccount") && !value["SuperAdminAccount"].IsNull())
    {
        if (!value["SuperAdminAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SuperAdminAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_superAdminAccount = string(value["SuperAdminAccount"].GetString());
        m_superAdminAccountHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("LogBucket") && !value["LogBucket"].IsNull())
    {
        if (!value["LogBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LogBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logBucket = string(value["LogBucket"].GetString());
        m_logBucketHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userLimit, allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_storageLimitGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimitGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimitGB, allocator);
    }

    if (m_isolatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isolated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolated, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_superAdminAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperAdminAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_superAdminAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_logBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logBucket.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetDomain() const
{
    return m_domain;
}

void Instance::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool Instance::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string Instance::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void Instance::SetEffectiveTime(const string& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool Instance::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string Instance::GetExpireTime() const
{
    return m_expireTime;
}

void Instance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Instance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t Instance::GetUserLimit() const
{
    return m_userLimit;
}

void Instance::SetUserLimit(const uint64_t& _userLimit)
{
    m_userLimit = _userLimit;
    m_userLimitHasBeenSet = true;
}

bool Instance::UserLimitHasBeenSet() const
{
    return m_userLimitHasBeenSet;
}

string Instance::GetStorageLimit() const
{
    return m_storageLimit;
}

void Instance::SetStorageLimit(const string& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool Instance::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

uint64_t Instance::GetStorageLimitGB() const
{
    return m_storageLimitGB;
}

void Instance::SetStorageLimitGB(const uint64_t& _storageLimitGB)
{
    m_storageLimitGB = _storageLimitGB;
    m_storageLimitGBHasBeenSet = true;
}

bool Instance::StorageLimitGBHasBeenSet() const
{
    return m_storageLimitGBHasBeenSet;
}

bool Instance::GetIsolated() const
{
    return m_isolated;
}

void Instance::SetIsolated(const bool& _isolated)
{
    m_isolated = _isolated;
    m_isolatedHasBeenSet = true;
}

bool Instance::IsolatedHasBeenSet() const
{
    return m_isolatedHasBeenSet;
}

uint64_t Instance::GetAutoRenew() const
{
    return m_autoRenew;
}

void Instance::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool Instance::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string Instance::GetSuperAdminAccount() const
{
    return m_superAdminAccount;
}

void Instance::SetSuperAdminAccount(const string& _superAdminAccount)
{
    m_superAdminAccount = _superAdminAccount;
    m_superAdminAccountHasBeenSet = true;
}

bool Instance::SuperAdminAccountHasBeenSet() const
{
    return m_superAdminAccountHasBeenSet;
}

string Instance::GetBucket() const
{
    return m_bucket;
}

void Instance::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool Instance::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string Instance::GetLogBucket() const
{
    return m_logBucket;
}

void Instance::SetLogBucket(const string& _logBucket)
{
    m_logBucket = _logBucket;
    m_logBucketHasBeenSet = true;
}

bool Instance::LogBucketHasBeenSet() const
{
    return m_logBucketHasBeenSet;
}

