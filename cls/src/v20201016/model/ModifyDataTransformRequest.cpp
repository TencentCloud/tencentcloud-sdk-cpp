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

#include <tencentcloud/cls/v20201016/model/ModifyDataTransformRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyDataTransformRequest::ModifyDataTransformRequest() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_etlContentHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_dstResourcesHasBeenSet(false),
    m_backupGiveUpDataHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false),
    m_keepFailureLogHasBeenSet(false),
    m_failureLogKeyHasBeenSet(false),
    m_dataTransformSqlDataSourcesHasBeenSet(false),
    m_envInfosHasBeenSet(false)
{
}

string ModifyDataTransformRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_etlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtlContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_etlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableFlag, allocator);
    }

    if (m_dstResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstResources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstResources.begin(); itr != m_dstResources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_backupGiveUpDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGiveUpData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupGiveUpData, allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasServicesLog, allocator);
    }

    if (m_keepFailureLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepFailureLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepFailureLog, allocator);
    }

    if (m_failureLogKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureLogKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_failureLogKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTransformSqlDataSourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTransformSqlDataSources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataTransformSqlDataSources.begin(); itr != m_dataTransformSqlDataSources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_envInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envInfos.begin(); itr != m_envInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDataTransformRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyDataTransformRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyDataTransformRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyDataTransformRequest::GetName() const
{
    return m_name;
}

void ModifyDataTransformRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDataTransformRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyDataTransformRequest::GetEtlContent() const
{
    return m_etlContent;
}

void ModifyDataTransformRequest::SetEtlContent(const string& _etlContent)
{
    m_etlContent = _etlContent;
    m_etlContentHasBeenSet = true;
}

bool ModifyDataTransformRequest::EtlContentHasBeenSet() const
{
    return m_etlContentHasBeenSet;
}

int64_t ModifyDataTransformRequest::GetEnableFlag() const
{
    return m_enableFlag;
}

void ModifyDataTransformRequest::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool ModifyDataTransformRequest::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

vector<DataTransformResouceInfo> ModifyDataTransformRequest::GetDstResources() const
{
    return m_dstResources;
}

void ModifyDataTransformRequest::SetDstResources(const vector<DataTransformResouceInfo>& _dstResources)
{
    m_dstResources = _dstResources;
    m_dstResourcesHasBeenSet = true;
}

bool ModifyDataTransformRequest::DstResourcesHasBeenSet() const
{
    return m_dstResourcesHasBeenSet;
}

bool ModifyDataTransformRequest::GetBackupGiveUpData() const
{
    return m_backupGiveUpData;
}

void ModifyDataTransformRequest::SetBackupGiveUpData(const bool& _backupGiveUpData)
{
    m_backupGiveUpData = _backupGiveUpData;
    m_backupGiveUpDataHasBeenSet = true;
}

bool ModifyDataTransformRequest::BackupGiveUpDataHasBeenSet() const
{
    return m_backupGiveUpDataHasBeenSet;
}

uint64_t ModifyDataTransformRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void ModifyDataTransformRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool ModifyDataTransformRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

uint64_t ModifyDataTransformRequest::GetKeepFailureLog() const
{
    return m_keepFailureLog;
}

void ModifyDataTransformRequest::SetKeepFailureLog(const uint64_t& _keepFailureLog)
{
    m_keepFailureLog = _keepFailureLog;
    m_keepFailureLogHasBeenSet = true;
}

bool ModifyDataTransformRequest::KeepFailureLogHasBeenSet() const
{
    return m_keepFailureLogHasBeenSet;
}

string ModifyDataTransformRequest::GetFailureLogKey() const
{
    return m_failureLogKey;
}

void ModifyDataTransformRequest::SetFailureLogKey(const string& _failureLogKey)
{
    m_failureLogKey = _failureLogKey;
    m_failureLogKeyHasBeenSet = true;
}

bool ModifyDataTransformRequest::FailureLogKeyHasBeenSet() const
{
    return m_failureLogKeyHasBeenSet;
}

vector<DataTransformSqlDataSource> ModifyDataTransformRequest::GetDataTransformSqlDataSources() const
{
    return m_dataTransformSqlDataSources;
}

void ModifyDataTransformRequest::SetDataTransformSqlDataSources(const vector<DataTransformSqlDataSource>& _dataTransformSqlDataSources)
{
    m_dataTransformSqlDataSources = _dataTransformSqlDataSources;
    m_dataTransformSqlDataSourcesHasBeenSet = true;
}

bool ModifyDataTransformRequest::DataTransformSqlDataSourcesHasBeenSet() const
{
    return m_dataTransformSqlDataSourcesHasBeenSet;
}

vector<EnvInfo> ModifyDataTransformRequest::GetEnvInfos() const
{
    return m_envInfos;
}

void ModifyDataTransformRequest::SetEnvInfos(const vector<EnvInfo>& _envInfos)
{
    m_envInfos = _envInfos;
    m_envInfosHasBeenSet = true;
}

bool ModifyDataTransformRequest::EnvInfosHasBeenSet() const
{
    return m_envInfosHasBeenSet;
}


