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

#include <tencentcloud/zj/v20190121/model/PushMmsContentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

PushMmsContentRequest::PushMmsContentRequest() :
    m_licenseHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_telHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_dynamicParaKeyHasBeenSet(false),
    m_dynamicParaValueHasBeenSet(false)
{
}

string PushMmsContentRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_telHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tel.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Session";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_session.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicParaKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DynamicParaKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dynamicParaKey.begin(); itr != m_dynamicParaKey.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dynamicParaValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DynamicParaValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dynamicParaValue.begin(); itr != m_dynamicParaValue.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PushMmsContentRequest::GetLicense() const
{
    return m_license;
}

void PushMmsContentRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool PushMmsContentRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t PushMmsContentRequest::GetInstanceId() const
{
    return m_instanceId;
}

void PushMmsContentRequest::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PushMmsContentRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PushMmsContentRequest::GetTel() const
{
    return m_tel;
}

void PushMmsContentRequest::SetTel(const string& _tel)
{
    m_tel = _tel;
    m_telHasBeenSet = true;
}

bool PushMmsContentRequest::TelHasBeenSet() const
{
    return m_telHasBeenSet;
}

string PushMmsContentRequest::GetSession() const
{
    return m_session;
}

void PushMmsContentRequest::SetSession(const string& _session)
{
    m_session = _session;
    m_sessionHasBeenSet = true;
}

bool PushMmsContentRequest::SessionHasBeenSet() const
{
    return m_sessionHasBeenSet;
}

vector<string> PushMmsContentRequest::GetDynamicParaKey() const
{
    return m_dynamicParaKey;
}

void PushMmsContentRequest::SetDynamicParaKey(const vector<string>& _dynamicParaKey)
{
    m_dynamicParaKey = _dynamicParaKey;
    m_dynamicParaKeyHasBeenSet = true;
}

bool PushMmsContentRequest::DynamicParaKeyHasBeenSet() const
{
    return m_dynamicParaKeyHasBeenSet;
}

vector<string> PushMmsContentRequest::GetDynamicParaValue() const
{
    return m_dynamicParaValue;
}

void PushMmsContentRequest::SetDynamicParaValue(const vector<string>& _dynamicParaValue)
{
    m_dynamicParaValue = _dynamicParaValue;
    m_dynamicParaValueHasBeenSet = true;
}

bool PushMmsContentRequest::DynamicParaValueHasBeenSet() const
{
    return m_dynamicParaValueHasBeenSet;
}


