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

#include <tencentcloud/dlc/v20210125/model/LocationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LocationInfo::LocationInfo() :
    m_bucketHasBeenSet(false),
    m_dataLocationHasBeenSet(false)
{
}

CoreInternalOutcome LocationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("DataLocation") && !value["DataLocation"].IsNull())
    {
        if (!value["DataLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationInfo.DataLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataLocation = string(value["DataLocation"].GetString());
        m_dataLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataLocation.c_str(), allocator).Move(), allocator);
    }

}


string LocationInfo::GetBucket() const
{
    return m_bucket;
}

void LocationInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool LocationInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string LocationInfo::GetDataLocation() const
{
    return m_dataLocation;
}

void LocationInfo::SetDataLocation(const string& _dataLocation)
{
    m_dataLocation = _dataLocation;
    m_dataLocationHasBeenSet = true;
}

bool LocationInfo::DataLocationHasBeenSet() const
{
    return m_dataLocationHasBeenSet;
}

