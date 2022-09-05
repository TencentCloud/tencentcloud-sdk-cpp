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

#include <tencentcloud/bma/v20210624/model/ModifyCRMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

ModifyCRMonitorRequest::ModifyCRMonitorRequest() :
    m_workIdHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_monitorEndHasBeenSet(false)
{
}

string ModifyCRMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workId, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorEnd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyCRMonitorRequest::GetWorkId() const
{
    return m_workId;
}

void ModifyCRMonitorRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool ModifyCRMonitorRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string ModifyCRMonitorRequest::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void ModifyCRMonitorRequest::SetMonitorStatus(const string& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool ModifyCRMonitorRequest::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

string ModifyCRMonitorRequest::GetMonitorEnd() const
{
    return m_monitorEnd;
}

void ModifyCRMonitorRequest::SetMonitorEnd(const string& _monitorEnd)
{
    m_monitorEnd = _monitorEnd;
    m_monitorEndHasBeenSet = true;
}

bool ModifyCRMonitorRequest::MonitorEndHasBeenSet() const
{
    return m_monitorEndHasBeenSet;
}


