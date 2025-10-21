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

#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceProtectedPropertyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

ModifyInstanceProtectedPropertyRequest::ModifyInstanceProtectedPropertyRequest() :
    m_instanceIdHasBeenSet(false),
    m_protectedPropertyHasBeenSet(false)
{
}

string ModifyInstanceProtectedPropertyRequest::ToJsonString() const
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

    if (m_protectedPropertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedProperty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectedProperty, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceProtectedPropertyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceProtectedPropertyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceProtectedPropertyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyInstanceProtectedPropertyRequest::GetProtectedProperty() const
{
    return m_protectedProperty;
}

void ModifyInstanceProtectedPropertyRequest::SetProtectedProperty(const int64_t& _protectedProperty)
{
    m_protectedProperty = _protectedProperty;
    m_protectedPropertyHasBeenSet = true;
}

bool ModifyInstanceProtectedPropertyRequest::ProtectedPropertyHasBeenSet() const
{
    return m_protectedPropertyHasBeenSet;
}


