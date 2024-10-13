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

#include <tencentcloud/dsgc/v20190723/model/DSPACosMetaDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DSPACosMetaDataInfo::DSPACosMetaDataInfo() :
    m_bucketHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_validHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_governAuthStatusHasBeenSet(false)
{
}

CoreInternalOutcome DSPACosMetaDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Valid") && !value["Valid"].IsNull())
    {
        if (!value["Valid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.Valid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_valid = value["Valid"].GetInt64();
        m_validHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(value["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.Storage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetDouble();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("GovernAuthStatus") && !value["GovernAuthStatus"].IsNull())
    {
        if (!value["GovernAuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DSPACosMetaDataInfo.GovernAuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_governAuthStatus = value["GovernAuthStatus"].GetInt64();
        m_governAuthStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DSPACosMetaDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_validHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Valid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valid, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_governAuthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernAuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_governAuthStatus, allocator);
    }

}


string DSPACosMetaDataInfo::GetBucket() const
{
    return m_bucket;
}

void DSPACosMetaDataInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool DSPACosMetaDataInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string DSPACosMetaDataInfo::GetCreateTime() const
{
    return m_createTime;
}

void DSPACosMetaDataInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DSPACosMetaDataInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DSPACosMetaDataInfo::GetValid() const
{
    return m_valid;
}

void DSPACosMetaDataInfo::SetValid(const int64_t& _valid)
{
    m_valid = _valid;
    m_validHasBeenSet = true;
}

bool DSPACosMetaDataInfo::ValidHasBeenSet() const
{
    return m_validHasBeenSet;
}

string DSPACosMetaDataInfo::GetResourceId() const
{
    return m_resourceId;
}

void DSPACosMetaDataInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DSPACosMetaDataInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DSPACosMetaDataInfo::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DSPACosMetaDataInfo::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DSPACosMetaDataInfo::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string DSPACosMetaDataInfo::GetBindStatus() const
{
    return m_bindStatus;
}

void DSPACosMetaDataInfo::SetBindStatus(const string& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool DSPACosMetaDataInfo::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

double DSPACosMetaDataInfo::GetStorage() const
{
    return m_storage;
}

void DSPACosMetaDataInfo::SetStorage(const double& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DSPACosMetaDataInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t DSPACosMetaDataInfo::GetGovernAuthStatus() const
{
    return m_governAuthStatus;
}

void DSPACosMetaDataInfo::SetGovernAuthStatus(const int64_t& _governAuthStatus)
{
    m_governAuthStatus = _governAuthStatus;
    m_governAuthStatusHasBeenSet = true;
}

bool DSPACosMetaDataInfo::GovernAuthStatusHasBeenSet() const
{
    return m_governAuthStatusHasBeenSet;
}

