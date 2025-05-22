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

#include <tencentcloud/dlc/v20210125/model/CreateSparkAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateSparkAppRequest::CreateSparkAppRequest() :
    m_appNameHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_dataEngineHasBeenSet(false),
    m_appFileHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_appDriverSizeHasBeenSet(false),
    m_appExecutorSizeHasBeenSet(false),
    m_appExecutorNumsHasBeenSet(false),
    m_eniHasBeenSet(false),
    m_isLocalHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_appConfHasBeenSet(false),
    m_isLocalJarsHasBeenSet(false),
    m_appJarsHasBeenSet(false),
    m_isLocalFilesHasBeenSet(false),
    m_appFilesHasBeenSet(false),
    m_cmdArgsHasBeenSet(false),
    m_maxRetriesHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_isLocalPythonFilesHasBeenSet(false),
    m_appPythonFilesHasBeenSet(false),
    m_isLocalArchivesHasBeenSet(false),
    m_appArchivesHasBeenSet(false),
    m_sparkImageHasBeenSet(false),
    m_sparkImageVersionHasBeenSet(false),
    m_appExecutorMaxNumbersHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_isInheritHasBeenSet(false),
    m_isSessionStartedHasBeenSet(false),
    m_dependencyPackagesHasBeenSet(false)
{
}

string CreateSparkAppRequest::ToJsonString() const
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

    if (m_isLocalArchivesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalArchives";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isLocalArchives.c_str(), allocator).Move(), allocator);
    }

    if (m_appArchivesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppArchives";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appArchives.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sparkImage.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkImageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sparkImageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appExecutorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appExecutorMaxNumbers, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInherit, allocator);
    }

    if (m_isSessionStartedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSessionStarted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSessionStarted, allocator);
    }

    if (m_dependencyPackagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyPackages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependencyPackages.begin(); itr != m_dependencyPackages.end(); ++itr, ++i)
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


string CreateSparkAppRequest::GetAppName() const
{
    return m_appName;
}

void CreateSparkAppRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateSparkAppRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

int64_t CreateSparkAppRequest::GetAppType() const
{
    return m_appType;
}

