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

#include <tencentcloud/dlc/v20210125/model/NotebookSessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

NotebookSessionInfo::NotebookSessionInfo() :
    m_nameHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_programDependentFilesHasBeenSet(false),
    m_programDependentJarsHasBeenSet(false),
    m_programDependentPythonHasBeenSet(false),
    m_programArchivesHasBeenSet(false),
    m_driverSizeHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_executorNumbersHasBeenSet(false),
    m_proxyUserHasBeenSet(false),
    m_timeoutInSecondHasBeenSet(false),
    m_sparkAppIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_appInfoHasBeenSet(false),
    m_sparkUiUrlHasBeenSet(false),
    m_executorMaxNumbersHasBeenSet(false),
    m_sessionTypeHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_podSizeHasBeenSet(false),
    m_podNumbersHasBeenSet(false)
{
}

CoreInternalOutcome NotebookSessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("Arguments") && !value["Arguments"].IsNull())
    {
        if (!value["Arguments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.Arguments` is not array type"));

        const rapidjson::Value &tmpValue = value["Arguments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_arguments.push_back(item);
        }
        m_argumentsHasBeenSet = true;
    }

    if (value.HasMember("ProgramDependentFiles") && !value["ProgramDependentFiles"].IsNull())
    {
        if (!value["ProgramDependentFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ProgramDependentFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramDependentFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_programDependentFiles.push_back((*itr).GetString());
        }
        m_programDependentFilesHasBeenSet = true;
    }

    if (value.HasMember("ProgramDependentJars") && !value["ProgramDependentJars"].IsNull())
    {
        if (!value["ProgramDependentJars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ProgramDependentJars` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramDependentJars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_programDependentJars.push_back((*itr).GetString());
        }
        m_programDependentJarsHasBeenSet = true;
    }

    if (value.HasMember("ProgramDependentPython") && !value["ProgramDependentPython"].IsNull())
    {
        if (!value["ProgramDependentPython"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ProgramDependentPython` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramDependentPython"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_programDependentPython.push_back((*itr).GetString());
        }
        m_programDependentPythonHasBeenSet = true;
    }

    if (value.HasMember("ProgramArchives") && !value["ProgramArchives"].IsNull())
    {
        if (!value["ProgramArchives"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ProgramArchives` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramArchives"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_programArchives.push_back((*itr).GetString());
        }
        m_programArchivesHasBeenSet = true;
    }

    if (value.HasMember("DriverSize") && !value["DriverSize"].IsNull())
    {
        if (!value["DriverSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.DriverSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverSize = string(value["DriverSize"].GetString());
        m_driverSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorSize") && !value["ExecutorSize"].IsNull())
    {
        if (!value["ExecutorSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ExecutorSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorSize = string(value["ExecutorSize"].GetString());
        m_executorSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNumbers") && !value["ExecutorNumbers"].IsNull())
    {
        if (!value["ExecutorNumbers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ExecutorNumbers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executorNumbers = value["ExecutorNumbers"].GetUint64();
        m_executorNumbersHasBeenSet = true;
    }

    if (value.HasMember("ProxyUser") && !value["ProxyUser"].IsNull())
    {
        if (!value["ProxyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ProxyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyUser = string(value["ProxyUser"].GetString());
        m_proxyUserHasBeenSet = true;
    }

    if (value.HasMember("TimeoutInSecond") && !value["TimeoutInSecond"].IsNull())
    {
        if (!value["TimeoutInSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.TimeoutInSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutInSecond = value["TimeoutInSecond"].GetInt64();
        m_timeoutInSecondHasBeenSet = true;
    }

    if (value.HasMember("SparkAppId") && !value["SparkAppId"].IsNull())
    {
        if (!value["SparkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.SparkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkAppId = string(value["SparkAppId"].GetString());
        m_sparkAppIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AppInfo") && !value["AppInfo"].IsNull())
    {
        if (!value["AppInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.AppInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["AppInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appInfo.push_back(item);
        }
        m_appInfoHasBeenSet = true;
    }

    if (value.HasMember("SparkUiUrl") && !value["SparkUiUrl"].IsNull())
    {
        if (!value["SparkUiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.SparkUiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkUiUrl = string(value["SparkUiUrl"].GetString());
        m_sparkUiUrlHasBeenSet = true;
    }

    if (value.HasMember("ExecutorMaxNumbers") && !value["ExecutorMaxNumbers"].IsNull())
    {
        if (!value["ExecutorMaxNumbers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ExecutorMaxNumbers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executorMaxNumbers = value["ExecutorMaxNumbers"].GetUint64();
        m_executorMaxNumbersHasBeenSet = true;
    }

    if (value.HasMember("SessionType") && !value["SessionType"].IsNull())
    {
        if (!value["SessionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.SessionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionType = string(value["SessionType"].GetString());
        m_sessionTypeHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("PodSize") && !value["PodSize"].IsNull())
    {
        if (!value["PodSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.PodSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podSize = value["PodSize"].GetInt64();
        m_podSizeHasBeenSet = true;
    }

    if (value.HasMember("PodNumbers") && !value["PodNumbers"].IsNull())
    {
        if (!value["PodNumbers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionInfo.PodNumbers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podNumbers = value["PodNumbers"].GetInt64();
        m_podNumbersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookSessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_arguments.begin(); itr != m_arguments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_programDependentFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDependentFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programDependentFiles.begin(); itr != m_programDependentFiles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_programDependentJarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDependentJars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programDependentJars.begin(); itr != m_programDependentJars.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_programDependentPythonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDependentPython";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programDependentPython.begin(); itr != m_programDependentPython.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_programArchivesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramArchives";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programArchives.begin(); itr != m_programArchives.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_driverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorNumbers, allocator);
    }

    if (m_proxyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyUser.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutInSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutInSecond, allocator);
    }

    if (m_sparkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appInfo.begin(); itr != m_appInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sparkUiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkUiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkUiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_executorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorMaxNumbers, allocator);
    }

    if (m_sessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_podSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podSize, allocator);
    }

    if (m_podNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podNumbers, allocator);
    }

}


string NotebookSessionInfo::GetName() const
{
    return m_name;
}

void NotebookSessionInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NotebookSessionInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NotebookSessionInfo::GetKind() const
{
    return m_kind;
}

void NotebookSessionInfo::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool NotebookSessionInfo::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string NotebookSessionInfo::GetDataEngineName() const
{
    return m_dataEngineName;
}

void NotebookSessionInfo::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool NotebookSessionInfo::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

vector<KVPair> NotebookSessionInfo::GetArguments() const
{
    return m_arguments;
}

void NotebookSessionInfo::SetArguments(const vector<KVPair>& _arguments)
{
    m_arguments = _arguments;
    m_argumentsHasBeenSet = true;
}

bool NotebookSessionInfo::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}

vector<string> NotebookSessionInfo::GetProgramDependentFiles() const
{
    return m_programDependentFiles;
}

void NotebookSessionInfo::SetProgramDependentFiles(const vector<string>& _programDependentFiles)
{
    m_programDependentFiles = _programDependentFiles;
    m_programDependentFilesHasBeenSet = true;
}

bool NotebookSessionInfo::ProgramDependentFilesHasBeenSet() const
{
    return m_programDependentFilesHasBeenSet;
}

vector<string> NotebookSessionInfo::GetProgramDependentJars() const
{
    return m_programDependentJars;
}

void NotebookSessionInfo::SetProgramDependentJars(const vector<string>& _programDependentJars)
{
    m_programDependentJars = _programDependentJars;
    m_programDependentJarsHasBeenSet = true;
}

bool NotebookSessionInfo::ProgramDependentJarsHasBeenSet() const
{
    return m_programDependentJarsHasBeenSet;
}

vector<string> NotebookSessionInfo::GetProgramDependentPython() const
{
    return m_programDependentPython;
}

void NotebookSessionInfo::SetProgramDependentPython(const vector<string>& _programDependentPython)
{
    m_programDependentPython = _programDependentPython;
    m_programDependentPythonHasBeenSet = true;
}

bool NotebookSessionInfo::ProgramDependentPythonHasBeenSet() const
{
    return m_programDependentPythonHasBeenSet;
}

vector<string> NotebookSessionInfo::GetProgramArchives() const
{
    return m_programArchives;
}

void NotebookSessionInfo::SetProgramArchives(const vector<string>& _programArchives)
{
    m_programArchives = _programArchives;
    m_programArchivesHasBeenSet = true;
}

bool NotebookSessionInfo::ProgramArchivesHasBeenSet() const
{
    return m_programArchivesHasBeenSet;
}

string NotebookSessionInfo::GetDriverSize() const
{
    return m_driverSize;
}

void NotebookSessionInfo::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool NotebookSessionInfo::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string NotebookSessionInfo::GetExecutorSize() const
{
    return m_executorSize;
}

void NotebookSessionInfo::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool NotebookSessionInfo::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

uint64_t NotebookSessionInfo::GetExecutorNumbers() const
{
    return m_executorNumbers;
}

void NotebookSessionInfo::SetExecutorNumbers(const uint64_t& _executorNumbers)
{
    m_executorNumbers = _executorNumbers;
    m_executorNumbersHasBeenSet = true;
}

bool NotebookSessionInfo::ExecutorNumbersHasBeenSet() const
{
    return m_executorNumbersHasBeenSet;
}

string NotebookSessionInfo::GetProxyUser() const
{
    return m_proxyUser;
}

void NotebookSessionInfo::SetProxyUser(const string& _proxyUser)
{
    m_proxyUser = _proxyUser;
    m_proxyUserHasBeenSet = true;
}

bool NotebookSessionInfo::ProxyUserHasBeenSet() const
{
    return m_proxyUserHasBeenSet;
}

int64_t NotebookSessionInfo::GetTimeoutInSecond() const
{
    return m_timeoutInSecond;
}

void NotebookSessionInfo::SetTimeoutInSecond(const int64_t& _timeoutInSecond)
{
    m_timeoutInSecond = _timeoutInSecond;
    m_timeoutInSecondHasBeenSet = true;
}

bool NotebookSessionInfo::TimeoutInSecondHasBeenSet() const
{
    return m_timeoutInSecondHasBeenSet;
}

string NotebookSessionInfo::GetSparkAppId() const
{
    return m_sparkAppId;
}

void NotebookSessionInfo::SetSparkAppId(const string& _sparkAppId)
{
    m_sparkAppId = _sparkAppId;
    m_sparkAppIdHasBeenSet = true;
}

bool NotebookSessionInfo::SparkAppIdHasBeenSet() const
{
    return m_sparkAppIdHasBeenSet;
}

string NotebookSessionInfo::GetSessionId() const
{
    return m_sessionId;
}

void NotebookSessionInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool NotebookSessionInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string NotebookSessionInfo::GetState() const
{
    return m_state;
}

void NotebookSessionInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NotebookSessionInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string NotebookSessionInfo::GetCreateTime() const
{
    return m_createTime;
}

void NotebookSessionInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NotebookSessionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<KVPair> NotebookSessionInfo::GetAppInfo() const
{
    return m_appInfo;
}

void NotebookSessionInfo::SetAppInfo(const vector<KVPair>& _appInfo)
{
    m_appInfo = _appInfo;
    m_appInfoHasBeenSet = true;
}

bool NotebookSessionInfo::AppInfoHasBeenSet() const
{
    return m_appInfoHasBeenSet;
}

string NotebookSessionInfo::GetSparkUiUrl() const
{
    return m_sparkUiUrl;
}

void NotebookSessionInfo::SetSparkUiUrl(const string& _sparkUiUrl)
{
    m_sparkUiUrl = _sparkUiUrl;
    m_sparkUiUrlHasBeenSet = true;
}

bool NotebookSessionInfo::SparkUiUrlHasBeenSet() const
{
    return m_sparkUiUrlHasBeenSet;
}

uint64_t NotebookSessionInfo::GetExecutorMaxNumbers() const
{
    return m_executorMaxNumbers;
}

void NotebookSessionInfo::SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers)
{
    m_executorMaxNumbers = _executorMaxNumbers;
    m_executorMaxNumbersHasBeenSet = true;
}

bool NotebookSessionInfo::ExecutorMaxNumbersHasBeenSet() const
{
    return m_executorMaxNumbersHasBeenSet;
}

string NotebookSessionInfo::GetSessionType() const
{
    return m_sessionType;
}

void NotebookSessionInfo::SetSessionType(const string& _sessionType)
{
    m_sessionType = _sessionType;
    m_sessionTypeHasBeenSet = true;
}

bool NotebookSessionInfo::SessionTypeHasBeenSet() const
{
    return m_sessionTypeHasBeenSet;
}

string NotebookSessionInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void NotebookSessionInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool NotebookSessionInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string NotebookSessionInfo::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void NotebookSessionInfo::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool NotebookSessionInfo::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string NotebookSessionInfo::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void NotebookSessionInfo::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool NotebookSessionInfo::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

int64_t NotebookSessionInfo::GetPodSize() const
{
    return m_podSize;
}

void NotebookSessionInfo::SetPodSize(const int64_t& _podSize)
{
    m_podSize = _podSize;
    m_podSizeHasBeenSet = true;
}

bool NotebookSessionInfo::PodSizeHasBeenSet() const
{
    return m_podSizeHasBeenSet;
}

int64_t NotebookSessionInfo::GetPodNumbers() const
{
    return m_podNumbers;
}

void NotebookSessionInfo::SetPodNumbers(const int64_t& _podNumbers)
{
    m_podNumbers = _podNumbers;
    m_podNumbersHasBeenSet = true;
}

bool NotebookSessionInfo::PodNumbersHasBeenSet() const
{
    return m_podNumbersHasBeenSet;
}

