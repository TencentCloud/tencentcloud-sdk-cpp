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

#include <tencentcloud/cds/v20180420/model/Reports.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

Reports::Reports() :
    m_addTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_isDeleteHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reportFileHasBeenSet(false),
    m_reportStatusHasBeenSet(false),
    m_reportTmpStatusHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_sendResultHasBeenSet(false),
    m_sendTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_assetsListHasBeenSet(false),
    m_cntDayHasBeenSet(false)
{
}

CoreInternalOutcome Reports::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.AddTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = value["AddTime"].GetInt64();
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.InstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetInt64();
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("IsDelete") && !value["IsDelete"].IsNull())
    {
        if (!value["IsDelete"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.IsDelete` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDelete = value["IsDelete"].GetInt64();
        m_isDeleteHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.Receivers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receivers = string(value["Receivers"].GetString());
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ReportFile") && !value["ReportFile"].IsNull())
    {
        if (!value["ReportFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.ReportFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportFile = string(value["ReportFile"].GetString());
        m_reportFileHasBeenSet = true;
    }

    if (value.HasMember("ReportStatus") && !value["ReportStatus"].IsNull())
    {
        if (!value["ReportStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.ReportStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportStatus = value["ReportStatus"].GetInt64();
        m_reportStatusHasBeenSet = true;
    }

    if (value.HasMember("ReportTmpStatus") && !value["ReportTmpStatus"].IsNull())
    {
        if (!value["ReportTmpStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.ReportTmpStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportTmpStatus = value["ReportTmpStatus"].GetInt64();
        m_reportTmpStatusHasBeenSet = true;
    }

    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.ReportType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = value["ReportType"].GetInt64();
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("SendResult") && !value["SendResult"].IsNull())
    {
        if (!value["SendResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.SendResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendResult = string(value["SendResult"].GetString());
        m_sendResultHasBeenSet = true;
    }

    if (value.HasMember("SendType") && !value["SendType"].IsNull())
    {
        if (!value["SendType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.SendType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendType = string(value["SendType"].GetString());
        m_sendTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("AssetsList") && !value["AssetsList"].IsNull())
    {
        if (!value["AssetsList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Reports.AssetsList` is not array type"));

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

    if (value.HasMember("CntDay") && !value["CntDay"].IsNull())
    {
        if (!value["CntDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Reports.CntDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cntDay = value["CntDay"].GetInt64();
        m_cntDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Reports::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_isDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelete, allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receivers.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_reportFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportFile.c_str(), allocator).Move(), allocator);
    }

    if (m_reportStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportStatus, allocator);
    }

    if (m_reportTmpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTmpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportTmpStatus, allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportType, allocator);
    }

    if (m_sendResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendResult.c_str(), allocator).Move(), allocator);
    }

    if (m_sendTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    if (m_cntDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cntDay, allocator);
    }

}


int64_t Reports::GetAddTime() const
{
    return m_addTime;
}

void Reports::SetAddTime(const int64_t& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Reports::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

int64_t Reports::GetEndTime() const
{
    return m_endTime;
}

void Reports::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Reports::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t Reports::GetId() const
{
    return m_id;
}

void Reports::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Reports::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t Reports::GetInstanceId() const
{
    return m_instanceId;
}

void Reports::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Reports::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t Reports::GetIsDelete() const
{
    return m_isDelete;
}

void Reports::SetIsDelete(const int64_t& _isDelete)
{
    m_isDelete = _isDelete;
    m_isDeleteHasBeenSet = true;
}

bool Reports::IsDeleteHasBeenSet() const
{
    return m_isDeleteHasBeenSet;
}

string Reports::GetReceivers() const
{
    return m_receivers;
}

void Reports::SetReceivers(const string& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool Reports::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

string Reports::GetRemark() const
{
    return m_remark;
}

void Reports::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Reports::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Reports::GetReportFile() const
{
    return m_reportFile;
}

void Reports::SetReportFile(const string& _reportFile)
{
    m_reportFile = _reportFile;
    m_reportFileHasBeenSet = true;
}

bool Reports::ReportFileHasBeenSet() const
{
    return m_reportFileHasBeenSet;
}

int64_t Reports::GetReportStatus() const
{
    return m_reportStatus;
}

void Reports::SetReportStatus(const int64_t& _reportStatus)
{
    m_reportStatus = _reportStatus;
    m_reportStatusHasBeenSet = true;
}

bool Reports::ReportStatusHasBeenSet() const
{
    return m_reportStatusHasBeenSet;
}

int64_t Reports::GetReportTmpStatus() const
{
    return m_reportTmpStatus;
}

void Reports::SetReportTmpStatus(const int64_t& _reportTmpStatus)
{
    m_reportTmpStatus = _reportTmpStatus;
    m_reportTmpStatusHasBeenSet = true;
}

bool Reports::ReportTmpStatusHasBeenSet() const
{
    return m_reportTmpStatusHasBeenSet;
}

int64_t Reports::GetReportType() const
{
    return m_reportType;
}

void Reports::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool Reports::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

string Reports::GetSendResult() const
{
    return m_sendResult;
}

void Reports::SetSendResult(const string& _sendResult)
{
    m_sendResult = _sendResult;
    m_sendResultHasBeenSet = true;
}

bool Reports::SendResultHasBeenSet() const
{
    return m_sendResultHasBeenSet;
}

string Reports::GetSendType() const
{
    return m_sendType;
}

void Reports::SetSendType(const string& _sendType)
{
    m_sendType = _sendType;
    m_sendTypeHasBeenSet = true;
}

bool Reports::SendTypeHasBeenSet() const
{
    return m_sendTypeHasBeenSet;
}

int64_t Reports::GetStartTime() const
{
    return m_startTime;
}

void Reports::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Reports::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Reports::GetTitle() const
{
    return m_title;
}

void Reports::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Reports::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t Reports::GetTemplateId() const
{
    return m_templateId;
}

void Reports::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool Reports::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<AssetsInfo> Reports::GetAssetsList() const
{
    return m_assetsList;
}

void Reports::SetAssetsList(const vector<AssetsInfo>& _assetsList)
{
    m_assetsList = _assetsList;
    m_assetsListHasBeenSet = true;
}

bool Reports::AssetsListHasBeenSet() const
{
    return m_assetsListHasBeenSet;
}

int64_t Reports::GetCntDay() const
{
    return m_cntDay;
}

void Reports::SetCntDay(const int64_t& _cntDay)
{
    m_cntDay = _cntDay;
    m_cntDayHasBeenSet = true;
}

bool Reports::CntDayHasBeenSet() const
{
    return m_cntDayHasBeenSet;
}

