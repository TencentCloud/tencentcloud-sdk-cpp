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

#include <tencentcloud/ams/v20200608/model/FileOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace rapidjson;
using namespace std;

FileOutput::FileOutput() :
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_objectPrefixHasBeenSet(false)
{
}

CoreInternalOutcome FileOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileOutput.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileOutput.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ObjectPrefix") && !value["ObjectPrefix"].IsNull())
    {
        if (!value["ObjectPrefix"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileOutput.ObjectPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectPrefix = string(value["ObjectPrefix"].GetString());
        m_objectPrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_objectPrefixHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ObjectPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_objectPrefix.c_str(), allocator).Move(), allocator);
    }

}


string FileOutput::GetBucket() const
{
    return m_bucket;
}

void FileOutput::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool FileOutput::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string FileOutput::GetRegion() const
{
    return m_region;
}

void FileOutput::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool FileOutput::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string FileOutput::GetObjectPrefix() const
{
    return m_objectPrefix;
}

void FileOutput::SetObjectPrefix(const string& _objectPrefix)
{
    m_objectPrefix = _objectPrefix;
    m_objectPrefixHasBeenSet = true;
}

bool FileOutput::ObjectPrefixHasBeenSet() const
{
    return m_objectPrefixHasBeenSet;
}

