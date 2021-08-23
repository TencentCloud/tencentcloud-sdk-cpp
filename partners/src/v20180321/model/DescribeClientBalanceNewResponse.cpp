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

#include <tencentcloud/partners/v20180321/model/DescribeClientBalanceNewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeClientBalanceNewResponse::DescribeClientBalanceNewResponse() :
    m_balanceHasBeenSet(false),
    m_cashHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClientBalanceNewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Balance") && !rsp["Balance"].IsNull())
    {
        if (!rsp["Balance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Balance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_balance = rsp["Balance"].GetInt64();
        m_balanceHasBeenSet = true;
    }

    if (rsp.HasMember("Cash") && !rsp["Cash"].IsNull())
    {
        if (!rsp["Cash"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cash` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cash = rsp["Cash"].GetInt64();
        m_cashHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClientBalanceNewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balance, allocator);
    }

    if (m_cashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cash, allocator);
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


int64_t DescribeClientBalanceNewResponse::GetBalance() const
{
    return m_balance;
}

bool DescribeClientBalanceNewResponse::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

int64_t DescribeClientBalanceNewResponse::GetCash() const
{
    return m_cash;
}

bool DescribeClientBalanceNewResponse::CashHasBeenSet() const
{
    return m_cashHasBeenSet;
}


