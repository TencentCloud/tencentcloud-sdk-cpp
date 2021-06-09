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

#include <tencentcloud/dbbrain/v20191016/model/CreateSecurityAuditLogExportTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

CreateSecurityAuditLogExportTaskRequest::CreateSecurityAuditLogExportTaskRequest() :
    m_secAuditGroupIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_productHasBeenSet(false),
    m_dangerLevelsHasBeenSet(false)
{
}

string CreateSecurityAuditLogExportTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secAuditGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecAuditGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secAuditGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_dangerLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DangerLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dangerLevels.begin(); itr != m_dangerLevels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSecurityAuditLogExportTaskRequest::GetSecAuditGroupId() const
{
    return m_secAuditGroupId;
}

void CreateSecurityAuditLogExportTaskRequest::SetSecAuditGroupId(const string& _secAuditGroupId)
{
    m_secAuditGroupId = _secAuditGroupId;
    m_secAuditGroupIdHasBeenSet = true;
}

bool CreateSecurityAuditLogExportTaskRequest::SecAuditGroupIdHasBeenSet() const
{
    return m_secAuditGroupIdHasBeenSet;
}

string CreateSecurityAuditLogExportTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateSecurityAuditLogExportTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateSecurityAuditLogExportTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateSecurityAuditLogExportTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateSecurityAuditLogExportTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateSecurityAuditLogExportTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateSecurityAuditLogExportTaskRequest::GetProduct() const
{
    return m_product;
}

void CreateSecurityAuditLogExportTaskRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateSecurityAuditLogExportTaskRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<int64_t> CreateSecurityAuditLogExportTaskRequest::GetDangerLevels() const
{
    return m_dangerLevels;
}

void CreateSecurityAuditLogExportTaskRequest::SetDangerLevels(const vector<int64_t>& _dangerLevels)
{
    m_dangerLevels = _dangerLevels;
    m_dangerLevelsHasBeenSet = true;
}

bool CreateSecurityAuditLogExportTaskRequest::DangerLevelsHasBeenSet() const
{
    return m_dangerLevelsHasBeenSet;
}


