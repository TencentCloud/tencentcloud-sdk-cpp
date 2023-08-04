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

#include <tencentcloud/iss/v20230517/model/ControlDeviceStreamResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlDeviceStreamResponse::ControlDeviceStreamResponse() :
    m_flvHasBeenSet(false),
    m_hlsHasBeenSet(false),
    m_rtmpHasBeenSet(false)
{
}

CoreInternalOutcome ControlDeviceStreamResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Flv") && !rsp["Flv"].IsNull())
    {
        if (!rsp["Flv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Flv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flv = string(rsp["Flv"].GetString());
        m_flvHasBeenSet = true;
    }

    if (rsp.HasMember("Hls") && !rsp["Hls"].IsNull())
    {
        if (!rsp["Hls"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hls` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hls = string(rsp["Hls"].GetString());
        m_hlsHasBeenSet = true;
    }

    if (rsp.HasMember("Rtmp") && !rsp["Rtmp"].IsNull())
    {
        if (!rsp["Rtmp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rtmp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rtmp = string(rsp["Rtmp"].GetString());
        m_rtmpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ControlDeviceStreamResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flv.c_str(), allocator).Move(), allocator);
    }

    if (m_hlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hls.c_str(), allocator).Move(), allocator);
    }

    if (m_rtmpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rtmp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rtmp.c_str(), allocator).Move(), allocator);
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


string ControlDeviceStreamResponse::GetFlv() const
{
    return m_flv;
}

bool ControlDeviceStreamResponse::FlvHasBeenSet() const
{
    return m_flvHasBeenSet;
}

string ControlDeviceStreamResponse::GetHls() const
{
    return m_hls;
}

bool ControlDeviceStreamResponse::HlsHasBeenSet() const
{
    return m_hlsHasBeenSet;
}

string ControlDeviceStreamResponse::GetRtmp() const
{
    return m_rtmp;
}

bool ControlDeviceStreamResponse::RtmpHasBeenSet() const
{
    return m_rtmpHasBeenSet;
}


