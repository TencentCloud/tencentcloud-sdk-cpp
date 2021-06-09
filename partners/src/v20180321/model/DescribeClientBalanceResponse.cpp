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

#include <tencentcloud/partners/v20180321/model/DescribeClientBalanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeClientBalanceResponse::DescribeClientBalanceResponse() :
    m_balanceHasBeenSet(false),
    m_cashHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClientBalanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Balance") && !rsp["Balance"].IsNull())
    {
        if (!rsp["Balance"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Balance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_balance = rsp["Balance"].GetUint64();
        m_balanceHasBeenSet = true;
    }

    if (rsp.HasMember("Cash") && !rsp["Cash"].IsNull())
    {
        if (!rsp["Cash"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cash` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cash = rsp["Cash"].GetInt64();
        m_cashHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeClientBalanceResponse::GetBalance() const
{
    return m_balance;
}

bool DescribeClientBalanceResponse::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

int64_t DescribeClientBalanceResponse::GetCash() const
{
    return m_cash;
}

bool DescribeClientBalanceResponse::CashHasBeenSet() const
{
    return m_cashHasBeenSet;
}


