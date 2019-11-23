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

#include <tencentcloud/tiems/v20190416/model/CreateRuntimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

CreateRuntimeRequest::CreateRuntimeRequest() :
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_healthCheckOnHasBeenSet(false)
{
}

string CreateRuntimeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckOnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheckOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckOn, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRuntimeRequest::GetName() const
{
    return m_name;
}

void CreateRuntimeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRuntimeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRuntimeRequest::GetImage() const
{
    return m_image;
}

void CreateRuntimeRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateRuntimeRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CreateRuntimeRequest::GetFramework() const
{
    return m_framework;
}

void CreateRuntimeRequest::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool CreateRuntimeRequest::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string CreateRuntimeRequest::GetDescription() const
{
    return m_description;
}

void CreateRuntimeRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRuntimeRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateRuntimeRequest::GetHealthCheckOn() const
{
    return m_healthCheckOn;
}

void CreateRuntimeRequest::SetHealthCheckOn(const bool& _healthCheckOn)
{
    m_healthCheckOn = _healthCheckOn;
    m_healthCheckOnHasBeenSet = true;
}

bool CreateRuntimeRequest::HealthCheckOnHasBeenSet() const
{
    return m_healthCheckOnHasBeenSet;
}


