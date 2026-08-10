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

#include <tencentcloud/cds/v20180420/model/CreateTimerReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

CreateTimerReportRequest::CreateTimerReportRequest() :
    m_tplNameHasBeenSet(false),
    m_cntTimeHasBeenSet(false),
    m_cntCycleHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_cntDayHasBeenSet(false),
    m_cntDateHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_assetsIdHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_missionStartHasBeenSet(false)
{
}

string CreateTimerReportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
    }

    if (m_cntTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cntTime, allocator);
    }

    if (m_cntCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cntCycle, allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_receivers.c_str(), allocator).Move(), allocator);
    }

    if (m_cntDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cntDay, allocator);
    }

    if (m_cntDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cntDate.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportType, allocator);
    }

    if (m_assetsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetsId.begin(); itr != m_assetsId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_notificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notification, allocator);
    }

    if (m_missionStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissionStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_missionStart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTimerReportRequest::GetTplName() const
{
    return m_tplName;
}

void CreateTimerReportRequest::SetTplName(const string& _tplName)
{
    m_tplName = _tplName;
    m_tplNameHasBeenSet = true;
}

bool CreateTimerReportRequest::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}

int64_t CreateTimerReportRequest::GetCntTime() const
{
    return m_cntTime;
}

void CreateTimerReportRequest::SetCntTime(const int64_t& _cntTime)
{
    m_cntTime = _cntTime;
    m_cntTimeHasBeenSet = true;
}

bool CreateTimerReportRequest::CntTimeHasBeenSet() const
{
    return m_cntTimeHasBeenSet;
}

int64_t CreateTimerReportRequest::GetCntCycle() const
{
    return m_cntCycle;
}

void CreateTimerReportRequest::SetCntCycle(const int64_t& _cntCycle)
{
    m_cntCycle = _cntCycle;
    m_cntCycleHasBeenSet = true;
}

bool CreateTimerReportRequest::CntCycleHasBeenSet() const
{
    return m_cntCycleHasBeenSet;
}

string CreateTimerReportRequest::GetReceivers() const
{
    return m_receivers;
}

void CreateTimerReportRequest::SetReceivers(const string& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool CreateTimerReportRequest::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

int64_t CreateTimerReportRequest::GetCntDay() const
{
    return m_cntDay;
}

void CreateTimerReportRequest::SetCntDay(const int64_t& _cntDay)
{
    m_cntDay = _cntDay;
    m_cntDayHasBeenSet = true;
}

bool CreateTimerReportRequest::CntDayHasBeenSet() const
{
    return m_cntDayHasBeenSet;
}

string CreateTimerReportRequest::GetCntDate() const
{
    return m_cntDate;
}

void CreateTimerReportRequest::SetCntDate(const string& _cntDate)
{
    m_cntDate = _cntDate;
    m_cntDateHasBeenSet = true;
}

bool CreateTimerReportRequest::CntDateHasBeenSet() const
{
    return m_cntDateHasBeenSet;
}

string CreateTimerReportRequest::GetRemark() const
{
    return m_remark;
}

void CreateTimerReportRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateTimerReportRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateTimerReportRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateTimerReportRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateTimerReportRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t CreateTimerReportRequest::GetReportType() const
{
    return m_reportType;
}

void CreateTimerReportRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool CreateTimerReportRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

vector<int64_t> CreateTimerReportRequest::GetAssetsId() const
{
    return m_assetsId;
}

void CreateTimerReportRequest::SetAssetsId(const vector<int64_t>& _assetsId)
{
    m_assetsId = _assetsId;
    m_assetsIdHasBeenSet = true;
}

bool CreateTimerReportRequest::AssetsIdHasBeenSet() const
{
    return m_assetsIdHasBeenSet;
}

int64_t CreateTimerReportRequest::GetNotification() const
{
    return m_notification;
}

void CreateTimerReportRequest::SetNotification(const int64_t& _notification)
{
    m_notification = _notification;
    m_notificationHasBeenSet = true;
}

bool CreateTimerReportRequest::NotificationHasBeenSet() const
{
    return m_notificationHasBeenSet;
}

int64_t CreateTimerReportRequest::GetMissionStart() const
{
    return m_missionStart;
}

void CreateTimerReportRequest::SetMissionStart(const int64_t& _missionStart)
{
    m_missionStart = _missionStart;
    m_missionStartHasBeenSet = true;
}

bool CreateTimerReportRequest::MissionStartHasBeenSet() const
{
    return m_missionStartHasBeenSet;
}


