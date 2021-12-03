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

#include <tencentcloud/tat/v20201028/model/Invocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

Invocation::Invocation() :
    m_invocationIdHasBeenSet(false),
    m_commandIdHasBeenSet(false),
    m_invocationStatusHasBeenSet(false),
    m_invocationTaskBasicInfoSetHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_defaultParametersHasBeenSet(false),
    m_instanceKindHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_invocationSourceHasBeenSet(false),
    m_commandContentHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_outputCOSBucketUrlHasBeenSet(false),
    m_outputCOSKeyPrefixHasBeenSet(false)
{
}

CoreInternalOutcome Invocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvocationId") && !value["InvocationId"].IsNull())
    {
        if (!value["InvocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.InvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationId = string(value["InvocationId"].GetString());
        m_invocationIdHasBeenSet = true;
    }

    if (value.HasMember("CommandId") && !value["CommandId"].IsNull())
    {
        if (!value["CommandId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.CommandId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandId = string(value["CommandId"].GetString());
        m_commandIdHasBeenSet = true;
    }

    if (value.HasMember("InvocationStatus") && !value["InvocationStatus"].IsNull())
    {
        if (!value["InvocationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.InvocationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationStatus = string(value["InvocationStatus"].GetString());
        m_invocationStatusHasBeenSet = true;
    }

    if (value.HasMember("InvocationTaskBasicInfoSet") && !value["InvocationTaskBasicInfoSet"].IsNull())
    {
        if (!value["InvocationTaskBasicInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Invocation.InvocationTaskBasicInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InvocationTaskBasicInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InvocationTaskBasicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocationTaskBasicInfoSet.push_back(item);
        }
        m_invocationTaskBasicInfoSetHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("DefaultParameters") && !value["DefaultParameters"].IsNull())
    {
        if (!value["DefaultParameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.DefaultParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultParameters = string(value["DefaultParameters"].GetString());
        m_defaultParametersHasBeenSet = true;
    }

    if (value.HasMember("InstanceKind") && !value["InstanceKind"].IsNull())
    {
        if (!value["InstanceKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.InstanceKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKind = string(value["InstanceKind"].GetString());
        m_instanceKindHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("InvocationSource") && !value["InvocationSource"].IsNull())
    {
        if (!value["InvocationSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.InvocationSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationSource = string(value["InvocationSource"].GetString());
        m_invocationSourceHasBeenSet = true;
    }

    if (value.HasMember("CommandContent") && !value["CommandContent"].IsNull())
    {
        if (!value["CommandContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.CommandContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandContent = string(value["CommandContent"].GetString());
        m_commandContentHasBeenSet = true;
    }

    if (value.HasMember("CommandType") && !value["CommandType"].IsNull())
    {
        if (!value["CommandType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.CommandType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandType = string(value["CommandType"].GetString());
        m_commandTypeHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("WorkingDirectory") && !value["WorkingDirectory"].IsNull())
    {
        if (!value["WorkingDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.WorkingDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingDirectory = string(value["WorkingDirectory"].GetString());
        m_workingDirectoryHasBeenSet = true;
    }

    if (value.HasMember("OutputCOSBucketUrl") && !value["OutputCOSBucketUrl"].IsNull())
    {
        if (!value["OutputCOSBucketUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.OutputCOSBucketUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputCOSBucketUrl = string(value["OutputCOSBucketUrl"].GetString());
        m_outputCOSBucketUrlHasBeenSet = true;
    }

    if (value.HasMember("OutputCOSKeyPrefix") && !value["OutputCOSKeyPrefix"].IsNull())
    {
        if (!value["OutputCOSKeyPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Invocation.OutputCOSKeyPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputCOSKeyPrefix = string(value["OutputCOSKeyPrefix"].GetString());
        m_outputCOSKeyPrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Invocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationTaskBasicInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationTaskBasicInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationTaskBasicInfoSet.begin(); itr != m_invocationTaskBasicInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKind.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationSource.c_str(), allocator).Move(), allocator);
    }

    if (m_commandContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandContent.c_str(), allocator).Move(), allocator);
    }

    if (m_commandTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_workingDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkingDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workingDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_outputCOSBucketUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCOSBucketUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputCOSBucketUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_outputCOSKeyPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCOSKeyPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputCOSKeyPrefix.c_str(), allocator).Move(), allocator);
    }

}


string Invocation::GetInvocationId() const
{
    return m_invocationId;
}

void Invocation::SetInvocationId(const string& _invocationId)
{
    m_invocationId = _invocationId;
    m_invocationIdHasBeenSet = true;
}

bool Invocation::InvocationIdHasBeenSet() const
{
    return m_invocationIdHasBeenSet;
}

string Invocation::GetCommandId() const
{
    return m_commandId;
}

void Invocation::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool Invocation::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string Invocation::GetInvocationStatus() const
{
    return m_invocationStatus;
}

void Invocation::SetInvocationStatus(const string& _invocationStatus)
{
    m_invocationStatus = _invocationStatus;
    m_invocationStatusHasBeenSet = true;
}

bool Invocation::InvocationStatusHasBeenSet() const
{
    return m_invocationStatusHasBeenSet;
}

vector<InvocationTaskBasicInfo> Invocation::GetInvocationTaskBasicInfoSet() const
{
    return m_invocationTaskBasicInfoSet;
}

void Invocation::SetInvocationTaskBasicInfoSet(const vector<InvocationTaskBasicInfo>& _invocationTaskBasicInfoSet)
{
    m_invocationTaskBasicInfoSet = _invocationTaskBasicInfoSet;
    m_invocationTaskBasicInfoSetHasBeenSet = true;
}

bool Invocation::InvocationTaskBasicInfoSetHasBeenSet() const
{
    return m_invocationTaskBasicInfoSetHasBeenSet;
}

string Invocation::GetDescription() const
{
    return m_description;
}

void Invocation::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Invocation::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Invocation::GetStartTime() const
{
    return m_startTime;
}

void Invocation::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Invocation::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Invocation::GetEndTime() const
{
    return m_endTime;
}

void Invocation::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Invocation::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Invocation::GetCreatedTime() const
{
    return m_createdTime;
}

void Invocation::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Invocation::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Invocation::GetUpdatedTime() const
{
    return m_updatedTime;
}

void Invocation::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool Invocation::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string Invocation::GetParameters() const
{
    return m_parameters;
}

void Invocation::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool Invocation::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string Invocation::GetDefaultParameters() const
{
    return m_defaultParameters;
}

void Invocation::SetDefaultParameters(const string& _defaultParameters)
{
    m_defaultParameters = _defaultParameters;
    m_defaultParametersHasBeenSet = true;
}

bool Invocation::DefaultParametersHasBeenSet() const
{
    return m_defaultParametersHasBeenSet;
}

string Invocation::GetInstanceKind() const
{
    return m_instanceKind;
}

void Invocation::SetInstanceKind(const string& _instanceKind)
{
    m_instanceKind = _instanceKind;
    m_instanceKindHasBeenSet = true;
}

bool Invocation::InstanceKindHasBeenSet() const
{
    return m_instanceKindHasBeenSet;
}

string Invocation::GetUsername() const
{
    return m_username;
}

void Invocation::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool Invocation::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string Invocation::GetInvocationSource() const
{
    return m_invocationSource;
}

void Invocation::SetInvocationSource(const string& _invocationSource)
{
    m_invocationSource = _invocationSource;
    m_invocationSourceHasBeenSet = true;
}

bool Invocation::InvocationSourceHasBeenSet() const
{
    return m_invocationSourceHasBeenSet;
}

string Invocation::GetCommandContent() const
{
    return m_commandContent;
}

void Invocation::SetCommandContent(const string& _commandContent)
{
    m_commandContent = _commandContent;
    m_commandContentHasBeenSet = true;
}

bool Invocation::CommandContentHasBeenSet() const
{
    return m_commandContentHasBeenSet;
}

string Invocation::GetCommandType() const
{
    return m_commandType;
}

void Invocation::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool Invocation::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

uint64_t Invocation::GetTimeout() const
{
    return m_timeout;
}

void Invocation::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool Invocation::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string Invocation::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void Invocation::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool Invocation::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

string Invocation::GetOutputCOSBucketUrl() const
{
    return m_outputCOSBucketUrl;
}

void Invocation::SetOutputCOSBucketUrl(const string& _outputCOSBucketUrl)
{
    m_outputCOSBucketUrl = _outputCOSBucketUrl;
    m_outputCOSBucketUrlHasBeenSet = true;
}

bool Invocation::OutputCOSBucketUrlHasBeenSet() const
{
    return m_outputCOSBucketUrlHasBeenSet;
}

string Invocation::GetOutputCOSKeyPrefix() const
{
    return m_outputCOSKeyPrefix;
}

void Invocation::SetOutputCOSKeyPrefix(const string& _outputCOSKeyPrefix)
{
    m_outputCOSKeyPrefix = _outputCOSKeyPrefix;
    m_outputCOSKeyPrefixHasBeenSet = true;
}

bool Invocation::OutputCOSKeyPrefixHasBeenSet() const
{
    return m_outputCOSKeyPrefixHasBeenSet;
}

