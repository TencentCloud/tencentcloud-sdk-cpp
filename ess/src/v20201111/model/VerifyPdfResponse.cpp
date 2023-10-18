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

#include <tencentcloud/ess/v20201111/model/VerifyPdfResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

VerifyPdfResponse::VerifyPdfResponse() :
    m_verifyResultHasBeenSet(false),
    m_pdfVerifyResultsHasBeenSet(false),
    m_verifySerialNoHasBeenSet(false),
    m_pdfResourceMd5HasBeenSet(false)
{
}

CoreInternalOutcome VerifyPdfResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("VerifyResult") && !rsp["VerifyResult"].IsNull())
    {
        if (!rsp["VerifyResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyResult = rsp["VerifyResult"].GetInt64();
        m_verifyResultHasBeenSet = true;
    }

    if (rsp.HasMember("PdfVerifyResults") && !rsp["PdfVerifyResults"].IsNull())
    {
        if (!rsp["PdfVerifyResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PdfVerifyResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PdfVerifyResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PdfVerifyResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pdfVerifyResults.push_back(item);
        }
        m_pdfVerifyResultsHasBeenSet = true;
    }

    if (rsp.HasMember("VerifySerialNo") && !rsp["VerifySerialNo"].IsNull())
    {
        if (!rsp["VerifySerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifySerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifySerialNo = string(rsp["VerifySerialNo"].GetString());
        m_verifySerialNoHasBeenSet = true;
    }

    if (rsp.HasMember("PdfResourceMd5") && !rsp["PdfResourceMd5"].IsNull())
    {
        if (!rsp["PdfResourceMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PdfResourceMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pdfResourceMd5 = string(rsp["PdfResourceMd5"].GetString());
        m_pdfResourceMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyPdfResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_verifyResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyResult, allocator);
    }

    if (m_pdfVerifyResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfVerifyResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pdfVerifyResults.begin(); itr != m_pdfVerifyResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_verifySerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifySerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifySerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_pdfResourceMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfResourceMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pdfResourceMd5.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t VerifyPdfResponse::GetVerifyResult() const
{
    return m_verifyResult;
}

bool VerifyPdfResponse::VerifyResultHasBeenSet() const
{
    return m_verifyResultHasBeenSet;
}

vector<PdfVerifyResult> VerifyPdfResponse::GetPdfVerifyResults() const
{
    return m_pdfVerifyResults;
}

bool VerifyPdfResponse::PdfVerifyResultsHasBeenSet() const
{
    return m_pdfVerifyResultsHasBeenSet;
}

string VerifyPdfResponse::GetVerifySerialNo() const
{
    return m_verifySerialNo;
}

bool VerifyPdfResponse::VerifySerialNoHasBeenSet() const
{
    return m_verifySerialNoHasBeenSet;
}

string VerifyPdfResponse::GetPdfResourceMd5() const
{
    return m_pdfResourceMd5;
}

bool VerifyPdfResponse::PdfResourceMd5HasBeenSet() const
{
    return m_pdfResourceMd5HasBeenSet;
}


