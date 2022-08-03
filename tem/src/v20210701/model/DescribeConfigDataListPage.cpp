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

#include <tencentcloud/tem/v20210701/model/DescribeConfigDataListPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DescribeConfigDataListPage::DescribeConfigDataListPage() :
    m_recordsHasBeenSet(false),
    m_continueTokenHasBeenSet(false),
    m_remainingCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigDataListPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeConfigDataListPage.Records` is not array type"));

        const rapidjson::Value &tmpValue = value["Records"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_records.push_back(item);
        }
        m_recordsHasBeenSet = true;
    }

    if (value.HasMember("ContinueToken") && !value["ContinueToken"].IsNull())
    {
        if (!value["ContinueToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConfigDataListPage.ContinueToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continueToken = string(value["ContinueToken"].GetString());
        m_continueTokenHasBeenSet = true;
    }

    if (value.HasMember("RemainingCount") && !value["RemainingCount"].IsNull())
    {
        if (!value["RemainingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConfigDataListPage.RemainingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingCount = value["RemainingCount"].GetInt64();
        m_remainingCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeConfigDataListPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Records";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_records.begin(); itr != m_records.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_continueTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinueToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continueToken.c_str(), allocator).Move(), allocator);
    }

    if (m_remainingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingCount, allocator);
    }

}


vector<ConfigData> DescribeConfigDataListPage::GetRecords() const
{
    return m_records;
}

void DescribeConfigDataListPage::SetRecords(const vector<ConfigData>& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool DescribeConfigDataListPage::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

string DescribeConfigDataListPage::GetContinueToken() const
{
    return m_continueToken;
}

void DescribeConfigDataListPage::SetContinueToken(const string& _continueToken)
{
    m_continueToken = _continueToken;
    m_continueTokenHasBeenSet = true;
}

bool DescribeConfigDataListPage::ContinueTokenHasBeenSet() const
{
    return m_continueTokenHasBeenSet;
}

int64_t DescribeConfigDataListPage::GetRemainingCount() const
{
    return m_remainingCount;
}

void DescribeConfigDataListPage::SetRemainingCount(const int64_t& _remainingCount)
{
    m_remainingCount = _remainingCount;
    m_remainingCountHasBeenSet = true;
}

bool DescribeConfigDataListPage::RemainingCountHasBeenSet() const
{
    return m_remainingCountHasBeenSet;
}

