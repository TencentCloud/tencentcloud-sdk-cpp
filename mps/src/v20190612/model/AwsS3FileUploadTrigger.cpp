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

#include <tencentcloud/mps/v20190612/model/AwsS3FileUploadTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AwsS3FileUploadTrigger::AwsS3FileUploadTrigger() :
    m_s3BucketHasBeenSet(false),
    m_s3RegionHasBeenSet(false),
    m_dirHasBeenSet(false),
    m_formatsHasBeenSet(false),
    m_s3SecretIdHasBeenSet(false),
    m_s3SecretKeyHasBeenSet(false),
    m_awsSQSHasBeenSet(false)
{
}

CoreInternalOutcome AwsS3FileUploadTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("S3Bucket") && !value["S3Bucket"].IsNull())
    {
        if (!value["S3Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsS3FileUploadTrigger.S3Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3Bucket = string(value["S3Bucket"].GetString());
        m_s3BucketHasBeenSet = true;
    }

    if (value.HasMember("S3Region") && !value["S3Region"].IsNull())
    {
        if (!value["S3Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsS3FileUploadTrigger.S3Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3Region = string(value["S3Region"].GetString());
        m_s3RegionHasBeenSet = true;
    }

    if (value.HasMember("Dir") && !value["Dir"].IsNull())
    {
        if (!value["Dir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsS3FileUploadTrigger.Dir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dir = string(value["Dir"].GetString());
        m_dirHasBeenSet = true;
    }

    if (value.HasMember("Formats") && !value["Formats"].IsNull())
    {
        if (!value["Formats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AwsS3FileUploadTrigger.Formats` is not array type"));

        const rapidjson::Value &tmpValue = value["Formats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_formats.push_back((*itr).GetString());
        }
        m_formatsHasBeenSet = true;
    }

    if (value.HasMember("S3SecretId") && !value["S3SecretId"].IsNull())
    {
        if (!value["S3SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsS3FileUploadTrigger.S3SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3SecretId = string(value["S3SecretId"].GetString());
        m_s3SecretIdHasBeenSet = true;
    }

    if (value.HasMember("S3SecretKey") && !value["S3SecretKey"].IsNull())
    {
        if (!value["S3SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsS3FileUploadTrigger.S3SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3SecretKey = string(value["S3SecretKey"].GetString());
        m_s3SecretKeyHasBeenSet = true;
    }

    if (value.HasMember("AwsSQS") && !value["AwsSQS"].IsNull())
    {
        if (!value["AwsSQS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AwsS3FileUploadTrigger.AwsSQS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_awsSQS.Deserialize(value["AwsSQS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_awsSQSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AwsS3FileUploadTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dir.c_str(), allocator).Move(), allocator);
    }

    if (m_formatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_formats.begin(); itr != m_formats.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_awsSQSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AwsSQS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_awsSQS.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AwsS3FileUploadTrigger::GetS3Bucket() const
{
    return m_s3Bucket;
}

void AwsS3FileUploadTrigger::SetS3Bucket(const string& _s3Bucket)
{
    m_s3Bucket = _s3Bucket;
    m_s3BucketHasBeenSet = true;
}

bool AwsS3FileUploadTrigger::S3BucketHasBeenSet() const
{
    return m_s3BucketHasBeenSet;
}

string AwsS3FileUploadTrigger::GetS3Region() const
{
    return m_s3Region;
}

void AwsS3FileUploadTrigger::SetS3Region(const string& _s3Region)
{
    m_s3Region = _s3Region;
    m_s3RegionHasBeenSet = true;
}

bool AwsS3FileUploadTrigger::S3RegionHasBeenSet() const
{
    return m_s3RegionHasBeenSet;
}

string AwsS3FileUploadTrigger::GetDir() const
{
    return m_dir;
}

void AwsS3FileUploadTrigger::SetDir(const string& _dir)
{
    m_dir = _dir;
    m_dirHasBeenSet = true;
}

bool AwsS3FileUploadTrigger::DirHasBeenSet() const
{
    return m_dirHasBeenSet;
}

vector<string> AwsS3FileUploadTrigger::GetFormats() const
{
    return m_formats;
}

void AwsS3FileUploadTrigger::SetFormats(const vector<string>& _formats)
{
    m_formats = _formats;
    m_formatsHasBeenSet = true;
}

bool AwsS3FileUploadTrigger::FormatsHasBeenSet() const
{
    return m_formatsHasBeenSet;
}

string AwsS3FileUploadTrigger::GetS3SecretId() const
{
    return m_s3SecretId;
}

void AwsS3FileUploadTrigger::SetS3SecretId(const string& _s3SecretId)
{
    m_s3SecretId = _s3SecretId;
    m_s3SecretIdHasBeenSet = true;
}

bool AwsS3FileUploadTrigger::S3SecretIdHasBeenSet() const
{
    return m_s3SecretIdHasBeenSet;
}

string AwsS3FileUploadTrigger::GetS3SecretKey() const
{
    return m_s3SecretKey;
}

void AwsS3FileUploadTrigger::SetS3SecretKey(const string& _s3SecretKey)
{
    m_s3SecretKey = _s3SecretKey;
    m_s3SecretKeyHasBeenSet = true;
}

bool AwsS3FileUploadTrigger::S3SecretKeyHasBeenSet() const
{
    return m_s3SecretKeyHasBeenSet;
}

AwsSQS AwsS3FileUploadTrigger::GetAwsSQS() const
{
    return m_awsSQS;
}

void AwsS3FileUploadTrigger::SetAwsSQS(const AwsSQS& _awsSQS)
{
    m_awsSQS = _awsSQS;
    m_awsSQSHasBeenSet = true;
}

bool AwsS3FileUploadTrigger::AwsSQSHasBeenSet() const
{
    return m_awsSQSHasBeenSet;
}

