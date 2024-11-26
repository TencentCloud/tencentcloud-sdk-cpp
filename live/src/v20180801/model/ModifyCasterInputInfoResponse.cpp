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

#include <tencentcloud/live/v20180801/model/ModifyCasterInputInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyCasterInputInfoResponse::ModifyCasterInputInfoResponse() :
    m_inputPlayUrlHasBeenSet(false),
    m_inputWebRTCPlayUrlHasBeenSet(false)
{
}

CoreInternalOutcome ModifyCasterInputInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InputPlayUrl") && !rsp["InputPlayUrl"].IsNull())
    {
        if (!rsp["InputPlayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputPlayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPlayUrl = string(rsp["InputPlayUrl"].GetString());
        m_inputPlayUrlHasBeenSet = true;
    }

    if (rsp.HasMember("InputWebRTCPlayUrl") && !rsp["InputWebRTCPlayUrl"].IsNull())
    {
        if (!rsp["InputWebRTCPlayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputWebRTCPlayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputWebRTCPlayUrl = string(rsp["InputWebRTCPlayUrl"].GetString());
        m_inputWebRTCPlayUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyCasterInputInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_inputPlayUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputPlayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputPlayUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_inputWebRTCPlayUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputWebRTCPlayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputWebRTCPlayUrl.c_str(), allocator).Move(), allocator);
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


string ModifyCasterInputInfoResponse::GetInputPlayUrl() const
{
    return m_inputPlayUrl;
}

bool ModifyCasterInputInfoResponse::InputPlayUrlHasBeenSet() const
{
    return m_inputPlayUrlHasBeenSet;
}

string ModifyCasterInputInfoResponse::GetInputWebRTCPlayUrl() const
{
    return m_inputWebRTCPlayUrl;
}

bool ModifyCasterInputInfoResponse::InputWebRTCPlayUrlHasBeenSet() const
{
    return m_inputWebRTCPlayUrlHasBeenSet;
}


