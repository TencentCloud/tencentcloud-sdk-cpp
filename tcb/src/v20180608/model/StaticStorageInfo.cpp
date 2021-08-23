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

#include <tencentcloud/tcb/v20180608/model/StaticStorageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

StaticStorageInfo::StaticStorageInfo() :
    m_staticDomainHasBeenSet(false),
    m_defaultDirNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false)
{
}

CoreInternalOutcome StaticStorageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StaticDomain") && !value["StaticDomain"].IsNull())
    {
        if (!value["StaticDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStorageInfo.StaticDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staticDomain = string(value["StaticDomain"].GetString());
        m_staticDomainHasBeenSet = true;
    }

    if (value.HasMember("DefaultDirName") && !value["DefaultDirName"].IsNull())
    {
        if (!value["DefaultDirName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStorageInfo.DefaultDirName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDirName = string(value["DefaultDirName"].GetString());
        m_defaultDirNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStorageInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStorageInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticStorageInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticStorageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staticDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staticDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDirNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDirName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultDirName.c_str(), allocator).Move(), allocator);
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

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

}


string StaticStorageInfo::GetStaticDomain() const
{
    return m_staticDomain;
}

void StaticStorageInfo::SetStaticDomain(const string& _staticDomain)
{
    m_staticDomain = _staticDomain;
    m_staticDomainHasBeenSet = true;
}

bool StaticStorageInfo::StaticDomainHasBeenSet() const
{
    return m_staticDomainHasBeenSet;
}

string StaticStorageInfo::GetDefaultDirName() const
{
    return m_defaultDirName;
}

void StaticStorageInfo::SetDefaultDirName(const string& _defaultDirName)
{
    m_defaultDirName = _defaultDirName;
    m_defaultDirNameHasBeenSet = true;
}

bool StaticStorageInfo::DefaultDirNameHasBeenSet() const
{
    return m_defaultDirNameHasBeenSet;
}

string StaticStorageInfo::GetStatus() const
{
    return m_status;
}

void StaticStorageInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StaticStorageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StaticStorageInfo::GetRegion() const
{
    return m_region;
}

void StaticStorageInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool StaticStorageInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string StaticStorageInfo::GetBucket() const
{
    return m_bucket;
}

void StaticStorageInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool StaticStorageInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

