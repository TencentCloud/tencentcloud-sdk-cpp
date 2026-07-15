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

#include <tencentcloud/ga2/v20250115/model/DeleteListenerAdditionalCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

DeleteListenerAdditionalCertRequest::DeleteListenerAdditionalCertRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_additionalCertificatesHasBeenSet(false)
{
}

string DeleteListenerAdditionalCertRequest::ToJsonString() const
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

    if (m_additionalCertificatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalCertificates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_additionalCertificates.begin(); itr != m_additionalCertificates.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteListenerAdditionalCertRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void DeleteListenerAdditionalCertRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool DeleteListenerAdditionalCertRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string DeleteListenerAdditionalCertRequest::GetListenerId() const
{
    return m_listenerId;
}

void DeleteListenerAdditionalCertRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DeleteListenerAdditionalCertRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

vector<string> DeleteListenerAdditionalCertRequest::GetAdditionalCertificates() const
{
    return m_additionalCertificates;
}

void DeleteListenerAdditionalCertRequest::SetAdditionalCertificates(const vector<string>& _additionalCertificates)
{
    m_additionalCertificates = _additionalCertificates;
    m_additionalCertificatesHasBeenSet = true;
}

bool DeleteListenerAdditionalCertRequest::AdditionalCertificatesHasBeenSet() const
{
    return m_additionalCertificatesHasBeenSet;
}


