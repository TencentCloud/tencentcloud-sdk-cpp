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

#include <tencentcloud/live/v20180801/model/ModifyLiveAvatarScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveAvatarScriptRequest::ModifyLiveAvatarScriptRequest() :
    m_scriptIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_specifyPositionHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ModifyLiveAvatarScriptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_specifyPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifyPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_specifyPosition, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLiveAvatarScriptRequest::GetScriptId() const
{
    return m_scriptId;
}

void ModifyLiveAvatarScriptRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool ModifyLiveAvatarScriptRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string ModifyLiveAvatarScriptRequest::GetTitle() const
{
    return m_title;
}

void ModifyLiveAvatarScriptRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ModifyLiveAvatarScriptRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string ModifyLiveAvatarScriptRequest::GetContent() const
{
    return m_content;
}

void ModifyLiveAvatarScriptRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyLiveAvatarScriptRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ModifyLiveAvatarScriptRequest::GetSpecifyPosition() const
{
    return m_specifyPosition;
}

void ModifyLiveAvatarScriptRequest::SetSpecifyPosition(const int64_t& _specifyPosition)
{
    m_specifyPosition = _specifyPosition;
    m_specifyPositionHasBeenSet = true;
}

bool ModifyLiveAvatarScriptRequest::SpecifyPositionHasBeenSet() const
{
    return m_specifyPositionHasBeenSet;
}

string ModifyLiveAvatarScriptRequest::GetOperator() const
{
    return m_operator;
}

void ModifyLiveAvatarScriptRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyLiveAvatarScriptRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


