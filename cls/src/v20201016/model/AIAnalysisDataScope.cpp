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

#include <tencentcloud/cls/v20201016/model/AIAnalysisDataScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AIAnalysisDataScope::AIAnalysisDataScope() :
    m_dataScopeEntryHasBeenSet(false),
    m_dataScopeTypeHasBeenSet(false)
{
}

CoreInternalOutcome AIAnalysisDataScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataScopeEntry") && !value["DataScopeEntry"].IsNull())
    {
        if (!value["DataScopeEntry"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIAnalysisDataScope.DataScopeEntry` is not array type"));

        const rapidjson::Value &tmpValue = value["DataScopeEntry"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIAnalysisDataScopeEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataScopeEntry.push_back(item);
        }
        m_dataScopeEntryHasBeenSet = true;
    }

    if (value.HasMember("DataScopeType") && !value["DataScopeType"].IsNull())
    {
        if (!value["DataScopeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysisDataScope.DataScopeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataScopeType = string(value["DataScopeType"].GetString());
        m_dataScopeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAnalysisDataScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataScopeEntryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataScopeEntry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataScopeEntry.begin(); itr != m_dataScopeEntry.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataScopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataScopeType.c_str(), allocator).Move(), allocator);
    }

}


vector<AIAnalysisDataScopeEntry> AIAnalysisDataScope::GetDataScopeEntry() const
{
    return m_dataScopeEntry;
}

void AIAnalysisDataScope::SetDataScopeEntry(const vector<AIAnalysisDataScopeEntry>& _dataScopeEntry)
{
    m_dataScopeEntry = _dataScopeEntry;
    m_dataScopeEntryHasBeenSet = true;
}

bool AIAnalysisDataScope::DataScopeEntryHasBeenSet() const
{
    return m_dataScopeEntryHasBeenSet;
}

string AIAnalysisDataScope::GetDataScopeType() const
{
    return m_dataScopeType;
}

void AIAnalysisDataScope::SetDataScopeType(const string& _dataScopeType)
{
    m_dataScopeType = _dataScopeType;
    m_dataScopeTypeHasBeenSet = true;
}

bool AIAnalysisDataScope::DataScopeTypeHasBeenSet() const
{
    return m_dataScopeTypeHasBeenSet;
}

