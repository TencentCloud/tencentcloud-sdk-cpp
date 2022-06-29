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

#include <tencentcloud/tcb/v20180608/model/LogResObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

LogResObject::LogResObject() :
    m_contextHasBeenSet(false),
    m_listOverHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
}

CoreInternalOutcome LogResObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResObject.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (value.HasMember("ListOver") && !value["ListOver"].IsNull())
    {
        if (!value["ListOver"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogResObject.ListOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listOver = value["ListOver"].GetBool();
        m_listOverHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogResObject.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogObject item;
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

void LogResObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_listOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listOver, allocator);
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


string LogResObject::GetContext() const
{
    return m_context;
}

void LogResObject::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool LogResObject::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

bool LogResObject::GetListOver() const
{
    return m_listOver;
}

void LogResObject::SetListOver(const bool& _listOver)
{
    m_listOver = _listOver;
    m_listOverHasBeenSet = true;
}

bool LogResObject::ListOverHasBeenSet() const
{
    return m_listOverHasBeenSet;
}

vector<LogObject> LogResObject::GetResults() const
{
    return m_results;
}

void LogResObject::SetResults(const vector<LogObject>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool LogResObject::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

