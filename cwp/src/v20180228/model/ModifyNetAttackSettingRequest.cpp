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

#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyNetAttackSettingRequest::ModifyNetAttackSettingRequest() :
    m_netAttackEnableHasBeenSet(false),
    m_netAttackAlarmStatusHasBeenSet(false)
{
}

string ModifyNetAttackSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_netAttackEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_netAttackEnable, allocator);
    }

    if (m_netAttackAlarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackAlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_netAttackAlarmStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyNetAttackSettingRequest::GetNetAttackEnable() const
{
    return m_netAttackEnable;
}

void ModifyNetAttackSettingRequest::SetNetAttackEnable(const uint64_t& _netAttackEnable)
{
    m_netAttackEnable = _netAttackEnable;
    m_netAttackEnableHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::NetAttackEnableHasBeenSet() const
{
    return m_netAttackEnableHasBeenSet;
}

uint64_t ModifyNetAttackSettingRequest::GetNetAttackAlarmStatus() const
{
    return m_netAttackAlarmStatus;
}

void ModifyNetAttackSettingRequest::SetNetAttackAlarmStatus(const uint64_t& _netAttackAlarmStatus)
{
    m_netAttackAlarmStatus = _netAttackAlarmStatus;
    m_netAttackAlarmStatusHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::NetAttackAlarmStatusHasBeenSet() const
{
    return m_netAttackAlarmStatusHasBeenSet;
}


