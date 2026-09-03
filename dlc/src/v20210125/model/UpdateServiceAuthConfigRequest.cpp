/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/UpdateServiceAuthConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateServiceAuthConfigRequest::UpdateServiceAuthConfigRequest() :
    m_serviceIdHasBeenSet(false),
    m_apiKeyAuthEnabledHasBeenSet(false)
{
}

string UpdateServiceAuthConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyAuthEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyAuthEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_apiKeyAuthEnabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateServiceAuthConfigRequest::GetServiceId() const
{
    return m_serviceId;
}

void UpdateServiceAuthConfigRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UpdateServiceAuthConfigRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

bool UpdateServiceAuthConfigRequest::GetApiKeyAuthEnabled() const
{
    return m_apiKeyAuthEnabled;
}

void UpdateServiceAuthConfigRequest::SetApiKeyAuthEnabled(const bool& _apiKeyAuthEnabled)
{
    m_apiKeyAuthEnabled = _apiKeyAuthEnabled;
    m_apiKeyAuthEnabledHasBeenSet = true;
}

bool UpdateServiceAuthConfigRequest::ApiKeyAuthEnabledHasBeenSet() const
{
    return m_apiKeyAuthEnabledHasBeenSet;
}


