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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPServerAuthResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPServerAuthResult::AIGWMCPServerAuthResult() :
    m_authTypeHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPServerAuthResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerAuthResult.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPServerAuthResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

}


string AIGWMCPServerAuthResult::GetAuthType() const
{
    return m_authType;
}

void AIGWMCPServerAuthResult::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AIGWMCPServerAuthResult::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

