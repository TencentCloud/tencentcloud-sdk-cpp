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

#include <tencentcloud/dlc/v20210125/model/CreateSparkSubmitTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateSparkSubmitTaskRequest::CreateSparkSubmitTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_packagePathHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_isInheritHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_driverSizeHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_executorNumbersHasBeenSet(false),
    m_executorMaxNumbersHasBeenSet(false),
    m_cmdArgsHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

string CreateSparkSubmitTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_packagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackagePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packagePath.c_str(), allocator).Move(), allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleArn, allocator);
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInherit, allocator);
    }

    if (m_mainClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainClass.c_str(), allocator).Move(), allocator);
    }

    if (m_driverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_driverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executorNumbers, allocator);
    }

    if (m_executorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executorMaxNumbers, allocator);
    }

    if (m_cmdArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cmdArgs.begin(); itr != m_cmdArgs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceInfo.begin(); itr != m_sourceInfo.end(); ++itr, ++i)
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


string CreateSparkSubmitTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateSparkSubmitTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t CreateSparkSubmitTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateSparkSubmitTaskRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateSparkSubmitTaskRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CreateSparkSubmitTaskRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string CreateSparkSubmitTaskRequest::GetPackagePath() const
{
    return m_packagePath;
}

void CreateSparkSubmitTaskRequest::SetPackagePath(const string& _packagePath)
{
    m_packagePath = _packagePath;
    m_packagePathHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::PackagePathHasBeenSet() const
{
    return m_packagePathHasBeenSet;
}

int64_t CreateSparkSubmitTaskRequest::GetRoleArn() const
{
    return m_roleArn;
}

void CreateSparkSubmitTaskRequest::SetRoleArn(const int64_t& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

uint64_t CreateSparkSubmitTaskRequest::GetIsInherit() const
{
    return m_isInherit;
}

void CreateSparkSubmitTaskRequest::SetIsInherit(const uint64_t& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}

string CreateSparkSubmitTaskRequest::GetMainClass() const
{
    return m_mainClass;
}

void CreateSparkSubmitTaskRequest::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string CreateSparkSubmitTaskRequest::GetDriverSize() const
{
    return m_driverSize;
}

void CreateSparkSubmitTaskRequest::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string CreateSparkSubmitTaskRequest::GetExecutorSize() const
{
    return m_executorSize;
}

void CreateSparkSubmitTaskRequest::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

uint64_t CreateSparkSubmitTaskRequest::GetExecutorNumbers() const
{
    return m_executorNumbers;
}

void CreateSparkSubmitTaskRequest::SetExecutorNumbers(const uint64_t& _executorNumbers)
{
    m_executorNumbers = _executorNumbers;
    m_executorNumbersHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::ExecutorNumbersHasBeenSet() const
{
    return m_executorNumbersHasBeenSet;
}

uint64_t CreateSparkSubmitTaskRequest::GetExecutorMaxNumbers() const
{
    return m_executorMaxNumbers;
}

void CreateSparkSubmitTaskRequest::SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers)
{
    m_executorMaxNumbers = _executorMaxNumbers;
    m_executorMaxNumbersHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::ExecutorMaxNumbersHasBeenSet() const
{
    return m_executorMaxNumbersHasBeenSet;
}

vector<KVPair> CreateSparkSubmitTaskRequest::GetCmdArgs() const
{
    return m_cmdArgs;
}

void CreateSparkSubmitTaskRequest::SetCmdArgs(const vector<KVPair>& _cmdArgs)
{
    m_cmdArgs = _cmdArgs;
    m_cmdArgsHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::CmdArgsHasBeenSet() const
{
    return m_cmdArgsHasBeenSet;
}

vector<KVPair> CreateSparkSubmitTaskRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void CreateSparkSubmitTaskRequest::SetSourceInfo(const vector<KVPair>& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool CreateSparkSubmitTaskRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}


