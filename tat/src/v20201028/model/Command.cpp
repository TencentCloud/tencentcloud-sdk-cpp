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

#include <tencentcloud/tat/v20201028/model/Command.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace rapidjson;
using namespace std;

Command::Command() :
    m_commandIdHasBeenSet(false),
    m_commandNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_enableParameterHasBeenSet(false),
    m_defaultParametersHasBeenSet(false),
    m_formattedDescriptionHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Command::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CommandId") && !value["CommandId"].IsNull())
    {
        if (!value["CommandId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.CommandId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandId = string(value["CommandId"].GetString());
        m_commandIdHasBeenSet = true;
    }

    if (value.HasMember("CommandName") && !value["CommandName"].IsNull())
    {
        if (!value["CommandName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.CommandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandName = string(value["CommandName"].GetString());
        m_commandNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CommandType") && !value["CommandType"].IsNull())
    {
        if (!value["CommandType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.CommandType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandType = string(value["CommandType"].GetString());
        m_commandTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkingDirectory") && !value["WorkingDirectory"].IsNull())
    {
        if (!value["WorkingDirectory"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.WorkingDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingDirectory = string(value["WorkingDirectory"].GetString());
        m_workingDirectoryHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Command.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableParameter") && !value["EnableParameter"].IsNull())
    {
        if (!value["EnableParameter"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Command.EnableParameter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableParameter = value["EnableParameter"].GetBool();
        m_enableParameterHasBeenSet = true;
    }

    if (value.HasMember("DefaultParameters") && !value["DefaultParameters"].IsNull())
    {
        if (!value["DefaultParameters"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.DefaultParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultParameters = string(value["DefaultParameters"].GetString());
        m_defaultParametersHasBeenSet = true;
    }

    if (value.HasMember("FormattedDescription") && !value["FormattedDescription"].IsNull())
    {
        if (!value["FormattedDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.FormattedDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formattedDescription = string(value["FormattedDescription"].GetString());
        m_formattedDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Error("response `Command.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `Command.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Command::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_commandIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_commandName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_commandTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_commandType.c_str(), allocator).Move(), allocator);
    }

    if (m_workingDirectoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WorkingDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_workingDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
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

    if (m_enableParameterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableParameter, allocator);
    }

    if (m_defaultParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_defaultParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_formattedDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FormattedDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_formattedDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_createdByHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Command::GetCommandId() const
{
    return m_commandId;
}

void Command::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool Command::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string Command::GetCommandName() const
{
    return m_commandName;
}

void Command::SetCommandName(const string& _commandName)
{
    m_commandName = _commandName;
    m_commandNameHasBeenSet = true;
}

bool Command::CommandNameHasBeenSet() const
{
    return m_commandNameHasBeenSet;
}

string Command::GetDescription() const
{
    return m_description;
}

void Command::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Command::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Command::GetContent() const
{
    return m_content;
}

void Command::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Command::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string Command::GetCommandType() const
{
    return m_commandType;
}

void Command::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool Command::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

string Command::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void Command::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool Command::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

uint64_t Command::GetTimeout() const
{
    return m_timeout;
}

void Command::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool Command::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string Command::GetCreatedTime() const
{
    return m_createdTime;
}

void Command::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Command::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Command::GetUpdatedTime() const
{
    return m_updatedTime;
}

void Command::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool Command::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

bool Command::GetEnableParameter() const
{
    return m_enableParameter;
}

void Command::SetEnableParameter(const bool& _enableParameter)
{
    m_enableParameter = _enableParameter;
    m_enableParameterHasBeenSet = true;
}

bool Command::EnableParameterHasBeenSet() const
{
    return m_enableParameterHasBeenSet;
}

string Command::GetDefaultParameters() const
{
    return m_defaultParameters;
}

void Command::SetDefaultParameters(const string& _defaultParameters)
{
    m_defaultParameters = _defaultParameters;
    m_defaultParametersHasBeenSet = true;
}

bool Command::DefaultParametersHasBeenSet() const
{
    return m_defaultParametersHasBeenSet;
}

string Command::GetFormattedDescription() const
{
    return m_formattedDescription;
}

void Command::SetFormattedDescription(const string& _formattedDescription)
{
    m_formattedDescription = _formattedDescription;
    m_formattedDescriptionHasBeenSet = true;
}

bool Command::FormattedDescriptionHasBeenSet() const
{
    return m_formattedDescriptionHasBeenSet;
}

string Command::GetCreatedBy() const
{
    return m_createdBy;
}

void Command::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool Command::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

vector<Tag> Command::GetTags() const
{
    return m_tags;
}

void Command::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Command::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

