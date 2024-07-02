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

#include <tencentcloud/gaap/v20180529/model/SetTlsVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

SetTlsVersionRequest::SetTlsVersionRequest() :
    m_listenerIdHasBeenSet(false),
    m_tLSSupportVersionHasBeenSet(false),
    m_tLSCiphersHasBeenSet(false)
{
}

string SetTlsVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_tLSSupportVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSSupportVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tLSSupportVersion.begin(); itr != m_tLSSupportVersion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tLSCiphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSCiphers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tLSCiphers.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetTlsVersionRequest::GetListenerId() const
{
    return m_listenerId;
}

void SetTlsVersionRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool SetTlsVersionRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

vector<string> SetTlsVersionRequest::GetTLSSupportVersion() const
{
    return m_tLSSupportVersion;
}

void SetTlsVersionRequest::SetTLSSupportVersion(const vector<string>& _tLSSupportVersion)
{
    m_tLSSupportVersion = _tLSSupportVersion;
    m_tLSSupportVersionHasBeenSet = true;
}

bool SetTlsVersionRequest::TLSSupportVersionHasBeenSet() const
{
    return m_tLSSupportVersionHasBeenSet;
}

string SetTlsVersionRequest::GetTLSCiphers() const
{
    return m_tLSCiphers;
}

void SetTlsVersionRequest::SetTLSCiphers(const string& _tLSCiphers)
{
    m_tLSCiphers = _tLSCiphers;
    m_tLSCiphersHasBeenSet = true;
}

bool SetTlsVersionRequest::TLSCiphersHasBeenSet() const
{
    return m_tLSCiphersHasBeenSet;
}


