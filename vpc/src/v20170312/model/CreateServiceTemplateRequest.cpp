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
using namespace rapidjson;
using namespace std;

CreateServiceTemplateRequest::CreateServiceTemplateRequest() :
    m_serviceTemplateNameHasBeenSet(false),
    m_servicesHasBeenSet(false)
{
}

string CreateServiceTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTemplateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_services.begin(); itr != m_services.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


