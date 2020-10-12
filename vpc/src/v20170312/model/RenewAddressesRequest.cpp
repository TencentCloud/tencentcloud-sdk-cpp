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

#include <tencentcloud/vpc/v20170312/model/RenewAddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

RenewAddressesRequest::RenewAddressesRequest() :
    m_addressIdsHasBeenSet(false),
    m_addressChargePrepaidHasBeenSet(false)
{
}

string RenewAddressesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_addressIds.begin(); itr != m_addressIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addressChargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_addressChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> RenewAddressesRequest::GetAddressIds() const
{
    return m_addressIds;
}

void RenewAddressesRequest::SetAddressIds(const vector<string>& _addressIds)
{
    m_addressIds = _addressIds;
    m_addressIdsHasBeenSet = true;
}

bool RenewAddressesRequest::AddressIdsHasBeenSet() const
{
    return m_addressIdsHasBeenSet;
}

AddressChargePrepaid RenewAddressesRequest::GetAddressChargePrepaid() const
{
    return m_addressChargePrepaid;
}

void RenewAddressesRequest::SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid)
{
    m_addressChargePrepaid = _addressChargePrepaid;
    m_addressChargePrepaidHasBeenSet = true;
}

bool RenewAddressesRequest::AddressChargePrepaidHasBeenSet() const
{
    return m_addressChargePrepaidHasBeenSet;
}


