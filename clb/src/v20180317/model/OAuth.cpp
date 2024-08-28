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

#include <tencentcloud/clb/v20180317/model/OAuth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

OAuth::OAuth() :
    m_oAuthEnableHasBeenSet(false),
    m_oAuthFailureStatusHasBeenSet(false)
{
}

CoreInternalOutcome OAuth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OAuthEnable") && !value["OAuthEnable"].IsNull())
    {
        if (!value["OAuthEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OAuth.OAuthEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_oAuthEnable = value["OAuthEnable"].GetBool();
        m_oAuthEnableHasBeenSet = true;
    }

    if (value.HasMember("OAuthFailureStatus") && !value["OAuthFailureStatus"].IsNull())
    {
        if (!value["OAuthFailureStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuth.OAuthFailureStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oAuthFailureStatus = string(value["OAuthFailureStatus"].GetString());
        m_oAuthFailureStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OAuth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oAuthEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oAuthEnable, allocator);
    }

    if (m_oAuthFailureStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthFailureStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oAuthFailureStatus.c_str(), allocator).Move(), allocator);
    }

}


bool OAuth::GetOAuthEnable() const
{
    return m_oAuthEnable;
}

void OAuth::SetOAuthEnable(const bool& _oAuthEnable)
{
    m_oAuthEnable = _oAuthEnable;
    m_oAuthEnableHasBeenSet = true;
}

bool OAuth::OAuthEnableHasBeenSet() const
{
    return m_oAuthEnableHasBeenSet;
}

string OAuth::GetOAuthFailureStatus() const
{
    return m_oAuthFailureStatus;
}

void OAuth::SetOAuthFailureStatus(const string& _oAuthFailureStatus)
{
    m_oAuthFailureStatus = _oAuthFailureStatus;
    m_oAuthFailureStatusHasBeenSet = true;
}

bool OAuth::OAuthFailureStatusHasBeenSet() const
{
    return m_oAuthFailureStatusHasBeenSet;
}

