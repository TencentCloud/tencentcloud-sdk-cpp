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

#include <tencentcloud/adp/v20260520/model/ConversationResetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationResetInfo::ConversationResetInfo() :
    m_resetTimeHasBeenSet(false),
    m_resetThroughRecordIdHasBeenSet(false)
{
}

CoreInternalOutcome ConversationResetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResetTime") && !value["ResetTime"].IsNull())
    {
        if (!value["ResetTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationResetInfo.ResetTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resetTime = string(value["ResetTime"].GetString());
        m_resetTimeHasBeenSet = true;
    }

    if (value.HasMember("ResetThroughRecordId") && !value["ResetThroughRecordId"].IsNull())
    {
        if (!value["ResetThroughRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationResetInfo.ResetThroughRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resetThroughRecordId = string(value["ResetThroughRecordId"].GetString());
        m_resetThroughRecordIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationResetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resetTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resetThroughRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetThroughRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resetThroughRecordId.c_str(), allocator).Move(), allocator);
    }

}


string ConversationResetInfo::GetResetTime() const
{
    return m_resetTime;
}

void ConversationResetInfo::SetResetTime(const string& _resetTime)
{
    m_resetTime = _resetTime;
    m_resetTimeHasBeenSet = true;
}

bool ConversationResetInfo::ResetTimeHasBeenSet() const
{
    return m_resetTimeHasBeenSet;
}

string ConversationResetInfo::GetResetThroughRecordId() const
{
    return m_resetThroughRecordId;
}

void ConversationResetInfo::SetResetThroughRecordId(const string& _resetThroughRecordId)
{
    m_resetThroughRecordId = _resetThroughRecordId;
    m_resetThroughRecordIdHasBeenSet = true;
}

bool ConversationResetInfo::ResetThroughRecordIdHasBeenSet() const
{
    return m_resetThroughRecordIdHasBeenSet;
}

