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

#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyAddressTemplateAttributeRequest::ModifyAddressTemplateAttributeRequest() :
    m_addressTemplateIdHasBeenSet(false),
    m_addressTemplateNameHasBeenSet(false),
    m_addressesHasBeenSet(false),
    m_addressesExtraHasBeenSet(false)
{
}

string ModifyAddressTemplateAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addresses.begin(); itr != m_addresses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addressesExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressesExtra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addressesExtra.begin(); itr != m_addressesExtra.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAddressTemplateAttributeRequest::GetAddressTemplateId() const
{
    return m_addressTemplateId;
}

void ModifyAddressTemplateAttributeRequest::SetAddressTemplateId(const string& _addressTemplateId)
{
    m_addressTemplateId = _addressTemplateId;
    m_addressTemplateIdHasBeenSet = true;
}

bool ModifyAddressTemplateAttributeRequest::AddressTemplateIdHasBeenSet() const
{
    return m_addressTemplateIdHasBeenSet;
}

string ModifyAddressTemplateAttributeRequest::GetAddressTemplateName() const
{
    return m_addressTemplateName;
}

void ModifyAddressTemplateAttributeRequest::SetAddressTemplateName(const string& _addressTemplateName)
{
    m_addressTemplateName = _addressTemplateName;
    m_addressTemplateNameHasBeenSet = true;
}

bool ModifyAddressTemplateAttributeRequest::AddressTemplateNameHasBeenSet() const
{
    return m_addressTemplateNameHasBeenSet;
}

vector<string> ModifyAddressTemplateAttributeRequest::GetAddresses() const
{
    return m_addresses;
}

void ModifyAddressTemplateAttributeRequest::SetAddresses(const vector<string>& _addresses)
{
    m_addresses = _addresses;
    m_addressesHasBeenSet = true;
}

bool ModifyAddressTemplateAttributeRequest::AddressesHasBeenSet() const
{
    return m_addressesHasBeenSet;
}

vector<AddressInfo> ModifyAddressTemplateAttributeRequest::GetAddressesExtra() const
{
    return m_addressesExtra;
}

void ModifyAddressTemplateAttributeRequest::SetAddressesExtra(const vector<AddressInfo>& _addressesExtra)
{
    m_addressesExtra = _addressesExtra;
    m_addressesExtraHasBeenSet = true;
}

bool ModifyAddressTemplateAttributeRequest::AddressesExtraHasBeenSet() const
{
    return m_addressesExtraHasBeenSet;
}


