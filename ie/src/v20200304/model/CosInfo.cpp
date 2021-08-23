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

#include <tencentcloud/ie/v20200304/model/CosInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

CosInfo::CosInfo() :
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_cosAuthModeHasBeenSet(false)
{
}

CoreInternalOutcome CosInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("CosAuthMode") && !value["CosAuthMode"].IsNull())
    {
        if (!value["CosAuthMode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosInfo.CosAuthMode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosAuthMode.Deserialize(value["CosAuthMode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosAuthModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_cosAuthModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosAuthMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosAuthMode.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CosInfo::GetRegion() const
{
    return m_region;
}

void CosInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CosInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CosInfo::GetBucket() const
{
    return m_bucket;
}

void CosInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CosInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CosInfo::GetPath() const
{
    return m_path;
}

void CosInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CosInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

CosAuthMode CosInfo::GetCosAuthMode() const
{
    return m_cosAuthMode;
}

void CosInfo::SetCosAuthMode(const CosAuthMode& _cosAuthMode)
{
    m_cosAuthMode = _cosAuthMode;
    m_cosAuthModeHasBeenSet = true;
}

bool CosInfo::CosAuthModeHasBeenSet() const
{
    return m_cosAuthModeHasBeenSet;
}

