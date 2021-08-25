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

#include <tencentcloud/cpdp/v20190820/model/DownloadReconciliationUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DownloadReconciliationUrlRequest::DownloadReconciliationUrlRequest() :
    m_mainAppIdHasBeenSet(false),
    m_appCodeHasBeenSet(false),
    m_billDateHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DownloadReconciliationUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mainAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_appCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appCode.c_str(), allocator).Move(), allocator);
    }

    if (m_billDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billDate.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DownloadReconciliationUrlRequest::GetMainAppId() const
{
    return m_mainAppId;
}

void DownloadReconciliationUrlRequest::SetMainAppId(const string& _mainAppId)
{
    m_mainAppId = _mainAppId;
    m_mainAppIdHasBeenSet = true;
}

bool DownloadReconciliationUrlRequest::MainAppIdHasBeenSet() const
{
    return m_mainAppIdHasBeenSet;
}

string DownloadReconciliationUrlRequest::GetAppCode() const
{
    return m_appCode;
}

void DownloadReconciliationUrlRequest::SetAppCode(const string& _appCode)
{
    m_appCode = _appCode;
    m_appCodeHasBeenSet = true;
}

bool DownloadReconciliationUrlRequest::AppCodeHasBeenSet() const
{
    return m_appCodeHasBeenSet;
}

string DownloadReconciliationUrlRequest::GetBillDate() const
{
    return m_billDate;
}

void DownloadReconciliationUrlRequest::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool DownloadReconciliationUrlRequest::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}

string DownloadReconciliationUrlRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DownloadReconciliationUrlRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DownloadReconciliationUrlRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


