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

#include <tencentcloud/iotvideo/v20191126/model/DescribeAccountBalanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

DescribeAccountBalanceResponse::DescribeAccountBalanceResponse() :
    m_accountTypeHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountBalanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AccountType") && !rsp["AccountType"].IsNull())
    {
        if (!rsp["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = rsp["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
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

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = rsp["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("LastUpdateTime") && !rsp["LastUpdateTime"].IsNull())
    {
        if (!rsp["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = rsp["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccountBalanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balance, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
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


int64_t DescribeAccountBalanceResponse::GetAccountType() const
{
    return m_accountType;
}

bool DescribeAccountBalanceResponse::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

int64_t DescribeAccountBalanceResponse::GetBalance() const
{
    return m_balance;
}

bool DescribeAccountBalanceResponse::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

int64_t DescribeAccountBalanceResponse::GetState() const
{
    return m_state;
}

bool DescribeAccountBalanceResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t DescribeAccountBalanceResponse::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

bool DescribeAccountBalanceResponse::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}


