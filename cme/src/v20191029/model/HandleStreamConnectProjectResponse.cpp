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

#include <tencentcloud/cme/v20191029/model/HandleStreamConnectProjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

HandleStreamConnectProjectResponse::HandleStreamConnectProjectResponse() :
    m_streamInputRtmpPushUrlHasBeenSet(false),
    m_vodPullInputPlayInfoHasBeenSet(false)
{
}

CoreInternalOutcome HandleStreamConnectProjectResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StreamInputRtmpPushUrl") && !rsp["StreamInputRtmpPushUrl"].IsNull())
    {
        if (!rsp["StreamInputRtmpPushUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamInputRtmpPushUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamInputRtmpPushUrl = string(rsp["StreamInputRtmpPushUrl"].GetString());
        m_streamInputRtmpPushUrlHasBeenSet = true;
    }

    if (rsp.HasMember("VodPullInputPlayInfo") && !rsp["VodPullInputPlayInfo"].IsNull())
    {
        if (!rsp["VodPullInputPlayInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VodPullInputPlayInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vodPullInputPlayInfo.Deserialize(rsp["VodPullInputPlayInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vodPullInputPlayInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string HandleStreamConnectProjectResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_streamInputRtmpPushUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamInputRtmpPushUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamInputRtmpPushUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vodPullInputPlayInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodPullInputPlayInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vodPullInputPlayInfo.ToJsonObject(value[key.c_str()], allocator);
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


string HandleStreamConnectProjectResponse::GetStreamInputRtmpPushUrl() const
{
    return m_streamInputRtmpPushUrl;
}

bool HandleStreamConnectProjectResponse::StreamInputRtmpPushUrlHasBeenSet() const
{
    return m_streamInputRtmpPushUrlHasBeenSet;
}

VodPullInputPlayInfo HandleStreamConnectProjectResponse::GetVodPullInputPlayInfo() const
{
    return m_vodPullInputPlayInfo;
}

bool HandleStreamConnectProjectResponse::VodPullInputPlayInfoHasBeenSet() const
{
    return m_vodPullInputPlayInfoHasBeenSet;
}


