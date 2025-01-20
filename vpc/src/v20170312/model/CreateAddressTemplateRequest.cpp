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

#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateAddressTemplateRequest::CreateAddressTemplateRequest() :
    m_addressTemplateNameHasBeenSet(false),
    m_addressesHasBeenSet(false),
    m_addressesExtraHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateAddressTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateAddressTemplateRequest::GetAddressTemplateName() const
{
    return m_addressTemplateName;
}

void CreateAddressTemplateRequest::SetAddressTemplateName(const string& _addressTemplateName)
{
    m_addressTemplateName = _addressTemplateName;
    m_addressTemplateNameHasBeenSet = true;
}

bool CreateAddressTemplateRequest::AddressTemplateNameHasBeenSet() const
{
    return m_addressTemplateNameHasBeenSet;
}

vector<string> CreateAddressTemplateRequest::GetAddresses() const
{
    return m_addresses;
}

void CreateAddressTemplateRequest::SetAddresses(const vector<string>& _addresses)
{
    m_addresses = _addresses;
    m_addressesHasBeenSet = true;
}

bool CreateAddressTemplateRequest::AddressesHasBeenSet() const
{
    return m_addressesHasBeenSet;
}

vector<AddressInfo> CreateAddressTemplateRequest::GetAddressesExtra() const
{
    return m_addressesExtra;
}

void CreateAddressTemplateRequest::SetAddressesExtra(const vector<AddressInfo>& _addressesExtra)
{
    m_addressesExtra = _addressesExtra;
    m_addressesExtraHasBeenSet = true;
}

bool CreateAddressTemplateRequest::AddressesExtraHasBeenSet() const
{
    return m_addressesExtraHasBeenSet;
}

vector<Tag> CreateAddressTemplateRequest::GetTags() const
{
    return m_tags;
}

void CreateAddressTemplateRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAddressTemplateRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


