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

#include <tencentcloud/mps/v20190612/model/VODInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VODInputInfo::VODInputInfo() :
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

CoreInternalOutcome VODInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VODInputInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VODInputInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Object") && !value["Object"].IsNull())
    {
        if (!value["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VODInputInfo.Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(value["Object"].GetString());
        m_objectHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VODInputInfo.SubAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = value["SubAppId"].GetUint64();
        m_subAppIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VODInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAppId, allocator);
    }

}


string VODInputInfo::GetBucket() const
{
    return m_bucket;
}

void VODInputInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool VODInputInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string VODInputInfo::GetRegion() const
{
    return m_region;
}

void VODInputInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool VODInputInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string VODInputInfo::GetObject() const
{
    return m_object;
}

void VODInputInfo::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool VODInputInfo::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

uint64_t VODInputInfo::GetSubAppId() const
{
    return m_subAppId;
}

void VODInputInfo::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool VODInputInfo::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

