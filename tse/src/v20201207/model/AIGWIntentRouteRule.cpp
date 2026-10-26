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

#include <tencentcloud/tse/v20201207/model/AIGWIntentRouteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWIntentRouteRule::AIGWIntentRouteRule() :
    m_intentCodeHasBeenSet(false),
    m_modelServiceIdHasBeenSet(false),
    m_intentIdHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_standardModelNameHasBeenSet(false)
{
}

CoreInternalOutcome AIGWIntentRouteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntentCode") && !value["IntentCode"].IsNull())
    {
        if (!value["IntentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRouteRule.IntentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentCode = string(value["IntentCode"].GetString());
        m_intentCodeHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceId") && !value["ModelServiceId"].IsNull())
    {
        if (!value["ModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRouteRule.ModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceId = string(value["ModelServiceId"].GetString());
        m_modelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("IntentId") && !value["IntentId"].IsNull())
    {
        if (!value["IntentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRouteRule.IntentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentId = string(value["IntentId"].GetString());
        m_intentIdHasBeenSet = true;
    }

    if (value.HasMember("IntentName") && !value["IntentName"].IsNull())
    {
        if (!value["IntentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRouteRule.IntentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentName = string(value["IntentName"].GetString());
        m_intentNameHasBeenSet = true;
    }

    if (value.HasMember("StandardModelName") && !value["StandardModelName"].IsNull())
    {
        if (!value["StandardModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWIntentRouteRule.StandardModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardModelName = string(value["StandardModelName"].GetString());
        m_standardModelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWIntentRouteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_modelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_intentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentId.c_str(), allocator).Move(), allocator);
    }

    if (m_intentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentName.c_str(), allocator).Move(), allocator);
    }

    if (m_standardModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardModelName.c_str(), allocator).Move(), allocator);
    }

}


string AIGWIntentRouteRule::GetIntentCode() const
{
    return m_intentCode;
}

void AIGWIntentRouteRule::SetIntentCode(const string& _intentCode)
{
    m_intentCode = _intentCode;
    m_intentCodeHasBeenSet = true;
}

bool AIGWIntentRouteRule::IntentCodeHasBeenSet() const
{
    return m_intentCodeHasBeenSet;
}

string AIGWIntentRouteRule::GetModelServiceId() const
{
    return m_modelServiceId;
}

void AIGWIntentRouteRule::SetModelServiceId(const string& _modelServiceId)
{
    m_modelServiceId = _modelServiceId;
    m_modelServiceIdHasBeenSet = true;
}

bool AIGWIntentRouteRule::ModelServiceIdHasBeenSet() const
{
    return m_modelServiceIdHasBeenSet;
}

string AIGWIntentRouteRule::GetIntentId() const
{
    return m_intentId;
}

void AIGWIntentRouteRule::SetIntentId(const string& _intentId)
{
    m_intentId = _intentId;
    m_intentIdHasBeenSet = true;
}

bool AIGWIntentRouteRule::IntentIdHasBeenSet() const
{
    return m_intentIdHasBeenSet;
}

string AIGWIntentRouteRule::GetIntentName() const
{
    return m_intentName;
}

void AIGWIntentRouteRule::SetIntentName(const string& _intentName)
{
    m_intentName = _intentName;
    m_intentNameHasBeenSet = true;
}

bool AIGWIntentRouteRule::IntentNameHasBeenSet() const
{
    return m_intentNameHasBeenSet;
}

string AIGWIntentRouteRule::GetStandardModelName() const
{
    return m_standardModelName;
}

void AIGWIntentRouteRule::SetStandardModelName(const string& _standardModelName)
{
    m_standardModelName = _standardModelName;
    m_standardModelNameHasBeenSet = true;
}

bool AIGWIntentRouteRule::StandardModelNameHasBeenSet() const
{
    return m_standardModelNameHasBeenSet;
}

