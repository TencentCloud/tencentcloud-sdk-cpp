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

#include <tencentcloud/bma/v20210624/model/Monitor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

Monitor::Monitor() :
    m_workIdHasBeenSet(false),
    m_workNameHasBeenSet(false),
    m_workTypeHasBeenSet(false),
    m_tortPlatNumHasBeenSet(false),
    m_tortURLNumHasBeenSet(false),
    m_monitorTimeHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_workCategoryHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_monitorNoteHasBeenSet(false),
    m_workCategoryAllHasBeenSet(false),
    m_evidenceStatusHasBeenSet(false),
    m_evidenceNoteHasBeenSet(false),
    m_tortSiteNumHasBeenSet(false),
    m_monitorEndTimeHasBeenSet(false),
    m_autoRenewHasBeenSet(false)
{
}

CoreInternalOutcome Monitor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkId") && !value["WorkId"].IsNull())
    {
        if (!value["WorkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.WorkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workId = value["WorkId"].GetInt64();
        m_workIdHasBeenSet = true;
    }

    if (value.HasMember("WorkName") && !value["WorkName"].IsNull())
    {
        if (!value["WorkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.WorkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workName = string(value["WorkName"].GetString());
        m_workNameHasBeenSet = true;
    }

    if (value.HasMember("WorkType") && !value["WorkType"].IsNull())
    {
        if (!value["WorkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.WorkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workType = string(value["WorkType"].GetString());
        m_workTypeHasBeenSet = true;
    }

    if (value.HasMember("TortPlatNum") && !value["TortPlatNum"].IsNull())
    {
        if (!value["TortPlatNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.TortPlatNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tortPlatNum = value["TortPlatNum"].GetInt64();
        m_tortPlatNumHasBeenSet = true;
    }

    if (value.HasMember("TortURLNum") && !value["TortURLNum"].IsNull())
    {
        if (!value["TortURLNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.TortURLNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tortURLNum = value["TortURLNum"].GetInt64();
        m_tortURLNumHasBeenSet = true;
    }

    if (value.HasMember("MonitorTime") && !value["MonitorTime"].IsNull())
    {
        if (!value["MonitorTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.MonitorTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorTime = string(value["MonitorTime"].GetString());
        m_monitorTimeHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.MonitorStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = value["MonitorStatus"].GetInt64();
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("WorkCategory") && !value["WorkCategory"].IsNull())
    {
        if (!value["WorkCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.WorkCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workCategory = string(value["WorkCategory"].GetString());
        m_workCategoryHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("MonitorNote") && !value["MonitorNote"].IsNull())
    {
        if (!value["MonitorNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.MonitorNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorNote = string(value["MonitorNote"].GetString());
        m_monitorNoteHasBeenSet = true;
    }

    if (value.HasMember("WorkCategoryAll") && !value["WorkCategoryAll"].IsNull())
    {
        if (!value["WorkCategoryAll"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.WorkCategoryAll` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workCategoryAll = string(value["WorkCategoryAll"].GetString());
        m_workCategoryAllHasBeenSet = true;
    }

    if (value.HasMember("EvidenceStatus") && !value["EvidenceStatus"].IsNull())
    {
        if (!value["EvidenceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.EvidenceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceStatus = value["EvidenceStatus"].GetInt64();
        m_evidenceStatusHasBeenSet = true;
    }

    if (value.HasMember("EvidenceNote") && !value["EvidenceNote"].IsNull())
    {
        if (!value["EvidenceNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.EvidenceNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceNote = string(value["EvidenceNote"].GetString());
        m_evidenceNoteHasBeenSet = true;
    }

    if (value.HasMember("TortSiteNum") && !value["TortSiteNum"].IsNull())
    {
        if (!value["TortSiteNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.TortSiteNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tortSiteNum = value["TortSiteNum"].GetInt64();
        m_tortSiteNumHasBeenSet = true;
    }

    if (value.HasMember("MonitorEndTime") && !value["MonitorEndTime"].IsNull())
    {
        if (!value["MonitorEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.MonitorEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorEndTime = string(value["MonitorEndTime"].GetString());
        m_monitorEndTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.AutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetInt64();
        m_autoRenewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Monitor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workId, allocator);
    }

    if (m_workNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workName.c_str(), allocator).Move(), allocator);
    }

    if (m_workTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workType.c_str(), allocator).Move(), allocator);
    }

    if (m_tortPlatNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortPlatNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tortPlatNum, allocator);
    }

    if (m_tortURLNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortURLNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tortURLNum, allocator);
    }

    if (m_monitorTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorTime.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_workCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorNote.c_str(), allocator).Move(), allocator);
    }

    if (m_workCategoryAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkCategoryAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workCategoryAll.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evidenceStatus, allocator);
    }

    if (m_evidenceNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidenceNote.c_str(), allocator).Move(), allocator);
    }

    if (m_tortSiteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortSiteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tortSiteNum, allocator);
    }

    if (m_monitorEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

}


int64_t Monitor::GetWorkId() const
{
    return m_workId;
}

void Monitor::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool Monitor::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string Monitor::GetWorkName() const
{
    return m_workName;
}

void Monitor::SetWorkName(const string& _workName)
{
    m_workName = _workName;
    m_workNameHasBeenSet = true;
}

bool Monitor::WorkNameHasBeenSet() const
{
    return m_workNameHasBeenSet;
}

string Monitor::GetWorkType() const
{
    return m_workType;
}

void Monitor::SetWorkType(const string& _workType)
{
    m_workType = _workType;
    m_workTypeHasBeenSet = true;
}

bool Monitor::WorkTypeHasBeenSet() const
{
    return m_workTypeHasBeenSet;
}

int64_t Monitor::GetTortPlatNum() const
{
    return m_tortPlatNum;
}

void Monitor::SetTortPlatNum(const int64_t& _tortPlatNum)
{
    m_tortPlatNum = _tortPlatNum;
    m_tortPlatNumHasBeenSet = true;
}

bool Monitor::TortPlatNumHasBeenSet() const
{
    return m_tortPlatNumHasBeenSet;
}

int64_t Monitor::GetTortURLNum() const
{
    return m_tortURLNum;
}

void Monitor::SetTortURLNum(const int64_t& _tortURLNum)
{
    m_tortURLNum = _tortURLNum;
    m_tortURLNumHasBeenSet = true;
}

bool Monitor::TortURLNumHasBeenSet() const
{
    return m_tortURLNumHasBeenSet;
}

string Monitor::GetMonitorTime() const
{
    return m_monitorTime;
}

void Monitor::SetMonitorTime(const string& _monitorTime)
{
    m_monitorTime = _monitorTime;
    m_monitorTimeHasBeenSet = true;
}

bool Monitor::MonitorTimeHasBeenSet() const
{
    return m_monitorTimeHasBeenSet;
}

int64_t Monitor::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void Monitor::SetMonitorStatus(const int64_t& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool Monitor::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

string Monitor::GetWorkCategory() const
{
    return m_workCategory;
}

void Monitor::SetWorkCategory(const string& _workCategory)
{
    m_workCategory = _workCategory;
    m_workCategoryHasBeenSet = true;
}

bool Monitor::WorkCategoryHasBeenSet() const
{
    return m_workCategoryHasBeenSet;
}

string Monitor::GetInsertTime() const
{
    return m_insertTime;
}

void Monitor::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool Monitor::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string Monitor::GetMonitorNote() const
{
    return m_monitorNote;
}

void Monitor::SetMonitorNote(const string& _monitorNote)
{
    m_monitorNote = _monitorNote;
    m_monitorNoteHasBeenSet = true;
}

bool Monitor::MonitorNoteHasBeenSet() const
{
    return m_monitorNoteHasBeenSet;
}

string Monitor::GetWorkCategoryAll() const
{
    return m_workCategoryAll;
}

void Monitor::SetWorkCategoryAll(const string& _workCategoryAll)
{
    m_workCategoryAll = _workCategoryAll;
    m_workCategoryAllHasBeenSet = true;
}

bool Monitor::WorkCategoryAllHasBeenSet() const
{
    return m_workCategoryAllHasBeenSet;
}

int64_t Monitor::GetEvidenceStatus() const
{
    return m_evidenceStatus;
}

void Monitor::SetEvidenceStatus(const int64_t& _evidenceStatus)
{
    m_evidenceStatus = _evidenceStatus;
    m_evidenceStatusHasBeenSet = true;
}

bool Monitor::EvidenceStatusHasBeenSet() const
{
    return m_evidenceStatusHasBeenSet;
}

string Monitor::GetEvidenceNote() const
{
    return m_evidenceNote;
}

void Monitor::SetEvidenceNote(const string& _evidenceNote)
{
    m_evidenceNote = _evidenceNote;
    m_evidenceNoteHasBeenSet = true;
}

bool Monitor::EvidenceNoteHasBeenSet() const
{
    return m_evidenceNoteHasBeenSet;
}

int64_t Monitor::GetTortSiteNum() const
{
    return m_tortSiteNum;
}

void Monitor::SetTortSiteNum(const int64_t& _tortSiteNum)
{
    m_tortSiteNum = _tortSiteNum;
    m_tortSiteNumHasBeenSet = true;
}

bool Monitor::TortSiteNumHasBeenSet() const
{
    return m_tortSiteNumHasBeenSet;
}

string Monitor::GetMonitorEndTime() const
{
    return m_monitorEndTime;
}

void Monitor::SetMonitorEndTime(const string& _monitorEndTime)
{
    m_monitorEndTime = _monitorEndTime;
    m_monitorEndTimeHasBeenSet = true;
}

bool Monitor::MonitorEndTimeHasBeenSet() const
{
    return m_monitorEndTimeHasBeenSet;
}

int64_t Monitor::GetAutoRenew() const
{
    return m_autoRenew;
}

void Monitor::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool Monitor::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

