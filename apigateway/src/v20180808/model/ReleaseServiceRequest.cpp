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

#include <tencentcloud/apigateway/v20180808/model/ReleaseServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

ReleaseServiceRequest::ReleaseServiceRequest() :
    m_serviceIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_releaseDescHasBeenSet(false),
    m_apiIdsHasBeenSet(false)
{
}

string ReleaseServiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReleaseDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_releaseDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_apiIds.begin(); itr != m_apiIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReleaseServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void ReleaseServiceRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ReleaseServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ReleaseServiceRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void ReleaseServiceRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool ReleaseServiceRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string ReleaseServiceRequest::GetReleaseDesc() const
{
    return m_releaseDesc;
}

void ReleaseServiceRequest::SetReleaseDesc(const string& _releaseDesc)
{
    m_releaseDesc = _releaseDesc;
    m_releaseDescHasBeenSet = true;
}

bool ReleaseServiceRequest::ReleaseDescHasBeenSet() const
{
    return m_releaseDescHasBeenSet;
}

vector<string> ReleaseServiceRequest::GetApiIds() const
{
    return m_apiIds;
}

void ReleaseServiceRequest::SetApiIds(const vector<string>& _apiIds)
{
    m_apiIds = _apiIds;
    m_apiIdsHasBeenSet = true;
}

bool ReleaseServiceRequest::ApiIdsHasBeenSet() const
{
    return m_apiIdsHasBeenSet;
}


