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

#include <tencentcloud/wedata/v20250806/model/GetDataBackfillPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

GetDataBackfillPlanRequest::GetDataBackfillPlanRequest() :
    m_projectIdHasBeenSet(false),
    m_dataBackfillPlanIdHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

string GetDataBackfillPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataBackfillPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataBackfillPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDataBackfillPlanRequest::GetProjectId() const
{
    return m_projectId;
}

void GetDataBackfillPlanRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetDataBackfillPlanRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetDataBackfillPlanRequest::GetDataBackfillPlanId() const
{
    return m_dataBackfillPlanId;
}

void GetDataBackfillPlanRequest::SetDataBackfillPlanId(const string& _dataBackfillPlanId)
{
    m_dataBackfillPlanId = _dataBackfillPlanId;
    m_dataBackfillPlanIdHasBeenSet = true;
}

bool GetDataBackfillPlanRequest::DataBackfillPlanIdHasBeenSet() const
{
    return m_dataBackfillPlanIdHasBeenSet;
}

string GetDataBackfillPlanRequest::GetTimeZone() const
{
    return m_timeZone;
}

void GetDataBackfillPlanRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool GetDataBackfillPlanRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}


