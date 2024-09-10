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

#include <tencentcloud/tsf/v20180326/model/CreateAllGatewayApiAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateAllGatewayApiAsyncRequest::CreateAllGatewayApiAsyncRequest() :
    m_groupIdHasBeenSet(false),
    m_microserviceIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false)
{
}

string CreateAllGatewayApiAsyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_microserviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAllGatewayApiAsyncRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateAllGatewayApiAsyncRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateAllGatewayApiAsyncRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateAllGatewayApiAsyncRequest::GetMicroserviceId() const
{
    return m_microserviceId;
}

void CreateAllGatewayApiAsyncRequest::SetMicroserviceId(const string& _microserviceId)
{
    m_microserviceId = _microserviceId;
    m_microserviceIdHasBeenSet = true;
}

bool CreateAllGatewayApiAsyncRequest::MicroserviceIdHasBeenSet() const
{
    return m_microserviceIdHasBeenSet;
}

string CreateAllGatewayApiAsyncRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void CreateAllGatewayApiAsyncRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool CreateAllGatewayApiAsyncRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}


