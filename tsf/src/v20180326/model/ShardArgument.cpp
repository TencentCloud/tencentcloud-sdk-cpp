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

#include <tencentcloud/tsf/v20180326/model/ShardArgument.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ShardArgument::ShardArgument() :
    m_shardKeyHasBeenSet(false),
    m_shardValueHasBeenSet(false)
{
}

CoreInternalOutcome ShardArgument::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShardKey") && !value["ShardKey"].IsNull())
    {
        if (!value["ShardKey"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardArgument.ShardKey` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shardKey = value["ShardKey"].GetUint64();
        m_shardKeyHasBeenSet = true;
    }

    if (value.HasMember("ShardValue") && !value["ShardValue"].IsNull())
    {
        if (!value["ShardValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardArgument.ShardValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardValue = string(value["ShardValue"].GetString());
        m_shardValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShardArgument::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shardKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardKey, allocator);
    }

    if (m_shardValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardValue.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ShardArgument::GetShardKey() const
{
    return m_shardKey;
}

void ShardArgument::SetShardKey(const uint64_t& _shardKey)
{
    m_shardKey = _shardKey;
    m_shardKeyHasBeenSet = true;
}

bool ShardArgument::ShardKeyHasBeenSet() const
{
    return m_shardKeyHasBeenSet;
}

string ShardArgument::GetShardValue() const
{
    return m_shardValue;
}

void ShardArgument::SetShardValue(const string& _shardValue)
{
    m_shardValue = _shardValue;
    m_shardValueHasBeenSet = true;
}

bool ShardArgument::ShardValueHasBeenSet() const
{
    return m_shardValueHasBeenSet;
}

