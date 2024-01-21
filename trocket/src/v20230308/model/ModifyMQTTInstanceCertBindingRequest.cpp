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

#include <tencentcloud/trocket/v20230308/model/ModifyMQTTInstanceCertBindingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ModifyMQTTInstanceCertBindingRequest::ModifyMQTTInstanceCertBindingRequest() :
    m_instanceIdHasBeenSet(false),
    m_sSLServerCertIdHasBeenSet(false),
    m_sSLCaCertIdHasBeenSet(false)
{
}

string ModifyMQTTInstanceCertBindingRequest::ToJsonString() const
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

    if (m_sSLServerCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLServerCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSLServerCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLCaCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLCaCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSLCaCertId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMQTTInstanceCertBindingRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyMQTTInstanceCertBindingRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyMQTTInstanceCertBindingRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyMQTTInstanceCertBindingRequest::GetSSLServerCertId() const
{
    return m_sSLServerCertId;
}

void ModifyMQTTInstanceCertBindingRequest::SetSSLServerCertId(const string& _sSLServerCertId)
{
    m_sSLServerCertId = _sSLServerCertId;
    m_sSLServerCertIdHasBeenSet = true;
}

bool ModifyMQTTInstanceCertBindingRequest::SSLServerCertIdHasBeenSet() const
{
    return m_sSLServerCertIdHasBeenSet;
}

string ModifyMQTTInstanceCertBindingRequest::GetSSLCaCertId() const
{
    return m_sSLCaCertId;
}

void ModifyMQTTInstanceCertBindingRequest::SetSSLCaCertId(const string& _sSLCaCertId)
{
    m_sSLCaCertId = _sSLCaCertId;
    m_sSLCaCertIdHasBeenSet = true;
}

bool ModifyMQTTInstanceCertBindingRequest::SSLCaCertIdHasBeenSet() const
{
    return m_sSLCaCertIdHasBeenSet;
}


