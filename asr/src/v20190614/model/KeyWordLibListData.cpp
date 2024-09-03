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

#include <tencentcloud/asr/v20190614/model/KeyWordLibListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

KeyWordLibListData::KeyWordLibListData() :
    m_keyWordLibListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome KeyWordLibListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyWordLibList") && !value["KeyWordLibList"].IsNull())
    {
        if (!value["KeyWordLibList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyWordLibListData.KeyWordLibList` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyWordLibList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyWordLib item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyWordLibList.push_back(item);
        }
        m_keyWordLibListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordLibListData.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyWordLibListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyWordLibListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordLibList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyWordLibList.begin(); itr != m_keyWordLibList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<KeyWordLib> KeyWordLibListData::GetKeyWordLibList() const
{
    return m_keyWordLibList;
}

void KeyWordLibListData::SetKeyWordLibList(const vector<KeyWordLib>& _keyWordLibList)
{
    m_keyWordLibList = _keyWordLibList;
    m_keyWordLibListHasBeenSet = true;
}

bool KeyWordLibListData::KeyWordLibListHasBeenSet() const
{
    return m_keyWordLibListHasBeenSet;
}

uint64_t KeyWordLibListData::GetTotalCount() const
{
    return m_totalCount;
}

void KeyWordLibListData::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool KeyWordLibListData::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

