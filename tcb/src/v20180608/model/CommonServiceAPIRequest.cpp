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

#include <tencentcloud/tcb/v20180608/model/CommonServiceAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CommonServiceAPIRequest::CommonServiceAPIRequest() :
    m_serviceHasBeenSet(false),
    m_jSONDataHasBeenSet(false),
    m_apiRoleHasBeenSet(false)
{
}

string CommonServiceAPIRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_jSONDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JSONData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jSONData.c_str(), allocator).Move(), allocator);
    }

    if (m_apiRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiRole.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CommonServiceAPIRequest::GetService() const
{
    return m_service;
}

void CommonServiceAPIRequest::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool CommonServiceAPIRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string CommonServiceAPIRequest::GetJSONData() const
{
    return m_jSONData;
}

void CommonServiceAPIRequest::SetJSONData(const string& _jSONData)
{
    m_jSONData = _jSONData;
    m_jSONDataHasBeenSet = true;
}

bool CommonServiceAPIRequest::JSONDataHasBeenSet() const
{
    return m_jSONDataHasBeenSet;
}

string CommonServiceAPIRequest::GetApiRole() const
{
    return m_apiRole;
}

void CommonServiceAPIRequest::SetApiRole(const string& _apiRole)
{
    m_apiRole = _apiRole;
    m_apiRoleHasBeenSet = true;
}

bool CommonServiceAPIRequest::ApiRoleHasBeenSet() const
{
    return m_apiRoleHasBeenSet;
}


