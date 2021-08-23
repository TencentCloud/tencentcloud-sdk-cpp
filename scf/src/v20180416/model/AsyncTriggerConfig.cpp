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

#include <tencentcloud/scf/v20180416/model/AsyncTriggerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

AsyncTriggerConfig::AsyncTriggerConfig() :
    m_retryConfigHasBeenSet(false),
    m_msgTTLHasBeenSet(false)
{
}

CoreInternalOutcome AsyncTriggerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetryConfig") && !value["RetryConfig"].IsNull())
    {
        if (!value["RetryConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsyncTriggerConfig.RetryConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["RetryConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RetryConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_retryConfig.push_back(item);
        }
        m_retryConfigHasBeenSet = true;
    }

    if (value.HasMember("MsgTTL") && !value["MsgTTL"].IsNull())
    {
        if (!value["MsgTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncTriggerConfig.MsgTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTTL = value["MsgTTL"].GetInt64();
        m_msgTTLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncTriggerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retryConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_retryConfig.begin(); itr != m_retryConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTTL, allocator);
    }

}


vector<RetryConfig> AsyncTriggerConfig::GetRetryConfig() const
{
    return m_retryConfig;
}

void AsyncTriggerConfig::SetRetryConfig(const vector<RetryConfig>& _retryConfig)
{
    m_retryConfig = _retryConfig;
    m_retryConfigHasBeenSet = true;
}

bool AsyncTriggerConfig::RetryConfigHasBeenSet() const
{
    return m_retryConfigHasBeenSet;
}

int64_t AsyncTriggerConfig::GetMsgTTL() const
{
    return m_msgTTL;
}

void AsyncTriggerConfig::SetMsgTTL(const int64_t& _msgTTL)
{
    m_msgTTL = _msgTTL;
    m_msgTTLHasBeenSet = true;
}

bool AsyncTriggerConfig::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

