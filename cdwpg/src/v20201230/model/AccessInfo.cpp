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

#include <tencentcloud/cdwpg/v20201230/model/AccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

AccessInfo::AccessInfo() :
    m_addressHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

CoreInternalOutcome AccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

}


string AccessInfo::GetAddress() const
{
    return m_address;
}

void AccessInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AccessInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string AccessInfo::GetProtocol() const
{
    return m_protocol;
}

void AccessInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AccessInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