void CreateSparkAppRequest::SetAppType(const int64_t& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool CreateSparkAppRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string CreateSparkAppRequest::GetDataEngine() const
{
    return m_dataEngine;
}

void CreateSparkAppRequest::SetDataEngine(const string& _dataEngine)
{
    m_dataEngine = _dataEngine;
    m_dataEngineHasBeenSet = true;
}

bool CreateSparkAppRequest::DataEngineHasBeenSet() const
{
    return m_dataEngineHasBeenSet;
}

string CreateSparkAppRequest::GetAppFile() const
{
    return m_appFile;
}

void CreateSparkAppRequest::SetAppFile(const string& _appFile)
{
    m_appFile = _appFile;
    m_appFileHasBeenSet = true;
}

bool CreateSparkAppRequest::AppFileHasBeenSet() const
{
    return m_appFileHasBeenSet;
}

int64_t CreateSparkAppRequest::GetRoleArn() const
{
    return m_roleArn;
}

void CreateSparkAppRequest::SetRoleArn(const int64_t& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool CreateSparkAppRequest::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string CreateSparkAppRequest::GetAppDriverSize() const
{
    return m_appDriverSize;
}

void CreateSparkAppRequest::SetAppDriverSize(const string& _appDriverSize)
{
    m_appDriverSize = _appDriverSize;
    m_appDriverSizeHasBeenSet = true;
}

bool CreateSparkAppRequest::AppDriverSizeHasBeenSet() const
{
    return m_appDriverSizeHasBeenSet;
}

string CreateSparkAppRequest::GetAppExecutorSize() const
{
    return m_appExecutorSize;
}

void CreateSparkAppRequest::SetAppExecutorSize(const string& _appExecutorSize)
{
    m_appExecutorSize = _appExecutorSize;
    m_appExecutorSizeHasBeenSet = true;
}

bool CreateSparkAppRequest::AppExecutorSizeHasBeenSet() const
{
    return m_appExecutorSizeHasBeenSet;
}

int64_t CreateSparkAppRequest::GetAppExecutorNums() const
{
    return m_appExecutorNums;
}

void CreateSparkAppRequest::SetAppExecutorNums(const int64_t& _appExecutorNums)
{
    m_appExecutorNums = _appExecutorNums;
    m_appExecutorNumsHasBeenSet = true;
}

bool CreateSparkAppRequest::AppExecutorNumsHasBeenSet() const
{
    return m_appExecutorNumsHasBeenSet;
}

string CreateSparkAppRequest::GetEni() const
{
    return m_eni;
}

void CreateSparkAppRequest::SetEni(const string& _eni)
{
    m_eni = _eni;
    m_eniHasBeenSet = true;
}

bool CreateSparkAppRequest::EniHasBeenSet() const
{
    return m_eniHasBeenSet;
}

string CreateSparkAppRequest::GetIsLocal() const
{
    return m_isLocal;
}

void CreateSparkAppRequest::SetIsLocal(const string& _isLocal)
{
    m_isLocal = _isLocal;
    m_isLocalHasBeenSet = true;
}

bool CreateSparkAppRequest::IsLocalHasBeenSet() const
{
    return m_isLocalHasBeenSet;
}

string CreateSparkAppRequest::GetMainClass() const
{
    return m_mainClass;
}

void CreateSparkAppRequest::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool CreateSparkAppRequest::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string CreateSparkAppRequest::GetAppConf() const
{
    return m_appConf;
}

void CreateSparkAppRequest::SetAppConf(const string& _appConf)
{
    m_appConf = _appConf;
    m_appConfHasBeenSet = true;
}

bool CreateSparkAppRequest::AppConfHasBeenSet() const
{
    return m_appConfHasBeenSet;
}

string CreateSparkAppRequest::GetIsLocalJars() const
{
    return m_isLocalJars;
}

void CreateSparkAppRequest::SetIsLocalJars(const string& _isLocalJars)
{
    m_isLocalJars = _isLocalJars;
    m_isLocalJarsHasBeenSet = true;
}

bool CreateSparkAppRequest::IsLocalJarsHasBeenSet() const
{
    return m_isLocalJarsHasBeenSet;
}

string CreateSparkAppRequest::GetAppJars() const
{
    return m_appJars;
}

void CreateSparkAppRequest::SetAppJars(const string& _appJars)
{
    m_appJars = _appJars;
    m_appJarsHasBeenSet = true;
}

bool CreateSparkAppRequest::AppJarsHasBeenSet() const
{
    return m_appJarsHasBeenSet;
}

string CreateSparkAppRequest::GetIsLocalFiles() const
{
    return m_isLocalFiles;
}

void CreateSparkAppRequest::SetIsLocalFiles(const string& _isLocalFiles)
{
    m_isLocalFiles = _isLocalFiles;
    m_isLocalFilesHasBeenSet = true;
}

bool CreateSparkAppRequest::IsLocalFilesHasBeenSet() const
{
    return m_isLocalFilesHasBeenSet;
}

string CreateSparkAppRequest::GetAppFiles() const
{
    return m_appFiles;
}

void CreateSparkAppRequest::SetAppFiles(const string& _appFiles)
{
    m_appFiles = _appFiles;
    m_appFilesHasBeenSet = true;
}

bool CreateSparkAppRequest::AppFilesHasBeenSet() const
{
    return m_appFilesHasBeenSet;
}

string CreateSparkAppRequest::GetCmdArgs() const
{
    return m_cmdArgs;
}

void CreateSparkAppRequest::SetCmdArgs(const string& _cmdArgs)
{
    m_cmdArgs = _cmdArgs;
    m_cmdArgsHasBeenSet = true;
}

bool CreateSparkAppRequest::CmdArgsHasBeenSet() const
{
    return m_cmdArgsHasBeenSet;
}

int64_t CreateSparkAppRequest::GetMaxRetries() const
{
    return m_maxRetries;
}

void CreateSparkAppRequest::SetMaxRetries(const int64_t& _maxRetries)
{
    m_maxRetries = _maxRetries;
    m_maxRetriesHasBeenSet = true;
}

bool CreateSparkAppRequest::MaxRetriesHasBeenSet() const
{
    return m_maxRetriesHasBeenSet;
}

string CreateSparkAppRequest::GetDataSource() const
{
    return m_dataSource;
}

void CreateSparkAppRequest::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool CreateSparkAppRequest::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string CreateSparkAppRequest::GetIsLocalPythonFiles() const
{
    return m_isLocalPythonFiles;
}

void CreateSparkAppRequest::SetIsLocalPythonFiles(const string& _isLocalPythonFiles)
{
    m_isLocalPythonFiles = _isLocalPythonFiles;
    m_isLocalPythonFilesHasBeenSet = true;
}

bool CreateSparkAppRequest::IsLocalPythonFilesHasBeenSet() const
{
    return m_isLocalPythonFilesHasBeenSet;
}

string CreateSparkAppRequest::GetAppPythonFiles() const
{
    return m_appPythonFiles;
}

void CreateSparkAppRequest::SetAppPythonFiles(const string& _appPythonFiles)
{
    m_appPythonFiles = _appPythonFiles;
    m_appPythonFilesHasBeenSet = true;
}

bool CreateSparkAppRequest::AppPythonFilesHasBeenSet() const
{
    return m_appPythonFilesHasBeenSet;
}

string CreateSparkAppRequest::GetIsLocalArchives() const
{
    return m_isLocalArchives;
}

void CreateSparkAppRequest::SetIsLocalArchives(const string& _isLocalArchives)
{
    m_isLocalArchives = _isLocalArchives;
    m_isLocalArchivesHasBeenSet = true;
}

bool CreateSparkAppRequest::IsLocalArchivesHasBeenSet() const
{
    return m_isLocalArchivesHasBeenSet;
}

string CreateSparkAppRequest::GetAppArchives() const
{
    return m_appArchives;
}

void CreateSparkAppRequest::SetAppArchives(const string& _appArchives)
{
    m_appArchives = _appArchives;
    m_appArchivesHasBeenSet = true;
}

bool CreateSparkAppRequest::AppArchivesHasBeenSet() const
{
    return m_appArchivesHasBeenSet;
}

string CreateSparkAppRequest::GetSparkImage() const
{
    return m_sparkImage;
}

void CreateSparkAppRequest::SetSparkImage(const string& _sparkImage)
{
    m_sparkImage = _sparkImage;
    m_sparkImageHasBeenSet = true;
}

bool CreateSparkAppRequest::SparkImageHasBeenSet() const
{
    return m_sparkImageHasBeenSet;
}

string CreateSparkAppRequest::GetSparkImageVersion() const
{
    return m_sparkImageVersion;
}

void CreateSparkAppRequest::SetSparkImageVersion(const string& _sparkImageVersion)
{
    m_sparkImageVersion = _sparkImageVersion;
    m_sparkImageVersionHasBeenSet = true;
}

bool CreateSparkAppRequest::SparkImageVersionHasBeenSet() const
{
    return m_sparkImageVersionHasBeenSet;
}

int64_t CreateSparkAppRequest::GetAppExecutorMaxNumbers() const
{
    return m_appExecutorMaxNumbers;
}

void CreateSparkAppRequest::SetAppExecutorMaxNumbers(const int64_t& _appExecutorMaxNumbers)
{
    m_appExecutorMaxNumbers = _appExecutorMaxNumbers;
    m_appExecutorMaxNumbersHasBeenSet = true;
}

bool CreateSparkAppRequest::AppExecutorMaxNumbersHasBeenSet() const
{
    return m_appExecutorMaxNumbersHasBeenSet;
}

string CreateSparkAppRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateSparkAppRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateSparkAppRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

uint64_t CreateSparkAppRequest::GetIsInherit() const
{
    return m_isInherit;
}

void CreateSparkAppRequest::SetIsInherit(const uint64_t& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool CreateSparkAppRequest::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}

bool CreateSparkAppRequest::GetIsSessionStarted() const
{
    return m_isSessionStarted;
}

void CreateSparkAppRequest::SetIsSessionStarted(const bool& _isSessionStarted)
{
    m_isSessionStarted = _isSessionStarted;
    m_isSessionStartedHasBeenSet = true;
}

bool CreateSparkAppRequest::IsSessionStartedHasBeenSet() const
{
    return m_isSessionStartedHasBeenSet;
}

vector<DependencyPackage> CreateSparkAppRequest::GetDependencyPackages() const
{
    return m_dependencyPackages;
}

void CreateSparkAppRequest::SetDependencyPackages(const vector<DependencyPackage>& _dependencyPackages)
{
    m_dependencyPackages = _dependencyPackages;
    m_dependencyPackagesHasBeenSet = true;
}

bool CreateSparkAppRequest::DependencyPackagesHasBeenSet() const
{
    return m_dependencyPackagesHasBeenSet;
}


