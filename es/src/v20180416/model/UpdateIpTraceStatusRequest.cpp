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

#include <tencentcloud/es/v20180416/model/UpdateIpTraceStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateIpTraceStatusRequest::UpdateIpTraceStatusRequest() :
    m_instanceIdHasBeenSet(false),
    m_openIpTraceHasBeenSet(false),
    m_durationTimeHasBeenSet(false),
    m_ipTraceConfigHasBeenSet(false),
    m_filterKibanaIpHasBeenSet(false)
{
}

string UpdateIpTraceStatusRequest::ToJsonString() const
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

    if (m_openIpTraceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenIpTrace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openIpTrace, allocator);
    }

    if (m_durationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationTime, allocator);
    }

    if (m_ipTraceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpTraceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipTraceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filterKibanaIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKibanaIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterKibanaIp, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateIpTraceStatusRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateIpTraceStatusRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateIpTraceStatusRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool UpdateIpTraceStatusRequest::GetOpenIpTrace() const
{
    return m_openIpTrace;
}

void UpdateIpTraceStatusRequest::SetOpenIpTrace(const bool& _openIpTrace)
{
    m_openIpTrace = _openIpTrace;
    m_openIpTraceHasBeenSet = true;
}

bool UpdateIpTraceStatusRequest::OpenIpTraceHasBeenSet() const
{
    return m_openIpTraceHasBeenSet;
}

int64_t UpdateIpTraceStatusRequest::GetDurationTime() const
{
    return m_durationTime;
}

void UpdateIpTraceStatusRequest::SetDurationTime(const int64_t& _durationTime)
{
    m_durationTime = _durationTime;
    m_durationTimeHasBeenSet = true;
}

bool UpdateIpTraceStatusRequest::DurationTimeHasBeenSet() const
{
    return m_durationTimeHasBeenSet;
}

IpTraceConfig UpdateIpTraceStatusRequest::GetIpTraceConfig() const
{
    return m_ipTraceConfig;
}

void UpdateIpTraceStatusRequest::SetIpTraceConfig(const IpTraceConfig& _ipTraceConfig)
{
    m_ipTraceConfig = _ipTraceConfig;
    m_ipTraceConfigHasBeenSet = true;
}

bool UpdateIpTraceStatusRequest::IpTraceConfigHasBeenSet() const
{
    return m_ipTraceConfigHasBeenSet;
}

bool UpdateIpTraceStatusRequest::GetFilterKibanaIp() const
{
    return m_filterKibanaIp;
}

void UpdateIpTraceStatusRequest::SetFilterKibanaIp(const bool& _filterKibanaIp)
{
    m_filterKibanaIp = _filterKibanaIp;
    m_filterKibanaIpHasBeenSet = true;
}

bool UpdateIpTraceStatusRequest::FilterKibanaIpHasBeenSet() const
{
    return m_filterKibanaIpHasBeenSet;
}


