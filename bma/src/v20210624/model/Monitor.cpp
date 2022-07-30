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
    m_monitorNoteHasBeenSet(false)
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

