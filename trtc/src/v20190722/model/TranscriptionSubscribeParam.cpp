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

#include <tencentcloud/trtc/v20190722/model/TranscriptionSubscribeParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TranscriptionSubscribeParam::TranscriptionSubscribeParam() :
    m_subscribeListHasBeenSet(false),
    m_unSubscribeListHasBeenSet(false)
{
}

CoreInternalOutcome TranscriptionSubscribeParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubscribeList") && !value["SubscribeList"].IsNull())
    {
        if (!value["SubscribeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscriptionSubscribeParam.SubscribeList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TranscriptionUserInfoParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscribeList.push_back(item);
        }
        m_subscribeListHasBeenSet = true;
    }

    if (value.HasMember("UnSubscribeList") && !value["UnSubscribeList"].IsNull())
    {
        if (!value["UnSubscribeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscriptionSubscribeParam.UnSubscribeList` is not array type"));

        const rapidjson::Value &tmpValue = value["UnSubscribeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TranscriptionUserInfoParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_unSubscribeList.push_back(item);
        }
        m_unSubscribeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscriptionSubscribeParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subscribeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscribeList.begin(); itr != m_subscribeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unSubscribeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSubscribeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unSubscribeList.begin(); itr != m_unSubscribeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TranscriptionUserInfoParams> TranscriptionSubscribeParam::GetSubscribeList() const
{
    return m_subscribeList;
}

void TranscriptionSubscribeParam::SetSubscribeList(const vector<TranscriptionUserInfoParams>& _subscribeList)
{
    m_subscribeList = _subscribeList;
    m_subscribeListHasBeenSet = true;
}

bool TranscriptionSubscribeParam::SubscribeListHasBeenSet() const
{
    return m_subscribeListHasBeenSet;
}

vector<TranscriptionUserInfoParams> TranscriptionSubscribeParam::GetUnSubscribeList() const
{
    return m_unSubscribeList;
}

void TranscriptionSubscribeParam::SetUnSubscribeList(const vector<TranscriptionUserInfoParams>& _unSubscribeList)
{
    m_unSubscribeList = _unSubscribeList;
    m_unSubscribeListHasBeenSet = true;
}

bool TranscriptionSubscribeParam::UnSubscribeListHasBeenSet() const
{
    return m_unSubscribeListHasBeenSet;
}

