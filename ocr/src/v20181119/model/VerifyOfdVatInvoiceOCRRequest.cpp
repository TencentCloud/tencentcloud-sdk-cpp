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

#include <tencentcloud/ocr/v20181119/model/VerifyOfdVatInvoiceOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyOfdVatInvoiceOCRRequest::VerifyOfdVatInvoiceOCRRequest() :
    m_ofdFileUrlHasBeenSet(false),
    m_ofdFileBase64HasBeenSet(false),
    m_ofdPageNumberHasBeenSet(false)
{
}

string VerifyOfdVatInvoiceOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ofdFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfdFileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ofdFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_ofdFileBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfdFileBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ofdFileBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_ofdPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfdPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ofdPageNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyOfdVatInvoiceOCRRequest::GetOfdFileUrl() const
{
    return m_ofdFileUrl;
}

void VerifyOfdVatInvoiceOCRRequest::SetOfdFileUrl(const string& _ofdFileUrl)
{
    m_ofdFileUrl = _ofdFileUrl;
    m_ofdFileUrlHasBeenSet = true;
}

bool VerifyOfdVatInvoiceOCRRequest::OfdFileUrlHasBeenSet() const
{
    return m_ofdFileUrlHasBeenSet;
}

string VerifyOfdVatInvoiceOCRRequest::GetOfdFileBase64() const
{
    return m_ofdFileBase64;
}

void VerifyOfdVatInvoiceOCRRequest::SetOfdFileBase64(const string& _ofdFileBase64)
{
    m_ofdFileBase64 = _ofdFileBase64;
    m_ofdFileBase64HasBeenSet = true;
}

bool VerifyOfdVatInvoiceOCRRequest::OfdFileBase64HasBeenSet() const
{
    return m_ofdFileBase64HasBeenSet;
}

int64_t VerifyOfdVatInvoiceOCRRequest::GetOfdPageNumber() const
{
    return m_ofdPageNumber;
}

void VerifyOfdVatInvoiceOCRRequest::SetOfdPageNumber(const int64_t& _ofdPageNumber)
{
    m_ofdPageNumber = _ofdPageNumber;
    m_ofdPageNumberHasBeenSet = true;
}

bool VerifyOfdVatInvoiceOCRRequest::OfdPageNumberHasBeenSet() const
{
    return m_ofdPageNumberHasBeenSet;
}


