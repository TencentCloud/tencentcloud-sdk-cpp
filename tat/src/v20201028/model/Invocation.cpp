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
using namespace rapidjson;
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
    m_defaultParametersHasBeenSet(false)
{
}

CoreInternalOutcome Invocation::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InvocationId") && !value["InvocationId"].IsNull())
    {
        if (!value["InvocationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.InvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationId = string(value["InvocationId"].GetString());
        m_invocationIdHasBeenSet = true;
    }

    if (value.HasMember("CommandId") && !value["CommandId"].IsNull())
    {
        if (!value["CommandId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.CommandId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandId = string(value["CommandId"].GetString());
        m_commandIdHasBeenSet = true;
    }

    if (value.HasMember("InvocationStatus") && !value["InvocationStatus"].IsNull())
    {
        if (!value["InvocationStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.InvocationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationStatus = string(value["InvocationStatus"].GetString());
        m_invocationStatusHasBeenSet = true;
    }

    if (value.HasMember("InvocationTaskBasicInfoSet") && !value["InvocationTaskBasicInfoSet"].IsNull())
    {
        if (!value["InvocationTaskBasicInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `Invocation.InvocationTaskBasicInfoSet` is not array type"));

        const Value &tmpValue = value["InvocationTaskBasicInfoSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `Invocation.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("DefaultParameters") && !value["DefaultParameters"].IsNull())
    {
        if (!value["DefaultParameters"].IsString())
        {
            return CoreInternalOutcome(Error("response `Invocation.DefaultParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultParameters = string(value["DefaultParameters"].GetString());
        m_defaultParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Invocation::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_invocationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_invocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvocationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_invocationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationTaskBasicInfoSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvocationTaskBasicInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationTaskBasicInfoSet.begin(); itr != m_invocationTaskBasicInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_defaultParameters.c_str(), allocator).Move(), allocator);
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

