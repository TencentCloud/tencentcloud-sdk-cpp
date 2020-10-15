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

#include <tencentcloud/ecm/v20190719/model/AddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

AddressInfo::AddressInfo() :
    m_publicIPAddressInfoHasBeenSet(false),
    m_privateIPAddressInfoHasBeenSet(false)
{
}

CoreInternalOutcome AddressInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicIPAddressInfo") && !value["PublicIPAddressInfo"].IsNull())
    {
        if (!value["PublicIPAddressInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AddressInfo.PublicIPAddressInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_publicIPAddressInfo.Deserialize(value["PublicIPAddressInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_publicIPAddressInfoHasBeenSet = true;
    }

    if (value.HasMember("PrivateIPAddressInfo") && !value["PrivateIPAddressInfo"].IsNull())
    {
        if (!value["PrivateIPAddressInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AddressInfo.PrivateIPAddressInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privateIPAddressInfo.Deserialize(value["PrivateIPAddressInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privateIPAddressInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_publicIPAddressInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIPAddressInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_publicIPAddressInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privateIPAddressInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIPAddressInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_privateIPAddressInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


PublicIPAddressInfo AddressInfo::GetPublicIPAddressInfo() const
{
    return m_publicIPAddressInfo;
}

void AddressInfo::SetPublicIPAddressInfo(const PublicIPAddressInfo& _publicIPAddressInfo)
{
    m_publicIPAddressInfo = _publicIPAddressInfo;
    m_publicIPAddressInfoHasBeenSet = true;
}

bool AddressInfo::PublicIPAddressInfoHasBeenSet() const
{
    return m_publicIPAddressInfoHasBeenSet;
}

PrivateIPAddressInfo AddressInfo::GetPrivateIPAddressInfo() const
{
    return m_privateIPAddressInfo;
}

void AddressInfo::SetPrivateIPAddressInfo(const PrivateIPAddressInfo& _privateIPAddressInfo)
{
    m_privateIPAddressInfo = _privateIPAddressInfo;
    m_privateIPAddressInfoHasBeenSet = true;
}

bool AddressInfo::PrivateIPAddressInfoHasBeenSet() const
{
    return m_privateIPAddressInfoHasBeenSet;
}

