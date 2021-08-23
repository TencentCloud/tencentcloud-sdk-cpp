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

#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeE.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedAuthenticationTypeE::AdvancedAuthenticationTypeE() :
    m_secretKeyHasBeenSet(false),
    m_signParamHasBeenSet(false),
    m_aclSignParamHasBeenSet(false),
    m_startTimeParamHasBeenSet(false),
    m_expireTimeParamHasBeenSet(false),
    m_timeFormatHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedAuthenticationTypeE::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeE.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("SignParam") && !value["SignParam"].IsNull())
    {
        if (!value["SignParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeE.SignParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signParam = string(value["SignParam"].GetString());
        m_signParamHasBeenSet = true;
    }

    if (value.HasMember("AclSignParam") && !value["AclSignParam"].IsNull())
    {
        if (!value["AclSignParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeE.AclSignParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclSignParam = string(value["AclSignParam"].GetString());
        m_aclSignParamHasBeenSet = true;
    }

    if (value.HasMember("StartTimeParam") && !value["StartTimeParam"].IsNull())
    {
        if (!value["StartTimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeE.StartTimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeParam = string(value["StartTimeParam"].GetString());
        m_startTimeParamHasBeenSet = true;
    }

    if (value.HasMember("ExpireTimeParam") && !value["ExpireTimeParam"].IsNull())
    {
        if (!value["ExpireTimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeE.ExpireTimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTimeParam = string(value["ExpireTimeParam"].GetString());
        m_expireTimeParamHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeE.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedAuthenticationTypeE::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_signParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signParam.c_str(), allocator).Move(), allocator);
    }

    if (m_aclSignParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclSignParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclSignParam.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTimeParam.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimeParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTimeParam.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

}


string AdvancedAuthenticationTypeE::GetSecretKey() const
{
    return m_secretKey;
}

void AdvancedAuthenticationTypeE::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AdvancedAuthenticationTypeE::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string AdvancedAuthenticationTypeE::GetSignParam() const
{
    return m_signParam;
}

void AdvancedAuthenticationTypeE::SetSignParam(const string& _signParam)
{
    m_signParam = _signParam;
    m_signParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeE::SignParamHasBeenSet() const
{
    return m_signParamHasBeenSet;
}

string AdvancedAuthenticationTypeE::GetAclSignParam() const
{
    return m_aclSignParam;
}

void AdvancedAuthenticationTypeE::SetAclSignParam(const string& _aclSignParam)
{
    m_aclSignParam = _aclSignParam;
    m_aclSignParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeE::AclSignParamHasBeenSet() const
{
    return m_aclSignParamHasBeenSet;
}

string AdvancedAuthenticationTypeE::GetStartTimeParam() const
{
    return m_startTimeParam;
}

void AdvancedAuthenticationTypeE::SetStartTimeParam(const string& _startTimeParam)
{
    m_startTimeParam = _startTimeParam;
    m_startTimeParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeE::StartTimeParamHasBeenSet() const
{
    return m_startTimeParamHasBeenSet;
}

string AdvancedAuthenticationTypeE::GetExpireTimeParam() const
{
    return m_expireTimeParam;
}

void AdvancedAuthenticationTypeE::SetExpireTimeParam(const string& _expireTimeParam)
{
    m_expireTimeParam = _expireTimeParam;
    m_expireTimeParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeE::ExpireTimeParamHasBeenSet() const
{
    return m_expireTimeParamHasBeenSet;
}

string AdvancedAuthenticationTypeE::GetTimeFormat() const
{
    return m_timeFormat;
}

void AdvancedAuthenticationTypeE::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AdvancedAuthenticationTypeE::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

