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

#include <tencentcloud/databuddy/v20260715/model/FileArrivalConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FileArrivalConfig::FileArrivalConfig() :
    m_cosBucketHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_fileStoragePathHasBeenSet(false),
    m_fileNamePatternHasBeenSet(false),
    m_recursiveHasBeenSet(false),
    m_minTriggerIntervalTimeHasBeenSet(false),
    m_batchWaitTimeHasBeenSet(false)
{
}

CoreInternalOutcome FileArrivalConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucket") && !value["CosBucket"].IsNull())
    {
        if (!value["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileArrivalConfig.CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(value["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileArrivalConfig.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("FileStoragePath") && !value["FileStoragePath"].IsNull())
    {
        if (!value["FileStoragePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileArrivalConfig.FileStoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileStoragePath = string(value["FileStoragePath"].GetString());
        m_fileStoragePathHasBeenSet = true;
    }

    if (value.HasMember("FileNamePattern") && !value["FileNamePattern"].IsNull())
    {
        if (!value["FileNamePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileArrivalConfig.FileNamePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileNamePattern = string(value["FileNamePattern"].GetString());
        m_fileNamePatternHasBeenSet = true;
    }

    if (value.HasMember("Recursive") && !value["Recursive"].IsNull())
    {
        if (!value["Recursive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileArrivalConfig.Recursive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_recursive = value["Recursive"].GetBool();
        m_recursiveHasBeenSet = true;
    }

    if (value.HasMember("MinTriggerIntervalTime") && !value["MinTriggerIntervalTime"].IsNull())
    {
        if (!value["MinTriggerIntervalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileArrivalConfig.MinTriggerIntervalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minTriggerIntervalTime = string(value["MinTriggerIntervalTime"].GetString());
        m_minTriggerIntervalTimeHasBeenSet = true;
    }

    if (value.HasMember("BatchWaitTime") && !value["BatchWaitTime"].IsNull())
    {
        if (!value["BatchWaitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileArrivalConfig.BatchWaitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchWaitTime = string(value["BatchWaitTime"].GetString());
        m_batchWaitTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileArrivalConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_fileStoragePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileStoragePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileStoragePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNamePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNamePattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileNamePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_recursiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recursive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recursive, allocator);
    }

    if (m_minTriggerIntervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTriggerIntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minTriggerIntervalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_batchWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchWaitTime.c_str(), allocator).Move(), allocator);
    }

}


string FileArrivalConfig::GetCosBucket() const
{
    return m_cosBucket;
}

void FileArrivalConfig::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool FileArrivalConfig::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string FileArrivalConfig::GetCosRegion() const
{
    return m_cosRegion;
}

void FileArrivalConfig::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool FileArrivalConfig::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string FileArrivalConfig::GetFileStoragePath() const
{
    return m_fileStoragePath;
}

void FileArrivalConfig::SetFileStoragePath(const string& _fileStoragePath)
{
    m_fileStoragePath = _fileStoragePath;
    m_fileStoragePathHasBeenSet = true;
}

bool FileArrivalConfig::FileStoragePathHasBeenSet() const
{
    return m_fileStoragePathHasBeenSet;
}

string FileArrivalConfig::GetFileNamePattern() const
{
    return m_fileNamePattern;
}

void FileArrivalConfig::SetFileNamePattern(const string& _fileNamePattern)
{
    m_fileNamePattern = _fileNamePattern;
    m_fileNamePatternHasBeenSet = true;
}

bool FileArrivalConfig::FileNamePatternHasBeenSet() const
{
    return m_fileNamePatternHasBeenSet;
}

bool FileArrivalConfig::GetRecursive() const
{
    return m_recursive;
}

void FileArrivalConfig::SetRecursive(const bool& _recursive)
{
    m_recursive = _recursive;
    m_recursiveHasBeenSet = true;
}

bool FileArrivalConfig::RecursiveHasBeenSet() const
{
    return m_recursiveHasBeenSet;
}

string FileArrivalConfig::GetMinTriggerIntervalTime() const
{
    return m_minTriggerIntervalTime;
}

void FileArrivalConfig::SetMinTriggerIntervalTime(const string& _minTriggerIntervalTime)
{
    m_minTriggerIntervalTime = _minTriggerIntervalTime;
    m_minTriggerIntervalTimeHasBeenSet = true;
}

bool FileArrivalConfig::MinTriggerIntervalTimeHasBeenSet() const
{
    return m_minTriggerIntervalTimeHasBeenSet;
}

string FileArrivalConfig::GetBatchWaitTime() const
{
    return m_batchWaitTime;
}

void FileArrivalConfig::SetBatchWaitTime(const string& _batchWaitTime)
{
    m_batchWaitTime = _batchWaitTime;
    m_batchWaitTimeHasBeenSet = true;
}

bool FileArrivalConfig::BatchWaitTimeHasBeenSet() const
{
    return m_batchWaitTimeHasBeenSet;
}

