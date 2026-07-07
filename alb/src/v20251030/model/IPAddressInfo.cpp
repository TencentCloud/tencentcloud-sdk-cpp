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

#include <tencentcloud/alb/v20251030/model/IPAddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

IPAddressInfo::IPAddressInfo() :
    m_addressHasBeenSet(false),
    m_addressIdHasBeenSet(false)
{
}

CoreInternalOutcome IPAddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPAddressInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPAddressInfo.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPAddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

}


string IPAddressInfo::GetAddress() const
{
    return m_address;
}

void IPAddressInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool IPAddressInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string IPAddressInfo::GetAddressId() const
{
    return m_addressId;
}

void IPAddressInfo::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool IPAddressInfo::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

