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

#include <tencentcloud/edgezone/v20260401/model/ApplyPublicIpsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

ApplyPublicIpsRequest::ApplyPublicIpsRequest() :
    m_networkInstanceIdHasBeenSet(false),
    m_countHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string ApplyPublicIpsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyPublicIpsRequest::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void ApplyPublicIpsRequest::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool ApplyPublicIpsRequest::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

int64_t ApplyPublicIpsRequest::GetCount() const
{
    return m_count;
}

void ApplyPublicIpsRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ApplyPublicIpsRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string ApplyPublicIpsRequest::GetType() const
{
    return m_type;
}

void ApplyPublicIpsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApplyPublicIpsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


