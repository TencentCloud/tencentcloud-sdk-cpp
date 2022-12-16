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

#include <tencentcloud/antiddos/v20200309/model/SwitchWaterPrintConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

SwitchWaterPrintConfigRequest::SwitchWaterPrintConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_openStatusHasBeenSet(false),
    m_cloudSdkProxyHasBeenSet(false)
{
}

string SwitchWaterPrintConfigRequest::ToJsonString() const
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

    if (m_openStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openStatus, allocator);
    }

    if (m_cloudSdkProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudSdkProxy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cloudSdkProxy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchWaterPrintConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SwitchWaterPrintConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SwitchWaterPrintConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t SwitchWaterPrintConfigRequest::GetOpenStatus() const
{
    return m_openStatus;
}

void SwitchWaterPrintConfigRequest::SetOpenStatus(const int64_t& _openStatus)
{
    m_openStatus = _openStatus;
    m_openStatusHasBeenSet = true;
}

bool SwitchWaterPrintConfigRequest::OpenStatusHasBeenSet() const
{
    return m_openStatusHasBeenSet;
}

int64_t SwitchWaterPrintConfigRequest::GetCloudSdkProxy() const
{
    return m_cloudSdkProxy;
}

void SwitchWaterPrintConfigRequest::SetCloudSdkProxy(const int64_t& _cloudSdkProxy)
{
    m_cloudSdkProxy = _cloudSdkProxy;
    m_cloudSdkProxyHasBeenSet = true;
}

bool SwitchWaterPrintConfigRequest::CloudSdkProxyHasBeenSet() const
{
    return m_cloudSdkProxyHasBeenSet;
}


