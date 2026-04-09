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

#include <tencentcloud/monitor/v20180724/model/ExportPrometheusReadOnlyDynamicAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ExportPrometheusReadOnlyDynamicAPIRequest::ExportPrometheusReadOnlyDynamicAPIRequest() :
    m_instanceIdHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_requestBodyHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_selfMonitorHasBeenSet(false)
{
}

string ExportPrometheusReadOnlyDynamicAPIRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_requestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBody";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestBody.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_selfMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfMonitor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selfMonitor, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportPrometheusReadOnlyDynamicAPIRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ExportPrometheusReadOnlyDynamicAPIRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExportPrometheusReadOnlyDynamicAPIRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ExportPrometheusReadOnlyDynamicAPIRequest::GetMethod() const
{
    return m_method;
}

void ExportPrometheusReadOnlyDynamicAPIRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ExportPrometheusReadOnlyDynamicAPIRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ExportPrometheusReadOnlyDynamicAPIRequest::GetPath() const
{
    return m_path;
}

void ExportPrometheusReadOnlyDynamicAPIRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ExportPrometheusReadOnlyDynamicAPIRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ExportPrometheusReadOnlyDynamicAPIRequest::GetRequestBody() const
{
    return m_requestBody;
}

void ExportPrometheusReadOnlyDynamicAPIRequest::SetRequestBody(const string& _requestBody)
{
    m_requestBody = _requestBody;
    m_requestBodyHasBeenSet = true;
}

bool ExportPrometheusReadOnlyDynamicAPIRequest::RequestBodyHasBeenSet() const
{
    return m_requestBodyHasBeenSet;
}

vector<PrometheusStringKeyValuePair> ExportPrometheusReadOnlyDynamicAPIRequest::GetHeaders() const
{
    return m_headers;
}

void ExportPrometheusReadOnlyDynamicAPIRequest::SetHeaders(const vector<PrometheusStringKeyValuePair>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool ExportPrometheusReadOnlyDynamicAPIRequest::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

bool ExportPrometheusReadOnlyDynamicAPIRequest::GetSelfMonitor() const
{
    return m_selfMonitor;
}

void ExportPrometheusReadOnlyDynamicAPIRequest::SetSelfMonitor(const bool& _selfMonitor)
{
    m_selfMonitor = _selfMonitor;
    m_selfMonitorHasBeenSet = true;
}

bool ExportPrometheusReadOnlyDynamicAPIRequest::SelfMonitorHasBeenSet() const
{
    return m_selfMonitorHasBeenSet;
}


