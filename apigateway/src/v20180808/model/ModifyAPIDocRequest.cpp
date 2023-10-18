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

#include <tencentcloud/apigateway/v20180808/model/ModifyAPIDocRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyAPIDocRequest::ModifyAPIDocRequest() :
    m_apiDocNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_apiIdsHasBeenSet(false),
    m_apiDocIdHasBeenSet(false)
{
}

string ModifyAPIDocRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiDocNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiDocName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
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

    if (m_apiDocIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiDocId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAPIDocRequest::GetApiDocName() const
{
    return m_apiDocName;
}

void ModifyAPIDocRequest::SetApiDocName(const string& _apiDocName)
{
    m_apiDocName = _apiDocName;
    m_apiDocNameHasBeenSet = true;
}

bool ModifyAPIDocRequest::ApiDocNameHasBeenSet() const
{
    return m_apiDocNameHasBeenSet;
}

string ModifyAPIDocRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyAPIDocRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyAPIDocRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ModifyAPIDocRequest::GetEnvironment() const
{
    return m_environment;
}

void ModifyAPIDocRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool ModifyAPIDocRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

vector<string> ModifyAPIDocRequest::GetApiIds() const
{
    return m_apiIds;
}

void ModifyAPIDocRequest::SetApiIds(const vector<string>& _apiIds)
{
    m_apiIds = _apiIds;
    m_apiIdsHasBeenSet = true;
}

bool ModifyAPIDocRequest::ApiIdsHasBeenSet() const
{
    return m_apiIdsHasBeenSet;
}

string ModifyAPIDocRequest::GetApiDocId() const
{
    return m_apiDocId;
}

void ModifyAPIDocRequest::SetApiDocId(const string& _apiDocId)
{
    m_apiDocId = _apiDocId;
    m_apiDocIdHasBeenSet = true;
}

bool ModifyAPIDocRequest::ApiDocIdHasBeenSet() const
{
    return m_apiDocIdHasBeenSet;
}


