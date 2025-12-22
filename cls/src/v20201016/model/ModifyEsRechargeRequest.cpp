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

#include <tencentcloud/cls/v20201016/model/ModifyEsRechargeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyEsRechargeRequest::ModifyEsRechargeRequest() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_importInfoHasBeenSet(false),
    m_timeInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false)
{
}

string ModifyEsRechargeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_importInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_importInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasServicesLog, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyEsRechargeRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyEsRechargeRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyEsRechargeRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyEsRechargeRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyEsRechargeRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyEsRechargeRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyEsRechargeRequest::GetName() const
{
    return m_name;
}

void ModifyEsRechargeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyEsRechargeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyEsRechargeRequest::GetIndex() const
{
    return m_index;
}

void ModifyEsRechargeRequest::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ModifyEsRechargeRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string ModifyEsRechargeRequest::GetQuery() const
{
    return m_query;
}

void ModifyEsRechargeRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ModifyEsRechargeRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

EsInfo ModifyEsRechargeRequest::GetEsInfo() const
{
    return m_esInfo;
}

void ModifyEsRechargeRequest::SetEsInfo(const EsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool ModifyEsRechargeRequest::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

EsImportInfo ModifyEsRechargeRequest::GetImportInfo() const
{
    return m_importInfo;
}

void ModifyEsRechargeRequest::SetImportInfo(const EsImportInfo& _importInfo)
{
    m_importInfo = _importInfo;
    m_importInfoHasBeenSet = true;
}

bool ModifyEsRechargeRequest::ImportInfoHasBeenSet() const
{
    return m_importInfoHasBeenSet;
}

EsTimeInfo ModifyEsRechargeRequest::GetTimeInfo() const
{
    return m_timeInfo;
}

void ModifyEsRechargeRequest::SetTimeInfo(const EsTimeInfo& _timeInfo)
{
    m_timeInfo = _timeInfo;
    m_timeInfoHasBeenSet = true;
}

bool ModifyEsRechargeRequest::TimeInfoHasBeenSet() const
{
    return m_timeInfoHasBeenSet;
}

uint64_t ModifyEsRechargeRequest::GetStatus() const
{
    return m_status;
}

void ModifyEsRechargeRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyEsRechargeRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyEsRechargeRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void ModifyEsRechargeRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool ModifyEsRechargeRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}


