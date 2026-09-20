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

#include <tencentcloud/ags/v20250920/model/SessionState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

SessionState::SessionState() :
    m_customStateHasBeenSet(false)
{
}

CoreInternalOutcome SessionState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomState") && !value["CustomState"].IsNull())
    {
        if (!value["CustomState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionState.CustomState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customState = string(value["CustomState"].GetString());
        m_customStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customState.c_str(), allocator).Move(), allocator);
    }

}


string SessionState::GetCustomState() const
{
    return m_customState;
}

void SessionState::SetCustomState(const string& _customState)
{
    m_customState = _customState;
    m_customStateHasBeenSet = true;
}

bool SessionState::CustomStateHasBeenSet() const
{
    return m_customStateHasBeenSet;
}

