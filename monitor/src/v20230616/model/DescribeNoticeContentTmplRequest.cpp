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

#include <tencentcloud/monitor/v20230616/model/DescribeNoticeContentTmplRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DescribeNoticeContentTmplRequest::DescribeNoticeContentTmplRequest() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_tmplIDsHasBeenSet(false),
    m_tmplNameHasBeenSet(false),
    m_noticeIDHasBeenSet(false),
    m_tmplLanguageHasBeenSet(false),
    m_monitorTypeHasBeenSet(false)
{
}

string DescribeNoticeContentTmplRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_tmplIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tmplIDs.begin(); itr != m_tmplIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tmplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tmplName.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noticeID.c_str(), allocator).Move(), allocator);
    }

    if (m_tmplLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tmplLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeNoticeContentTmplRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeNoticeContentTmplRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeNoticeContentTmplRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeNoticeContentTmplRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeNoticeContentTmplRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeNoticeContentTmplRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> DescribeNoticeContentTmplRequest::GetTmplIDs() const
{
    return m_tmplIDs;
}

void DescribeNoticeContentTmplRequest::SetTmplIDs(const vector<string>& _tmplIDs)
{
    m_tmplIDs = _tmplIDs;
    m_tmplIDsHasBeenSet = true;
}

bool DescribeNoticeContentTmplRequest::TmplIDsHasBeenSet() const
{
    return m_tmplIDsHasBeenSet;
}

string DescribeNoticeContentTmplRequest::GetTmplName() const
{
    return m_tmplName;
}

void DescribeNoticeContentTmplRequest::SetTmplName(const string& _tmplName)
{
    m_tmplName = _tmplName;
    m_tmplNameHasBeenSet = true;
}

bool DescribeNoticeContentTmplRequest::TmplNameHasBeenSet() const
{
    return m_tmplNameHasBeenSet;
}

string DescribeNoticeContentTmplRequest::GetNoticeID() const
{
    return m_noticeID;
}

void DescribeNoticeContentTmplRequest::SetNoticeID(const string& _noticeID)
{
    m_noticeID = _noticeID;
    m_noticeIDHasBeenSet = true;
}

bool DescribeNoticeContentTmplRequest::NoticeIDHasBeenSet() const
{
    return m_noticeIDHasBeenSet;
}

string DescribeNoticeContentTmplRequest::GetTmplLanguage() const
{
    return m_tmplLanguage;
}

void DescribeNoticeContentTmplRequest::SetTmplLanguage(const string& _tmplLanguage)
{
    m_tmplLanguage = _tmplLanguage;
    m_tmplLanguageHasBeenSet = true;
}

bool DescribeNoticeContentTmplRequest::TmplLanguageHasBeenSet() const
{
    return m_tmplLanguageHasBeenSet;
}

string DescribeNoticeContentTmplRequest::GetMonitorType() const
{
    return m_monitorType;
}

void DescribeNoticeContentTmplRequest::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool DescribeNoticeContentTmplRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}


