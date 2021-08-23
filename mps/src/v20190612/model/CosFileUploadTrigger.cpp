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

#include <tencentcloud/mps/v20190612/model/CosFileUploadTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CosFileUploadTrigger::CosFileUploadTrigger() :
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_dirHasBeenSet(false),
    m_formatsHasBeenSet(false)
{
}

CoreInternalOutcome CosFileUploadTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosFileUploadTrigger.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosFileUploadTrigger.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Dir") && !value["Dir"].IsNull())
    {
        if (!value["Dir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosFileUploadTrigger.Dir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dir = string(value["Dir"].GetString());
        m_dirHasBeenSet = true;
    }

    if (value.HasMember("Formats") && !value["Formats"].IsNull())
    {
        if (!value["Formats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosFileUploadTrigger.Formats` is not array type"));

        const rapidjson::Value &tmpValue = value["Formats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_formats.push_back((*itr).GetString());
        }
        m_formatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosFileUploadTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string CosFileUploadTrigger::GetBucket() const
{
    return m_bucket;
}

void CosFileUploadTrigger::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CosFileUploadTrigger::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CosFileUploadTrigger::GetRegion() const
{
    return m_region;
}

void CosFileUploadTrigger::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CosFileUploadTrigger::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CosFileUploadTrigger::GetDir() const
{
    return m_dir;
}

void CosFileUploadTrigger::SetDir(const string& _dir)
{
    m_dir = _dir;
    m_dirHasBeenSet = true;
}

bool CosFileUploadTrigger::DirHasBeenSet() const
{
    return m_dirHasBeenSet;
}

vector<string> CosFileUploadTrigger::GetFormats() const
{
    return m_formats;
}

void CosFileUploadTrigger::SetFormats(const vector<string>& _formats)
{
    m_formats = _formats;
    m_formatsHasBeenSet = true;
}

bool CosFileUploadTrigger::FormatsHasBeenSet() const
{
    return m_formatsHasBeenSet;
}

