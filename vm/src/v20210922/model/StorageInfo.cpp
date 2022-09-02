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

#include <tencentcloud/vm/v20210922/model/StorageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

StorageInfo::StorageInfo() :
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_bucketInfoHasBeenSet(false)
{
}

CoreInternalOutcome StorageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("BucketInfo") && !value["BucketInfo"].IsNull())
    {
        if (!value["BucketInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.BucketInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bucketInfo.Deserialize(value["BucketInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bucketInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bucketInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StorageInfo::GetType() const
{
    return m_type;
}

void StorageInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StorageInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string StorageInfo::GetUrl() const
{
    return m_url;
}

void StorageInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool StorageInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

BucketInfo StorageInfo::GetBucketInfo() const
{
    return m_bucketInfo;
}

void StorageInfo::SetBucketInfo(const BucketInfo& _bucketInfo)
{
    m_bucketInfo = _bucketInfo;
    m_bucketInfoHasBeenSet = true;
}

bool StorageInfo::BucketInfoHasBeenSet() const
{
    return m_bucketInfoHasBeenSet;
}

