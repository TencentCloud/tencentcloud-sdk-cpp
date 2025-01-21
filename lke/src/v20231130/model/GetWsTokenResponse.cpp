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

#include <tencentcloud/lke/v20231130/model/GetWsTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetWsTokenResponse::GetWsTokenResponse() :
    m_tokenHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_inputLenLimitHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_singleWorkflowHasBeenSet(false)
{
}

CoreInternalOutcome GetWsTokenResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(rsp["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (rsp.HasMember("Balance") && !rsp["Balance"].IsNull())
    {
        if (!rsp["Balance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Balance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_balance = rsp["Balance"].GetDouble();
        m_balanceHasBeenSet = true;
    }

    if (rsp.HasMember("InputLenLimit") && !rsp["InputLenLimit"].IsNull())
    {
        if (!rsp["InputLenLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputLenLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputLenLimit = rsp["InputLenLimit"].GetInt64();
        m_inputLenLimitHasBeenSet = true;
    }

    if (rsp.HasMember("Pattern") && !rsp["Pattern"].IsNull())
    {
        if (!rsp["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(rsp["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (rsp.HasMember("SingleWorkflow") && !rsp["SingleWorkflow"].IsNull())
    {
        if (!rsp["SingleWorkflow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleWorkflow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_singleWorkflow.Deserialize(rsp["SingleWorkflow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_singleWorkflowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetWsTokenResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balance, allocator);
    }

    if (m_inputLenLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputLenLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputLenLimit, allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_singleWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_singleWorkflow.ToJsonObject(value[key.c_str()], allocator);
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


string GetWsTokenResponse::GetToken() const
{
    return m_token;
}

bool GetWsTokenResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

double GetWsTokenResponse::GetBalance() const
{
    return m_balance;
}

bool GetWsTokenResponse::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

int64_t GetWsTokenResponse::GetInputLenLimit() const
{
    return m_inputLenLimit;
}

bool GetWsTokenResponse::InputLenLimitHasBeenSet() const
{
    return m_inputLenLimitHasBeenSet;
}

string GetWsTokenResponse::GetPattern() const
{
    return m_pattern;
}

bool GetWsTokenResponse::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

KnowledgeQaSingleWorkflow GetWsTokenResponse::GetSingleWorkflow() const
{
    return m_singleWorkflow;
}

bool GetWsTokenResponse::SingleWorkflowHasBeenSet() const
{
    return m_singleWorkflowHasBeenSet;
}


