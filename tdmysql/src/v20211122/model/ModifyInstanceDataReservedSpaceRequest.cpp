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

#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceDataReservedSpaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ModifyInstanceDataReservedSpaceRequest::ModifyInstanceDataReservedSpaceRequest() :
    m_instanceIdHasBeenSet(false),
    m_reservedSpaceGBHasBeenSet(false)
{
}

string ModifyInstanceDataReservedSpaceRequest::ToJsonString() const
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

    if (m_reservedSpaceGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedSpaceGB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reservedSpaceGB, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceDataReservedSpaceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceDataReservedSpaceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceDataReservedSpaceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

double ModifyInstanceDataReservedSpaceRequest::GetReservedSpaceGB() const
{
    return m_reservedSpaceGB;
}

void ModifyInstanceDataReservedSpaceRequest::SetReservedSpaceGB(const double& _reservedSpaceGB)
{
    m_reservedSpaceGB = _reservedSpaceGB;
    m_reservedSpaceGBHasBeenSet = true;
}

bool ModifyInstanceDataReservedSpaceRequest::ReservedSpaceGBHasBeenSet() const
{
    return m_reservedSpaceGBHasBeenSet;
}


