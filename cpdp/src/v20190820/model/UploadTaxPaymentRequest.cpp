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

#include <tencentcloud/cpdp/v20190820/model/UploadTaxPaymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UploadTaxPaymentRequest::UploadTaxPaymentRequest() :
    m_channelHasBeenSet(false),
    m_taxIdHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

string UploadTaxPaymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channel, allocator);
    }

    if (m_taxIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UploadTaxPaymentRequest::GetChannel() const
{
    return m_channel;
}

void UploadTaxPaymentRequest::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool UploadTaxPaymentRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string UploadTaxPaymentRequest::GetTaxId() const
{
    return m_taxId;
}

void UploadTaxPaymentRequest::SetTaxId(const string& _taxId)
{
    m_taxId = _taxId;
    m_taxIdHasBeenSet = true;
}

bool UploadTaxPaymentRequest::TaxIdHasBeenSet() const
{
    return m_taxIdHasBeenSet;
}

string UploadTaxPaymentRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void UploadTaxPaymentRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool UploadTaxPaymentRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}


