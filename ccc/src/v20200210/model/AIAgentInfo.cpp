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

#include <tencentcloud/ccc/v20200210/model/AIAgentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AIAgentInfo::AIAgentInfo() :
    m_aIAgentIdHasBeenSet(false),
    m_aIAgentNameHasBeenSet(false)
{
}

CoreInternalOutcome AIAgentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AIAgentId") && !value["AIAgentId"].IsNull())
    {
        if (!value["AIAgentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentInfo.AIAgentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aIAgentId = value["AIAgentId"].GetUint64();
        m_aIAgentIdHasBeenSet = true;
    }

    if (value.HasMember("AIAgentName") && !value["AIAgentName"].IsNull())
    {
        if (!value["AIAgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentInfo.AIAgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aIAgentName = string(value["AIAgentName"].GetString());
        m_aIAgentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAgentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aIAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIAgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aIAgentId, allocator);
    }

    if (m_aIAgentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIAgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aIAgentName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AIAgentInfo::GetAIAgentId() const
{
    return m_aIAgentId;
}

void AIAgentInfo::SetAIAgentId(const uint64_t& _aIAgentId)
{
    m_aIAgentId = _aIAgentId;
    m_aIAgentIdHasBeenSet = true;
}

bool AIAgentInfo::AIAgentIdHasBeenSet() const
{
    return m_aIAgentIdHasBeenSet;
}

string AIAgentInfo::GetAIAgentName() const
{
    return m_aIAgentName;
}

void AIAgentInfo::SetAIAgentName(const string& _aIAgentName)
{
    m_aIAgentName = _aIAgentName;
    m_aIAgentNameHasBeenSet = true;
}

bool AIAgentInfo::AIAgentNameHasBeenSet() const
{
    return m_aIAgentNameHasBeenSet;
}

