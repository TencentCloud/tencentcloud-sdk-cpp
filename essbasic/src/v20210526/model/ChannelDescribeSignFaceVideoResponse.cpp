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

#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeSignFaceVideoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelDescribeSignFaceVideoResponse::ChannelDescribeSignFaceVideoResponse() :
    m_videoDataHasBeenSet(false),
    m_intentionQuestionResultHasBeenSet(false),
    m_intentionActionResultHasBeenSet(false)
{
}

CoreInternalOutcome ChannelDescribeSignFaceVideoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VideoData") && !rsp["VideoData"].IsNull())
    {
        if (!rsp["VideoData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoData.Deserialize(rsp["VideoData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoDataHasBeenSet = true;
    }

    if (rsp.HasMember("IntentionQuestionResult") && !rsp["IntentionQuestionResult"].IsNull())
    {
        if (!rsp["IntentionQuestionResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionQuestionResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intentionQuestionResult.Deserialize(rsp["IntentionQuestionResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intentionQuestionResultHasBeenSet = true;
    }

    if (rsp.HasMember("IntentionActionResult") && !rsp["IntentionActionResult"].IsNull())
    {
        if (!rsp["IntentionActionResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionActionResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intentionActionResult.Deserialize(rsp["IntentionActionResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intentionActionResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ChannelDescribeSignFaceVideoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_videoDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intentionQuestionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionQuestionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intentionQuestionResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intentionActionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionActionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intentionActionResult.ToJsonObject(value[key.c_str()], allocator);
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


DetectInfoVideoData ChannelDescribeSignFaceVideoResponse::GetVideoData() const
{
    return m_videoData;
}

bool ChannelDescribeSignFaceVideoResponse::VideoDataHasBeenSet() const
{
    return m_videoDataHasBeenSet;
}

IntentionQuestionResult ChannelDescribeSignFaceVideoResponse::GetIntentionQuestionResult() const
{
    return m_intentionQuestionResult;
}

bool ChannelDescribeSignFaceVideoResponse::IntentionQuestionResultHasBeenSet() const
{
    return m_intentionQuestionResultHasBeenSet;
}

IntentionActionResult ChannelDescribeSignFaceVideoResponse::GetIntentionActionResult() const
{
    return m_intentionActionResult;
}

bool ChannelDescribeSignFaceVideoResponse::IntentionActionResultHasBeenSet() const
{
    return m_intentionActionResultHasBeenSet;
}


