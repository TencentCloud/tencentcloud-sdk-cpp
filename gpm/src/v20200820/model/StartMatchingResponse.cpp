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

#include <tencentcloud/gpm/v20200820/model/StartMatchingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

StartMatchingResponse::StartMatchingResponse() :
    m_errCodeHasBeenSet(false),
    m_matchTicketIdHasBeenSet(false)
{
}

CoreInternalOutcome StartMatchingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrCode") && !rsp["ErrCode"].IsNull())
    {
        if (!rsp["ErrCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = rsp["ErrCode"].GetUint64();
        m_errCodeHasBeenSet = true;
    }

    if (rsp.HasMember("MatchTicketId") && !rsp["MatchTicketId"].IsNull())
    {
        if (!rsp["MatchTicketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchTicketId = string(rsp["MatchTicketId"].GetString());
        m_matchTicketIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string StartMatchingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_matchTicketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchTicketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchTicketId.c_str(), allocator).Move(), allocator);
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


uint64_t StartMatchingResponse::GetErrCode() const
{
    return m_errCode;
}

bool StartMatchingResponse::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string StartMatchingResponse::GetMatchTicketId() const
{
    return m_matchTicketId;
}

bool StartMatchingResponse::MatchTicketIdHasBeenSet() const
{
    return m_matchTicketIdHasBeenSet;
}


