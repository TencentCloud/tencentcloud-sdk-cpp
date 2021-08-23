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

#include <tencentcloud/vpc/v20170312/model/ConflictSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ConflictSource::ConflictSource() :
    m_conflictSourceIdHasBeenSet(false),
    m_sourceItemHasBeenSet(false),
    m_conflictItemSetHasBeenSet(false)
{
}

CoreInternalOutcome ConflictSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConflictSourceId") && !value["ConflictSourceId"].IsNull())
    {
        if (!value["ConflictSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictSource.ConflictSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictSourceId = string(value["ConflictSourceId"].GetString());
        m_conflictSourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceItem") && !value["SourceItem"].IsNull())
    {
        if (!value["SourceItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictSource.SourceItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceItem = string(value["SourceItem"].GetString());
        m_sourceItemHasBeenSet = true;
    }

    if (value.HasMember("ConflictItemSet") && !value["ConflictItemSet"].IsNull())
    {
        if (!value["ConflictItemSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConflictSource.ConflictItemSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ConflictItemSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConflictItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conflictItemSet.push_back(item);
        }
        m_conflictItemSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConflictSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conflictSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceItem.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictItemSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictItemSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conflictItemSet.begin(); itr != m_conflictItemSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ConflictSource::GetConflictSourceId() const
{
    return m_conflictSourceId;
}

void ConflictSource::SetConflictSourceId(const string& _conflictSourceId)
{
    m_conflictSourceId = _conflictSourceId;
    m_conflictSourceIdHasBeenSet = true;
}

bool ConflictSource::ConflictSourceIdHasBeenSet() const
{
    return m_conflictSourceIdHasBeenSet;
}

string ConflictSource::GetSourceItem() const
{
    return m_sourceItem;
}

void ConflictSource::SetSourceItem(const string& _sourceItem)
{
    m_sourceItem = _sourceItem;
    m_sourceItemHasBeenSet = true;
}

bool ConflictSource::SourceItemHasBeenSet() const
{
    return m_sourceItemHasBeenSet;
}

vector<ConflictItem> ConflictSource::GetConflictItemSet() const
{
    return m_conflictItemSet;
}

void ConflictSource::SetConflictItemSet(const vector<ConflictItem>& _conflictItemSet)
{
    m_conflictItemSet = _conflictItemSet;
    m_conflictItemSetHasBeenSet = true;
}

bool ConflictSource::ConflictItemSetHasBeenSet() const
{
    return m_conflictItemSetHasBeenSet;
}

