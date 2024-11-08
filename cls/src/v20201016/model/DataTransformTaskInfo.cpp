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

#include <tencentcloud/cls/v20201016/model/DataTransformTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DataTransformTaskInfo::DataTransformTaskInfo() :
    m_nameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_srcTopicIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_lastEnableTimeHasBeenSet(false),
    m_srcTopicNameHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_dstResourcesHasBeenSet(false),
    m_etlContentHasBeenSet(false),
    m_dataTransformTypeHasBeenSet(false),
    m_keepFailureLogHasBeenSet(false),
    m_failureLogKeyHasBeenSet(false)
{
}

CoreInternalOutcome DataTransformTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("EnableFlag") && !value["EnableFlag"].IsNull())
    {
        if (!value["EnableFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.EnableFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableFlag = value["EnableFlag"].GetInt64();
        m_enableFlagHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SrcTopicId") && !value["SrcTopicId"].IsNull())
    {
        if (!value["SrcTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.SrcTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTopicId = string(value["SrcTopicId"].GetString());
        m_srcTopicIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastEnableTime") && !value["LastEnableTime"].IsNull())
    {
        if (!value["LastEnableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.LastEnableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEnableTime = string(value["LastEnableTime"].GetString());
        m_lastEnableTimeHasBeenSet = true;
    }

    if (value.HasMember("SrcTopicName") && !value["SrcTopicName"].IsNull())
    {
        if (!value["SrcTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.SrcTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTopicName = string(value["SrcTopicName"].GetString());
        m_srcTopicNameHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("DstResources") && !value["DstResources"].IsNull())
    {
        if (!value["DstResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.DstResources` is not array type"));

        const rapidjson::Value &tmpValue = value["DstResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataTransformResouceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dstResources.push_back(item);
        }
        m_dstResourcesHasBeenSet = true;
    }

    if (value.HasMember("EtlContent") && !value["EtlContent"].IsNull())
    {
        if (!value["EtlContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.EtlContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_etlContent = string(value["EtlContent"].GetString());
        m_etlContentHasBeenSet = true;
    }

    if (value.HasMember("DataTransformType") && !value["DataTransformType"].IsNull())
    {
        if (!value["DataTransformType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.DataTransformType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataTransformType = value["DataTransformType"].GetUint64();
        m_dataTransformTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepFailureLog") && !value["KeepFailureLog"].IsNull())
    {
        if (!value["KeepFailureLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.KeepFailureLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepFailureLog = value["KeepFailureLog"].GetUint64();
        m_keepFailureLogHasBeenSet = true;
    }

    if (value.HasMember("FailureLogKey") && !value["FailureLogKey"].IsNull())
    {
        if (!value["FailureLogKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformTaskInfo.FailureLogKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureLogKey = string(value["FailureLogKey"].GetString());
        m_failureLogKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataTransformTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFlag, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_srcTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastEnableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEnableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastEnableTime.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstResources.begin(); itr != m_dstResources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_etlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtlContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_etlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTransformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTransformType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataTransformType, allocator);
    }

    if (m_keepFailureLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepFailureLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepFailureLog, allocator);
    }

    if (m_failureLogKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureLogKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureLogKey.c_str(), allocator).Move(), allocator);
    }

}


string DataTransformTaskInfo::GetName() const
{
    return m_name;
}

void DataTransformTaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataTransformTaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataTransformTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void DataTransformTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DataTransformTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DataTransformTaskInfo::GetEnableFlag() const
{
    return m_enableFlag;
}

void DataTransformTaskInfo::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool DataTransformTaskInfo::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

int64_t DataTransformTaskInfo::GetType() const
{
    return m_type;
}

void DataTransformTaskInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataTransformTaskInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DataTransformTaskInfo::GetSrcTopicId() const
{
    return m_srcTopicId;
}

void DataTransformTaskInfo::SetSrcTopicId(const string& _srcTopicId)
{
    m_srcTopicId = _srcTopicId;
    m_srcTopicIdHasBeenSet = true;
}

bool DataTransformTaskInfo::SrcTopicIdHasBeenSet() const
{
    return m_srcTopicIdHasBeenSet;
}

int64_t DataTransformTaskInfo::GetStatus() const
{
    return m_status;
}

void DataTransformTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataTransformTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DataTransformTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void DataTransformTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataTransformTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataTransformTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DataTransformTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataTransformTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DataTransformTaskInfo::GetLastEnableTime() const
{
    return m_lastEnableTime;
}

void DataTransformTaskInfo::SetLastEnableTime(const string& _lastEnableTime)
{
    m_lastEnableTime = _lastEnableTime;
    m_lastEnableTimeHasBeenSet = true;
}

bool DataTransformTaskInfo::LastEnableTimeHasBeenSet() const
{
    return m_lastEnableTimeHasBeenSet;
}

string DataTransformTaskInfo::GetSrcTopicName() const
{
    return m_srcTopicName;
}

void DataTransformTaskInfo::SetSrcTopicName(const string& _srcTopicName)
{
    m_srcTopicName = _srcTopicName;
    m_srcTopicNameHasBeenSet = true;
}

bool DataTransformTaskInfo::SrcTopicNameHasBeenSet() const
{
    return m_srcTopicNameHasBeenSet;
}

string DataTransformTaskInfo::GetLogsetId() const
{
    return m_logsetId;
}

void DataTransformTaskInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool DataTransformTaskInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

vector<DataTransformResouceInfo> DataTransformTaskInfo::GetDstResources() const
{
    return m_dstResources;
}

void DataTransformTaskInfo::SetDstResources(const vector<DataTransformResouceInfo>& _dstResources)
{
    m_dstResources = _dstResources;
    m_dstResourcesHasBeenSet = true;
}

bool DataTransformTaskInfo::DstResourcesHasBeenSet() const
{
    return m_dstResourcesHasBeenSet;
}

string DataTransformTaskInfo::GetEtlContent() const
{
    return m_etlContent;
}

void DataTransformTaskInfo::SetEtlContent(const string& _etlContent)
{
    m_etlContent = _etlContent;
    m_etlContentHasBeenSet = true;
}

bool DataTransformTaskInfo::EtlContentHasBeenSet() const
{
    return m_etlContentHasBeenSet;
}

uint64_t DataTransformTaskInfo::GetDataTransformType() const
{
    return m_dataTransformType;
}

void DataTransformTaskInfo::SetDataTransformType(const uint64_t& _dataTransformType)
{
    m_dataTransformType = _dataTransformType;
    m_dataTransformTypeHasBeenSet = true;
}

bool DataTransformTaskInfo::DataTransformTypeHasBeenSet() const
{
    return m_dataTransformTypeHasBeenSet;
}

uint64_t DataTransformTaskInfo::GetKeepFailureLog() const
{
    return m_keepFailureLog;
}

void DataTransformTaskInfo::SetKeepFailureLog(const uint64_t& _keepFailureLog)
{
    m_keepFailureLog = _keepFailureLog;
    m_keepFailureLogHasBeenSet = true;
}

bool DataTransformTaskInfo::KeepFailureLogHasBeenSet() const
{
    return m_keepFailureLogHasBeenSet;
}

string DataTransformTaskInfo::GetFailureLogKey() const
{
    return m_failureLogKey;
}

void DataTransformTaskInfo::SetFailureLogKey(const string& _failureLogKey)
{
    m_failureLogKey = _failureLogKey;
    m_failureLogKeyHasBeenSet = true;
}

bool DataTransformTaskInfo::FailureLogKeyHasBeenSet() const
{
    return m_failureLogKeyHasBeenSet;
}

