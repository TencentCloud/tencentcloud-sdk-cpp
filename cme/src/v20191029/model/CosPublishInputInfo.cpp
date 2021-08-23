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

#include <tencentcloud/cme/v20191029/model/CosPublishInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

CosPublishInputInfo::CosPublishInputInfo() :
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_videoKeyHasBeenSet(false),
    m_coverKeyHasBeenSet(false)
{
}

CoreInternalOutcome CosPublishInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPublishInputInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPublishInputInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VideoKey") && !value["VideoKey"].IsNull())
    {
        if (!value["VideoKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPublishInputInfo.VideoKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoKey = string(value["VideoKey"].GetString());
        m_videoKeyHasBeenSet = true;
    }

    if (value.HasMember("CoverKey") && !value["CoverKey"].IsNull())
    {
        if (!value["CoverKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPublishInputInfo.CoverKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverKey = string(value["CoverKey"].GetString());
        m_coverKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosPublishInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_videoKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoKey.c_str(), allocator).Move(), allocator);
    }

    if (m_coverKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverKey.c_str(), allocator).Move(), allocator);
    }

}


string CosPublishInputInfo::GetBucket() const
{
    return m_bucket;
}

void CosPublishInputInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CosPublishInputInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CosPublishInputInfo::GetRegion() const
{
    return m_region;
}

void CosPublishInputInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CosPublishInputInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CosPublishInputInfo::GetVideoKey() const
{
    return m_videoKey;
}

void CosPublishInputInfo::SetVideoKey(const string& _videoKey)
{
    m_videoKey = _videoKey;
    m_videoKeyHasBeenSet = true;
}

bool CosPublishInputInfo::VideoKeyHasBeenSet() const
{
    return m_videoKeyHasBeenSet;
}

string CosPublishInputInfo::GetCoverKey() const
{
    return m_coverKey;
}

void CosPublishInputInfo::SetCoverKey(const string& _coverKey)
{
    m_coverKey = _coverKey;
    m_coverKeyHasBeenSet = true;
}

bool CosPublishInputInfo::CoverKeyHasBeenSet() const
{
    return m_coverKeyHasBeenSet;
}

