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

#include <tencentcloud/ga2/v20250115/model/ReplaceListenerAdditionalCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ReplaceListenerAdditionalCertRequest::ReplaceListenerAdditionalCertRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_additionalCertificateHasBeenSet(false),
    m_oldCertificateHasBeenSet(false)
{
}

string ReplaceListenerAdditionalCertRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalCertificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_additionalCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_oldCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldCertificate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplaceListenerAdditionalCertRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ReplaceListenerAdditionalCertRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ReplaceListenerAdditionalCertRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ReplaceListenerAdditionalCertRequest::GetListenerId() const
{
    return m_listenerId;
}

void ReplaceListenerAdditionalCertRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ReplaceListenerAdditionalCertRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ReplaceListenerAdditionalCertRequest::GetAdditionalCertificate() const
{
    return m_additionalCertificate;
}

void ReplaceListenerAdditionalCertRequest::SetAdditionalCertificate(const string& _additionalCertificate)
{
    m_additionalCertificate = _additionalCertificate;
    m_additionalCertificateHasBeenSet = true;
}

bool ReplaceListenerAdditionalCertRequest::AdditionalCertificateHasBeenSet() const
{
    return m_additionalCertificateHasBeenSet;
}

string ReplaceListenerAdditionalCertRequest::GetOldCertificate() const
{
    return m_oldCertificate;
}

void ReplaceListenerAdditionalCertRequest::SetOldCertificate(const string& _oldCertificate)
{
    m_oldCertificate = _oldCertificate;
    m_oldCertificateHasBeenSet = true;
}

bool ReplaceListenerAdditionalCertRequest::OldCertificateHasBeenSet() const
{
    return m_oldCertificateHasBeenSet;
}


