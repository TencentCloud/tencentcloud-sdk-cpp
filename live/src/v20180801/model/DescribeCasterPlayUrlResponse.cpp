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

#include <tencentcloud/live/v20180801/model/DescribeCasterPlayUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeCasterPlayUrlResponse::DescribeCasterPlayUrlResponse() :
    m_playUrlHasBeenSet(false),
    m_webRTCPlayUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCasterPlayUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PlayUrl") && !rsp["PlayUrl"].IsNull())
    {
        if (!rsp["PlayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playUrl = string(rsp["PlayUrl"].GetString());
        m_playUrlHasBeenSet = true;
    }

    if (rsp.HasMember("WebRTCPlayUrl") && !rsp["WebRTCPlayUrl"].IsNull())
    {
        if (!rsp["WebRTCPlayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebRTCPlayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webRTCPlayUrl = string(rsp["WebRTCPlayUrl"].GetString());
        m_webRTCPlayUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCasterPlayUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_playUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_webRTCPlayUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebRTCPlayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webRTCPlayUrl.c_str(), allocator).Move(), allocator);
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


string DescribeCasterPlayUrlResponse::GetPlayUrl() const
{
    return m_playUrl;
}

bool DescribeCasterPlayUrlResponse::PlayUrlHasBeenSet() const
{
    return m_playUrlHasBeenSet;
}

string DescribeCasterPlayUrlResponse::GetWebRTCPlayUrl() const
{
    return m_webRTCPlayUrl;
}

bool DescribeCasterPlayUrlResponse::WebRTCPlayUrlHasBeenSet() const
{
    return m_webRTCPlayUrlHasBeenSet;
}


