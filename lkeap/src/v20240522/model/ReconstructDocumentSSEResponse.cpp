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

#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSEResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

ReconstructDocumentSSEResponse::ReconstructDocumentSSEResponse() :
    m_taskIdHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_progressMessageHasBeenSet(false),
    m_documentRecognizeResultUrlHasBeenSet(false),
    m_failedPagesHasBeenSet(false)
{
}

CoreInternalOutcome ReconstructDocumentSSEResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseType") && !rsp["ResponseType"].IsNull())
    {
        if (!rsp["ResponseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseType = string(rsp["ResponseType"].GetString());
        m_responseTypeHasBeenSet = true;
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

    if (rsp.HasMember("ProgressMessage") && !rsp["ProgressMessage"].IsNull())
    {
        if (!rsp["ProgressMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgressMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progressMessage = string(rsp["ProgressMessage"].GetString());
        m_progressMessageHasBeenSet = true;
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

string ReconstructDocumentSSEResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progress.c_str(), allocator).Move(), allocator);
    }

    if (m_progressMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progressMessage.c_str(), allocator).Move(), allocator);
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


string ReconstructDocumentSSEResponse::GetTaskId() const
{
    return m_taskId;
}

bool ReconstructDocumentSSEResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ReconstructDocumentSSEResponse::GetResponseType() const
{
    return m_responseType;
}

bool ReconstructDocumentSSEResponse::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

string ReconstructDocumentSSEResponse::GetProgress() const
{
    return m_progress;
}

bool ReconstructDocumentSSEResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string ReconstructDocumentSSEResponse::GetProgressMessage() const
{
    return m_progressMessage;
}

bool ReconstructDocumentSSEResponse::ProgressMessageHasBeenSet() const
{
    return m_progressMessageHasBeenSet;
}

string ReconstructDocumentSSEResponse::GetDocumentRecognizeResultUrl() const
{
    return m_documentRecognizeResultUrl;
}

bool ReconstructDocumentSSEResponse::DocumentRecognizeResultUrlHasBeenSet() const
{
    return m_documentRecognizeResultUrlHasBeenSet;
}

vector<ReconstructDocumentFailedPage> ReconstructDocumentSSEResponse::GetFailedPages() const
{
    return m_failedPages;
}

bool ReconstructDocumentSSEResponse::FailedPagesHasBeenSet() const
{
    return m_failedPagesHasBeenSet;
}


