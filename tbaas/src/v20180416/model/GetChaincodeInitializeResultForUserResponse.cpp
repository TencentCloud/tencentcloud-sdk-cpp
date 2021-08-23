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

#include <tencentcloud/tbaas/v20180416/model/GetChaincodeInitializeResultForUserResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetChaincodeInitializeResultForUserResponse::GetChaincodeInitializeResultForUserResponse() :
    m_initResultHasBeenSet(false),
    m_initMessageHasBeenSet(false)
{
}

CoreInternalOutcome GetChaincodeInitializeResultForUserResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InitResult") && !rsp["InitResult"].IsNull())
    {
        if (!rsp["InitResult"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InitResult` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_initResult = rsp["InitResult"].GetUint64();
        m_initResultHasBeenSet = true;
    }

    if (rsp.HasMember("InitMessage") && !rsp["InitMessage"].IsNull())
    {
        if (!rsp["InitMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InitMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initMessage = string(rsp["InitMessage"].GetString());
        m_initMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetChaincodeInitializeResultForUserResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_initResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initResult, allocator);
    }

    if (m_initMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initMessage.c_str(), allocator).Move(), allocator);
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


uint64_t GetChaincodeInitializeResultForUserResponse::GetInitResult() const
{
    return m_initResult;
}

bool GetChaincodeInitializeResultForUserResponse::InitResultHasBeenSet() const
{
    return m_initResultHasBeenSet;
}

string GetChaincodeInitializeResultForUserResponse::GetInitMessage() const
{
    return m_initMessage;
}

bool GetChaincodeInitializeResultForUserResponse::InitMessageHasBeenSet() const
{
    return m_initMessageHasBeenSet;
}


