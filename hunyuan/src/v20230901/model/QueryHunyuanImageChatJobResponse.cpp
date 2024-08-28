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

#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageChatJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

QueryHunyuanImageChatJobResponse::QueryHunyuanImageChatJobResponse() :
    m_jobStatusCodeHasBeenSet(false),
    m_jobStatusMsgHasBeenSet(false),
    m_jobErrorCodeHasBeenSet(false),
    m_jobErrorMsgHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_resultImageHasBeenSet(false),
    m_resultDetailsHasBeenSet(false),
    m_historyHasBeenSet(false)
{
}

CoreInternalOutcome QueryHunyuanImageChatJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobStatusCode") && !rsp["JobStatusCode"].IsNull())
    {
        if (!rsp["JobStatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatusCode = string(rsp["JobStatusCode"].GetString());
        m_jobStatusCodeHasBeenSet = true;
    }

    if (rsp.HasMember("JobStatusMsg") && !rsp["JobStatusMsg"].IsNull())
    {
        if (!rsp["JobStatusMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatusMsg = string(rsp["JobStatusMsg"].GetString());
        m_jobStatusMsgHasBeenSet = true;
    }

    if (rsp.HasMember("JobErrorCode") && !rsp["JobErrorCode"].IsNull())
    {
        if (!rsp["JobErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobErrorCode = string(rsp["JobErrorCode"].GetString());
        m_jobErrorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("JobErrorMsg") && !rsp["JobErrorMsg"].IsNull())
    {
        if (!rsp["JobErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobErrorMsg = string(rsp["JobErrorMsg"].GetString());
        m_jobErrorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("ChatId") && !rsp["ChatId"].IsNull())
    {
        if (!rsp["ChatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatId = string(rsp["ChatId"].GetString());
        m_chatIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResultImage") && !rsp["ResultImage"].IsNull())
    {
        if (!rsp["ResultImage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultImage` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResultImage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resultImage.push_back((*itr).GetString());
        }
        m_resultImageHasBeenSet = true;
    }

    if (rsp.HasMember("ResultDetails") && !rsp["ResultDetails"].IsNull())
    {
        if (!rsp["ResultDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResultDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resultDetails.push_back((*itr).GetString());
        }
        m_resultDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("History") && !rsp["History"].IsNull())
    {
        if (!rsp["History"].IsArray())
            return CoreInternalOutcome(Core::Error("response `History` is not array type"));

        const rapidjson::Value &tmpValue = rsp["History"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            History item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_history.push_back(item);
        }
        m_historyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryHunyuanImageChatJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStatusMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatusMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatusMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_jobErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobErrorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_jobErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resultImage.begin(); itr != m_resultImage.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resultDetails.begin(); itr != m_resultDetails.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_historyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "History";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_history.begin(); itr != m_history.end(); ++itr, ++i)
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


string QueryHunyuanImageChatJobResponse::GetJobStatusCode() const
{
    return m_jobStatusCode;
}

bool QueryHunyuanImageChatJobResponse::JobStatusCodeHasBeenSet() const
{
    return m_jobStatusCodeHasBeenSet;
}

string QueryHunyuanImageChatJobResponse::GetJobStatusMsg() const
{
    return m_jobStatusMsg;
}

bool QueryHunyuanImageChatJobResponse::JobStatusMsgHasBeenSet() const
{
    return m_jobStatusMsgHasBeenSet;
}

string QueryHunyuanImageChatJobResponse::GetJobErrorCode() const
{
    return m_jobErrorCode;
}

bool QueryHunyuanImageChatJobResponse::JobErrorCodeHasBeenSet() const
{
    return m_jobErrorCodeHasBeenSet;
}

string QueryHunyuanImageChatJobResponse::GetJobErrorMsg() const
{
    return m_jobErrorMsg;
}

bool QueryHunyuanImageChatJobResponse::JobErrorMsgHasBeenSet() const
{
    return m_jobErrorMsgHasBeenSet;
}

string QueryHunyuanImageChatJobResponse::GetChatId() const
{
    return m_chatId;
}

bool QueryHunyuanImageChatJobResponse::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

vector<string> QueryHunyuanImageChatJobResponse::GetResultImage() const
{
    return m_resultImage;
}

bool QueryHunyuanImageChatJobResponse::ResultImageHasBeenSet() const
{
    return m_resultImageHasBeenSet;
}

vector<string> QueryHunyuanImageChatJobResponse::GetResultDetails() const
{
    return m_resultDetails;
}

bool QueryHunyuanImageChatJobResponse::ResultDetailsHasBeenSet() const
{
    return m_resultDetailsHasBeenSet;
}

vector<History> QueryHunyuanImageChatJobResponse::GetHistory() const
{
    return m_history;
}

bool QueryHunyuanImageChatJobResponse::HistoryHasBeenSet() const
{
    return m_historyHasBeenSet;
}


