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

#include <tencentcloud/cds/v20180420/model/ReportMission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

ReportMission::ReportMission() :
    m_idHasBeenSet(false),
    m_tplNameHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_assetsListHasBeenSet(false),
    m_nextStartTimeHasBeenSet(false),
    m_missionStatusHasBeenSet(false),
    m_missionStatusMessageHasBeenSet(false),
    m_reportCountHasBeenSet(false),
    m_missionStartHasBeenSet(false),
    m_cntDayHasBeenSet(false),
    m_cntCycleHasBeenSet(false),
    m_cntTimeHasBeenSet(false),
    m_cntDateHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_notificationHasBeenSet(false)
{
}

CoreInternalOutcome ReportMission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TplName") && !value["TplName"].IsNull())
    {
        if (!value["TplName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.TplName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tplName = string(value["TplName"].GetString());
        m_tplNameHasBeenSet = true;
    }

    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.ReportType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = value["ReportType"].GetInt64();
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("AssetsList") && !value["AssetsList"].IsNull())
    {
        if (!value["AssetsList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportMission.AssetsList` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetsList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetsList.push_back(item);
        }
        m_assetsListHasBeenSet = true;
    }

    if (value.HasMember("NextStartTime") && !value["NextStartTime"].IsNull())
    {
        if (!value["NextStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.NextStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextStartTime = value["NextStartTime"].GetInt64();
        m_nextStartTimeHasBeenSet = true;
    }

    if (value.HasMember("MissionStatus") && !value["MissionStatus"].IsNull())
    {
        if (!value["MissionStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.MissionStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_missionStatus = value["MissionStatus"].GetInt64();
        m_missionStatusHasBeenSet = true;
    }

    if (value.HasMember("MissionStatusMessage") && !value["MissionStatusMessage"].IsNull())
    {
        if (!value["MissionStatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.MissionStatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_missionStatusMessage = string(value["MissionStatusMessage"].GetString());
        m_missionStatusMessageHasBeenSet = true;
    }

    if (value.HasMember("ReportCount") && !value["ReportCount"].IsNull())
    {
        if (!value["ReportCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.ReportCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportCount = value["ReportCount"].GetInt64();
        m_reportCountHasBeenSet = true;
    }

    if (value.HasMember("MissionStart") && !value["MissionStart"].IsNull())
    {
        if (!value["MissionStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.MissionStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_missionStart = value["MissionStart"].GetInt64();
        m_missionStartHasBeenSet = true;
    }

    if (value.HasMember("CntDay") && !value["CntDay"].IsNull())
    {
        if (!value["CntDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.CntDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cntDay = value["CntDay"].GetInt64();
        m_cntDayHasBeenSet = true;
    }

    if (value.HasMember("CntCycle") && !value["CntCycle"].IsNull())
    {
        if (!value["CntCycle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.CntCycle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cntCycle = value["CntCycle"].GetUint64();
        m_cntCycleHasBeenSet = true;
    }

    if (value.HasMember("CntTime") && !value["CntTime"].IsNull())
    {
        if (!value["CntTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.CntTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cntTime = value["CntTime"].GetUint64();
        m_cntTimeHasBeenSet = true;
    }

    if (value.HasMember("CntDate") && !value["CntDate"].IsNull())
    {
        if (!value["CntDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.CntDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cntDate = string(value["CntDate"].GetString());
        m_cntDateHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.Receivers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receivers = string(value["Receivers"].GetString());
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("Notification") && !value["Notification"].IsNull())
    {
        if (!value["Notification"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMission.Notification` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notification = value["Notification"].GetInt64();
        m_notificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportMission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_assetsListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetsList.begin(); itr != m_assetsList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nextStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextStartTime, allocator);
    }

    if (m_missionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_missionStatus, allocator);
    }

    if (m_missionStatusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissionStatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_missionStatusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_reportCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportCount, allocator);
    }

    if (m_missionStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissionStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_missionStart, allocator);
    }

    if (m_cntDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cntDay, allocator);
    }

    if (m_cntCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cntCycle, allocator);
    }

    if (m_cntTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cntTime, allocator);
    }

    if (m_cntDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cntDate.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receivers.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notification, allocator);
    }

}


int64_t ReportMission::GetId() const
{
    return m_id;
}

void ReportMission::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReportMission::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ReportMission::GetTplName() const
{
    return m_tplName;
}

void ReportMission::SetTplName(const string& _tplName)
{
    m_tplName = _tplName;
    m_tplNameHasBeenSet = true;
}

bool ReportMission::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}

int64_t ReportMission::GetReportType() const
{
    return m_reportType;
}

void ReportMission::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool ReportMission::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

string ReportMission::GetRemark() const
{
    return m_remark;
}

void ReportMission::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ReportMission::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ReportMission::GetTemplateId() const
{
    return m_templateId;
}

void ReportMission::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ReportMission::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<AssetsInfo> ReportMission::GetAssetsList() const
{
    return m_assetsList;
}

void ReportMission::SetAssetsList(const vector<AssetsInfo>& _assetsList)
{
    m_assetsList = _assetsList;
    m_assetsListHasBeenSet = true;
}

bool ReportMission::AssetsListHasBeenSet() const
{
    return m_assetsListHasBeenSet;
}

int64_t ReportMission::GetNextStartTime() const
{
    return m_nextStartTime;
}

void ReportMission::SetNextStartTime(const int64_t& _nextStartTime)
{
    m_nextStartTime = _nextStartTime;
    m_nextStartTimeHasBeenSet = true;
}

bool ReportMission::NextStartTimeHasBeenSet() const
{
    return m_nextStartTimeHasBeenSet;
}

int64_t ReportMission::GetMissionStatus() const
{
    return m_missionStatus;
}

void ReportMission::SetMissionStatus(const int64_t& _missionStatus)
{
    m_missionStatus = _missionStatus;
    m_missionStatusHasBeenSet = true;
}

bool ReportMission::MissionStatusHasBeenSet() const
{
    return m_missionStatusHasBeenSet;
}

string ReportMission::GetMissionStatusMessage() const
{
    return m_missionStatusMessage;
}

void ReportMission::SetMissionStatusMessage(const string& _missionStatusMessage)
{
    m_missionStatusMessage = _missionStatusMessage;
    m_missionStatusMessageHasBeenSet = true;
}

bool ReportMission::MissionStatusMessageHasBeenSet() const
{
    return m_missionStatusMessageHasBeenSet;
}

int64_t ReportMission::GetReportCount() const
{
    return m_reportCount;
}

void ReportMission::SetReportCount(const int64_t& _reportCount)
{
    m_reportCount = _reportCount;
    m_reportCountHasBeenSet = true;
}

bool ReportMission::ReportCountHasBeenSet() const
{
    return m_reportCountHasBeenSet;
}

int64_t ReportMission::GetMissionStart() const
{
    return m_missionStart;
}

void ReportMission::SetMissionStart(const int64_t& _missionStart)
{
    m_missionStart = _missionStart;
    m_missionStartHasBeenSet = true;
}

bool ReportMission::MissionStartHasBeenSet() const
{
    return m_missionStartHasBeenSet;
}

int64_t ReportMission::GetCntDay() const
{
    return m_cntDay;
}

void ReportMission::SetCntDay(const int64_t& _cntDay)
{
    m_cntDay = _cntDay;
    m_cntDayHasBeenSet = true;
}

bool ReportMission::CntDayHasBeenSet() const
{
    return m_cntDayHasBeenSet;
}

uint64_t ReportMission::GetCntCycle() const
{
    return m_cntCycle;
}

void ReportMission::SetCntCycle(const uint64_t& _cntCycle)
{
    m_cntCycle = _cntCycle;
    m_cntCycleHasBeenSet = true;
}

bool ReportMission::CntCycleHasBeenSet() const
{
    return m_cntCycleHasBeenSet;
}

uint64_t ReportMission::GetCntTime() const
{
    return m_cntTime;
}

void ReportMission::SetCntTime(const uint64_t& _cntTime)
{
    m_cntTime = _cntTime;
    m_cntTimeHasBeenSet = true;
}

bool ReportMission::CntTimeHasBeenSet() const
{
    return m_cntTimeHasBeenSet;
}

string ReportMission::GetCntDate() const
{
    return m_cntDate;
}

void ReportMission::SetCntDate(const string& _cntDate)
{
    m_cntDate = _cntDate;
    m_cntDateHasBeenSet = true;
}

bool ReportMission::CntDateHasBeenSet() const
{
    return m_cntDateHasBeenSet;
}

string ReportMission::GetReceivers() const
{
    return m_receivers;
}

void ReportMission::SetReceivers(const string& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool ReportMission::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

int64_t ReportMission::GetNotification() const
{
    return m_notification;
}

void ReportMission::SetNotification(const int64_t& _notification)
{
    m_notification = _notification;
    m_notificationHasBeenSet = true;
}

bool ReportMission::NotificationHasBeenSet() const
{
    return m_notificationHasBeenSet;
}

