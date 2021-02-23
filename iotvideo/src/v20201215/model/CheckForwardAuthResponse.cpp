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

#include <tencentcloud/iotvideo/v20201215/model/CheckForwardAuthResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

CheckForwardAuthResponse::CheckForwardAuthResponse() :
    m_endpointHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_productidHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_queueTypeHasBeenSet(false)
{
}

CoreInternalOutcome CheckForwardAuthResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Endpoint") && !rsp["Endpoint"].IsNull())
    {
        if (!rsp["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(rsp["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Productid") && !rsp["Productid"].IsNull())
    {
        if (!rsp["Productid"].IsString())
        {
            return CoreInternalOutcome(Error("response `Productid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productid = string(rsp["Productid"].GetString());
        m_productidHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMsg") && !rsp["ErrMsg"].IsNull())
    {
        if (!rsp["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(rsp["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (rsp.HasMember("QueueType") && !rsp["QueueType"].IsNull())
    {
        if (!rsp["QueueType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `QueueType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = rsp["QueueType"].GetUint64();
        m_queueTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CheckForwardAuthResponse::GetEndpoint() const
{
    return m_endpoint;
}

bool CheckForwardAuthResponse::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

uint64_t CheckForwardAuthResponse::GetResult() const
{
    return m_result;
}

bool CheckForwardAuthResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CheckForwardAuthResponse::GetProductid() const
{
    return m_productid;
}

bool CheckForwardAuthResponse::ProductidHasBeenSet() const
{
    return m_productidHasBeenSet;
}

string CheckForwardAuthResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool CheckForwardAuthResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

uint64_t CheckForwardAuthResponse::GetQueueType() const
{
    return m_queueType;
}

bool CheckForwardAuthResponse::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}


