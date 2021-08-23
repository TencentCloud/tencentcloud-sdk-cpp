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

#include <tencentcloud/cdn/v20180606/model/ClsSearchLogs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ClsSearchLogs::ClsSearchLogs() :
    m_contextHasBeenSet(false),
    m_listoverHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
}

CoreInternalOutcome ClsSearchLogs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsSearchLogs.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (value.HasMember("Listover") && !value["Listover"].IsNull())
    {
        if (!value["Listover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClsSearchLogs.Listover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listover = value["Listover"].GetBool();
        m_listoverHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClsSearchLogs.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClsLogObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClsSearchLogs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_listoverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Listover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listover, allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_results.begin(); itr != m_results.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ClsSearchLogs::GetContext() const
{
    return m_context;
}

void ClsSearchLogs::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool ClsSearchLogs::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

bool ClsSearchLogs::GetListover() const
{
    return m_listover;
}

void ClsSearchLogs::SetListover(const bool& _listover)
{
    m_listover = _listover;
    m_listoverHasBeenSet = true;
}

bool ClsSearchLogs::ListoverHasBeenSet() const
{
    return m_listoverHasBeenSet;
}

vector<ClsLogObject> ClsSearchLogs::GetResults() const
{
    return m_results;
}

void ClsSearchLogs::SetResults(const vector<ClsLogObject>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool ClsSearchLogs::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

