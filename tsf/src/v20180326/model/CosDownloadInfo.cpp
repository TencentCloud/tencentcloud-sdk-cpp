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

#include <tencentcloud/tsf/v20180326/model/CosDownloadInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CosDownloadInfo::CosDownloadInfo() :
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_credentialsHasBeenSet(false)
{
}

CoreInternalOutcome CosDownloadInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDownloadInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDownloadInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDownloadInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Credentials") && !value["Credentials"].IsNull())
    {
        if (!value["Credentials"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosDownloadInfo.Credentials` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_credentials.Deserialize(value["Credentials"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_credentialsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosDownloadInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credentials";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credentials.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CosDownloadInfo::GetBucket() const
{
    return m_bucket;
}

void CosDownloadInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CosDownloadInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CosDownloadInfo::GetRegion() const
{
    return m_region;
}

void CosDownloadInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CosDownloadInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CosDownloadInfo::GetPath() const
{
    return m_path;
}

void CosDownloadInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CosDownloadInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

CosCredentials CosDownloadInfo::GetCredentials() const
{
    return m_credentials;
}

void CosDownloadInfo::SetCredentials(const CosCredentials& _credentials)
{
    m_credentials = _credentials;
    m_credentialsHasBeenSet = true;
}

bool CosDownloadInfo::CredentialsHasBeenSet() const
{
    return m_credentialsHasBeenSet;
}

