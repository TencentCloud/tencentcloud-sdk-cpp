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

#include <tencentcloud/solar/v20181011/model/SendWxTouchTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

SendWxTouchTaskRequest::SendWxTouchTaskRequest() :
    m_groupIdHasBeenSet(false),
    m_distinctFlagHasBeenSet(false),
    m_isSendNowHasBeenSet(false),
    m_sendDateHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_wxTouchTypeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_newsIdHasBeenSet(false),
    m_smallProgramIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_wxAppIdHasBeenSet(false)
{
}

string SendWxTouchTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_distinctFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistinctFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_distinctFlag, allocator);
    }

    if (m_isSendNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSendNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSendNow, allocator);
    }

    if (m_sendDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sendDate, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_wxTouchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxTouchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxTouchType.c_str(), allocator).Move(), allocator);
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

    if (m_newsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newsId.c_str(), allocator).Move(), allocator);
    }

    if (m_smallProgramIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmallProgramId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smallProgramId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendWxTouchTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void SendWxTouchTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SendWxTouchTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

bool SendWxTouchTaskRequest::GetDistinctFlag() const
{
    return m_distinctFlag;
}

void SendWxTouchTaskRequest::SetDistinctFlag(const bool& _distinctFlag)
{
    m_distinctFlag = _distinctFlag;
    m_distinctFlagHasBeenSet = true;
}

bool SendWxTouchTaskRequest::DistinctFlagHasBeenSet() const
{
    return m_distinctFlagHasBeenSet;
}

bool SendWxTouchTaskRequest::GetIsSendNow() const
{
    return m_isSendNow;
}

void SendWxTouchTaskRequest::SetIsSendNow(const bool& _isSendNow)
{
    m_isSendNow = _isSendNow;
    m_isSendNowHasBeenSet = true;
}

bool SendWxTouchTaskRequest::IsSendNowHasBeenSet() const
{
    return m_isSendNowHasBeenSet;
}

int64_t SendWxTouchTaskRequest::GetSendDate() const
{
    return m_sendDate;
}

void SendWxTouchTaskRequest::SetSendDate(const int64_t& _sendDate)
{
    m_sendDate = _sendDate;
    m_sendDateHasBeenSet = true;
}

bool SendWxTouchTaskRequest::SendDateHasBeenSet() const
{
    return m_sendDateHasBeenSet;
}

string SendWxTouchTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void SendWxTouchTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool SendWxTouchTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string SendWxTouchTaskRequest::GetWxTouchType() const
{
    return m_wxTouchType;
}

void SendWxTouchTaskRequest::SetWxTouchType(const string& _wxTouchType)
{
    m_wxTouchType = _wxTouchType;
    m_wxTouchTypeHasBeenSet = true;
}

bool SendWxTouchTaskRequest::WxTouchTypeHasBeenSet() const
{
    return m_wxTouchTypeHasBeenSet;
}

string SendWxTouchTaskRequest::GetTitle() const
{
    return m_title;
}

void SendWxTouchTaskRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool SendWxTouchTaskRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string SendWxTouchTaskRequest::GetContent() const
{
    return m_content;
}

void SendWxTouchTaskRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SendWxTouchTaskRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string SendWxTouchTaskRequest::GetNewsId() const
{
    return m_newsId;
}

void SendWxTouchTaskRequest::SetNewsId(const string& _newsId)
{
    m_newsId = _newsId;
    m_newsIdHasBeenSet = true;
}

bool SendWxTouchTaskRequest::NewsIdHasBeenSet() const
{
    return m_newsIdHasBeenSet;
}

string SendWxTouchTaskRequest::GetSmallProgramId() const
{
    return m_smallProgramId;
}

void SendWxTouchTaskRequest::SetSmallProgramId(const string& _smallProgramId)
{
    m_smallProgramId = _smallProgramId;
    m_smallProgramIdHasBeenSet = true;
}

bool SendWxTouchTaskRequest::SmallProgramIdHasBeenSet() const
{
    return m_smallProgramIdHasBeenSet;
}

string SendWxTouchTaskRequest::GetTemplateId() const
{
    return m_templateId;
}

void SendWxTouchTaskRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SendWxTouchTaskRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string SendWxTouchTaskRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void SendWxTouchTaskRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool SendWxTouchTaskRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}


