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

#include <tencentcloud/faceid/v20180301/model/GetSdkVerificationResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetSdkVerificationResultResponse::GetSdkVerificationResultResponse() :
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_chargeCountHasBeenSet(false),
    m_cardVerifyResultsHasBeenSet(false),
    m_compareResultsHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome GetSdkVerificationResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("ChargeCount") && !rsp["ChargeCount"].IsNull())
    {
        if (!rsp["ChargeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCount = rsp["ChargeCount"].GetInt64();
        m_chargeCountHasBeenSet = true;
    }

    if (rsp.HasMember("CardVerifyResults") && !rsp["CardVerifyResults"].IsNull())
    {
        if (!rsp["CardVerifyResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CardVerifyResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CardVerifyResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CardVerifyResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cardVerifyResults.push_back(item);
        }
        m_cardVerifyResultsHasBeenSet = true;
    }

    if (rsp.HasMember("CompareResults") && !rsp["CompareResults"].IsNull())
    {
        if (!rsp["CompareResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CompareResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompareResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_compareResults.push_back(item);
        }
        m_compareResultsHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetSdkVerificationResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeCount, allocator);
    }

    if (m_cardVerifyResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardVerifyResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cardVerifyResults.begin(); itr != m_cardVerifyResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_compareResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_compareResults.begin(); itr != m_compareResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
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


string GetSdkVerificationResultResponse::GetResult() const
{
    return m_result;
}

bool GetSdkVerificationResultResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string GetSdkVerificationResultResponse::GetDescription() const
{
    return m_description;
}

bool GetSdkVerificationResultResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t GetSdkVerificationResultResponse::GetChargeCount() const
{
    return m_chargeCount;
}

bool GetSdkVerificationResultResponse::ChargeCountHasBeenSet() const
{
    return m_chargeCountHasBeenSet;
}

vector<CardVerifyResult> GetSdkVerificationResultResponse::GetCardVerifyResults() const
{
    return m_cardVerifyResults;
}

bool GetSdkVerificationResultResponse::CardVerifyResultsHasBeenSet() const
{
    return m_cardVerifyResultsHasBeenSet;
}

vector<CompareResult> GetSdkVerificationResultResponse::GetCompareResults() const
{
    return m_compareResults;
}

bool GetSdkVerificationResultResponse::CompareResultsHasBeenSet() const
{
    return m_compareResultsHasBeenSet;
}

string GetSdkVerificationResultResponse::GetExtra() const
{
    return m_extra;
}

bool GetSdkVerificationResultResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


