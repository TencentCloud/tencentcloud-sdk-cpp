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

#include <tencentcloud/tdai/v20250717/model/CreateChatCompletionRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

CreateChatCompletionRes::CreateChatCompletionRes() :
    m_objectHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_streamingIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_choicesHasBeenSet(false)
{
}

CoreInternalOutcome CreateChatCompletionRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Object") && !value["Object"].IsNull())
    {
        if (!value["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(value["Object"].GetString());
        m_objectHasBeenSet = true;
    }

    if (value.HasMember("Created") && !value["Created"].IsNull())
    {
        if (!value["Created"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.Created` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_created = value["Created"].GetInt64();
        m_createdHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("ChatId") && !value["ChatId"].IsNull())
    {
        if (!value["ChatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.ChatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatId = string(value["ChatId"].GetString());
        m_chatIdHasBeenSet = true;
    }

    if (value.HasMember("StreamingId") && !value["StreamingId"].IsNull())
    {
        if (!value["StreamingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.StreamingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamingId = string(value["StreamingId"].GetString());
        m_streamingIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Choices") && !value["Choices"].IsNull())
    {
        if (!value["Choices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateChatCompletionRes.Choices` is not array type"));

        const rapidjson::Value &tmpValue = value["Choices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UploadChoice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_choices.push_back(item);
        }
        m_choicesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateChatCompletionRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_createdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Created";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_created, allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_streamingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamingId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_choicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Choices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_choices.begin(); itr != m_choices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CreateChatCompletionRes::GetObject() const
{
    return m_object;
}

void CreateChatCompletionRes::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool CreateChatCompletionRes::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

int64_t CreateChatCompletionRes::GetCreated() const
{
    return m_created;
}

void CreateChatCompletionRes::SetCreated(const int64_t& _created)
{
    m_created = _created;
    m_createdHasBeenSet = true;
}

bool CreateChatCompletionRes::CreatedHasBeenSet() const
{
    return m_createdHasBeenSet;
}

string CreateChatCompletionRes::GetModel() const
{
    return m_model;
}

void CreateChatCompletionRes::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CreateChatCompletionRes::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

int64_t CreateChatCompletionRes::GetAppId() const
{
    return m_appId;
}

void CreateChatCompletionRes::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateChatCompletionRes::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CreateChatCompletionRes::GetOwnerUin() const
{
    return m_ownerUin;
}

void CreateChatCompletionRes::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CreateChatCompletionRes::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string CreateChatCompletionRes::GetUin() const
{
    return m_uin;
}

void CreateChatCompletionRes::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CreateChatCompletionRes::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CreateChatCompletionRes::GetRequestId() const
{
    return m_requestId;
}

void CreateChatCompletionRes::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CreateChatCompletionRes::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string CreateChatCompletionRes::GetChatId() const
{
    return m_chatId;
}

void CreateChatCompletionRes::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool CreateChatCompletionRes::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

string CreateChatCompletionRes::GetStreamingId() const
{
    return m_streamingId;
}

void CreateChatCompletionRes::SetStreamingId(const string& _streamingId)
{
    m_streamingId = _streamingId;
    m_streamingIdHasBeenSet = true;
}

bool CreateChatCompletionRes::StreamingIdHasBeenSet() const
{
    return m_streamingIdHasBeenSet;
}

string CreateChatCompletionRes::GetTaskId() const
{
    return m_taskId;
}

void CreateChatCompletionRes::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateChatCompletionRes::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<UploadChoice> CreateChatCompletionRes::GetChoices() const
{
    return m_choices;
}

void CreateChatCompletionRes::SetChoices(const vector<UploadChoice>& _choices)
{
    m_choices = _choices;
    m_choicesHasBeenSet = true;
}

bool CreateChatCompletionRes::ChoicesHasBeenSet() const
{
    return m_choicesHasBeenSet;
}

