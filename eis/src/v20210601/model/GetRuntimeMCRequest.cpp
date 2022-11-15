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

#include <tencentcloud/eis/v20210601/model/GetRuntimeMCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

GetRuntimeMCRequest::GetRuntimeMCRequest() :
    m_runtimeIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_runtimeClassHasBeenSet(false)
{
}

string GetRuntimeMCRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runtimeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runtimeId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runtimeClass, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetRuntimeMCRequest::GetRuntimeId() const
{
    return m_runtimeId;
}

void GetRuntimeMCRequest::SetRuntimeId(const int64_t& _runtimeId)
{
    m_runtimeId = _runtimeId;
    m_runtimeIdHasBeenSet = true;
}

bool GetRuntimeMCRequest::RuntimeIdHasBeenSet() const
{
    return m_runtimeIdHasBeenSet;
}

string GetRuntimeMCRequest::GetZone() const
{
    return m_zone;
}

void GetRuntimeMCRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool GetRuntimeMCRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t GetRuntimeMCRequest::GetRuntimeClass() const
{
    return m_runtimeClass;
}

void GetRuntimeMCRequest::SetRuntimeClass(const int64_t& _runtimeClass)
{
    m_runtimeClass = _runtimeClass;
    m_runtimeClassHasBeenSet = true;
}

bool GetRuntimeMCRequest::RuntimeClassHasBeenSet() const
{
    return m_runtimeClassHasBeenSet;
}


