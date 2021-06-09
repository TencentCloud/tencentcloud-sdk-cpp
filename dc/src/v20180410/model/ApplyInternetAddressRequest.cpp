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

#include <tencentcloud/dc/v20180410/model/ApplyInternetAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

ApplyInternetAddressRequest::ApplyInternetAddressRequest() :
    m_maskLenHasBeenSet(false),
    m_addrTypeHasBeenSet(false),
    m_addrProtoHasBeenSet(false)
{
}

string ApplyInternetAddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_maskLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maskLen, allocator);
    }

    if (m_addrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddrType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addrType, allocator);
    }

    if (m_addrProtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddrProto";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addrProto, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ApplyInternetAddressRequest::GetMaskLen() const
{
    return m_maskLen;
}

void ApplyInternetAddressRequest::SetMaskLen(const int64_t& _maskLen)
{
    m_maskLen = _maskLen;
    m_maskLenHasBeenSet = true;
}

bool ApplyInternetAddressRequest::MaskLenHasBeenSet() const
{
    return m_maskLenHasBeenSet;
}

int64_t ApplyInternetAddressRequest::GetAddrType() const
{
    return m_addrType;
}

void ApplyInternetAddressRequest::SetAddrType(const int64_t& _addrType)
{
    m_addrType = _addrType;
    m_addrTypeHasBeenSet = true;
}

bool ApplyInternetAddressRequest::AddrTypeHasBeenSet() const
{
    return m_addrTypeHasBeenSet;
}

int64_t ApplyInternetAddressRequest::GetAddrProto() const
{
    return m_addrProto;
}

void ApplyInternetAddressRequest::SetAddrProto(const int64_t& _addrProto)
{
    m_addrProto = _addrProto;
    m_addrProtoHasBeenSet = true;
}

bool ApplyInternetAddressRequest::AddrProtoHasBeenSet() const
{
    return m_addrProtoHasBeenSet;
}


