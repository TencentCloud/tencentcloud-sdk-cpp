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

#include <tencentcloud/iss/v20230517/model/AITaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AITaskInfo::AITaskInfo() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_channelListHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_templatesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome AITaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ChannelList") && !value["ChannelList"].IsNull())
    {
        if (!value["ChannelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.ChannelList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelList.push_back((*itr).GetString());
        }
        m_channelListHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("Templates") && !value["Templates"].IsNull())
    {
        if (!value["Templates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.Templates` is not array type"));

        const rapidjson::Value &tmpValue = value["Templates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AITemplates item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templates.push_back(item);
        }
        m_templatesHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AITaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_channelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelList.begin(); itr != m_channelList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_templatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Templates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templates.begin(); itr != m_templates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string AITaskInfo::GetTaskId() const
{
    return m_taskId;
}

void AITaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AITaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AITaskInfo::GetName() const
{
    return m_name;
}

void AITaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AITaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AITaskInfo::GetDesc() const
{
    return m_desc;
}

void AITaskInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AITaskInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AITaskInfo::GetStatus() const
{
    return m_status;
}

void AITaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AITaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> AITaskInfo::GetChannelList() const
{
    return m_channelList;
}

void AITaskInfo::SetChannelList(const vector<string>& _channelList)
{
    m_channelList = _channelList;
    m_channelListHasBeenSet = true;
}

bool AITaskInfo::ChannelListHasBeenSet() const
{
    return m_channelListHasBeenSet;
}

string AITaskInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void AITaskInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool AITaskInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<AITemplates> AITaskInfo::GetTemplates() const
{
    return m_templates;
}

void AITaskInfo::SetTemplates(const vector<AITemplates>& _templates)
{
    m_templates = _templates;
    m_templatesHasBeenSet = true;
}

bool AITaskInfo::TemplatesHasBeenSet() const
{
    return m_templatesHasBeenSet;
}

string AITaskInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void AITaskInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AITaskInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string AITaskInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void AITaskInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool AITaskInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

