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

#include <tencentcloud/cls/v20201016/model/ModifyNoticeContentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyNoticeContentRequest::ModifyNoticeContentRequest() :
    m_noticeContentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_noticeContentsHasBeenSet(false)
{
}

string ModifyNoticeContentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_noticeContentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noticeContentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_noticeContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeContents.begin(); itr != m_noticeContents.end(); ++itr, ++i)
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


string ModifyNoticeContentRequest::GetNoticeContentId() const
{
    return m_noticeContentId;
}

void ModifyNoticeContentRequest::SetNoticeContentId(const string& _noticeContentId)
{
    m_noticeContentId = _noticeContentId;
    m_noticeContentIdHasBeenSet = true;
}

bool ModifyNoticeContentRequest::NoticeContentIdHasBeenSet() const
{
    return m_noticeContentIdHasBeenSet;
}

string ModifyNoticeContentRequest::GetName() const
{
    return m_name;
}

void ModifyNoticeContentRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyNoticeContentRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyNoticeContentRequest::GetType() const
{
    return m_type;
}

void ModifyNoticeContentRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyNoticeContentRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<NoticeContent> ModifyNoticeContentRequest::GetNoticeContents() const
{
    return m_noticeContents;
}

void ModifyNoticeContentRequest::SetNoticeContents(const vector<NoticeContent>& _noticeContents)
{
    m_noticeContents = _noticeContents;
    m_noticeContentsHasBeenSet = true;
}

bool ModifyNoticeContentRequest::NoticeContentsHasBeenSet() const
{
    return m_noticeContentsHasBeenSet;
}


