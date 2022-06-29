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

#include <tencentcloud/cpdp/v20190820/model/GetBillDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

GetBillDownloadUrlRequest::GetBillDownloadUrlRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_dayHasBeenSet(false)
{
}

string GetBillDownloadUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Day";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_day.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetBillDownloadUrlRequest::GetOpenId() const
{
    return m_openId;
}

void GetBillDownloadUrlRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool GetBillDownloadUrlRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string GetBillDownloadUrlRequest::GetOpenKey() const
{
    return m_openKey;
}

void GetBillDownloadUrlRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool GetBillDownloadUrlRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string GetBillDownloadUrlRequest::GetDay() const
{
    return m_day;
}

void GetBillDownloadUrlRequest::SetDay(const string& _day)
{
    m_day = _day;
    m_dayHasBeenSet = true;
}

bool GetBillDownloadUrlRequest::DayHasBeenSet() const
{
    return m_dayHasBeenSet;
}


