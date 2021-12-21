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

#include <tencentcloud/wav/v20210129/model/CreateLeadResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

CreateLeadResponse::CreateLeadResponse() :
    m_businessCodeHasBeenSet(false),
    m_businessMsgHasBeenSet(false)
{
}

CoreInternalOutcome CreateLeadResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BusinessCode") && !rsp["BusinessCode"].IsNull())
    {
        if (!rsp["BusinessCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = rsp["BusinessCode"].GetInt64();
        m_businessCodeHasBeenSet = true;
    }

    if (rsp.HasMember("BusinessMsg") && !rsp["BusinessMsg"].IsNull())
    {
        if (!rsp["BusinessMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessMsg = string(rsp["BusinessMsg"].GetString());
        m_businessMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateLeadResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessCode, allocator);
    }

    if (m_businessMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessMsg.c_str(), allocator).Move(), allocator);
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


int64_t CreateLeadResponse::GetBusinessCode() const
{
    return m_businessCode;
}

bool CreateLeadResponse::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string CreateLeadResponse::GetBusinessMsg() const
{
    return m_businessMsg;
}

bool CreateLeadResponse::BusinessMsgHasBeenSet() const
{
    return m_businessMsgHasBeenSet;
}


