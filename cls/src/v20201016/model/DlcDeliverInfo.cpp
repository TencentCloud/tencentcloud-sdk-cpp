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

#include <tencentcloud/cls/v20201016/model/DlcDeliverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DlcDeliverInfo::DlcDeliverInfo() :
    m_taskIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_deliverTypeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dlcInfoHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DlcDeliverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DeliverType") && !value["DeliverType"].IsNull())
    {
        if (!value["DeliverType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.DeliverType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliverType = value["DeliverType"].GetUint64();
        m_deliverTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.MaxSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetUint64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DlcInfo") && !value["DlcInfo"].IsNull())
    {
        if (!value["DlcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.DlcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dlcInfo.Deserialize(value["DlcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dlcInfoHasBeenSet = true;
    }

    if (value.HasMember("HasServicesLog") && !value["HasServicesLog"].IsNull())
    {
        if (!value["HasServicesLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.HasServicesLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasServicesLog = value["HasServicesLog"].GetUint64();
        m_hasServicesLogHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.BizType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = value["BizType"].GetUint64();
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcDeliverInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcDeliverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliverType, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_dlcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dlcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasServicesLog, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string DlcDeliverInfo::GetTaskId() const
{
    return m_taskId;
}

void DlcDeliverInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DlcDeliverInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DlcDeliverInfo::GetUin() const
{
    return m_uin;
}

void DlcDeliverInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DlcDeliverInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DlcDeliverInfo::GetTopicId() const
{
    return m_topicId;
}

void DlcDeliverInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DlcDeliverInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DlcDeliverInfo::GetName() const
{
    return m_name;
}

void DlcDeliverInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DlcDeliverInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DlcDeliverInfo::GetDeliverType() const
{
    return m_deliverType;
}

void DlcDeliverInfo::SetDeliverType(const uint64_t& _deliverType)
{
    m_deliverType = _deliverType;
    m_deliverTypeHasBeenSet = true;
}

bool DlcDeliverInfo::DeliverTypeHasBeenSet() const
{
    return m_deliverTypeHasBeenSet;
}

uint64_t DlcDeliverInfo::GetMaxSize() const
{
    return m_maxSize;
}

void DlcDeliverInfo::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool DlcDeliverInfo::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t DlcDeliverInfo::GetInterval() const
{
    return m_interval;
}

void DlcDeliverInfo::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DlcDeliverInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t DlcDeliverInfo::GetStartTime() const
{
    return m_startTime;
}

void DlcDeliverInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DlcDeliverInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DlcDeliverInfo::GetEndTime() const
{
    return m_endTime;
}

void DlcDeliverInfo::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DlcDeliverInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

DlcInfo DlcDeliverInfo::GetDlcInfo() const
{
    return m_dlcInfo;
}

void DlcDeliverInfo::SetDlcInfo(const DlcInfo& _dlcInfo)
{
    m_dlcInfo = _dlcInfo;
    m_dlcInfoHasBeenSet = true;
}

bool DlcDeliverInfo::DlcInfoHasBeenSet() const
{
    return m_dlcInfoHasBeenSet;
}

uint64_t DlcDeliverInfo::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void DlcDeliverInfo::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool DlcDeliverInfo::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

uint64_t DlcDeliverInfo::GetStatus() const
{
    return m_status;
}

void DlcDeliverInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DlcDeliverInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DlcDeliverInfo::GetProgress() const
{
    return m_progress;
}

void DlcDeliverInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool DlcDeliverInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t DlcDeliverInfo::GetBizType() const
{
    return m_bizType;
}

void DlcDeliverInfo::SetBizType(const uint64_t& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool DlcDeliverInfo::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

uint64_t DlcDeliverInfo::GetCreateTime() const
{
    return m_createTime;
}

void DlcDeliverInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DlcDeliverInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DlcDeliverInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DlcDeliverInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DlcDeliverInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

