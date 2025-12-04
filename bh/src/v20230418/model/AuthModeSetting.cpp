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

#include <tencentcloud/bh/v20230418/model/AuthModeSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

AuthModeSetting::AuthModeSetting() :
    m_authModeHasBeenSet(false)
{
}

CoreInternalOutcome AuthModeSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthMode") && !value["AuthMode"].IsNull())
    {
        if (!value["AuthMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthModeSetting.AuthMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authMode = value["AuthMode"].GetUint64();
        m_authModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthModeSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authMode, allocator);
    }

}


uint64_t AuthModeSetting::GetAuthMode() const
{
    return m_authMode;
}

void AuthModeSetting::SetAuthMode(const uint64_t& _authMode)
{
    m_authMode = _authMode;
    m_authModeHasBeenSet = true;
}

bool AuthModeSetting::AuthModeHasBeenSet() const
{
    return m_authModeHasBeenSet;
}

