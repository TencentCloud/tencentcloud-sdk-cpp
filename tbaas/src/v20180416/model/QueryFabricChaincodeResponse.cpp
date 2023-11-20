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

#include <tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

QueryFabricChaincodeResponse::QueryFabricChaincodeResponse() :
    m_txIdHasBeenSet(false),
    m_txStatusHasBeenSet(false),
    m_txResultHasBeenSet(false)
{
}

CoreInternalOutcome QueryFabricChaincodeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TxId") && !rsp["TxId"].IsNull())
    {
        if (!rsp["TxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txId = string(rsp["TxId"].GetString());
        m_txIdHasBeenSet = true;
    }

    if (rsp.HasMember("TxStatus") && !rsp["TxStatus"].IsNull())
    {
        if (!rsp["TxStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txStatus = string(rsp["TxStatus"].GetString());
        m_txStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TxResult") && !rsp["TxResult"].IsNull())
    {
        if (!rsp["TxResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txResult = string(rsp["TxResult"].GetString());
        m_txResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryFabricChaincodeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_txIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txId.c_str(), allocator).Move(), allocator);
    }

    if (m_txStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_txResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txResult.c_str(), allocator).Move(), allocator);
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


string QueryFabricChaincodeResponse::GetTxId() const
{
    return m_txId;
}

bool QueryFabricChaincodeResponse::TxIdHasBeenSet() const
{
    return m_txIdHasBeenSet;
}

string QueryFabricChaincodeResponse::GetTxStatus() const
{
    return m_txStatus;
}

bool QueryFabricChaincodeResponse::TxStatusHasBeenSet() const
{
    return m_txStatusHasBeenSet;
}

string QueryFabricChaincodeResponse::GetTxResult() const
{
    return m_txResult;
}

bool QueryFabricChaincodeResponse::TxResultHasBeenSet() const
{
    return m_txResultHasBeenSet;
}


