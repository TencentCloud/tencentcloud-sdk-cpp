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

#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppReportUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

DescribeFlySecMiniAppReportUrlRequest::DescribeFlySecMiniAppReportUrlRequest() :
    m_taskIDHasBeenSet(false),
    m_miniAppIDHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_reportTypeHasBeenSet(false)
{
}

string DescribeFlySecMiniAppReportUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFlySecMiniAppReportUrlRequest::GetTaskID() const
{
    return m_taskID;
}

void DescribeFlySecMiniAppReportUrlRequest::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool DescribeFlySecMiniAppReportUrlRequest::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string DescribeFlySecMiniAppReportUrlRequest::GetMiniAppID() const
{
    return m_miniAppID;
}

void DescribeFlySecMiniAppReportUrlRequest::SetMiniAppID(const string& _miniAppID)
{
    m_miniAppID = _miniAppID;
    m_miniAppIDHasBeenSet = true;
}

bool DescribeFlySecMiniAppReportUrlRequest::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

int64_t DescribeFlySecMiniAppReportUrlRequest::GetMode() const
{
    return m_mode;
}

void DescribeFlySecMiniAppReportUrlRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeFlySecMiniAppReportUrlRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t DescribeFlySecMiniAppReportUrlRequest::GetReportType() const
{
    return m_reportType;
}

void DescribeFlySecMiniAppReportUrlRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool DescribeFlySecMiniAppReportUrlRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}


