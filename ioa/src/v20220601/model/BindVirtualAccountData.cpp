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

#include <tencentcloud/ioa/v20220601/model/BindVirtualAccountData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

BindVirtualAccountData::BindVirtualAccountData() :
    m_failItemsHasBeenSet(false),
    m_successItemsHasBeenSet(false)
{
}

CoreInternalOutcome BindVirtualAccountData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailItems") && !value["FailItems"].IsNull())
    {
        if (!value["FailItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindVirtualAccountData.FailItems` is not array type"));

        const rapidjson::Value &tmpValue = value["FailItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindVirtualAccountResultData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failItems.push_back(item);
        }
        m_failItemsHasBeenSet = true;
    }

    if (value.HasMember("SuccessItems") && !value["SuccessItems"].IsNull())
    {
        if (!value["SuccessItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindVirtualAccountData.SuccessItems` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindVirtualAccountResultData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_successItems.push_back(item);
        }
        m_successItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindVirtualAccountData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failItems.begin(); itr != m_failItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_successItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_successItems.begin(); itr != m_successItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<BindVirtualAccountResultData> BindVirtualAccountData::GetFailItems() const
{
    return m_failItems;
}

void BindVirtualAccountData::SetFailItems(const vector<BindVirtualAccountResultData>& _failItems)
{
    m_failItems = _failItems;
    m_failItemsHasBeenSet = true;
}

bool BindVirtualAccountData::FailItemsHasBeenSet() const
{
    return m_failItemsHasBeenSet;
}

vector<BindVirtualAccountResultData> BindVirtualAccountData::GetSuccessItems() const
{
    return m_successItems;
}

void BindVirtualAccountData::SetSuccessItems(const vector<BindVirtualAccountResultData>& _successItems)
{
    m_successItems = _successItems;
    m_successItemsHasBeenSet = true;
}

bool BindVirtualAccountData::SuccessItemsHasBeenSet() const
{
    return m_successItemsHasBeenSet;
}

