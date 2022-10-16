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

#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetWebVerificationResultResponse::GetWebVerificationResultResponse() :
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_videoBestFrameUrlHasBeenSet(false),
    m_videoBestFrameMd5HasBeenSet(false),
    m_verificationDetailListHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_videoMd5HasBeenSet(false)
{
}

CoreInternalOutcome GetWebVerificationResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("VideoBestFrameUrl") && !rsp["VideoBestFrameUrl"].IsNull())
    {
        if (!rsp["VideoBestFrameUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBestFrameUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoBestFrameUrl = string(rsp["VideoBestFrameUrl"].GetString());
        m_videoBestFrameUrlHasBeenSet = true;
    }

    if (rsp.HasMember("VideoBestFrameMd5") && !rsp["VideoBestFrameMd5"].IsNull())
    {
        if (!rsp["VideoBestFrameMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBestFrameMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoBestFrameMd5 = string(rsp["VideoBestFrameMd5"].GetString());
        m_videoBestFrameMd5HasBeenSet = true;
    }

    if (rsp.HasMember("VerificationDetailList") && !rsp["VerificationDetailList"].IsNull())
    {
        if (!rsp["VerificationDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VerificationDetailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VerificationDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VerificationDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_verificationDetailList.push_back(item);
        }
        m_verificationDetailListHasBeenSet = true;
    }

    if (rsp.HasMember("VideoUrl") && !rsp["VideoUrl"].IsNull())
    {
        if (!rsp["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(rsp["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (rsp.HasMember("VideoMd5") && !rsp["VideoMd5"].IsNull())
    {
        if (!rsp["VideoMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoMd5 = string(rsp["VideoMd5"].GetString());
        m_videoMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetWebVerificationResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_videoBestFrameUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBestFrameUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoBestFrameUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoBestFrameMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBestFrameMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoBestFrameMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_verificationDetailList.begin(); itr != m_verificationDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoMd5.c_str(), allocator).Move(), allocator);
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


int64_t GetWebVerificationResultResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool GetWebVerificationResultResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string GetWebVerificationResultResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool GetWebVerificationResultResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string GetWebVerificationResultResponse::GetVideoBestFrameUrl() const
{
    return m_videoBestFrameUrl;
}

bool GetWebVerificationResultResponse::VideoBestFrameUrlHasBeenSet() const
{
    return m_videoBestFrameUrlHasBeenSet;
}

string GetWebVerificationResultResponse::GetVideoBestFrameMd5() const
{
    return m_videoBestFrameMd5;
}

bool GetWebVerificationResultResponse::VideoBestFrameMd5HasBeenSet() const
{
    return m_videoBestFrameMd5HasBeenSet;
}

vector<VerificationDetail> GetWebVerificationResultResponse::GetVerificationDetailList() const
{
    return m_verificationDetailList;
}

bool GetWebVerificationResultResponse::VerificationDetailListHasBeenSet() const
{
    return m_verificationDetailListHasBeenSet;
}

string GetWebVerificationResultResponse::GetVideoUrl() const
{
    return m_videoUrl;
}

bool GetWebVerificationResultResponse::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string GetWebVerificationResultResponse::GetVideoMd5() const
{
    return m_videoMd5;
}

bool GetWebVerificationResultResponse::VideoMd5HasBeenSet() const
{
    return m_videoMd5HasBeenSet;
}


