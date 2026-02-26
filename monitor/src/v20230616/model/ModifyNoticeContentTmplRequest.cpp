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

#include <tencentcloud/monitor/v20230616/model/ModifyNoticeContentTmplRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ModifyNoticeContentTmplRequest::ModifyNoticeContentTmplRequest() :
    m_tmplNameHasBeenSet(false),
    m_tmplContentsHasBeenSet(false),
    m_tmplIDHasBeenSet(false)
{
}

string ModifyNoticeContentTmplRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tmplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tmplName.c_str(), allocator).Move(), allocator);
    }

    if (m_tmplContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplContents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tmplContents.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tmplIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tmplID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNoticeContentTmplRequest::GetTmplName() const
{
    return m_tmplName;
}

void ModifyNoticeContentTmplRequest::SetTmplName(const string& _tmplName)
{
    m_tmplName = _tmplName;
    m_tmplNameHasBeenSet = true;
}

bool ModifyNoticeContentTmplRequest::TmplNameHasBeenSet() const
{
    return m_tmplNameHasBeenSet;
}

NoticeContentTmplItem ModifyNoticeContentTmplRequest::GetTmplContents() const
{
    return m_tmplContents;
}

void ModifyNoticeContentTmplRequest::SetTmplContents(const NoticeContentTmplItem& _tmplContents)
{
    m_tmplContents = _tmplContents;
    m_tmplContentsHasBeenSet = true;
}

bool ModifyNoticeContentTmplRequest::TmplContentsHasBeenSet() const
{
    return m_tmplContentsHasBeenSet;
}

string ModifyNoticeContentTmplRequest::GetTmplID() const
{
    return m_tmplID;
}

void ModifyNoticeContentTmplRequest::SetTmplID(const string& _tmplID)
{
    m_tmplID = _tmplID;
    m_tmplIDHasBeenSet = true;
}

bool ModifyNoticeContentTmplRequest::TmplIDHasBeenSet() const
{
    return m_tmplIDHasBeenSet;
}


