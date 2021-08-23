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

#include <tencentcloud/tsf/v20180326/model/RepositoryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

RepositoryInfo::RepositoryInfo() :
    m_repositoryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_repositoryDescHasBeenSet(false),
    m_isUsedHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_directoryHasBeenSet(false)
{
}

CoreInternalOutcome RepositoryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepositoryId") && !value["RepositoryId"].IsNull())
    {
        if (!value["RepositoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.RepositoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryId = string(value["RepositoryId"].GetString());
        m_repositoryIdHasBeenSet = true;
    }

    if (value.HasMember("RepositoryName") && !value["RepositoryName"].IsNull())
    {
        if (!value["RepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.RepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryName = string(value["RepositoryName"].GetString());
        m_repositoryNameHasBeenSet = true;
    }

    if (value.HasMember("RepositoryType") && !value["RepositoryType"].IsNull())
    {
        if (!value["RepositoryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.RepositoryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryType = string(value["RepositoryType"].GetString());
        m_repositoryTypeHasBeenSet = true;
    }

    if (value.HasMember("RepositoryDesc") && !value["RepositoryDesc"].IsNull())
    {
        if (!value["RepositoryDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.RepositoryDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryDesc = string(value["RepositoryDesc"].GetString());
        m_repositoryDescHasBeenSet = true;
    }

    if (value.HasMember("IsUsed") && !value["IsUsed"].IsNull())
    {
        if (!value["IsUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.IsUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUsed = value["IsUsed"].GetBool();
        m_isUsedHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("Directory") && !value["Directory"].IsNull())
    {
        if (!value["Directory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.Directory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directory = string(value["Directory"].GetString());
        m_directoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepositoryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repositoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUsed, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_directoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Directory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directory.c_str(), allocator).Move(), allocator);
    }

}


string RepositoryInfo::GetRepositoryId() const
{
    return m_repositoryId;
}

void RepositoryInfo::SetRepositoryId(const string& _repositoryId)
{
    m_repositoryId = _repositoryId;
    m_repositoryIdHasBeenSet = true;
}

bool RepositoryInfo::RepositoryIdHasBeenSet() const
{
    return m_repositoryIdHasBeenSet;
}

string RepositoryInfo::GetRepositoryName() const
{
    return m_repositoryName;
}

void RepositoryInfo::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool RepositoryInfo::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

string RepositoryInfo::GetRepositoryType() const
{
    return m_repositoryType;
}

void RepositoryInfo::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool RepositoryInfo::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

string RepositoryInfo::GetRepositoryDesc() const
{
    return m_repositoryDesc;
}

void RepositoryInfo::SetRepositoryDesc(const string& _repositoryDesc)
{
    m_repositoryDesc = _repositoryDesc;
    m_repositoryDescHasBeenSet = true;
}

bool RepositoryInfo::RepositoryDescHasBeenSet() const
{
    return m_repositoryDescHasBeenSet;
}

bool RepositoryInfo::GetIsUsed() const
{
    return m_isUsed;
}

void RepositoryInfo::SetIsUsed(const bool& _isUsed)
{
    m_isUsed = _isUsed;
    m_isUsedHasBeenSet = true;
}

bool RepositoryInfo::IsUsedHasBeenSet() const
{
    return m_isUsedHasBeenSet;
}

string RepositoryInfo::GetCreateTime() const
{
    return m_createTime;
}

void RepositoryInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RepositoryInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RepositoryInfo::GetBucketName() const
{
    return m_bucketName;
}

void RepositoryInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool RepositoryInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string RepositoryInfo::GetBucketRegion() const
{
    return m_bucketRegion;
}

void RepositoryInfo::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool RepositoryInfo::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string RepositoryInfo::GetDirectory() const
{
    return m_directory;
}

void RepositoryInfo::SetDirectory(const string& _directory)
{
    m_directory = _directory;
    m_directoryHasBeenSet = true;
}

bool RepositoryInfo::DirectoryHasBeenSet() const
{
    return m_directoryHasBeenSet;
}

