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

#include <tencentcloud/ocr/v20181119/model/DescribeMultimodalDocParseJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

DescribeMultimodalDocParseJobResponse::DescribeMultimodalDocParseJobResponse() :
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_resultUrlHasBeenSet(false),
    m_failedPagesHasBeenSet(false),
    m_successPageNumHasBeenSet(false),
    m_failPageNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMultimodalDocParseJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("ResultUrl") && !rsp["ResultUrl"].IsNull())
    {
        if (!rsp["ResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultUrl = string(rsp["ResultUrl"].GetString());
        m_resultUrlHasBeenSet = true;
    }

    if (rsp.HasMember("FailedPages") && !rsp["FailedPages"].IsNull())
    {
        if (!rsp["FailedPages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedPages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedPages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReconstructDocumentFailedPage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failedPages.push_back(item);
        }
        m_failedPagesHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessPageNum") && !rsp["SuccessPageNum"].IsNull())
    {
        if (!rsp["SuccessPageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessPageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successPageNum = rsp["SuccessPageNum"].GetInt64();
        m_successPageNumHasBeenSet = true;
    }

    if (rsp.HasMember("FailPageNum") && !rsp["FailPageNum"].IsNull())
    {
        if (!rsp["FailPageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FailPageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failPageNum = rsp["FailPageNum"].GetInt64();
        m_failPageNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMultimodalDocParseJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_resultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_failedPagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedPages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failedPages.begin(); itr != m_failedPages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_successPageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessPageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successPageNum, allocator);
    }

    if (m_failPageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailPageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failPageNum, allocator);
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


string DescribeMultimodalDocParseJobResponse::GetStatus() const
{
    return m_status;
}

bool DescribeMultimodalDocParseJobResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeMultimodalDocParseJobResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DescribeMultimodalDocParseJobResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string DescribeMultimodalDocParseJobResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool DescribeMultimodalDocParseJobResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string DescribeMultimodalDocParseJobResponse::GetResultUrl() const
{
    return m_resultUrl;
}

bool DescribeMultimodalDocParseJobResponse::ResultUrlHasBeenSet() const
{
    return m_resultUrlHasBeenSet;
}

vector<ReconstructDocumentFailedPage> DescribeMultimodalDocParseJobResponse::GetFailedPages() const
{
    return m_failedPages;
}

bool DescribeMultimodalDocParseJobResponse::FailedPagesHasBeenSet() const
{
    return m_failedPagesHasBeenSet;
}

int64_t DescribeMultimodalDocParseJobResponse::GetSuccessPageNum() const
{
    return m_successPageNum;
}

bool DescribeMultimodalDocParseJobResponse::SuccessPageNumHasBeenSet() const
{
    return m_successPageNumHasBeenSet;
}

int64_t DescribeMultimodalDocParseJobResponse::GetFailPageNum() const
{
    return m_failPageNum;
}

bool DescribeMultimodalDocParseJobResponse::FailPageNumHasBeenSet() const
{
    return m_failPageNumHasBeenSet;
}


