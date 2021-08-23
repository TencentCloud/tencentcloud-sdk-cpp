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

#include <tencentcloud/tiw/v20190919/model/SnapshotCOS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

SnapshotCOS::SnapshotCOS() :
    m_uinHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_targetDirHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotCOS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCOS.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCOS.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCOS.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("TargetDir") && !value["TargetDir"].IsNull())
    {
        if (!value["TargetDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCOS.TargetDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDir = string(value["TargetDir"].GetString());
        m_targetDirHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCOS.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotCOS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
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

    if (m_targetDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDir.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SnapshotCOS::GetUin() const
{
    return m_uin;
}

void SnapshotCOS::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SnapshotCOS::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SnapshotCOS::GetRegion() const
{
    return m_region;
}

void SnapshotCOS::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SnapshotCOS::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SnapshotCOS::GetBucket() const
{
    return m_bucket;
}

void SnapshotCOS::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool SnapshotCOS::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string SnapshotCOS::GetTargetDir() const
{
    return m_targetDir;
}

void SnapshotCOS::SetTargetDir(const string& _targetDir)
{
    m_targetDir = _targetDir;
    m_targetDirHasBeenSet = true;
}

bool SnapshotCOS::TargetDirHasBeenSet() const
{
    return m_targetDirHasBeenSet;
}

string SnapshotCOS::GetDomain() const
{
    return m_domain;
}

void SnapshotCOS::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SnapshotCOS::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

