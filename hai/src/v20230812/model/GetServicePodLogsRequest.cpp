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

#include <tencentcloud/hai/v20230812/model/GetServicePodLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

GetServicePodLogsRequest::GetServicePodLogsRequest() :
    m_serviceIdHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_tailLinesHasBeenSet(false)
{
}

string GetServicePodLogsRequest::ToJsonString() const
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

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_tailLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailLines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tailLines.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetServicePodLogsRequest::GetServiceId() const
{
    return m_serviceId;
}

void GetServicePodLogsRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool GetServicePodLogsRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string GetServicePodLogsRequest::GetPodName() const
{
    return m_podName;
}

void GetServicePodLogsRequest::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool GetServicePodLogsRequest::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string GetServicePodLogsRequest::GetTailLines() const
{
    return m_tailLines;
}

void GetServicePodLogsRequest::SetTailLines(const string& _tailLines)
{
    m_tailLines = _tailLines;
    m_tailLinesHasBeenSet = true;
}

bool GetServicePodLogsRequest::TailLinesHasBeenSet() const
{
    return m_tailLinesHasBeenSet;
}


