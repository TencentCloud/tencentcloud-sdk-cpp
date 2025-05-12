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

#include <tencentcloud/wedata/v20210820/model/TableLineagePair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableLineagePair::TableLineagePair() :
    m_sourcesHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

CoreInternalOutcome TableLineagePair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sources") && !value["Sources"].IsNull())
    {
        if (!value["Sources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableLineagePair.Sources` is not array type"));

        const rapidjson::Value &tmpValue = value["Sources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableLineage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sources.push_back(item);
        }
        m_sourcesHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineagePair.Target` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_target.Deserialize(value["Target"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableLineagePair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sources.begin(); itr != m_sources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<TableLineage> TableLineagePair::GetSources() const
{
    return m_sources;
}

void TableLineagePair::SetSources(const vector<TableLineage>& _sources)
{
    m_sources = _sources;
    m_sourcesHasBeenSet = true;
}

bool TableLineagePair::SourcesHasBeenSet() const
{
    return m_sourcesHasBeenSet;
}

TableLineage TableLineagePair::GetTarget() const
{
    return m_target;
}

void TableLineagePair::SetTarget(const TableLineage& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TableLineagePair::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

