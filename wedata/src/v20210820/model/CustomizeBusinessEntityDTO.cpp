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

#include <tencentcloud/wedata/v20210820/model/CustomizeBusinessEntityDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CustomizeBusinessEntityDTO::CustomizeBusinessEntityDTO() :
    m_taskIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_runUrlHasBeenSet(false),
    m_runReqParamsHasBeenSet(false),
    m_stopUrlHasBeenSet(false),
    m_stopReqParamsHasBeenSet(false),
    m_stateMonitorUrlHasBeenSet(false),
    m_runLogUrlHasBeenSet(false),
    m_logDownloadUrlHasBeenSet(false),
    m_markUrlHasBeenSet(false),
    m_sourceClusterHasBeenSet(false),
    m_sourceServiceHasBeenSet(false),
    m_sourceServerHasBeenSet(false),
    m_sqlFileNameHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_userFileIdHasBeenSet(false)
{
}

CoreInternalOutcome CustomizeBusinessEntityDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RunUrl") && !value["RunUrl"].IsNull())
    {
        if (!value["RunUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.RunUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUrl = string(value["RunUrl"].GetString());
        m_runUrlHasBeenSet = true;
    }

    if (value.HasMember("RunReqParams") && !value["RunReqParams"].IsNull())
    {
        if (!value["RunReqParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.RunReqParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runReqParams = string(value["RunReqParams"].GetString());
        m_runReqParamsHasBeenSet = true;
    }

    if (value.HasMember("StopUrl") && !value["StopUrl"].IsNull())
    {
        if (!value["StopUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.StopUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopUrl = string(value["StopUrl"].GetString());
        m_stopUrlHasBeenSet = true;
    }

    if (value.HasMember("StopReqParams") && !value["StopReqParams"].IsNull())
    {
        if (!value["StopReqParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.StopReqParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopReqParams = string(value["StopReqParams"].GetString());
        m_stopReqParamsHasBeenSet = true;
    }

    if (value.HasMember("StateMonitorUrl") && !value["StateMonitorUrl"].IsNull())
    {
        if (!value["StateMonitorUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.StateMonitorUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateMonitorUrl = string(value["StateMonitorUrl"].GetString());
        m_stateMonitorUrlHasBeenSet = true;
    }

    if (value.HasMember("RunLogUrl") && !value["RunLogUrl"].IsNull())
    {
        if (!value["RunLogUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.RunLogUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runLogUrl = string(value["RunLogUrl"].GetString());
        m_runLogUrlHasBeenSet = true;
    }

    if (value.HasMember("LogDownloadUrl") && !value["LogDownloadUrl"].IsNull())
    {
        if (!value["LogDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.LogDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logDownloadUrl = string(value["LogDownloadUrl"].GetString());
        m_logDownloadUrlHasBeenSet = true;
    }

    if (value.HasMember("MarkUrl") && !value["MarkUrl"].IsNull())
    {
        if (!value["MarkUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.MarkUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markUrl = string(value["MarkUrl"].GetString());
        m_markUrlHasBeenSet = true;
    }

    if (value.HasMember("SourceCluster") && !value["SourceCluster"].IsNull())
    {
        if (!value["SourceCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.SourceCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCluster = string(value["SourceCluster"].GetString());
        m_sourceClusterHasBeenSet = true;
    }

    if (value.HasMember("SourceService") && !value["SourceService"].IsNull())
    {
        if (!value["SourceService"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.SourceService` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceService = string(value["SourceService"].GetString());
        m_sourceServiceHasBeenSet = true;
    }

    if (value.HasMember("SourceServer") && !value["SourceServer"].IsNull())
    {
        if (!value["SourceServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.SourceServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServer = string(value["SourceServer"].GetString());
        m_sourceServerHasBeenSet = true;
    }

    if (value.HasMember("SqlFileName") && !value["SqlFileName"].IsNull())
    {
        if (!value["SqlFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.SqlFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlFileName = string(value["SqlFileName"].GetString());
        m_sqlFileNameHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.TypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetUint64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("UserFileId") && !value["UserFileId"].IsNull())
    {
        if (!value["UserFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeBusinessEntityDTO.UserFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userFileId = string(value["UserFileId"].GetString());
        m_userFileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomizeBusinessEntityDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_runUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_runReqParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunReqParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runReqParams.c_str(), allocator).Move(), allocator);
    }

    if (m_stopUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_stopReqParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopReqParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopReqParams.c_str(), allocator).Move(), allocator);
    }

    if (m_stateMonitorUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateMonitorUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateMonitorUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_runLogUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunLogUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runLogUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_logDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_markUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceService.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServer.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_userFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userFileId.c_str(), allocator).Move(), allocator);
    }

}


string CustomizeBusinessEntityDTO::GetTaskId() const
{
    return m_taskId;
}

void CustomizeBusinessEntityDTO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetId() const
{
    return m_id;
}

void CustomizeBusinessEntityDTO::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetTaskName() const
{
    return m_taskName;
}

void CustomizeBusinessEntityDTO::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetName() const
{
    return m_name;
}

void CustomizeBusinessEntityDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetTaskType() const
{
    return m_taskType;
}

void CustomizeBusinessEntityDTO::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetType() const
{
    return m_type;
}

void CustomizeBusinessEntityDTO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetRunUrl() const
{
    return m_runUrl;
}

void CustomizeBusinessEntityDTO::SetRunUrl(const string& _runUrl)
{
    m_runUrl = _runUrl;
    m_runUrlHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::RunUrlHasBeenSet() const
{
    return m_runUrlHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetRunReqParams() const
{
    return m_runReqParams;
}

void CustomizeBusinessEntityDTO::SetRunReqParams(const string& _runReqParams)
{
    m_runReqParams = _runReqParams;
    m_runReqParamsHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::RunReqParamsHasBeenSet() const
{
    return m_runReqParamsHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetStopUrl() const
{
    return m_stopUrl;
}

void CustomizeBusinessEntityDTO::SetStopUrl(const string& _stopUrl)
{
    m_stopUrl = _stopUrl;
    m_stopUrlHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::StopUrlHasBeenSet() const
{
    return m_stopUrlHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetStopReqParams() const
{
    return m_stopReqParams;
}

void CustomizeBusinessEntityDTO::SetStopReqParams(const string& _stopReqParams)
{
    m_stopReqParams = _stopReqParams;
    m_stopReqParamsHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::StopReqParamsHasBeenSet() const
{
    return m_stopReqParamsHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetStateMonitorUrl() const
{
    return m_stateMonitorUrl;
}

void CustomizeBusinessEntityDTO::SetStateMonitorUrl(const string& _stateMonitorUrl)
{
    m_stateMonitorUrl = _stateMonitorUrl;
    m_stateMonitorUrlHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::StateMonitorUrlHasBeenSet() const
{
    return m_stateMonitorUrlHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetRunLogUrl() const
{
    return m_runLogUrl;
}

void CustomizeBusinessEntityDTO::SetRunLogUrl(const string& _runLogUrl)
{
    m_runLogUrl = _runLogUrl;
    m_runLogUrlHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::RunLogUrlHasBeenSet() const
{
    return m_runLogUrlHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetLogDownloadUrl() const
{
    return m_logDownloadUrl;
}

void CustomizeBusinessEntityDTO::SetLogDownloadUrl(const string& _logDownloadUrl)
{
    m_logDownloadUrl = _logDownloadUrl;
    m_logDownloadUrlHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::LogDownloadUrlHasBeenSet() const
{
    return m_logDownloadUrlHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetMarkUrl() const
{
    return m_markUrl;
}

void CustomizeBusinessEntityDTO::SetMarkUrl(const string& _markUrl)
{
    m_markUrl = _markUrl;
    m_markUrlHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::MarkUrlHasBeenSet() const
{
    return m_markUrlHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetSourceCluster() const
{
    return m_sourceCluster;
}

void CustomizeBusinessEntityDTO::SetSourceCluster(const string& _sourceCluster)
{
    m_sourceCluster = _sourceCluster;
    m_sourceClusterHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::SourceClusterHasBeenSet() const
{
    return m_sourceClusterHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetSourceService() const
{
    return m_sourceService;
}

void CustomizeBusinessEntityDTO::SetSourceService(const string& _sourceService)
{
    m_sourceService = _sourceService;
    m_sourceServiceHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::SourceServiceHasBeenSet() const
{
    return m_sourceServiceHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetSourceServer() const
{
    return m_sourceServer;
}

void CustomizeBusinessEntityDTO::SetSourceServer(const string& _sourceServer)
{
    m_sourceServer = _sourceServer;
    m_sourceServerHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::SourceServerHasBeenSet() const
{
    return m_sourceServerHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetSqlFileName() const
{
    return m_sqlFileName;
}

void CustomizeBusinessEntityDTO::SetSqlFileName(const string& _sqlFileName)
{
    m_sqlFileName = _sqlFileName;
    m_sqlFileNameHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::SqlFileNameHasBeenSet() const
{
    return m_sqlFileNameHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetDbType() const
{
    return m_dbType;
}

void CustomizeBusinessEntityDTO::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetEngine() const
{
    return m_engine;
}

void CustomizeBusinessEntityDTO::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

uint64_t CustomizeBusinessEntityDTO::GetTypeId() const
{
    return m_typeId;
}

void CustomizeBusinessEntityDTO::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetFileName() const
{
    return m_fileName;
}

void CustomizeBusinessEntityDTO::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetBucket() const
{
    return m_bucket;
}

void CustomizeBusinessEntityDTO::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetRegion() const
{
    return m_region;
}

void CustomizeBusinessEntityDTO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetExtraInfo() const
{
    return m_extraInfo;
}

void CustomizeBusinessEntityDTO::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string CustomizeBusinessEntityDTO::GetUserFileId() const
{
    return m_userFileId;
}

void CustomizeBusinessEntityDTO::SetUserFileId(const string& _userFileId)
{
    m_userFileId = _userFileId;
    m_userFileIdHasBeenSet = true;
}

bool CustomizeBusinessEntityDTO::UserFileIdHasBeenSet() const
{
    return m_userFileIdHasBeenSet;
}

