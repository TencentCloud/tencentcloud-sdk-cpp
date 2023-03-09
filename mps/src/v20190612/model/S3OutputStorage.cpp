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

#include <tencentcloud/mps/v20190612/model/S3OutputStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

S3OutputStorage::S3OutputStorage() :
    m_s3BucketHasBeenSet(false),
    m_s3RegionHasBeenSet(false),
    m_s3SecretIdHasBeenSet(false),
    m_s3SecretKeyHasBeenSet(false)
{
}

CoreInternalOutcome S3OutputStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("S3Bucket") && !value["S3Bucket"].IsNull())
    {
        if (!value["S3Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3OutputStorage.S3Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3Bucket = string(value["S3Bucket"].GetString());
        m_s3BucketHasBeenSet = true;
    }

    if (value.HasMember("S3Region") && !value["S3Region"].IsNull())
    {
        if (!value["S3Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3OutputStorage.S3Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3Region = string(value["S3Region"].GetString());
        m_s3RegionHasBeenSet = true;
    }

    if (value.HasMember("S3SecretId") && !value["S3SecretId"].IsNull())
    {
        if (!value["S3SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3OutputStorage.S3SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3SecretId = string(value["S3SecretId"].GetString());
        m_s3SecretIdHasBeenSet = true;
    }

    if (value.HasMember("S3SecretKey") && !value["S3SecretKey"].IsNull())
    {
        if (!value["S3SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3OutputStorage.S3SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3SecretKey = string(value["S3SecretKey"].GetString());
        m_s3SecretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void S3OutputStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_s3BucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_s3Bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_s3RegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_s3Region.c_str(), allocator).Move(), allocator);
    }

    if (m_s3SecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_s3SecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_s3SecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_s3SecretKey.c_str(), allocator).Move(), allocator);
    }

}


string S3OutputStorage::GetS3Bucket() const
{
    return m_s3Bucket;
}

void S3OutputStorage::SetS3Bucket(const string& _s3Bucket)
{
    m_s3Bucket = _s3Bucket;
    m_s3BucketHasBeenSet = true;
}

bool S3OutputStorage::S3BucketHasBeenSet() const
{
    return m_s3BucketHasBeenSet;
}

string S3OutputStorage::GetS3Region() const
{
    return m_s3Region;
}

void S3OutputStorage::SetS3Region(const string& _s3Region)
{
    m_s3Region = _s3Region;
    m_s3RegionHasBeenSet = true;
}

bool S3OutputStorage::S3RegionHasBeenSet() const
{
    return m_s3RegionHasBeenSet;
}

string S3OutputStorage::GetS3SecretId() const
{
    return m_s3SecretId;
}

void S3OutputStorage::SetS3SecretId(const string& _s3SecretId)
{
    m_s3SecretId = _s3SecretId;
    m_s3SecretIdHasBeenSet = true;
}

bool S3OutputStorage::S3SecretIdHasBeenSet() const
{
    return m_s3SecretIdHasBeenSet;
}

string S3OutputStorage::GetS3SecretKey() const
{
    return m_s3SecretKey;
}

void S3OutputStorage::SetS3SecretKey(const string& _s3SecretKey)
{
    m_s3SecretKey = _s3SecretKey;
    m_s3SecretKeyHasBeenSet = true;
}

bool S3OutputStorage::S3SecretKeyHasBeenSet() const
{
    return m_s3SecretKeyHasBeenSet;
}

