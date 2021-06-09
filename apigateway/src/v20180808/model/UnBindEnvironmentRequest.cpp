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

#include <tencentcloud/apigateway/v20180808/model/UnBindEnvironmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UnBindEnvironmentRequest::UnBindEnvironmentRequest() :
    m_bindTypeHasBeenSet(false),
    m_usagePlanIdsHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_apiIdsHasBeenSet(false)
{
}

string UnBindEnvironmentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_usagePlanIds.begin(); itr != m_usagePlanIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiIds.begin(); itr != m_apiIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnBindEnvironmentRequest::GetBindType() const
{
    return m_bindType;
}

void UnBindEnvironmentRequest::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool UnBindEnvironmentRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

vector<string> UnBindEnvironmentRequest::GetUsagePlanIds() const
{
    return m_usagePlanIds;
}

void UnBindEnvironmentRequest::SetUsagePlanIds(const vector<string>& _usagePlanIds)
{
    m_usagePlanIds = _usagePlanIds;
    m_usagePlanIdsHasBeenSet = true;
}

bool UnBindEnvironmentRequest::UsagePlanIdsHasBeenSet() const
{
    return m_usagePlanIdsHasBeenSet;
}

string UnBindEnvironmentRequest::GetEnvironment() const
{
    return m_environment;
}

void UnBindEnvironmentRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UnBindEnvironmentRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string UnBindEnvironmentRequest::GetServiceId() const
{
    return m_serviceId;
}

void UnBindEnvironmentRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UnBindEnvironmentRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

vector<string> UnBindEnvironmentRequest::GetApiIds() const
{
    return m_apiIds;
}

void UnBindEnvironmentRequest::SetApiIds(const vector<string>& _apiIds)
{
    m_apiIds = _apiIds;
    m_apiIdsHasBeenSet = true;
}

bool UnBindEnvironmentRequest::ApiIdsHasBeenSet() const
{
    return m_apiIdsHasBeenSet;
}


