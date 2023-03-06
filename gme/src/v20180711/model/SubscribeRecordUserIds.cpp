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

#include <tencentcloud/gme/v20180711/model/SubscribeRecordUserIds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

SubscribeRecordUserIds::SubscribeRecordUserIds() :
    m_unSubscribeUserIdsHasBeenSet(false),
    m_subscribeUserIdsHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeRecordUserIds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UnSubscribeUserIds") && !value["UnSubscribeUserIds"].IsNull())
    {
        if (!value["UnSubscribeUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeRecordUserIds.UnSubscribeUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UnSubscribeUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unSubscribeUserIds.push_back((*itr).GetString());
        }
        m_unSubscribeUserIdsHasBeenSet = true;
    }

    if (value.HasMember("SubscribeUserIds") && !value["SubscribeUserIds"].IsNull())
    {
        if (!value["SubscribeUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeRecordUserIds.SubscribeUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subscribeUserIds.push_back((*itr).GetString());
        }
        m_subscribeUserIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeRecordUserIds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unSubscribeUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSubscribeUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unSubscribeUserIds.begin(); itr != m_unSubscribeUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subscribeUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subscribeUserIds.begin(); itr != m_subscribeUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SubscribeRecordUserIds::GetUnSubscribeUserIds() const
{
    return m_unSubscribeUserIds;
}

void SubscribeRecordUserIds::SetUnSubscribeUserIds(const vector<string>& _unSubscribeUserIds)
{
    m_unSubscribeUserIds = _unSubscribeUserIds;
    m_unSubscribeUserIdsHasBeenSet = true;
}

bool SubscribeRecordUserIds::UnSubscribeUserIdsHasBeenSet() const
{
    return m_unSubscribeUserIdsHasBeenSet;
}

vector<string> SubscribeRecordUserIds::GetSubscribeUserIds() const
{
    return m_subscribeUserIds;
}

void SubscribeRecordUserIds::SetSubscribeUserIds(const vector<string>& _subscribeUserIds)
{
    m_subscribeUserIds = _subscribeUserIds;
    m_subscribeUserIdsHasBeenSet = true;
}

bool SubscribeRecordUserIds::SubscribeUserIdsHasBeenSet() const
{
    return m_subscribeUserIdsHasBeenSet;
}

