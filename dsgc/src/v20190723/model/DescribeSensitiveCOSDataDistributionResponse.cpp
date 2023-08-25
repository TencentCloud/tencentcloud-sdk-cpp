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

#include <tencentcloud/dsgc/v20190723/model/DescribeSensitiveCOSDataDistributionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeSensitiveCOSDataDistributionResponse::DescribeSensitiveCOSDataDistributionResponse() :
    m_levelDistributionHasBeenSet(false),
    m_categoryDistributionHasBeenSet(false),
    m_ruleDistributionHasBeenSet(false),
    m_sensitiveDataNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSensitiveCOSDataDistributionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LevelDistribution") && !rsp["LevelDistribution"].IsNull())
    {
        if (!rsp["LevelDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LevelDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LevelDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_levelDistribution.push_back(item);
        }
        m_levelDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("CategoryDistribution") && !rsp["CategoryDistribution"].IsNull())
    {
        if (!rsp["CategoryDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CategoryDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDistribution.push_back(item);
        }
        m_categoryDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("RuleDistribution") && !rsp["RuleDistribution"].IsNull())
    {
        if (!rsp["RuleDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RuleDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleDistribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleDistribution.push_back(item);
        }
        m_ruleDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("SensitiveDataNum") && !rsp["SensitiveDataNum"].IsNull())
    {
        if (!rsp["SensitiveDataNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveDataNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataNum = rsp["SensitiveDataNum"].GetInt64();
        m_sensitiveDataNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSensitiveCOSDataDistributionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_levelDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_levelDistribution.begin(); itr != m_levelDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_categoryDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDistribution.begin(); itr != m_categoryDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleDistribution.begin(); itr != m_ruleDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sensitiveDataNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataNum, allocator);
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


vector<Note> DescribeSensitiveCOSDataDistributionResponse::GetLevelDistribution() const
{
    return m_levelDistribution;
}

bool DescribeSensitiveCOSDataDistributionResponse::LevelDistributionHasBeenSet() const
{
    return m_levelDistributionHasBeenSet;
}

vector<Note> DescribeSensitiveCOSDataDistributionResponse::GetCategoryDistribution() const
{
    return m_categoryDistribution;
}

bool DescribeSensitiveCOSDataDistributionResponse::CategoryDistributionHasBeenSet() const
{
    return m_categoryDistributionHasBeenSet;
}

vector<RuleDistribution> DescribeSensitiveCOSDataDistributionResponse::GetRuleDistribution() const
{
    return m_ruleDistribution;
}

bool DescribeSensitiveCOSDataDistributionResponse::RuleDistributionHasBeenSet() const
{
    return m_ruleDistributionHasBeenSet;
}

int64_t DescribeSensitiveCOSDataDistributionResponse::GetSensitiveDataNum() const
{
    return m_sensitiveDataNum;
}

bool DescribeSensitiveCOSDataDistributionResponse::SensitiveDataNumHasBeenSet() const
{
    return m_sensitiveDataNumHasBeenSet;
}


