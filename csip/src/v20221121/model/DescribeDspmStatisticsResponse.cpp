/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeDspmStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmStatisticsResponse::DescribeDspmStatisticsResponse() :
    m_assetCountHasBeenSet(false),
    m_ipCountHasBeenSet(false),
    m_userCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_analyseAssetStatusCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AssetCount") && !rsp["AssetCount"].IsNull())
    {
        if (!rsp["AssetCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetCount.Deserialize(rsp["AssetCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetCountHasBeenSet = true;
    }

    if (rsp.HasMember("IpCount") && !rsp["IpCount"].IsNull())
    {
        if (!rsp["IpCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IpCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipCount.Deserialize(rsp["IpCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipCountHasBeenSet = true;
    }

    if (rsp.HasMember("UserCount") && !rsp["UserCount"].IsNull())
    {
        if (!rsp["UserCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userCount.Deserialize(rsp["UserCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskCount") && !rsp["RiskCount"].IsNull())
    {
        if (!rsp["RiskCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskCount.Deserialize(rsp["RiskCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskCountHasBeenSet = true;
    }

    if (rsp.HasMember("AnalyseAssetStatusCount") && !rsp["AnalyseAssetStatusCount"].IsNull())
    {
        if (!rsp["AnalyseAssetStatusCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseAssetStatusCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_analyseAssetStatusCount.Deserialize(rsp["AnalyseAssetStatusCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_analyseAssetStatusCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDspmStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_analyseAssetStatusCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalyseAssetStatusCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_analyseAssetStatusCount.ToJsonObject(value[key.c_str()], allocator);
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


DspmAssetCount DescribeDspmStatisticsResponse::GetAssetCount() const
{
    return m_assetCount;
}

bool DescribeDspmStatisticsResponse::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

DspmIpCount DescribeDspmStatisticsResponse::GetIpCount() const
{
    return m_ipCount;
}

bool DescribeDspmStatisticsResponse::IpCountHasBeenSet() const
{
    return m_ipCountHasBeenSet;
}

DspmAccountCount DescribeDspmStatisticsResponse::GetUserCount() const
{
    return m_userCount;
}

bool DescribeDspmStatisticsResponse::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}

DspmRiskCount DescribeDspmStatisticsResponse::GetRiskCount() const
{
    return m_riskCount;
}

bool DescribeDspmStatisticsResponse::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

DspmSecurityAnalyseStatusCount DescribeDspmStatisticsResponse::GetAnalyseAssetStatusCount() const
{
    return m_analyseAssetStatusCount;
}

bool DescribeDspmStatisticsResponse::AnalyseAssetStatusCountHasBeenSet() const
{
    return m_analyseAssetStatusCountHasBeenSet;
}


