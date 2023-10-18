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

#include <tencentcloud/oceanus/v20190422/model/FetchSqlGatewayStatementResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

FetchSqlGatewayStatementResultResponse::FetchSqlGatewayStatementResultResponse() :
    m_errorMessageHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_isQueryResultHasBeenSet(false),
    m_resultKindHasBeenSet(false),
    m_resultsHasBeenSet(false),
    m_nextResultUriHasBeenSet(false)
{
}

CoreInternalOutcome FetchSqlGatewayStatementResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ErrorMessage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorMessage.push_back((*itr).GetString());
        }
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("ResultType") && !rsp["ResultType"].IsNull())
    {
        if (!rsp["ResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = string(rsp["ResultType"].GetString());
        m_resultTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IsQueryResult") && !rsp["IsQueryResult"].IsNull())
    {
        if (!rsp["IsQueryResult"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsQueryResult` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQueryResult = rsp["IsQueryResult"].GetBool();
        m_isQueryResultHasBeenSet = true;
    }

    if (rsp.HasMember("ResultKind") && !rsp["ResultKind"].IsNull())
    {
        if (!rsp["ResultKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultKind = string(rsp["ResultKind"].GetString());
        m_resultKindHasBeenSet = true;
    }

    if (rsp.HasMember("Results") && !rsp["Results"].IsNull())
    {
        if (!rsp["Results"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Results` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_results.Deserialize(rsp["Results"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultsHasBeenSet = true;
    }

    if (rsp.HasMember("NextResultUri") && !rsp["NextResultUri"].IsNull())
    {
        if (!rsp["NextResultUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextResultUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextResultUri = string(rsp["NextResultUri"].GetString());
        m_nextResultUriHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string FetchSqlGatewayStatementResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorMessage.begin(); itr != m_errorMessage.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultType.c_str(), allocator).Move(), allocator);
    }

    if (m_isQueryResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQueryResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQueryResult, allocator);
    }

    if (m_resultKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultKind.c_str(), allocator).Move(), allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_results.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nextResultUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextResultUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextResultUri.c_str(), allocator).Move(), allocator);
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


vector<string> FetchSqlGatewayStatementResultResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool FetchSqlGatewayStatementResultResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string FetchSqlGatewayStatementResultResponse::GetResultType() const
{
    return m_resultType;
}

bool FetchSqlGatewayStatementResultResponse::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

bool FetchSqlGatewayStatementResultResponse::GetIsQueryResult() const
{
    return m_isQueryResult;
}

bool FetchSqlGatewayStatementResultResponse::IsQueryResultHasBeenSet() const
{
    return m_isQueryResultHasBeenSet;
}

string FetchSqlGatewayStatementResultResponse::GetResultKind() const
{
    return m_resultKind;
}

bool FetchSqlGatewayStatementResultResponse::ResultKindHasBeenSet() const
{
    return m_resultKindHasBeenSet;
}

StatementResult FetchSqlGatewayStatementResultResponse::GetResults() const
{
    return m_results;
}

bool FetchSqlGatewayStatementResultResponse::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

string FetchSqlGatewayStatementResultResponse::GetNextResultUri() const
{
    return m_nextResultUri;
}

bool FetchSqlGatewayStatementResultResponse::NextResultUriHasBeenSet() const
{
    return m_nextResultUriHasBeenSet;
}


