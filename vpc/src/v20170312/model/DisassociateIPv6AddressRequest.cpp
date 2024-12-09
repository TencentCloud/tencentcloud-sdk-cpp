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

#include <tencentcloud/vpc/v20170312/model/DisassociateIPv6AddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DisassociateIPv6AddressRequest::DisassociateIPv6AddressRequest() :
    m_iPv6AddressIdHasBeenSet(false),
    m_keepBindWithEniHasBeenSet(false)
{
}

string DisassociateIPv6AddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iPv6AddressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6AddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPv6AddressId.c_str(), allocator).Move(), allocator);
    }

    if (m_keepBindWithEniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepBindWithEni";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepBindWithEni, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DisassociateIPv6AddressRequest::GetIPv6AddressId() const
{
    return m_iPv6AddressId;
}

void DisassociateIPv6AddressRequest::SetIPv6AddressId(const string& _iPv6AddressId)
{
    m_iPv6AddressId = _iPv6AddressId;
    m_iPv6AddressIdHasBeenSet = true;
}

bool DisassociateIPv6AddressRequest::IPv6AddressIdHasBeenSet() const
{
    return m_iPv6AddressIdHasBeenSet;
}

bool DisassociateIPv6AddressRequest::GetKeepBindWithEni() const
{
    return m_keepBindWithEni;
}

void DisassociateIPv6AddressRequest::SetKeepBindWithEni(const bool& _keepBindWithEni)
{
    m_keepBindWithEni = _keepBindWithEni;
    m_keepBindWithEniHasBeenSet = true;
}

bool DisassociateIPv6AddressRequest::KeepBindWithEniHasBeenSet() const
{
    return m_keepBindWithEniHasBeenSet;
}


