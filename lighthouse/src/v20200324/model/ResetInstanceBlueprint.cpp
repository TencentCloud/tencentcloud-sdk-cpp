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

#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceBlueprint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

ResetInstanceBlueprint::ResetInstanceBlueprint() :
    m_blueprintInfoHasBeenSet(false),
    m_isResettableHasBeenSet(false),
    m_nonResettableMessageHasBeenSet(false)
{
}

CoreInternalOutcome ResetInstanceBlueprint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlueprintInfo") && !value["BlueprintInfo"].IsNull())
    {
        if (!value["BlueprintInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResetInstanceBlueprint.BlueprintInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blueprintInfo.Deserialize(value["BlueprintInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blueprintInfoHasBeenSet = true;
    }

    if (value.HasMember("IsResettable") && !value["IsResettable"].IsNull())
    {
        if (!value["IsResettable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResetInstanceBlueprint.IsResettable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isResettable = value["IsResettable"].GetBool();
        m_isResettableHasBeenSet = true;
    }

    if (value.HasMember("NonResettableMessage") && !value["NonResettableMessage"].IsNull())
    {
        if (!value["NonResettableMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResetInstanceBlueprint.NonResettableMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonResettableMessage = string(value["NonResettableMessage"].GetString());
        m_nonResettableMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResetInstanceBlueprint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blueprintInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blueprintInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isResettableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsResettable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isResettable, allocator);
    }

    if (m_nonResettableMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonResettableMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonResettableMessage.c_str(), allocator).Move(), allocator);
    }

}


Blueprint ResetInstanceBlueprint::GetBlueprintInfo() const
{
    return m_blueprintInfo;
}

void ResetInstanceBlueprint::SetBlueprintInfo(const Blueprint& _blueprintInfo)
{
    m_blueprintInfo = _blueprintInfo;
    m_blueprintInfoHasBeenSet = true;
}

bool ResetInstanceBlueprint::BlueprintInfoHasBeenSet() const
{
    return m_blueprintInfoHasBeenSet;
}

bool ResetInstanceBlueprint::GetIsResettable() const
{
    return m_isResettable;
}

void ResetInstanceBlueprint::SetIsResettable(const bool& _isResettable)
{
    m_isResettable = _isResettable;
    m_isResettableHasBeenSet = true;
}

bool ResetInstanceBlueprint::IsResettableHasBeenSet() const
{
    return m_isResettableHasBeenSet;
}

string ResetInstanceBlueprint::GetNonResettableMessage() const
{
    return m_nonResettableMessage;
}

void ResetInstanceBlueprint::SetNonResettableMessage(const string& _nonResettableMessage)
{
    m_nonResettableMessage = _nonResettableMessage;
    m_nonResettableMessageHasBeenSet = true;
}

bool ResetInstanceBlueprint::NonResettableMessageHasBeenSet() const
{
    return m_nonResettableMessageHasBeenSet;
}

