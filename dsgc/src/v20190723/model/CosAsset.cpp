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

#include <tencentcloud/dsgc/v20190723/model/CosAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CosAsset::CosAsset() :
    m_bucketNumsHasBeenSet(false),
    m_sensitiveBucketNumsHasBeenSet(false),
    m_fileNumsHasBeenSet(false),
    m_sensitiveFileNumsHasBeenSet(false)
{
}

CoreInternalOutcome CosAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketNums") && !value["BucketNums"].IsNull())
    {
        if (!value["BucketNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAsset.BucketNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketNums = value["BucketNums"].GetInt64();
        m_bucketNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveBucketNums") && !value["SensitiveBucketNums"].IsNull())
    {
        if (!value["SensitiveBucketNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAsset.SensitiveBucketNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveBucketNums = value["SensitiveBucketNums"].GetInt64();
        m_sensitiveBucketNumsHasBeenSet = true;
    }

    if (value.HasMember("FileNums") && !value["FileNums"].IsNull())
    {
        if (!value["FileNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAsset.FileNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileNums = value["FileNums"].GetInt64();
        m_fileNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFileNums") && !value["SensitiveFileNums"].IsNull())
    {
        if (!value["SensitiveFileNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAsset.SensitiveFileNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFileNums = value["SensitiveFileNums"].GetInt64();
        m_sensitiveFileNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketNums, allocator);
    }

    if (m_sensitiveBucketNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveBucketNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveBucketNums, allocator);
    }

    if (m_fileNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileNums, allocator);
    }

    if (m_sensitiveFileNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveFileNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveFileNums, allocator);
    }

}


int64_t CosAsset::GetBucketNums() const
{
    return m_bucketNums;
}

void CosAsset::SetBucketNums(const int64_t& _bucketNums)
{
    m_bucketNums = _bucketNums;
    m_bucketNumsHasBeenSet = true;
}

bool CosAsset::BucketNumsHasBeenSet() const
{
    return m_bucketNumsHasBeenSet;
}

int64_t CosAsset::GetSensitiveBucketNums() const
{
    return m_sensitiveBucketNums;
}

void CosAsset::SetSensitiveBucketNums(const int64_t& _sensitiveBucketNums)
{
    m_sensitiveBucketNums = _sensitiveBucketNums;
    m_sensitiveBucketNumsHasBeenSet = true;
}

bool CosAsset::SensitiveBucketNumsHasBeenSet() const
{
    return m_sensitiveBucketNumsHasBeenSet;
}

int64_t CosAsset::GetFileNums() const
{
    return m_fileNums;
}

void CosAsset::SetFileNums(const int64_t& _fileNums)
{
    m_fileNums = _fileNums;
    m_fileNumsHasBeenSet = true;
}

bool CosAsset::FileNumsHasBeenSet() const
{
    return m_fileNumsHasBeenSet;
}

int64_t CosAsset::GetSensitiveFileNums() const
{
    return m_sensitiveFileNums;
}

void CosAsset::SetSensitiveFileNums(const int64_t& _sensitiveFileNums)
{
    m_sensitiveFileNums = _sensitiveFileNums;
    m_sensitiveFileNumsHasBeenSet = true;
}

bool CosAsset::SensitiveFileNumsHasBeenSet() const
{
    return m_sensitiveFileNumsHasBeenSet;
}

