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

#include <tencentcloud/ams/v20200608/model/InputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

InputInfo::InputInfo() :
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_bucketInfoHasBeenSet(false)
{
}

CoreInternalOutcome InputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("BucketInfo") && !value["BucketInfo"].IsNull())
    {
        if (!value["BucketInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InputInfo.BucketInfo` is not object type").SetRequestId(requestId));
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

void InputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string InputInfo::GetType() const
{
    return m_type;
}

void InputInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InputInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InputInfo::GetUrl() const
{
    return m_url;
}

void InputInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool InputInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

BucketInfo InputInfo::GetBucketInfo() const
{
    return m_bucketInfo;
}

void InputInfo::SetBucketInfo(const BucketInfo& _bucketInfo)
{
    m_bucketInfo = _bucketInfo;
    m_bucketInfoHasBeenSet = true;
}

bool InputInfo::BucketInfoHasBeenSet() const
{
    return m_bucketInfoHasBeenSet;
}

