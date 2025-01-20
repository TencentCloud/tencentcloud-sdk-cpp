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

#include <tencentcloud/vpc/v20170312/model/ReleaseIPv6AddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ReleaseIPv6AddressesRequest::ReleaseIPv6AddressesRequest() :
    m_iPv6AddressIdsHasBeenSet(false)
{
}

string ReleaseIPv6AddressesRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ReleaseIPv6AddressesRequest::GetIPv6AddressIds() const
{
    return m_iPv6AddressIds;
}

void ReleaseIPv6AddressesRequest::SetIPv6AddressIds(const vector<string>& _iPv6AddressIds)
{
    m_iPv6AddressIds = _iPv6AddressIds;
    m_iPv6AddressIdsHasBeenSet = true;
}

bool ReleaseIPv6AddressesRequest::IPv6AddressIdsHasBeenSet() const
{
    return m_iPv6AddressIdsHasBeenSet;
}


