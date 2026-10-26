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

#include <tencentcloud/cngw/v20230418/model/AIGWGatewayVerifyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWGatewayVerifyConfig::AIGWGatewayVerifyConfig() :
    m_enableHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_oAuthConfigHasBeenSet(false)
{
}

CoreInternalOutcome AIGWGatewayVerifyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyConfig.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VerifyType") && !value["VerifyType"].IsNull())
    {
        if (!value["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyConfig.VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(value["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }

    if (value.HasMember("OAuthConfig") && !value["OAuthConfig"].IsNull())
    {
        if (!value["OAuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyConfig.OAuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oAuthConfig.Deserialize(value["OAuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oAuthConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWGatewayVerifyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_oAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool AIGWGatewayVerifyConfig::GetEnable() const
{
    return m_enable;
}

void AIGWGatewayVerifyConfig::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AIGWGatewayVerifyConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string AIGWGatewayVerifyConfig::GetVerifyType() const
{
    return m_verifyType;
}

void AIGWGatewayVerifyConfig::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool AIGWGatewayVerifyConfig::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

AIGWGatewayVerifyOAuthConfig AIGWGatewayVerifyConfig::GetOAuthConfig() const
{
    return m_oAuthConfig;
}

void AIGWGatewayVerifyConfig::SetOAuthConfig(const AIGWGatewayVerifyOAuthConfig& _oAuthConfig)
{
    m_oAuthConfig = _oAuthConfig;
    m_oAuthConfigHasBeenSet = true;
}

bool AIGWGatewayVerifyConfig::OAuthConfigHasBeenSet() const
{
    return m_oAuthConfigHasBeenSet;
}

