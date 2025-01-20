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

#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateServiceTemplateRequest::CreateServiceTemplateRequest() :
    m_serviceTemplateNameHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_servicesExtraHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateServiceTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_services.begin(); itr != m_services.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_servicesExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicesExtra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_servicesExtra.begin(); itr != m_servicesExtra.end(); ++itr, ++i)
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


string CreateServiceTemplateRequest::GetServiceTemplateName() const
{
    return m_serviceTemplateName;
}

void CreateServiceTemplateRequest::SetServiceTemplateName(const string& _serviceTemplateName)
{
    m_serviceTemplateName = _serviceTemplateName;
    m_serviceTemplateNameHasBeenSet = true;
}

bool CreateServiceTemplateRequest::ServiceTemplateNameHasBeenSet() const
{
    return m_serviceTemplateNameHasBeenSet;
}

vector<string> CreateServiceTemplateRequest::GetServices() const
{
    return m_services;
}

void CreateServiceTemplateRequest::SetServices(const vector<string>& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool CreateServiceTemplateRequest::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

vector<ServicesInfo> CreateServiceTemplateRequest::GetServicesExtra() const
{
    return m_servicesExtra;
}

void CreateServiceTemplateRequest::SetServicesExtra(const vector<ServicesInfo>& _servicesExtra)
{
    m_servicesExtra = _servicesExtra;
    m_servicesExtraHasBeenSet = true;
}

bool CreateServiceTemplateRequest::ServicesExtraHasBeenSet() const
{
    return m_servicesExtraHasBeenSet;
}

vector<Tag> CreateServiceTemplateRequest::GetTags() const
{
    return m_tags;
}

void CreateServiceTemplateRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateServiceTemplateRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


