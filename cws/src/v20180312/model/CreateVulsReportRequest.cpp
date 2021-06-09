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

#include <tencentcloud/cws/v20180312/model/CreateVulsReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

CreateVulsReportRequest::CreateVulsReportRequest() :
    m_siteIdHasBeenSet(false),
    m_monitorIdHasBeenSet(false)
{
}

string CreateVulsReportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_siteId, allocator);
    }

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateVulsReportRequest::GetSiteId() const
{
    return m_siteId;
}

void CreateVulsReportRequest::SetSiteId(const uint64_t& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool CreateVulsReportRequest::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

uint64_t CreateVulsReportRequest::GetMonitorId() const
{
    return m_monitorId;
}

void CreateVulsReportRequest::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool CreateVulsReportRequest::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}


