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

#include <tencentcloud/config/v20220802/model/DeleteAlarmPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

DeleteAlarmPolicyRequest::DeleteAlarmPolicyRequest() :
    m_alarmPolicyIdHasBeenSet(false)
{
}

string DeleteAlarmPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alarmPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmPolicyId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteAlarmPolicyRequest::GetAlarmPolicyId() const
{
    return m_alarmPolicyId;
}

void DeleteAlarmPolicyRequest::SetAlarmPolicyId(const uint64_t& _alarmPolicyId)
{
    m_alarmPolicyId = _alarmPolicyId;
    m_alarmPolicyIdHasBeenSet = true;
}

bool DeleteAlarmPolicyRequest::AlarmPolicyIdHasBeenSet() const
{
    return m_alarmPolicyIdHasBeenSet;
}


