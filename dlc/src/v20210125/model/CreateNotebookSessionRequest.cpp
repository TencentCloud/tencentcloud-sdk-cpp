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

#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateNotebookSessionRequest::CreateNotebookSessionRequest() :
    m_nameHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_programDependentFilesHasBeenSet(false),
    m_programDependentJarsHasBeenSet(false),
    m_programDependentPythonHasBeenSet(false),
    m_programArchivesHasBeenSet(false),
    m_driverSizeHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_executorNumbersHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_proxyUserHasBeenSet(false),
    m_timeoutInSecondHasBeenSet(false),
    m_executorMaxNumbersHasBeenSet(false),
    m_sparkImageHasBeenSet(false),
    m_isInheritHasBeenSet(false)
{
}

string CreateNotebookSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_programDependentFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDependentFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programDependentFiles.begin(); itr != m_programDependentFiles.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_programDependentJarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDependentJars";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programDependentJars.begin(); itr != m_programDependentJars.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_programDependentPythonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDependentPython";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programDependentPython.begin(); itr != m_programDependentPython.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_programArchivesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramArchives";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programArchives.begin(); itr != m_programArchives.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_arguments.begin(); itr != m_arguments.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_proxyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyUser.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutInSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutInSecond, allocator);
    }

    if (m_executorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executorMaxNumbers, allocator);
    }

    if (m_sparkImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sparkImage.c_str(), allocator).Move(), allocator);
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInherit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNotebookSessionRequest::GetName() const
{
    return m_name;
}

void CreateNotebookSessionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateNotebookSessionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateNotebookSessionRequest::GetKind() const
{
    return m_kind;
}

void CreateNotebookSessionRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool CreateNotebookSessionRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string CreateNotebookSessionRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CreateNotebookSessionRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CreateNotebookSessionRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

vector<string> CreateNotebookSessionRequest::GetProgramDependentFiles() const
{
    return m_programDependentFiles;
}

void CreateNotebookSessionRequest::SetProgramDependentFiles(const vector<string>& _programDependentFiles)
{
    m_programDependentFiles = _programDependentFiles;
    m_programDependentFilesHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ProgramDependentFilesHasBeenSet() const
{
    return m_programDependentFilesHasBeenSet;
}

vector<string> CreateNotebookSessionRequest::GetProgramDependentJars() const
{
    return m_programDependentJars;
}

void CreateNotebookSessionRequest::SetProgramDependentJars(const vector<string>& _programDependentJars)
{
    m_programDependentJars = _programDependentJars;
    m_programDependentJarsHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ProgramDependentJarsHasBeenSet() const
{
    return m_programDependentJarsHasBeenSet;
}

vector<string> CreateNotebookSessionRequest::GetProgramDependentPython() const
{
    return m_programDependentPython;
}

void CreateNotebookSessionRequest::SetProgramDependentPython(const vector<string>& _programDependentPython)
{
    m_programDependentPython = _programDependentPython;
    m_programDependentPythonHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ProgramDependentPythonHasBeenSet() const
{
    return m_programDependentPythonHasBeenSet;
}

vector<string> CreateNotebookSessionRequest::GetProgramArchives() const
{
    return m_programArchives;
}

void CreateNotebookSessionRequest::SetProgramArchives(const vector<string>& _programArchives)
{
    m_programArchives = _programArchives;
    m_programArchivesHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ProgramArchivesHasBeenSet() const
{
    return m_programArchivesHasBeenSet;
}

string CreateNotebookSessionRequest::GetDriverSize() const
{
    return m_driverSize;
}

void CreateNotebookSessionRequest::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool CreateNotebookSessionRequest::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string CreateNotebookSessionRequest::GetExecutorSize() const
{
    return m_executorSize;
}

void CreateNotebookSessionRequest::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

uint64_t CreateNotebookSessionRequest::GetExecutorNumbers() const
{
    return m_executorNumbers;
}

void CreateNotebookSessionRequest::SetExecutorNumbers(const uint64_t& _executorNumbers)
{
    m_executorNumbers = _executorNumbers;
    m_executorNumbersHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ExecutorNumbersHasBeenSet() const
{
    return m_executorNumbersHasBeenSet;
}

vector<KVPair> CreateNotebookSessionRequest::GetArguments() const
{
    return m_arguments;
}

void CreateNotebookSessionRequest::SetArguments(const vector<KVPair>& _arguments)
{
    m_arguments = _arguments;
    m_argumentsHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}

string CreateNotebookSessionRequest::GetProxyUser() const
{
    return m_proxyUser;
}

void CreateNotebookSessionRequest::SetProxyUser(const string& _proxyUser)
{
    m_proxyUser = _proxyUser;
    m_proxyUserHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ProxyUserHasBeenSet() const
{
    return m_proxyUserHasBeenSet;
}

int64_t CreateNotebookSessionRequest::GetTimeoutInSecond() const
{
    return m_timeoutInSecond;
}

void CreateNotebookSessionRequest::SetTimeoutInSecond(const int64_t& _timeoutInSecond)
{
    m_timeoutInSecond = _timeoutInSecond;
    m_timeoutInSecondHasBeenSet = true;
}

bool CreateNotebookSessionRequest::TimeoutInSecondHasBeenSet() const
{
    return m_timeoutInSecondHasBeenSet;
}

uint64_t CreateNotebookSessionRequest::GetExecutorMaxNumbers() const
{
    return m_executorMaxNumbers;
}

void CreateNotebookSessionRequest::SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers)
{
    m_executorMaxNumbers = _executorMaxNumbers;
    m_executorMaxNumbersHasBeenSet = true;
}

bool CreateNotebookSessionRequest::ExecutorMaxNumbersHasBeenSet() const
{
    return m_executorMaxNumbersHasBeenSet;
}

string CreateNotebookSessionRequest::GetSparkImage() const
{
    return m_sparkImage;
}

void CreateNotebookSessionRequest::SetSparkImage(const string& _sparkImage)
{
    m_sparkImage = _sparkImage;
    m_sparkImageHasBeenSet = true;
}

bool CreateNotebookSessionRequest::SparkImageHasBeenSet() const
{
    return m_sparkImageHasBeenSet;
}

int64_t CreateNotebookSessionRequest::GetIsInherit() const
{
    return m_isInherit;
}

void CreateNotebookSessionRequest::SetIsInherit(const int64_t& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool CreateNotebookSessionRequest::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}


