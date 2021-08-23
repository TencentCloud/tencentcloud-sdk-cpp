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

#include <tencentcloud/ckafka/v20190819/model/TopicRetentionTimeConfigRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicRetentionTimeConfigRsp::TopicRetentionTimeConfigRsp() :
    m_expectHasBeenSet(false),
    m_currentHasBeenSet(false),
    m_modTimeStampHasBeenSet(false)
{
}

CoreInternalOutcome TopicRetentionTimeConfigRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Expect") && !value["Expect"].IsNull())
    {
        if (!value["Expect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRetentionTimeConfigRsp.Expect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expect = value["Expect"].GetInt64();
        m_expectHasBeenSet = true;
    }

    if (value.HasMember("Current") && !value["Current"].IsNull())
    {
        if (!value["Current"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRetentionTimeConfigRsp.Current` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_current = value["Current"].GetInt64();
        m_currentHasBeenSet = true;
    }

    if (value.HasMember("ModTimeStamp") && !value["ModTimeStamp"].IsNull())
    {
        if (!value["ModTimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRetentionTimeConfigRsp.ModTimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modTimeStamp = value["ModTimeStamp"].GetInt64();
        m_modTimeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicRetentionTimeConfigRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expect, allocator);
    }

    if (m_currentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Current";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_current, allocator);
    }

    if (m_modTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modTimeStamp, allocator);
    }

}


int64_t TopicRetentionTimeConfigRsp::GetExpect() const
{
    return m_expect;
}

void TopicRetentionTimeConfigRsp::SetExpect(const int64_t& _expect)
{
    m_expect = _expect;
    m_expectHasBeenSet = true;
}

bool TopicRetentionTimeConfigRsp::ExpectHasBeenSet() const
{
    return m_expectHasBeenSet;
}

int64_t TopicRetentionTimeConfigRsp::GetCurrent() const
{
    return m_current;
}

void TopicRetentionTimeConfigRsp::SetCurrent(const int64_t& _current)
{
    m_current = _current;
    m_currentHasBeenSet = true;
}

bool TopicRetentionTimeConfigRsp::CurrentHasBeenSet() const
{
    return m_currentHasBeenSet;
}

int64_t TopicRetentionTimeConfigRsp::GetModTimeStamp() const
{
    return m_modTimeStamp;
}

void TopicRetentionTimeConfigRsp::SetModTimeStamp(const int64_t& _modTimeStamp)
{
    m_modTimeStamp = _modTimeStamp;
    m_modTimeStampHasBeenSet = true;
}

bool TopicRetentionTimeConfigRsp::ModTimeStampHasBeenSet() const
{
    return m_modTimeStampHasBeenSet;
}

