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

#include <tencentcloud/dlc/v20210125/model/ModifySparkAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ModifySparkAppRequest::ModifySparkAppRequest() :
    m_appNameHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_dataEngineHasBeenSet(false),
    m_appFileHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_appDriverSizeHasBeenSet(false),
    m_appExecutorSizeHasBeenSet(false),
    m_appExecutorNumsHasBeenSet(false),
    m_sparkAppIdHasBeenSet(false),
    m_eniHasBeenSet(false),
    m_isLocalHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_appConfHasBeenSet(false),
    m_isLocalJarsHasBeenSet(false),
    m_appJarsHasBeenSet(false),
    m_isLocalFilesHasBeenSet(false),
    m_appFilesHasBeenSet(false),
    m_isLocalPythonFilesHasBeenSet(false),
    m_appPythonFilesHasBeenSet(false),
    m_cmdArgsHasBeenSet(false),
    m_maxRetriesHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
}

string ModifySparkAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appType, allocator);
    }

    if (m_dataEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_appFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appFile.c_str(), allocator).Move(), allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleArn, allocator);
    }

    if (m_appDriverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppDriverSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appDriverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_appExecutorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appExecutorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_appExecutorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appExecutorNums, allocator);
    }

    if (m_sparkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sparkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_eniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eni";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eni.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isLocal.c_str(), allocator).Move(), allocator);
    }

    if (m_mainClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainClass.c_str(), allocator).Move(), allocator);
    }

    if (m_appConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appConf.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalJarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalJars";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isLocalJars.c_str(), allocator).Move(), allocator);
    }

    if (m_appJarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppJars";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appJars.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isLocalFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_appFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_isLocalPythonFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalPythonFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isLocalPythonFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_appPythonFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPythonFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPythonFiles.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmdArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRetriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRetries, allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySparkAppRequest::GetAppName() const
{
    return m_appName;
}

void ModifySparkAppRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ModifySparkAppRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

int64_t ModifySparkAppRequest::GetAppType() const
{
    return m_appType;
}

void ModifySparkAppRequest::SetAppType(const int64_t& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool ModifySparkAppRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string ModifySparkAppRequest::GetDataEngine() const
{
    return m_dataEngine;
}

void ModifySparkAppRequest::SetDataEngine(const string& _dataEngine)
{
    m_dataEngine = _dataEngine;
    m_dataEngineHasBeenSet = true;
}

bool ModifySparkAppRequest::DataEngineHasBeenSet() const
{
    return m_dataEngineHasBeenSet;
}

string ModifySparkAppRequest::GetAppFile() const
{
    return m_appFile;
}

void ModifySparkAppRequest::SetAppFile(const string& _appFile)
{
    m_appFile = _appFile;
    m_appFileHasBeenSet = true;
}

bool ModifySparkAppRequest::AppFileHasBeenSet() const
{
    return m_appFileHasBeenSet;
}

int64_t ModifySparkAppRequest::GetRoleArn() const
{
    return m_roleArn;
}

void ModifySparkAppRequest::SetRoleArn(const int64_t& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool ModifySparkAppRequest::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string ModifySparkAppRequest::GetAppDriverSize() const
{
    return m_appDriverSize;
}

void ModifySparkAppRequest::SetAppDriverSize(const string& _appDriverSize)
{
    m_appDriverSize = _appDriverSize;
    m_appDriverSizeHasBeenSet = true;
}

bool ModifySparkAppRequest::AppDriverSizeHasBeenSet() const
{
    return m_appDriverSizeHasBeenSet;
}

string ModifySparkAppRequest::GetAppExecutorSize() const
{
    return m_appExecutorSize;
}

void ModifySparkAppRequest::SetAppExecutorSize(const string& _appExecutorSize)
{
    m_appExecutorSize = _appExecutorSize;
    m_appExecutorSizeHasBeenSet = true;
}

bool ModifySparkAppRequest::AppExecutorSizeHasBeenSet() const
{
    return m_appExecutorSizeHasBeenSet;
}

int64_t ModifySparkAppRequest::GetAppExecutorNums() const
{
    return m_appExecutorNums;
}

void ModifySparkAppRequest::SetAppExecutorNums(const int64_t& _appExecutorNums)
{
    m_appExecutorNums = _appExecutorNums;
    m_appExecutorNumsHasBeenSet = true;
}

bool ModifySparkAppRequest::AppExecutorNumsHasBeenSet() const
{
    return m_appExecutorNumsHasBeenSet;
}

string ModifySparkAppRequest::GetSparkAppId() const
{
    return m_sparkAppId;
}

void ModifySparkAppRequest::SetSparkAppId(const string& _sparkAppId)
{
    m_sparkAppId = _sparkAppId;
    m_sparkAppIdHasBeenSet = true;
}

bool ModifySparkAppRequest::SparkAppIdHasBeenSet() const
{
    return m_sparkAppIdHasBeenSet;
}

string ModifySparkAppRequest::GetEni() const
{
    return m_eni;
}

void ModifySparkAppRequest::SetEni(const string& _eni)
{
    m_eni = _eni;
    m_eniHasBeenSet = true;
}

bool ModifySparkAppRequest::EniHasBeenSet() const
{
    return m_eniHasBeenSet;
}

string ModifySparkAppRequest::GetIsLocal() const
{
    return m_isLocal;
}

void ModifySparkAppRequest::SetIsLocal(const string& _isLocal)
{
    m_isLocal = _isLocal;
    m_isLocalHasBeenSet = true;
}

bool ModifySparkAppRequest::IsLocalHasBeenSet() const
{
    return m_isLocalHasBeenSet;
}

string ModifySparkAppRequest::GetMainClass() const
{
    return m_mainClass;
}

void ModifySparkAppRequest::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool ModifySparkAppRequest::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string ModifySparkAppRequest::GetAppConf() const
{
    return m_appConf;
}

void ModifySparkAppRequest::SetAppConf(const string& _appConf)
{
    m_appConf = _appConf;
    m_appConfHasBeenSet = true;
}

bool ModifySparkAppRequest::AppConfHasBeenSet() const
{
    return m_appConfHasBeenSet;
}

string ModifySparkAppRequest::GetIsLocalJars() const
{
    return m_isLocalJars;
}

void ModifySparkAppRequest::SetIsLocalJars(const string& _isLocalJars)
{
    m_isLocalJars = _isLocalJars;
    m_isLocalJarsHasBeenSet = true;
}

bool ModifySparkAppRequest::IsLocalJarsHasBeenSet() const
{
    return m_isLocalJarsHasBeenSet;
}

string ModifySparkAppRequest::GetAppJars() const
{
    return m_appJars;
}

void ModifySparkAppRequest::SetAppJars(const string& _appJars)
{
    m_appJars = _appJars;
    m_appJarsHasBeenSet = true;
}

bool ModifySparkAppRequest::AppJarsHasBeenSet() const
{
    return m_appJarsHasBeenSet;
}

string ModifySparkAppRequest::GetIsLocalFiles() const
{
    return m_isLocalFiles;
}

void ModifySparkAppRequest::SetIsLocalFiles(const string& _isLocalFiles)
{
    m_isLocalFiles = _isLocalFiles;
    m_isLocalFilesHasBeenSet = true;
}

bool ModifySparkAppRequest::IsLocalFilesHasBeenSet() const
{
    return m_isLocalFilesHasBeenSet;
}

string ModifySparkAppRequest::GetAppFiles() const
{
    return m_appFiles;
}

void ModifySparkAppRequest::SetAppFiles(const string& _appFiles)
{
    m_appFiles = _appFiles;
    m_appFilesHasBeenSet = true;
}

bool ModifySparkAppRequest::AppFilesHasBeenSet() const
{
    return m_appFilesHasBeenSet;
}

string ModifySparkAppRequest::GetIsLocalPythonFiles() const
{
    return m_isLocalPythonFiles;
}

void ModifySparkAppRequest::SetIsLocalPythonFiles(const string& _isLocalPythonFiles)
{
    m_isLocalPythonFiles = _isLocalPythonFiles;
    m_isLocalPythonFilesHasBeenSet = true;
}

bool ModifySparkAppRequest::IsLocalPythonFilesHasBeenSet() const
{
    return m_isLocalPythonFilesHasBeenSet;
}

string ModifySparkAppRequest::GetAppPythonFiles() const
{
    return m_appPythonFiles;
}

void ModifySparkAppRequest::SetAppPythonFiles(const string& _appPythonFiles)
{
    m_appPythonFiles = _appPythonFiles;
    m_appPythonFilesHasBeenSet = true;
}

bool ModifySparkAppRequest::AppPythonFilesHasBeenSet() const
{
    return m_appPythonFilesHasBeenSet;
}

string ModifySparkAppRequest::GetCmdArgs() const
{
    return m_cmdArgs;
}

void ModifySparkAppRequest::SetCmdArgs(const string& _cmdArgs)
{
    m_cmdArgs = _cmdArgs;
    m_cmdArgsHasBeenSet = true;
}

bool ModifySparkAppRequest::CmdArgsHasBeenSet() const
{
    return m_cmdArgsHasBeenSet;
}

int64_t ModifySparkAppRequest::GetMaxRetries() const
{
    return m_maxRetries;
}

void ModifySparkAppRequest::SetMaxRetries(const int64_t& _maxRetries)
{
    m_maxRetries = _maxRetries;
    m_maxRetriesHasBeenSet = true;
}

bool ModifySparkAppRequest::MaxRetriesHasBeenSet() const
{
    return m_maxRetriesHasBeenSet;
}

string ModifySparkAppRequest::GetDataSource() const
{
    return m_dataSource;
}

void ModifySparkAppRequest::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool ModifySparkAppRequest::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}


