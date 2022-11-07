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

#include <tencentcloud/wedata/v20210820/model/IntegrationStatisticsTrendResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IntegrationStatisticsTrendResult::IntegrationStatisticsTrendResult() :
    m_statisticNameHasBeenSet(false),
    m_statisticValueHasBeenSet(false),
    m_statisticTypeHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationStatisticsTrendResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatisticName") && !value["StatisticName"].IsNull())
    {
        if (!value["StatisticName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationStatisticsTrendResult.StatisticName` is not array type"));

        const rapidjson::Value &tmpValue = value["StatisticName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statisticName.push_back((*itr).GetString());
        }
        m_statisticNameHasBeenSet = true;
    }

    if (value.HasMember("StatisticValue") && !value["StatisticValue"].IsNull())
    {
        if (!value["StatisticValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationStatisticsTrendResult.StatisticValue` is not array type"));

        const rapidjson::Value &tmpValue = value["StatisticValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statisticValue.push_back((*itr).GetInt64());
        }
        m_statisticValueHasBeenSet = true;
    }

    if (value.HasMember("StatisticType") && !value["StatisticType"].IsNull())
    {
        if (!value["StatisticType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationStatisticsTrendResult.StatisticType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statisticType = string(value["StatisticType"].GetString());
        m_statisticTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationStatisticsTrendResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statisticNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statisticName.begin(); itr != m_statisticName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statisticValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statisticValue.begin(); itr != m_statisticValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statisticTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statisticType.c_str(), allocator).Move(), allocator);
    }

}


vector<string> IntegrationStatisticsTrendResult::GetStatisticName() const
{
    return m_statisticName;
}

void IntegrationStatisticsTrendResult::SetStatisticName(const vector<string>& _statisticName)
{
    m_statisticName = _statisticName;
    m_statisticNameHasBeenSet = true;
}

bool IntegrationStatisticsTrendResult::StatisticNameHasBeenSet() const
{
    return m_statisticNameHasBeenSet;
}

vector<int64_t> IntegrationStatisticsTrendResult::GetStatisticValue() const
{
    return m_statisticValue;
}

void IntegrationStatisticsTrendResult::SetStatisticValue(const vector<int64_t>& _statisticValue)
{
    m_statisticValue = _statisticValue;
    m_statisticValueHasBeenSet = true;
}

bool IntegrationStatisticsTrendResult::StatisticValueHasBeenSet() const
{
    return m_statisticValueHasBeenSet;
}

string IntegrationStatisticsTrendResult::GetStatisticType() const
{
    return m_statisticType;
}

void IntegrationStatisticsTrendResult::SetStatisticType(const string& _statisticType)
{
    m_statisticType = _statisticType;
    m_statisticTypeHasBeenSet = true;
}

bool IntegrationStatisticsTrendResult::StatisticTypeHasBeenSet() const
{
    return m_statisticTypeHasBeenSet;
}

