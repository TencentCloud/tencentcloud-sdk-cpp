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

#include <tencentcloud/cdb/v20170320/model/ModifyProtectModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyProtectModeRequest::ModifyProtectModeRequest() :
    m_protectModeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string ModifyProtectModeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyProtectModeRequest::GetProtectMode() const
{
    return m_protectMode;
}

void ModifyProtectModeRequest::SetProtectMode(const int64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool ModifyProtectModeRequest::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

string ModifyProtectModeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyProtectModeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyProtectModeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


