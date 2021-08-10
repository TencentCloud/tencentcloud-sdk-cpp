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

#include <tencentcloud/cpdp/v20190820/model/QueryDownloadBillURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryDownloadBillURLRequest::QueryDownloadBillURLRequest() :
    m_merchantAppIdHasBeenSet(false),
    m_channelCodeHasBeenSet(false),
    m_billDateHasBeenSet(false)
{
}

string QueryDownloadBillURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_billDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryDownloadBillURLRequest::GetMerchantAppId() const
{
    return m_merchantAppId;
}

void QueryDownloadBillURLRequest::SetMerchantAppId(const string& _merchantAppId)
{
    m_merchantAppId = _merchantAppId;
    m_merchantAppIdHasBeenSet = true;
}

bool QueryDownloadBillURLRequest::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

string QueryDownloadBillURLRequest::GetChannelCode() const
{
    return m_channelCode;
}

void QueryDownloadBillURLRequest::SetChannelCode(const string& _channelCode)
{
    m_channelCode = _channelCode;
    m_channelCodeHasBeenSet = true;
}

bool QueryDownloadBillURLRequest::ChannelCodeHasBeenSet() const
{
    return m_channelCodeHasBeenSet;
}

string QueryDownloadBillURLRequest::GetBillDate() const
{
    return m_billDate;
}

void QueryDownloadBillURLRequest::SetBillDate(const string& _billDate)
{
    m_billDate = _billDate;
    m_billDateHasBeenSet = true;
}

bool QueryDownloadBillURLRequest::BillDateHasBeenSet() const
{
    return m_billDateHasBeenSet;
}


