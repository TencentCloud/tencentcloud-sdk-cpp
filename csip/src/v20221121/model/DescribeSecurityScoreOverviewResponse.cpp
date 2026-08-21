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

#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSecurityScoreOverviewResponse::DescribeSecurityScoreOverviewResponse() :
    m_scoreHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_scoreStatusHasBeenSet(false),
    m_initialScoreHasBeenSet(false),
    m_riskCategoryCountHasBeenSet(false),
    m_deductScoreHasBeenSet(false),
    m_calculatedAtHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityScoreOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(rsp["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("ScoreStatus") && !rsp["ScoreStatus"].IsNull())
    {
        if (!rsp["ScoreStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scoreStatus = string(rsp["ScoreStatus"].GetString());
        m_scoreStatusHasBeenSet = true;
    }

    if (rsp.HasMember("InitialScore") && !rsp["InitialScore"].IsNull())
    {
        if (!rsp["InitialScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InitialScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialScore = rsp["InitialScore"].GetInt64();
        m_initialScoreHasBeenSet = true;
    }

    if (rsp.HasMember("RiskCategoryCount") && !rsp["RiskCategoryCount"].IsNull())
    {
        if (!rsp["RiskCategoryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCategoryCount = rsp["RiskCategoryCount"].GetInt64();
        m_riskCategoryCountHasBeenSet = true;
    }

    if (rsp.HasMember("DeductScore") && !rsp["DeductScore"].IsNull())
    {
        if (!rsp["DeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductScore = rsp["DeductScore"].GetInt64();
        m_deductScoreHasBeenSet = true;
    }

    if (rsp.HasMember("CalculatedAt") && !rsp["CalculatedAt"].IsNull())
    {
        if (!rsp["CalculatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CalculatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calculatedAt = string(rsp["CalculatedAt"].GetString());
        m_calculatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("Dimensions") && !rsp["Dimensions"].IsNull())
    {
        if (!rsp["Dimensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Dimensions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Dimensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DimensionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimensions.push_back(item);
        }
        m_dimensionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecurityScoreOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scoreStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_initialScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialScore, allocator);
    }

    if (m_riskCategoryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCategoryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCategoryCount, allocator);
    }

    if (m_deductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductScore, allocator);
    }

    if (m_calculatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalculatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calculatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


int64_t DescribeSecurityScoreOverviewResponse::GetScore() const
{
    return m_score;
}

bool DescribeSecurityScoreOverviewResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string DescribeSecurityScoreOverviewResponse::GetLevel() const
{
    return m_level;
}

bool DescribeSecurityScoreOverviewResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeSecurityScoreOverviewResponse::GetScoreStatus() const
{
    return m_scoreStatus;
}

bool DescribeSecurityScoreOverviewResponse::ScoreStatusHasBeenSet() const
{
    return m_scoreStatusHasBeenSet;
}

int64_t DescribeSecurityScoreOverviewResponse::GetInitialScore() const
{
    return m_initialScore;
}

bool DescribeSecurityScoreOverviewResponse::InitialScoreHasBeenSet() const
{
    return m_initialScoreHasBeenSet;
}

int64_t DescribeSecurityScoreOverviewResponse::GetRiskCategoryCount() const
{
    return m_riskCategoryCount;
}

bool DescribeSecurityScoreOverviewResponse::RiskCategoryCountHasBeenSet() const
{
    return m_riskCategoryCountHasBeenSet;
}

int64_t DescribeSecurityScoreOverviewResponse::GetDeductScore() const
{
    return m_deductScore;
}

bool DescribeSecurityScoreOverviewResponse::DeductScoreHasBeenSet() const
{
    return m_deductScoreHasBeenSet;
}

string DescribeSecurityScoreOverviewResponse::GetCalculatedAt() const
{
    return m_calculatedAt;
}

bool DescribeSecurityScoreOverviewResponse::CalculatedAtHasBeenSet() const
{
    return m_calculatedAtHasBeenSet;
}

vector<DimensionItem> DescribeSecurityScoreOverviewResponse::GetDimensions() const
{
    return m_dimensions;
}

bool DescribeSecurityScoreOverviewResponse::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}


