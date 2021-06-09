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

#include <tencentcloud/iotvideo/v20201215/model/DeleteForwardRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DeleteForwardRuleResponse::DeleteForwardRuleResponse() :
    m_endpointHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_productIDHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome DeleteForwardRuleResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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

    if (rsp.HasMember("QueueName") && !rsp["QueueName"].IsNull())
    {
        if (!rsp["QueueName"].IsString())
        {
            return CoreInternalOutcome(Error("response `QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(rsp["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProductID") && !rsp["ProductID"].IsNull())
    {
        if (!rsp["ProductID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productID = string(rsp["ProductID"].GetString());
        m_productIDHasBeenSet = true;
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

    if (rsp.HasMember("ErrMsg") && !rsp["ErrMsg"].IsNull())
    {
        if (!rsp["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(rsp["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DeleteForwardRuleResponse::GetEndpoint() const
{
    return m_endpoint;
}

bool DeleteForwardRuleResponse::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string DeleteForwardRuleResponse::GetQueueName() const
{
    return m_queueName;
}

bool DeleteForwardRuleResponse::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string DeleteForwardRuleResponse::GetProductID() const
{
    return m_productID;
}

bool DeleteForwardRuleResponse::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

uint64_t DeleteForwardRuleResponse::GetResult() const
{
    return m_result;
}

bool DeleteForwardRuleResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DeleteForwardRuleResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool DeleteForwardRuleResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}


