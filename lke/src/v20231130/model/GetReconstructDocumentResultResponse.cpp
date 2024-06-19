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

#include <tencentcloud/lke/v20231130/model/GetReconstructDocumentResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetReconstructDocumentResultResponse::GetReconstructDocumentResultResponse() :
    m_statusHasBeenSet(false),
    m_documentRecognizeResultUrlHasBeenSet(false),
    m_failedPagesHasBeenSet(false)
{
}

CoreInternalOutcome GetReconstructDocumentResultResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("DocumentRecognizeResultUrl") && !rsp["DocumentRecognizeResultUrl"].IsNull())
    {
        if (!rsp["DocumentRecognizeResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentRecognizeResultUrl = string(rsp["DocumentRecognizeResultUrl"].GetString());
        m_documentRecognizeResultUrlHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string GetReconstructDocumentResultResponse::ToJsonString() const
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

    if (m_documentRecognizeResultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentRecognizeResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentRecognizeResultUrl.c_str(), allocator).Move(), allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string GetReconstructDocumentResultResponse::GetStatus() const
{
    return m_status;
}

bool GetReconstructDocumentResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetReconstructDocumentResultResponse::GetDocumentRecognizeResultUrl() const
{
    return m_documentRecognizeResultUrl;
}

bool GetReconstructDocumentResultResponse::DocumentRecognizeResultUrlHasBeenSet() const
{
    return m_documentRecognizeResultUrlHasBeenSet;
}

vector<ReconstructDocumentFailedPage> GetReconstructDocumentResultResponse::GetFailedPages() const
{
    return m_failedPages;
}

bool GetReconstructDocumentResultResponse::FailedPagesHasBeenSet() const
{
    return m_failedPagesHasBeenSet;
}


