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

#include <tencentcloud/essbasic/v20210526/model/JumpEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

JumpEvent::JumpEvent() :
    m_jumpEventTypeHasBeenSet(false),
    m_jumpUrlHasBeenSet(false)
{
}

CoreInternalOutcome JumpEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JumpEventType") && !value["JumpEventType"].IsNull())
    {
        if (!value["JumpEventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JumpEvent.JumpEventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jumpEventType = value["JumpEventType"].GetUint64();
        m_jumpEventTypeHasBeenSet = true;
    }

    if (value.HasMember("JumpUrl") && !value["JumpUrl"].IsNull())
    {
        if (!value["JumpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JumpEvent.JumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpUrl = string(value["JumpUrl"].GetString());
        m_jumpUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JumpEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jumpEventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpEventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jumpEventType, allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t JumpEvent::GetJumpEventType() const
{
    return m_jumpEventType;
}

void JumpEvent::SetJumpEventType(const uint64_t& _jumpEventType)
{
    m_jumpEventType = _jumpEventType;
    m_jumpEventTypeHasBeenSet = true;
}

bool JumpEvent::JumpEventTypeHasBeenSet() const
{
    return m_jumpEventTypeHasBeenSet;
}

string JumpEvent::GetJumpUrl() const
{
    return m_jumpUrl;
}

void JumpEvent::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool JumpEvent::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

