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

#include <tencentcloud/tcb/v20180608/model/StaticStoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

StaticStoreInfo::StaticStoreInfo() :
    m_envIdHasBeenSet(false),
    m_cdnDomainHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regoinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome StaticStoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStoreInfo.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("CdnDomain") && !value["CdnDomain"].IsNull())
    {
        if (!value["CdnDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStoreInfo.CdnDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdnDomain = string(value["CdnDomain"].GetString());
        m_cdnDomainHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStoreInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Regoin") && !value["Regoin"].IsNull())
    {
        if (!value["Regoin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStoreInfo.Regoin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regoin = string(value["Regoin"].GetString());
        m_regoinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStoreInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStoreInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticStoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_cdnDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdnDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdnDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regoinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regoin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regoin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string StaticStoreInfo::GetEnvId() const
{
    return m_envId;
}

void StaticStoreInfo::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool StaticStoreInfo::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string StaticStoreInfo::GetCdnDomain() const
{
    return m_cdnDomain;
}

void StaticStoreInfo::SetCdnDomain(const string& _cdnDomain)
{
    m_cdnDomain = _cdnDomain;
    m_cdnDomainHasBeenSet = true;
}

bool StaticStoreInfo::CdnDomainHasBeenSet() const
{
    return m_cdnDomainHasBeenSet;
}

string StaticStoreInfo::GetBucket() const
{
    return m_bucket;
}

void StaticStoreInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool StaticStoreInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string StaticStoreInfo::GetRegoin() const
{
    return m_regoin;
}

void StaticStoreInfo::SetRegoin(const string& _regoin)
{
    m_regoin = _regoin;
    m_regoinHasBeenSet = true;
}

bool StaticStoreInfo::RegoinHasBeenSet() const
{
    return m_regoinHasBeenSet;
}

string StaticStoreInfo::GetStatus() const
{
    return m_status;
}

void StaticStoreInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StaticStoreInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StaticStoreInfo::GetRegion() const
{
    return m_region;
}

void StaticStoreInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool StaticStoreInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

