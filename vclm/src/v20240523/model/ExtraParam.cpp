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

#include <tencentcloud/vclm/v20240523/model/ExtraParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

ExtraParam::ExtraParam() :
    m_userDesignatedUrlHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

CoreInternalOutcome ExtraParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserDesignatedUrl") && !value["UserDesignatedUrl"].IsNull())
    {
        if (!value["UserDesignatedUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraParam.UserDesignatedUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDesignatedUrl = string(value["UserDesignatedUrl"].GetString());
        m_userDesignatedUrlHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraParam.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userDesignatedUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDesignatedUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDesignatedUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

}


string ExtraParam::GetUserDesignatedUrl() const
{
    return m_userDesignatedUrl;
}

void ExtraParam::SetUserDesignatedUrl(const string& _userDesignatedUrl)
{
    m_userDesignatedUrl = _userDesignatedUrl;
    m_userDesignatedUrlHasBeenSet = true;
}

bool ExtraParam::UserDesignatedUrlHasBeenSet() const
{
    return m_userDesignatedUrlHasBeenSet;
}

string ExtraParam::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ExtraParam::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ExtraParam::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

