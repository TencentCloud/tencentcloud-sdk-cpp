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

#include <tencentcloud/tem/v20210701/model/DestroyLogConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DestroyLogConfigRequest::DestroyLogConfigRequest() :
    m_environmentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

string DestroyLogConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DestroyLogConfigRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DestroyLogConfigRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DestroyLogConfigRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DestroyLogConfigRequest::GetName() const
{
    return m_name;
}

void DestroyLogConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DestroyLogConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DestroyLogConfigRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DestroyLogConfigRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DestroyLogConfigRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}


