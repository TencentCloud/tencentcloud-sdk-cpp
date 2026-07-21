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

#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAccessLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

DeleteGlobalAcceleratorAccessLogRequest::DeleteGlobalAcceleratorAccessLogRequest() :
    m_logPushTaskIdHasBeenSet(false),
    m_globalAcceleratorIdHasBeenSet(false)
{
}

string DeleteGlobalAcceleratorAccessLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logPushTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPushTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logPushTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteGlobalAcceleratorAccessLogRequest::GetLogPushTaskId() const
{
    return m_logPushTaskId;
}

void DeleteGlobalAcceleratorAccessLogRequest::SetLogPushTaskId(const string& _logPushTaskId)
{
    m_logPushTaskId = _logPushTaskId;
    m_logPushTaskIdHasBeenSet = true;
}

bool DeleteGlobalAcceleratorAccessLogRequest::LogPushTaskIdHasBeenSet() const
{
    return m_logPushTaskIdHasBeenSet;
}

string DeleteGlobalAcceleratorAccessLogRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void DeleteGlobalAcceleratorAccessLogRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool DeleteGlobalAcceleratorAccessLogRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}


