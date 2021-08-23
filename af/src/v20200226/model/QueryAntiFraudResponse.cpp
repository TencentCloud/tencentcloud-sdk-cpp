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

#include <tencentcloud/af/v20200226/model/QueryAntiFraudResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

QueryAntiFraudResponse::QueryAntiFraudResponse() :
    m_foundHasBeenSet(false),
    m_idFoundHasBeenSet(false),
    m_riskScoreHasBeenSet(false),
    m_riskInfoHasBeenSet(false),
    m_codeDescHasBeenSet(false)
{
}

CoreInternalOutcome QueryAntiFraudResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Found") && !rsp["Found"].IsNull())
    {
        if (!rsp["Found"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Found` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_found = rsp["Found"].GetInt64();
        m_foundHasBeenSet = true;
    }

    if (rsp.HasMember("IdFound") && !rsp["IdFound"].IsNull())
    {
        if (!rsp["IdFound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdFound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idFound = rsp["IdFound"].GetInt64();
        m_idFoundHasBeenSet = true;
    }

    if (rsp.HasMember("RiskScore") && !rsp["RiskScore"].IsNull())
    {
        if (!rsp["RiskScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = rsp["RiskScore"].GetUint64();
        m_riskScoreHasBeenSet = true;
    }

    if (rsp.HasMember("RiskInfo") && !rsp["RiskInfo"].IsNull())
    {
        if (!rsp["RiskInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskInfo.push_back(item);
        }
        m_riskInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CodeDesc") && !rsp["CodeDesc"].IsNull())
    {
        if (!rsp["CodeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeDesc = string(rsp["CodeDesc"].GetString());
        m_codeDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryAntiFraudResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_foundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Found";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_found, allocator);
    }

    if (m_idFoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdFound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idFound, allocator);
    }

    if (m_riskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskScore, allocator);
    }

    if (m_riskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskInfo.begin(); itr != m_riskInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_codeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeDesc.c_str(), allocator).Move(), allocator);
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


int64_t QueryAntiFraudResponse::GetFound() const
{
    return m_found;
}

bool QueryAntiFraudResponse::FoundHasBeenSet() const
{
    return m_foundHasBeenSet;
}

int64_t QueryAntiFraudResponse::GetIdFound() const
{
    return m_idFound;
}

bool QueryAntiFraudResponse::IdFoundHasBeenSet() const
{
    return m_idFoundHasBeenSet;
}

uint64_t QueryAntiFraudResponse::GetRiskScore() const
{
    return m_riskScore;
}

bool QueryAntiFraudResponse::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

vector<RiskDetail> QueryAntiFraudResponse::GetRiskInfo() const
{
    return m_riskInfo;
}

bool QueryAntiFraudResponse::RiskInfoHasBeenSet() const
{
    return m_riskInfoHasBeenSet;
}

string QueryAntiFraudResponse::GetCodeDesc() const
{
    return m_codeDesc;
}

bool QueryAntiFraudResponse::CodeDescHasBeenSet() const
{
    return m_codeDescHasBeenSet;
}


