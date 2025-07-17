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

#include <tencentcloud/trtc/v20190722/model/SubscribeModerationUserIds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SubscribeModerationUserIds::SubscribeModerationUserIds() :
    m_subscribeAudioUserIdsHasBeenSet(false),
    m_unSubscribeAudioUserIdsHasBeenSet(false),
    m_subscribeVideoUserIdsHasBeenSet(false),
    m_unSubscribeVideoUserIdsHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeModerationUserIds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubscribeAudioUserIds") && !value["SubscribeAudioUserIds"].IsNull())
    {
        if (!value["SubscribeAudioUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeModerationUserIds.SubscribeAudioUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeAudioUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subscribeAudioUserIds.push_back((*itr).GetString());
        }
        m_subscribeAudioUserIdsHasBeenSet = true;
    }

    if (value.HasMember("UnSubscribeAudioUserIds") && !value["UnSubscribeAudioUserIds"].IsNull())
    {
        if (!value["UnSubscribeAudioUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeModerationUserIds.UnSubscribeAudioUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UnSubscribeAudioUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unSubscribeAudioUserIds.push_back((*itr).GetString());
        }
        m_unSubscribeAudioUserIdsHasBeenSet = true;
    }

    if (value.HasMember("SubscribeVideoUserIds") && !value["SubscribeVideoUserIds"].IsNull())
    {
        if (!value["SubscribeVideoUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeModerationUserIds.SubscribeVideoUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeVideoUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subscribeVideoUserIds.push_back((*itr).GetString());
        }
        m_subscribeVideoUserIdsHasBeenSet = true;
    }

    if (value.HasMember("UnSubscribeVideoUserIds") && !value["UnSubscribeVideoUserIds"].IsNull())
    {
        if (!value["UnSubscribeVideoUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeModerationUserIds.UnSubscribeVideoUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UnSubscribeVideoUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unSubscribeVideoUserIds.push_back((*itr).GetString());
        }
        m_unSubscribeVideoUserIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeModerationUserIds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subscribeAudioUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeAudioUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subscribeAudioUserIds.begin(); itr != m_subscribeAudioUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_unSubscribeAudioUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSubscribeAudioUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unSubscribeAudioUserIds.begin(); itr != m_unSubscribeAudioUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subscribeVideoUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeVideoUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subscribeVideoUserIds.begin(); itr != m_subscribeVideoUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_unSubscribeVideoUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSubscribeVideoUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unSubscribeVideoUserIds.begin(); itr != m_unSubscribeVideoUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SubscribeModerationUserIds::GetSubscribeAudioUserIds() const
{
    return m_subscribeAudioUserIds;
}

void SubscribeModerationUserIds::SetSubscribeAudioUserIds(const vector<string>& _subscribeAudioUserIds)
{
    m_subscribeAudioUserIds = _subscribeAudioUserIds;
    m_subscribeAudioUserIdsHasBeenSet = true;
}

bool SubscribeModerationUserIds::SubscribeAudioUserIdsHasBeenSet() const
{
    return m_subscribeAudioUserIdsHasBeenSet;
}

vector<string> SubscribeModerationUserIds::GetUnSubscribeAudioUserIds() const
{
    return m_unSubscribeAudioUserIds;
}

void SubscribeModerationUserIds::SetUnSubscribeAudioUserIds(const vector<string>& _unSubscribeAudioUserIds)
{
    m_unSubscribeAudioUserIds = _unSubscribeAudioUserIds;
    m_unSubscribeAudioUserIdsHasBeenSet = true;
}

bool SubscribeModerationUserIds::UnSubscribeAudioUserIdsHasBeenSet() const
{
    return m_unSubscribeAudioUserIdsHasBeenSet;
}

vector<string> SubscribeModerationUserIds::GetSubscribeVideoUserIds() const
{
    return m_subscribeVideoUserIds;
}

void SubscribeModerationUserIds::SetSubscribeVideoUserIds(const vector<string>& _subscribeVideoUserIds)
{
    m_subscribeVideoUserIds = _subscribeVideoUserIds;
    m_subscribeVideoUserIdsHasBeenSet = true;
}

bool SubscribeModerationUserIds::SubscribeVideoUserIdsHasBeenSet() const
{
    return m_subscribeVideoUserIdsHasBeenSet;
}

vector<string> SubscribeModerationUserIds::GetUnSubscribeVideoUserIds() const
{
    return m_unSubscribeVideoUserIds;
}

void SubscribeModerationUserIds::SetUnSubscribeVideoUserIds(const vector<string>& _unSubscribeVideoUserIds)
{
    m_unSubscribeVideoUserIds = _unSubscribeVideoUserIds;
    m_unSubscribeVideoUserIdsHasBeenSet = true;
}

bool SubscribeModerationUserIds::UnSubscribeVideoUserIdsHasBeenSet() const
{
    return m_unSubscribeVideoUserIdsHasBeenSet;
}

