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

#include <tencentcloud/vod/v20180717/model/MediaOutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaOutputInfo::MediaOutputInfo() :
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_dirHasBeenSet(false)
{
}

CoreInternalOutcome MediaOutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaOutputInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaOutputInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Dir") && !value["Dir"].IsNull())
    {
        if (!value["Dir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaOutputInfo.Dir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dir = string(value["Dir"].GetString());
        m_dirHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaOutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dir.c_str(), allocator).Move(), allocator);
    }

}


string MediaOutputInfo::GetRegion() const
{
    return m_region;
}

void MediaOutputInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MediaOutputInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string MediaOutputInfo::GetBucket() const
{
    return m_bucket;
}

void MediaOutputInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool MediaOutputInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string MediaOutputInfo::GetDir() const
{
    return m_dir;
}

void MediaOutputInfo::SetDir(const string& _dir)
{
    m_dir = _dir;
    m_dirHasBeenSet = true;
}

bool MediaOutputInfo::DirHasBeenSet() const
{
    return m_dirHasBeenSet;
}

