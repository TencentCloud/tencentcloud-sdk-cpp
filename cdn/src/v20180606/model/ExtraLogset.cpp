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

#include <tencentcloud/cdn/v20180606/model/ExtraLogset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ExtraLogset::ExtraLogset() :
    m_logsetHasBeenSet(false),
    m_topicsHasBeenSet(false)
{
}

CoreInternalOutcome ExtraLogset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Logset") && !value["Logset"].IsNull())
    {
        if (!value["Logset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraLogset.Logset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logset.Deserialize(value["Logset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logsetHasBeenSet = true;
    }

    if (value.HasMember("Topics") && !value["Topics"].IsNull())
    {
        if (!value["Topics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtraLogset.Topics` is not array type"));

        const rapidjson::Value &tmpValue = value["Topics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topics.push_back(item);
        }
        m_topicsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraLogset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logset.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


LogSetInfo ExtraLogset::GetLogset() const
{
    return m_logset;
}

void ExtraLogset::SetLogset(const LogSetInfo& _logset)
{
    m_logset = _logset;
    m_logsetHasBeenSet = true;
}

bool ExtraLogset::LogsetHasBeenSet() const
{
    return m_logsetHasBeenSet;
}

vector<TopicInfo> ExtraLogset::GetTopics() const
{
    return m_topics;
}

void ExtraLogset::SetTopics(const vector<TopicInfo>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool ExtraLogset::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

