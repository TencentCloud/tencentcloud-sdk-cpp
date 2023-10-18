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

#include <tencentcloud/oceanus/v20190422/model/FetchSqlGatewayStatementResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

FetchSqlGatewayStatementResultRequest::FetchSqlGatewayStatementResultRequest() :
    m_clusterIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_operationHandleIdHasBeenSet(false),
    m_resultUriHasBeenSet(false)
{
}

string FetchSqlGatewayStatementResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHandleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationHandleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationHandleId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultUri.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FetchSqlGatewayStatementResultRequest::GetClusterId() const
{
    return m_clusterId;
}

void FetchSqlGatewayStatementResultRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool FetchSqlGatewayStatementResultRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string FetchSqlGatewayStatementResultRequest::GetSessionId() const
{
    return m_sessionId;
}

void FetchSqlGatewayStatementResultRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool FetchSqlGatewayStatementResultRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string FetchSqlGatewayStatementResultRequest::GetOperationHandleId() const
{
    return m_operationHandleId;
}

void FetchSqlGatewayStatementResultRequest::SetOperationHandleId(const string& _operationHandleId)
{
    m_operationHandleId = _operationHandleId;
    m_operationHandleIdHasBeenSet = true;
}

bool FetchSqlGatewayStatementResultRequest::OperationHandleIdHasBeenSet() const
{
    return m_operationHandleIdHasBeenSet;
}

string FetchSqlGatewayStatementResultRequest::GetResultUri() const
{
    return m_resultUri;
}

void FetchSqlGatewayStatementResultRequest::SetResultUri(const string& _resultUri)
{
    m_resultUri = _resultUri;
    m_resultUriHasBeenSet = true;
}

bool FetchSqlGatewayStatementResultRequest::ResultUriHasBeenSet() const
{
    return m_resultUriHasBeenSet;
}


