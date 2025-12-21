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

#include <tencentcloud/ags/v20250920/model/CosStorageSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CosStorageSource::CosStorageSource() :
    m_endpointHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketPathHasBeenSet(false)
{
}

CoreInternalOutcome CosStorageSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosStorageSource.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosStorageSource.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketPath") && !value["BucketPath"].IsNull())
    {
        if (!value["BucketPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosStorageSource.BucketPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketPath = string(value["BucketPath"].GetString());
        m_bucketPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosStorageSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketPath.c_str(), allocator).Move(), allocator);
    }

}


string CosStorageSource::GetEndpoint() const
{
    return m_endpoint;
}

void CosStorageSource::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CosStorageSource::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string CosStorageSource::GetBucketName() const
{
    return m_bucketName;
}

void CosStorageSource::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosStorageSource::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CosStorageSource::GetBucketPath() const
{
    return m_bucketPath;
}

void CosStorageSource::SetBucketPath(const string& _bucketPath)
{
    m_bucketPath = _bucketPath;
    m_bucketPathHasBeenSet = true;
}

bool CosStorageSource::BucketPathHasBeenSet() const
{
    return m_bucketPathHasBeenSet;
}

