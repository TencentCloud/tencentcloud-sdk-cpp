/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/essbasic/v20201222/model/SendFlowUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

SendFlowUrlResponse::SendFlowUrlResponse() :
    m_signIdHasBeenSet(false),
    m_signUrlHasBeenSet(false)
{
}

CoreInternalOutcome SendFlowUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SignId") && !rsp["SignId"].IsNull())
    {
        if (!rsp["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(rsp["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (rsp.HasMember("SignUrl") && !rsp["SignUrl"].IsNull())
    {
        if (!rsp["SignUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signUrl = string(rsp["SignUrl"].GetString());
        m_signUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SendFlowUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_signUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signUrl.c_str(), allocator).Move(), allocator);
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


string SendFlowUrlResponse::GetSignId() const
{
    return m_signId;
}

bool SendFlowUrlResponse::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string SendFlowUrlResponse::GetSignUrl() const
{
    return m_signUrl;
}

bool SendFlowUrlResponse::SignUrlHasBeenSet() const
{
    return m_signUrlHasBeenSet;
}


