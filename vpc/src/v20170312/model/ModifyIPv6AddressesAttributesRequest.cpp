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

#include <tencentcloud/vpc/v20170312/model/ModifyIPv6AddressesAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyIPv6AddressesAttributesRequest::ModifyIPv6AddressesAttributesRequest() :
    m_iPv6AddressIdsHasBeenSet(false),
    m_iPv6AddressNameHasBeenSet(false)
{
}

string ModifyIPv6AddressesAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iPv6AddressIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6AddressIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPv6AddressIds.begin(); itr != m_iPv6AddressIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iPv6AddressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6AddressName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPv6AddressName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyIPv6AddressesAttributesRequest::GetIPv6AddressIds() const
{
    return m_iPv6AddressIds;
}

void ModifyIPv6AddressesAttributesRequest::SetIPv6AddressIds(const vector<string>& _iPv6AddressIds)
{
    m_iPv6AddressIds = _iPv6AddressIds;
    m_iPv6AddressIdsHasBeenSet = true;
}

bool ModifyIPv6AddressesAttributesRequest::IPv6AddressIdsHasBeenSet() const
{
    return m_iPv6AddressIdsHasBeenSet;
}

string ModifyIPv6AddressesAttributesRequest::GetIPv6AddressName() const
{
    return m_iPv6AddressName;
}

void ModifyIPv6AddressesAttributesRequest::SetIPv6AddressName(const string& _iPv6AddressName)
{
    m_iPv6AddressName = _iPv6AddressName;
    m_iPv6AddressNameHasBeenSet = true;
}

bool ModifyIPv6AddressesAttributesRequest::IPv6AddressNameHasBeenSet() const
{
    return m_iPv6AddressNameHasBeenSet;
}


