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

#include <tencentcloud/tiems/v20190416/model/CreateServiceConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

CreateServiceConfigRequest::CreateServiceConfigRequest() :
    m_nameHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_modelUriHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateServiceConfigRequest::ToJsonString() const
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

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelUri.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateServiceConfigRequest::GetName() const
{
    return m_name;
}

void CreateServiceConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateServiceConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateServiceConfigRequest::GetRuntime() const
{
    return m_runtime;
}

void CreateServiceConfigRequest::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool CreateServiceConfigRequest::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string CreateServiceConfigRequest::GetModelUri() const
{
    return m_modelUri;
}

void CreateServiceConfigRequest::SetModelUri(const string& _modelUri)
{
    m_modelUri = _modelUri;
    m_modelUriHasBeenSet = true;
}

bool CreateServiceConfigRequest::ModelUriHasBeenSet() const
{
    return m_modelUriHasBeenSet;
}

string CreateServiceConfigRequest::GetDescription() const
{
    return m_description;
}

void CreateServiceConfigRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateServiceConfigRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


