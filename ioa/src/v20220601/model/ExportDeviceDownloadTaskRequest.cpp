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

#include <tencentcloud/ioa/v20220601/model/ExportDeviceDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ExportDeviceDownloadTaskRequest::ExportDeviceDownloadTaskRequest() :
    m_osTypeHasBeenSet(false),
    m_domainInstanceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_onlineStatusHasBeenSet(false),
    m_exportOrderHasBeenSet(false),
    m_exportTypeHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

string ExportDeviceDownloadTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osType, allocator);
    }

    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlineStatus, allocator);
    }

    if (m_exportOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exportOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_exportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exportType, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ExportDeviceDownloadTaskRequest::GetOsType() const
{
    return m_osType;
}

void ExportDeviceDownloadTaskRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool ExportDeviceDownloadTaskRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string ExportDeviceDownloadTaskRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void ExportDeviceDownloadTaskRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool ExportDeviceDownloadTaskRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

int64_t ExportDeviceDownloadTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void ExportDeviceDownloadTaskRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ExportDeviceDownloadTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t ExportDeviceDownloadTaskRequest::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void ExportDeviceDownloadTaskRequest::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool ExportDeviceDownloadTaskRequest::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

string ExportDeviceDownloadTaskRequest::GetExportOrder() const
{
    return m_exportOrder;
}

void ExportDeviceDownloadTaskRequest::SetExportOrder(const string& _exportOrder)
{
    m_exportOrder = _exportOrder;
    m_exportOrderHasBeenSet = true;
}

bool ExportDeviceDownloadTaskRequest::ExportOrderHasBeenSet() const
{
    return m_exportOrderHasBeenSet;
}

int64_t ExportDeviceDownloadTaskRequest::GetExportType() const
{
    return m_exportType;
}

void ExportDeviceDownloadTaskRequest::SetExportType(const int64_t& _exportType)
{
    m_exportType = _exportType;
    m_exportTypeHasBeenSet = true;
}

bool ExportDeviceDownloadTaskRequest::ExportTypeHasBeenSet() const
{
    return m_exportTypeHasBeenSet;
}

Condition ExportDeviceDownloadTaskRequest::GetCondition() const
{
    return m_condition;
}

void ExportDeviceDownloadTaskRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ExportDeviceDownloadTaskRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}


