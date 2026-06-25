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

#include <tencentcloud/cngw/v20230418/model/AIGWIntentRouteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWIntentRouteRule::AIGWIntentRouteRule() :
    m_intentCodeHasBeenSet(false),
    m_modelServiceIdHasBeenSet(false)
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

