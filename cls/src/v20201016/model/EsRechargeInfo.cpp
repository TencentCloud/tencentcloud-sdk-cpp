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

#include <tencentcloud/cls/v20201016/model/EsRechargeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EsRechargeInfo::EsRechargeInfo() :
    m_taskIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_importInfoHasBeenSet(false),
    m_timeInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false)
{
}

CoreInternalOutcome EsRechargeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("EsInfo") && !value["EsInfo"].IsNull())
    {
        if (!value["EsInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.EsInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esInfo.Deserialize(value["EsInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esInfoHasBeenSet = true;
    }

    if (value.HasMember("ImportInfo") && !value["ImportInfo"].IsNull())
    {
        if (!value["ImportInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.ImportInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_importInfo.Deserialize(value["ImportInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_importInfoHasBeenSet = true;
    }

    if (value.HasMember("TimeInfo") && !value["TimeInfo"].IsNull())
    {
        if (!value["TimeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.TimeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeInfo.Deserialize(value["TimeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.SubUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = value["SubUin"].GetUint64();
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("HasServicesLog") && !value["HasServicesLog"].IsNull())
    {
        if (!value["HasServicesLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsRechargeInfo.HasServicesLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasServicesLog = value["HasServicesLog"].GetUint64();
        m_hasServicesLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsRechargeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_importInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_importInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subUin, allocator);
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

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasServicesLog, allocator);
    }

}


string EsRechargeInfo::GetTaskId() const
{
    return m_taskId;
}

void EsRechargeInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool EsRechargeInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t EsRechargeInfo::GetUin() const
{
    return m_uin;
}

void EsRechargeInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool EsRechargeInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string EsRechargeInfo::GetTopicId() const
{
    return m_topicId;
}

void EsRechargeInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool EsRechargeInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string EsRechargeInfo::GetName() const
{
    return m_name;
}

void EsRechargeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EsRechargeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EsRechargeInfo::GetIndex() const
{
    return m_index;
}

void EsRechargeInfo::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool EsRechargeInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string EsRechargeInfo::GetQuery() const
{
    return m_query;
}

void EsRechargeInfo::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool EsRechargeInfo::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

EsInfo EsRechargeInfo::GetEsInfo() const
{
    return m_esInfo;
}

void EsRechargeInfo::SetEsInfo(const EsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool EsRechargeInfo::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

EsImportInfo EsRechargeInfo::GetImportInfo() const
{
    return m_importInfo;
}

void EsRechargeInfo::SetImportInfo(const EsImportInfo& _importInfo)
{
    m_importInfo = _importInfo;
    m_importInfoHasBeenSet = true;
}

bool EsRechargeInfo::ImportInfoHasBeenSet() const
{
    return m_importInfoHasBeenSet;
}

EsTimeInfo EsRechargeInfo::GetTimeInfo() const
{
    return m_timeInfo;
}

void EsRechargeInfo::SetTimeInfo(const EsTimeInfo& _timeInfo)
{
    m_timeInfo = _timeInfo;
    m_timeInfoHasBeenSet = true;
}

bool EsRechargeInfo::TimeInfoHasBeenSet() const
{
    return m_timeInfoHasBeenSet;
}

uint64_t EsRechargeInfo::GetStatus() const
{
    return m_status;
}

void EsRechargeInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EsRechargeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t EsRechargeInfo::GetProgress() const
{
    return m_progress;
}

void EsRechargeInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool EsRechargeInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t EsRechargeInfo::GetSubUin() const
{
    return m_subUin;
}

void EsRechargeInfo::SetSubUin(const uint64_t& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool EsRechargeInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

uint64_t EsRechargeInfo::GetCreateTime() const
{
    return m_createTime;
}

void EsRechargeInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EsRechargeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t EsRechargeInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void EsRechargeInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EsRechargeInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t EsRechargeInfo::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void EsRechargeInfo::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool EsRechargeInfo::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

