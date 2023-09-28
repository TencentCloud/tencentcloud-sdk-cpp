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

#include <tencentcloud/tke/v20180525/model/ModifyReservedInstanceScopeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyReservedInstanceScopeRequest::ModifyReservedInstanceScopeRequest() :
    m_reservedInstanceIdsHasBeenSet(false),
    m_reservedInstanceScopeHasBeenSet(false)
{
}

string ModifyReservedInstanceScopeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_reservedInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reservedInstanceIds.begin(); itr != m_reservedInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reservedInstanceScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstanceScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reservedInstanceScope.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyReservedInstanceScopeRequest::GetReservedInstanceIds() const
{
    return m_reservedInstanceIds;
}

void ModifyReservedInstanceScopeRequest::SetReservedInstanceIds(const vector<string>& _reservedInstanceIds)
{
    m_reservedInstanceIds = _reservedInstanceIds;
    m_reservedInstanceIdsHasBeenSet = true;
}

bool ModifyReservedInstanceScopeRequest::ReservedInstanceIdsHasBeenSet() const
{
    return m_reservedInstanceIdsHasBeenSet;
}

ReservedInstanceScope ModifyReservedInstanceScopeRequest::GetReservedInstanceScope() const
{
    return m_reservedInstanceScope;
}

void ModifyReservedInstanceScopeRequest::SetReservedInstanceScope(const ReservedInstanceScope& _reservedInstanceScope)
{
    m_reservedInstanceScope = _reservedInstanceScope;
    m_reservedInstanceScopeHasBeenSet = true;
}

bool ModifyReservedInstanceScopeRequest::ReservedInstanceScopeHasBeenSet() const
{
    return m_reservedInstanceScopeHasBeenSet;
}


