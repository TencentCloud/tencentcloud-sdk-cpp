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

#include <tencentcloud/tione/v20191022/model/OutputDataConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

OutputDataConfig::OutputDataConfig() :
    m_cosOutputBucketHasBeenSet(false),
    m_cosOutputKeyPrefixHasBeenSet(false),
    m_fileSystemDataSourceHasBeenSet(false)
{
}

CoreInternalOutcome OutputDataConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosOutputBucket") && !value["CosOutputBucket"].IsNull())
    {
        if (!value["CosOutputBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDataConfig.CosOutputBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosOutputBucket = string(value["CosOutputBucket"].GetString());
        m_cosOutputBucketHasBeenSet = true;
    }

    if (value.HasMember("CosOutputKeyPrefix") && !value["CosOutputKeyPrefix"].IsNull())
    {
        if (!value["CosOutputKeyPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDataConfig.CosOutputKeyPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosOutputKeyPrefix = string(value["CosOutputKeyPrefix"].GetString());
        m_cosOutputKeyPrefixHasBeenSet = true;
    }

    if (value.HasMember("FileSystemDataSource") && !value["FileSystemDataSource"].IsNull())
    {
        if (!value["FileSystemDataSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDataConfig.FileSystemDataSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileSystemDataSource.Deserialize(value["FileSystemDataSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileSystemDataSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDataConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosOutputBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosOutputBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosOutputBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosOutputKeyPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosOutputKeyPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosOutputKeyPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemDataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemDataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileSystemDataSource.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OutputDataConfig::GetCosOutputBucket() const
{
    return m_cosOutputBucket;
}

void OutputDataConfig::SetCosOutputBucket(const string& _cosOutputBucket)
{
    m_cosOutputBucket = _cosOutputBucket;
    m_cosOutputBucketHasBeenSet = true;
}

bool OutputDataConfig::CosOutputBucketHasBeenSet() const
{
    return m_cosOutputBucketHasBeenSet;
}

string OutputDataConfig::GetCosOutputKeyPrefix() const
{
    return m_cosOutputKeyPrefix;
}

void OutputDataConfig::SetCosOutputKeyPrefix(const string& _cosOutputKeyPrefix)
{
    m_cosOutputKeyPrefix = _cosOutputKeyPrefix;
    m_cosOutputKeyPrefixHasBeenSet = true;
}

bool OutputDataConfig::CosOutputKeyPrefixHasBeenSet() const
{
    return m_cosOutputKeyPrefixHasBeenSet;
}

FileSystemDataSource OutputDataConfig::GetFileSystemDataSource() const
{
    return m_fileSystemDataSource;
}

void OutputDataConfig::SetFileSystemDataSource(const FileSystemDataSource& _fileSystemDataSource)
{
    m_fileSystemDataSource = _fileSystemDataSource;
    m_fileSystemDataSourceHasBeenSet = true;
}

bool OutputDataConfig::FileSystemDataSourceHasBeenSet() const
{
    return m_fileSystemDataSourceHasBeenSet;
}

