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

#include <tencentcloud/tiems/v20190416/model/UpdateServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

UpdateServiceRequest::UpdateServiceRequest() :
    m_serviceIdHasBeenSet(false),
    m_scalerHasBeenSet(false),
    m_serviceConfigIdHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_serviceActionHasBeenSet(false)
{
}

string UpdateServiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_scalerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_scaler.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceConfigIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceConfigId, allocator);
    }

    if (m_scaleModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceActionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceAction.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void UpdateServiceRequest::SetServiceId(const int64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UpdateServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

Scaler UpdateServiceRequest::GetScaler() const
{
    return m_scaler;
}

void UpdateServiceRequest::SetScaler(const Scaler& _scaler)
{
    m_scaler = _scaler;
    m_scalerHasBeenSet = true;
}

bool UpdateServiceRequest::ScalerHasBeenSet() const
{
    return m_scalerHasBeenSet;
}

int64_t UpdateServiceRequest::GetServiceConfigId() const
{
    return m_serviceConfigId;
}

void UpdateServiceRequest::SetServiceConfigId(const int64_t& _serviceConfigId)
{
    m_serviceConfigId = _serviceConfigId;
    m_serviceConfigIdHasBeenSet = true;
}

bool UpdateServiceRequest::ServiceConfigIdHasBeenSet() const
{
    return m_serviceConfigIdHasBeenSet;
}

string UpdateServiceRequest::GetScaleMode() const
{
    return m_scaleMode;
}

void UpdateServiceRequest::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool UpdateServiceRequest::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

string UpdateServiceRequest::GetServiceAction() const
{
    return m_serviceAction;
}

void UpdateServiceRequest::SetServiceAction(const string& _serviceAction)
{
    m_serviceAction = _serviceAction;
    m_serviceActionHasBeenSet = true;
}

bool UpdateServiceRequest::ServiceActionHasBeenSet() const
{
    return m_serviceActionHasBeenSet;
}


