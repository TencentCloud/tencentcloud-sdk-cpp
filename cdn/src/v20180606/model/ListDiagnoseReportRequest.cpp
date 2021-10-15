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

#include <tencentcloud/cdn/v20180606/model/ListDiagnoseReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ListDiagnoseReportRequest::ListDiagnoseReportRequest() :
    m_keyWordsHasBeenSet(false),
    m_diagnoseLinkHasBeenSet(false),
    m_originHasBeenSet(false)
{
}

string ListDiagnoseReportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWords.c_str(), allocator).Move(), allocator);
    }

    if (m_diagnoseLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnoseLink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diagnoseLink.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListDiagnoseReportRequest::GetKeyWords() const
{
    return m_keyWords;
}

void ListDiagnoseReportRequest::SetKeyWords(const string& _keyWords)
{
    m_keyWords = _keyWords;
    m_keyWordsHasBeenSet = true;
}

bool ListDiagnoseReportRequest::KeyWordsHasBeenSet() const
{
    return m_keyWordsHasBeenSet;
}

string ListDiagnoseReportRequest::GetDiagnoseLink() const
{
    return m_diagnoseLink;
}

void ListDiagnoseReportRequest::SetDiagnoseLink(const string& _diagnoseLink)
{
    m_diagnoseLink = _diagnoseLink;
    m_diagnoseLinkHasBeenSet = true;
}

bool ListDiagnoseReportRequest::DiagnoseLinkHasBeenSet() const
{
    return m_diagnoseLinkHasBeenSet;
}

string ListDiagnoseReportRequest::GetOrigin() const
{
    return m_origin;
}

void ListDiagnoseReportRequest::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool ListDiagnoseReportRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}


