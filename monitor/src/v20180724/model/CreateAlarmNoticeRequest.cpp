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

#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreateAlarmNoticeRequest::CreateAlarmNoticeRequest() :
    m_moduleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_noticeTypeHasBeenSet(false),
    m_noticeLanguageHasBeenSet(false),
    m_userNoticesHasBeenSet(false),
    m_uRLNoticesHasBeenSet(false),
    m_cLSNoticesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateAlarmNoticeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noticeType.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noticeLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_userNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNotices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userNotices.begin(); itr != m_userNotices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_uRLNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLNotices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_uRLNotices.begin(); itr != m_uRLNotices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cLSNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSNotices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cLSNotices.begin(); itr != m_cLSNotices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateAlarmNoticeRequest::GetModule() const
{
    return m_module;
}

void CreateAlarmNoticeRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateAlarmNoticeRequest::GetName() const
{
    return m_name;
}

void CreateAlarmNoticeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAlarmNoticeRequest::GetNoticeType() const
{
    return m_noticeType;
}

void CreateAlarmNoticeRequest::SetNoticeType(const string& _noticeType)
{
    m_noticeType = _noticeType;
    m_noticeTypeHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::NoticeTypeHasBeenSet() const
{
    return m_noticeTypeHasBeenSet;
}

string CreateAlarmNoticeRequest::GetNoticeLanguage() const
{
    return m_noticeLanguage;
}

void CreateAlarmNoticeRequest::SetNoticeLanguage(const string& _noticeLanguage)
{
    m_noticeLanguage = _noticeLanguage;
    m_noticeLanguageHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::NoticeLanguageHasBeenSet() const
{
    return m_noticeLanguageHasBeenSet;
}

vector<UserNotice> CreateAlarmNoticeRequest::GetUserNotices() const
{
    return m_userNotices;
}

void CreateAlarmNoticeRequest::SetUserNotices(const vector<UserNotice>& _userNotices)
{
    m_userNotices = _userNotices;
    m_userNoticesHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::UserNoticesHasBeenSet() const
{
    return m_userNoticesHasBeenSet;
}

vector<URLNotice> CreateAlarmNoticeRequest::GetURLNotices() const
{
    return m_uRLNotices;
}

void CreateAlarmNoticeRequest::SetURLNotices(const vector<URLNotice>& _uRLNotices)
{
    m_uRLNotices = _uRLNotices;
    m_uRLNoticesHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::URLNoticesHasBeenSet() const
{
    return m_uRLNoticesHasBeenSet;
}

vector<CLSNotice> CreateAlarmNoticeRequest::GetCLSNotices() const
{
    return m_cLSNotices;
}

void CreateAlarmNoticeRequest::SetCLSNotices(const vector<CLSNotice>& _cLSNotices)
{
    m_cLSNotices = _cLSNotices;
    m_cLSNoticesHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::CLSNoticesHasBeenSet() const
{
    return m_cLSNoticesHasBeenSet;
}

vector<Tag> CreateAlarmNoticeRequest::GetTags() const
{
    return m_tags;
}

void CreateAlarmNoticeRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


