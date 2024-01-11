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

#include <tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CreateTDidByPubKeyResponse::CreateTDidByPubKeyResponse() :
    m_didHasBeenSet(false),
    m_transactionHasBeenSet(false)
{
}

CoreInternalOutcome CreateTDidByPubKeyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Did") && !rsp["Did"].IsNull())
    {
        if (!rsp["Did"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Did` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_did = string(rsp["Did"].GetString());
        m_didHasBeenSet = true;
    }

    if (rsp.HasMember("Transaction") && !rsp["Transaction"].IsNull())
    {
        if (!rsp["Transaction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transaction.Deserialize(rsp["Transaction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transactionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateTDidByPubKeyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transaction.ToJsonObject(value[key.c_str()], allocator);
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


string CreateTDidByPubKeyResponse::GetDid() const
{
    return m_did;
}

bool CreateTDidByPubKeyResponse::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

ChainTransaction CreateTDidByPubKeyResponse::GetTransaction() const
{
    return m_transaction;
}

bool CreateTDidByPubKeyResponse::TransactionHasBeenSet() const
{
    return m_transactionHasBeenSet;
}


