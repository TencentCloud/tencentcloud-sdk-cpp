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

#include <tencentcloud/apigateway/v20180808/model/PluginSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

PluginSummary::PluginSummary() :
    m_totalCountHasBeenSet(false),
    m_pluginSetHasBeenSet(false)
{
}

CoreInternalOutcome PluginSummary::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PluginSummary.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("PluginSet") && !value["PluginSet"].IsNull())
    {
        if (!value["PluginSet"].IsArray())
            return CoreInternalOutcome(Error("response `PluginSummary.PluginSet` is not array type"));

        const Value &tmpValue = value["PluginSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Plugin item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginSet.push_back(item);
        }
        m_pluginSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginSummary::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_pluginSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PluginSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginSet.begin(); itr != m_pluginSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t PluginSummary::GetTotalCount() const
{
    return m_totalCount;
}

void PluginSummary::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool PluginSummary::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<Plugin> PluginSummary::GetPluginSet() const
{
    return m_pluginSet;
}

void PluginSummary::SetPluginSet(const vector<Plugin>& _pluginSet)
{
    m_pluginSet = _pluginSet;
    m_pluginSetHasBeenSet = true;
}

bool PluginSummary::PluginSetHasBeenSet() const
{
    return m_pluginSetHasBeenSet;
}

