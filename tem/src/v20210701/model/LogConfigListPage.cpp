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

#include <tencentcloud/tem/v20210701/model/LogConfigListPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

LogConfigListPage::LogConfigListPage() :
    m_recordsHasBeenSet(false),
    m_continueTokenHasBeenSet(false)
{
}

CoreInternalOutcome LogConfigListPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogConfigListPage.Records` is not array type"));

        const rapidjson::Value &tmpValue = value["Records"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogConfig item;
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
            return CoreInternalOutcome(Core::Error("response `LogConfigListPage.ContinueToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continueToken = string(value["ContinueToken"].GetString());
        m_continueTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogConfigListPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


vector<LogConfig> LogConfigListPage::GetRecords() const
{
    return m_records;
}

void LogConfigListPage::SetRecords(const vector<LogConfig>& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool LogConfigListPage::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

string LogConfigListPage::GetContinueToken() const
{
    return m_continueToken;
}

void LogConfigListPage::SetContinueToken(const string& _continueToken)
{
    m_continueToken = _continueToken;
    m_continueTokenHasBeenSet = true;
}

bool LogConfigListPage::ContinueTokenHasBeenSet() const
{
    return m_continueTokenHasBeenSet;
}

