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

#include <tencentcloud/es/v20250101/model/ParseDocumentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

ParseDocumentResponse::ParseDocumentResponse() :
    m_progressHasBeenSet(false),
    m_documentParseResultUrlHasBeenSet(false),
    m_failedPagesHasBeenSet(false)
{
}

CoreInternalOutcome ParseDocumentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progress = string(rsp["Progress"].GetString());
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("DocumentParseResultUrl") && !rsp["DocumentParseResultUrl"].IsNull())
    {
        if (!rsp["DocumentParseResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentParseResultUrl = string(rsp["DocumentParseResultUrl"].GetString());
        m_documentParseResultUrlHasBeenSet = true;
    }

    if (rsp.HasMember("FailedPages") && !rsp["FailedPages"].IsNull())
    {
        if (!rsp["FailedPages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedPages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedPages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedPages.push_back((*itr).GetInt64());
        }
        m_failedPagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ParseDocumentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progress.c_str(), allocator).Move(), allocator);
    }

    if (m_documentParseResultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentParseResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentParseResultUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_failedPagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedPages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedPages.begin(); itr != m_failedPages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
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


string ParseDocumentResponse::GetProgress() const
{
    return m_progress;
}

bool ParseDocumentResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string ParseDocumentResponse::GetDocumentParseResultUrl() const
{
    return m_documentParseResultUrl;
}

bool ParseDocumentResponse::DocumentParseResultUrlHasBeenSet() const
{
    return m_documentParseResultUrlHasBeenSet;
}

vector<int64_t> ParseDocumentResponse::GetFailedPages() const
{
    return m_failedPages;
}

bool ParseDocumentResponse::FailedPagesHasBeenSet() const
{
    return m_failedPagesHasBeenSet;
}


