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

#include <tencentcloud/bh/v20230418/model/ModifyReconnectionSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyReconnectionSettingRequest::ModifyReconnectionSettingRequest() :
    m_reconnectionMaxCountHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

string ModifyReconnectionSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_reconnectionMaxCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReconnectionMaxCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reconnectionMaxCount, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyReconnectionSettingRequest::GetReconnectionMaxCount() const
{
    return m_reconnectionMaxCount;
}

void ModifyReconnectionSettingRequest::SetReconnectionMaxCount(const uint64_t& _reconnectionMaxCount)
{
    m_reconnectionMaxCount = _reconnectionMaxCount;
    m_reconnectionMaxCountHasBeenSet = true;
}

bool ModifyReconnectionSettingRequest::ReconnectionMaxCountHasBeenSet() const
{
    return m_reconnectionMaxCountHasBeenSet;
}

bool ModifyReconnectionSettingRequest::GetEnable() const
{
    return m_enable;
}

void ModifyReconnectionSettingRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyReconnectionSettingRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


