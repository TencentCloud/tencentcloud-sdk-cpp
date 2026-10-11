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

#include <tencentcloud/databuddy/v20260715/model/DictDimensionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

DictDimensionInfo::DictDimensionInfo() :
    m_dictCodeIdHasBeenSet(false),
    m_dictItemsHasBeenSet(false)
{
}

CoreInternalOutcome DictDimensionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DictCodeId") && !value["DictCodeId"].IsNull())
    {
        if (!value["DictCodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DictDimensionInfo.DictCodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dictCodeId = string(value["DictCodeId"].GetString());
        m_dictCodeIdHasBeenSet = true;
    }

    if (value.HasMember("DictItems") && !value["DictItems"].IsNull())
    {
        if (!value["DictItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DictDimensionInfo.DictItems` is not array type"));

        const rapidjson::Value &tmpValue = value["DictItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dictItems.push_back(item);
        }
        m_dictItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DictDimensionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dictCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dictCodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_dictItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dictItems.begin(); itr != m_dictItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DictDimensionInfo::GetDictCodeId() const
{
    return m_dictCodeId;
}

void DictDimensionInfo::SetDictCodeId(const string& _dictCodeId)
{
    m_dictCodeId = _dictCodeId;
    m_dictCodeIdHasBeenSet = true;
}

bool DictDimensionInfo::DictCodeIdHasBeenSet() const
{
    return m_dictCodeIdHasBeenSet;
}

vector<DictItem> DictDimensionInfo::GetDictItems() const
{
    return m_dictItems;
}

void DictDimensionInfo::SetDictItems(const vector<DictItem>& _dictItems)
{
    m_dictItems = _dictItems;
    m_dictItemsHasBeenSet = true;
}

bool DictDimensionInfo::DictItemsHasBeenSet() const
{
    return m_dictItemsHasBeenSet;
}

