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

#include <tencentcloud/iot/v20180123/model/AddProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

AddProductRequest::AddProductRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataTemplateHasBeenSet(false),
    m_dataProtocolHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_commProtocolHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

string AddProductRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataTemplate.begin(); itr != m_dataTemplate.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dataProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authType, allocator);
    }

    if (m_commProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddProductRequest::GetName() const
{
    return m_name;
}

void AddProductRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddProductRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddProductRequest::GetDescription() const
{
    return m_description;
}

void AddProductRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddProductRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<DataTemplate> AddProductRequest::GetDataTemplate() const
{
    return m_dataTemplate;
}

void AddProductRequest::SetDataTemplate(const vector<DataTemplate>& _dataTemplate)
{
    m_dataTemplate = _dataTemplate;
    m_dataTemplateHasBeenSet = true;
}

bool AddProductRequest::DataTemplateHasBeenSet() const
{
    return m_dataTemplateHasBeenSet;
}

string AddProductRequest::GetDataProtocol() const
{
    return m_dataProtocol;
}

void AddProductRequest::SetDataProtocol(const string& _dataProtocol)
{
    m_dataProtocol = _dataProtocol;
    m_dataProtocolHasBeenSet = true;
}

bool AddProductRequest::DataProtocolHasBeenSet() const
{
    return m_dataProtocolHasBeenSet;
}

uint64_t AddProductRequest::GetAuthType() const
{
    return m_authType;
}

void AddProductRequest::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AddProductRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string AddProductRequest::GetCommProtocol() const
{
    return m_commProtocol;
}

void AddProductRequest::SetCommProtocol(const string& _commProtocol)
{
    m_commProtocol = _commProtocol;
    m_commProtocolHasBeenSet = true;
}

bool AddProductRequest::CommProtocolHasBeenSet() const
{
    return m_commProtocolHasBeenSet;
}

string AddProductRequest::GetDeviceType() const
{
    return m_deviceType;
}

void AddProductRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool AddProductRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}


