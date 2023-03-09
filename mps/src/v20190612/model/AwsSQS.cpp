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

#include <tencentcloud/mps/v20190612/model/AwsSQS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AwsSQS::AwsSQS() :
    m_sQSRegionHasBeenSet(false),
    m_sQSQueueNameHasBeenSet(false),
    m_s3SecretIdHasBeenSet(false),
    m_s3SecretKeyHasBeenSet(false)
{
}

CoreInternalOutcome AwsSQS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SQSRegion") && !value["SQSRegion"].IsNull())
    {
        if (!value["SQSRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsSQS.SQSRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQSRegion = string(value["SQSRegion"].GetString());
        m_sQSRegionHasBeenSet = true;
    }

    if (value.HasMember("SQSQueueName") && !value["SQSQueueName"].IsNull())
    {
        if (!value["SQSQueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsSQS.SQSQueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQSQueueName = string(value["SQSQueueName"].GetString());
        m_sQSQueueNameHasBeenSet = true;
    }

    if (value.HasMember("S3SecretId") && !value["S3SecretId"].IsNull())
    {
        if (!value["S3SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsSQS.S3SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3SecretId = string(value["S3SecretId"].GetString());
        m_s3SecretIdHasBeenSet = true;
    }

    if (value.HasMember("S3SecretKey") && !value["S3SecretKey"].IsNull())
    {
        if (!value["S3SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsSQS.S3SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_s3SecretKey = string(value["S3SecretKey"].GetString());
        m_s3SecretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AwsSQS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sQSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQSRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_sQSQueueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQSQueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQSQueueName.c_str(), allocator).Move(), allocator);
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


string AwsSQS::GetSQSRegion() const
{
    return m_sQSRegion;
}

void AwsSQS::SetSQSRegion(const string& _sQSRegion)
{
    m_sQSRegion = _sQSRegion;
    m_sQSRegionHasBeenSet = true;
}

bool AwsSQS::SQSRegionHasBeenSet() const
{
    return m_sQSRegionHasBeenSet;
}

string AwsSQS::GetSQSQueueName() const
{
    return m_sQSQueueName;
}

void AwsSQS::SetSQSQueueName(const string& _sQSQueueName)
{
    m_sQSQueueName = _sQSQueueName;
    m_sQSQueueNameHasBeenSet = true;
}

bool AwsSQS::SQSQueueNameHasBeenSet() const
{
    return m_sQSQueueNameHasBeenSet;
}

string AwsSQS::GetS3SecretId() const
{
    return m_s3SecretId;
}

void AwsSQS::SetS3SecretId(const string& _s3SecretId)
{
    m_s3SecretId = _s3SecretId;
    m_s3SecretIdHasBeenSet = true;
}

bool AwsSQS::S3SecretIdHasBeenSet() const
{
    return m_s3SecretIdHasBeenSet;
}

string AwsSQS::GetS3SecretKey() const
{
    return m_s3SecretKey;
}

void AwsSQS::SetS3SecretKey(const string& _s3SecretKey)
{
    m_s3SecretKey = _s3SecretKey;
    m_s3SecretKeyHasBeenSet = true;
}

bool AwsSQS::S3SecretKeyHasBeenSet() const
{
    return m_s3SecretKeyHasBeenSet;
}

