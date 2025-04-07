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

#include <tencentcloud/gs/v20191118/model/S3Options.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

S3Options::S3Options() :
    m_endPointHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false)
{
}

CoreInternalOutcome S3Options::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPoint") && !value["EndPoint"].IsNull())
    {
        if (!value["EndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3Options.EndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPoint = string(value["EndPoint"].GetString());
        m_endPointHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3Options.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyId") && !value["AccessKeyId"].IsNull())
    {
        if (!value["AccessKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3Options.AccessKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyId = string(value["AccessKeyId"].GetString());
        m_accessKeyIdHasBeenSet = true;
    }

    if (value.HasMember("SecretAccessKey") && !value["SecretAccessKey"].IsNull())
    {
        if (!value["SecretAccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `S3Options.SecretAccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretAccessKey = string(value["SecretAccessKey"].GetString());
        m_secretAccessKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void S3Options::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretAccessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretAccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretAccessKey.c_str(), allocator).Move(), allocator);
    }

}


string S3Options::GetEndPoint() const
{
    return m_endPoint;
}

void S3Options::SetEndPoint(const string& _endPoint)
{
    m_endPoint = _endPoint;
    m_endPointHasBeenSet = true;
}

bool S3Options::EndPointHasBeenSet() const
{
    return m_endPointHasBeenSet;
}

string S3Options::GetBucket() const
{
    return m_bucket;
}

void S3Options::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool S3Options::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string S3Options::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void S3Options::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool S3Options::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string S3Options::GetSecretAccessKey() const
{
    return m_secretAccessKey;
}

void S3Options::SetSecretAccessKey(const string& _secretAccessKey)
{
    m_secretAccessKey = _secretAccessKey;
    m_secretAccessKeyHasBeenSet = true;
}

bool S3Options::SecretAccessKeyHasBeenSet() const
{
    return m_secretAccessKeyHasBeenSet;
}

