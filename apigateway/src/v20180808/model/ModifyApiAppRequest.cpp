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

#include <tencentcloud/apigateway/v20180808/model/ModifyApiAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyApiAppRequest::ModifyApiAppRequest() :
    m_apiAppIdHasBeenSet(false),
    m_apiAppNameHasBeenSet(false),
    m_apiAppDescHasBeenSet(false)
{
}

string ModifyApiAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiAppDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApiAppRequest::GetApiAppId() const
{
    return m_apiAppId;
}

void ModifyApiAppRequest::SetApiAppId(const string& _apiAppId)
{
    m_apiAppId = _apiAppId;
    m_apiAppIdHasBeenSet = true;
}

bool ModifyApiAppRequest::ApiAppIdHasBeenSet() const
{
    return m_apiAppIdHasBeenSet;
}

string ModifyApiAppRequest::GetApiAppName() const
{
    return m_apiAppName;
}

void ModifyApiAppRequest::SetApiAppName(const string& _apiAppName)
{
    m_apiAppName = _apiAppName;
    m_apiAppNameHasBeenSet = true;
}

bool ModifyApiAppRequest::ApiAppNameHasBeenSet() const
{
    return m_apiAppNameHasBeenSet;
}

string ModifyApiAppRequest::GetApiAppDesc() const
{
    return m_apiAppDesc;
}

void ModifyApiAppRequest::SetApiAppDesc(const string& _apiAppDesc)
{
    m_apiAppDesc = _apiAppDesc;
    m_apiAppDescHasBeenSet = true;
}

bool ModifyApiAppRequest::ApiAppDescHasBeenSet() const
{
    return m_apiAppDescHasBeenSet;
}


