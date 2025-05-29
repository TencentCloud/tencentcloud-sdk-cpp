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

#include <tencentcloud/ses/v20201002/model/UpdateAddressUnsubscribeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

UpdateAddressUnsubscribeConfigRequest::UpdateAddressUnsubscribeConfigRequest() :
    m_addressHasBeenSet(false),
    m_unsubscribeConfigHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string UpdateAddressUnsubscribeConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_unsubscribeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnsubscribeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unsubscribeConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAddressUnsubscribeConfigRequest::GetAddress() const
{
    return m_address;
}

void UpdateAddressUnsubscribeConfigRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool UpdateAddressUnsubscribeConfigRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string UpdateAddressUnsubscribeConfigRequest::GetUnsubscribeConfig() const
{
    return m_unsubscribeConfig;
}

void UpdateAddressUnsubscribeConfigRequest::SetUnsubscribeConfig(const string& _unsubscribeConfig)
{
    m_unsubscribeConfig = _unsubscribeConfig;
    m_unsubscribeConfigHasBeenSet = true;
}

bool UpdateAddressUnsubscribeConfigRequest::UnsubscribeConfigHasBeenSet() const
{
    return m_unsubscribeConfigHasBeenSet;
}

uint64_t UpdateAddressUnsubscribeConfigRequest::GetStatus() const
{
    return m_status;
}

void UpdateAddressUnsubscribeConfigRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateAddressUnsubscribeConfigRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


