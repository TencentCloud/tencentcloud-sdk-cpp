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

#include <tencentcloud/cwp/v20180228/model/SetLocalStorageItemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

SetLocalStorageItemRequest::SetLocalStorageItemRequest() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_expireHasBeenSet(false)
{
}

string SetLocalStorageItemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expire, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetLocalStorageItemRequest::GetKey() const
{
    return m_key;
}

void SetLocalStorageItemRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SetLocalStorageItemRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SetLocalStorageItemRequest::GetValue() const
{
    return m_value;
}

void SetLocalStorageItemRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SetLocalStorageItemRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t SetLocalStorageItemRequest::GetExpire() const
{
    return m_expire;
}

void SetLocalStorageItemRequest::SetExpire(const uint64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool SetLocalStorageItemRequest::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}


