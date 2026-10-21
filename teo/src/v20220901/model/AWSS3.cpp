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

#include <tencentcloud/teo/v20220901/model/AWSS3.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AWSS3::AWSS3() :
    m_endpointHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_compressTypeHasBeenSet(false)
{
}

CoreInternalOutcome AWSS3::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AWSS3.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AWSS3.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AWSS3.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("RoleARN") && !value["RoleARN"].IsNull())
    {
        if (!value["RoleARN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AWSS3.RoleARN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleARN = string(value["RoleARN"].GetString());
        m_roleARNHasBeenSet = true;
    }

    if (value.HasMember("CompressType") && !value["CompressType"].IsNull())
    {
        if (!value["CompressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AWSS3.CompressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressType = string(value["CompressType"].GetString());
        m_compressTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AWSS3::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_roleARNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleARN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleARN.c_str(), allocator).Move(), allocator);
    }

    if (m_compressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressType.c_str(), allocator).Move(), allocator);
    }

}


string AWSS3::GetEndpoint() const
{
    return m_endpoint;
}

void AWSS3::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool AWSS3::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string AWSS3::GetBucketName() const
{
    return m_bucketName;
}

void AWSS3::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool AWSS3::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string AWSS3::GetPath() const
{
    return m_path;
}

void AWSS3::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AWSS3::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string AWSS3::GetRoleARN() const
{
    return m_roleARN;
}

void AWSS3::SetRoleARN(const string& _roleARN)
{
    m_roleARN = _roleARN;
    m_roleARNHasBeenSet = true;
}

bool AWSS3::RoleARNHasBeenSet() const
{
    return m_roleARNHasBeenSet;
}

string AWSS3::GetCompressType() const
{
    return m_compressType;
}

void AWSS3::SetCompressType(const string& _compressType)
{
    m_compressType = _compressType;
    m_compressTypeHasBeenSet = true;
}

bool AWSS3::CompressTypeHasBeenSet() const
{
    return m_compressTypeHasBeenSet;
}

