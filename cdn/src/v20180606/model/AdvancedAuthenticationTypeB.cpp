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

#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeB.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedAuthenticationTypeB::AdvancedAuthenticationTypeB() :
    m_keyAlphaHasBeenSet(false),
    m_keyBetaHasBeenSet(false),
    m_keyGammaHasBeenSet(false),
    m_signParamHasBeenSet(false),
    m_timeParamHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_failCodeHasBeenSet(false),
    m_expireCodeHasBeenSet(false),
    m_rulePathsHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedAuthenticationTypeB::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyAlpha") && !value["KeyAlpha"].IsNull())
    {
        if (!value["KeyAlpha"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.KeyAlpha` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyAlpha = string(value["KeyAlpha"].GetString());
        m_keyAlphaHasBeenSet = true;
    }

    if (value.HasMember("KeyBeta") && !value["KeyBeta"].IsNull())
    {
        if (!value["KeyBeta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.KeyBeta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyBeta = string(value["KeyBeta"].GetString());
        m_keyBetaHasBeenSet = true;
    }

    if (value.HasMember("KeyGamma") && !value["KeyGamma"].IsNull())
    {
        if (!value["KeyGamma"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.KeyGamma` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyGamma = string(value["KeyGamma"].GetString());
        m_keyGammaHasBeenSet = true;
    }

    if (value.HasMember("SignParam") && !value["SignParam"].IsNull())
    {
        if (!value["SignParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.SignParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signParam = string(value["SignParam"].GetString());
        m_signParamHasBeenSet = true;
    }

    if (value.HasMember("TimeParam") && !value["TimeParam"].IsNull())
    {
        if (!value["TimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.TimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeParam = string(value["TimeParam"].GetString());
        m_timeParamHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("FailCode") && !value["FailCode"].IsNull())
    {
        if (!value["FailCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.FailCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCode = value["FailCode"].GetInt64();
        m_failCodeHasBeenSet = true;
    }

    if (value.HasMember("ExpireCode") && !value["ExpireCode"].IsNull())
    {
        if (!value["ExpireCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.ExpireCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireCode = value["ExpireCode"].GetInt64();
        m_expireCodeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeB.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedAuthenticationTypeB::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyAlpha.c_str(), allocator).Move(), allocator);
    }

    if (m_keyBetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyBeta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyBeta.c_str(), allocator).Move(), allocator);
    }

    if (m_keyGammaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyGamma";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyGamma.c_str(), allocator).Move(), allocator);
    }

    if (m_signParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signParam.c_str(), allocator).Move(), allocator);
    }

    if (m_timeParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeParam.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_failCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCode, allocator);
    }

    if (m_expireCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireCode, allocator);
    }

    if (m_rulePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rulePaths.begin(); itr != m_rulePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AdvancedAuthenticationTypeB::GetKeyAlpha() const
{
    return m_keyAlpha;
}

void AdvancedAuthenticationTypeB::SetKeyAlpha(const string& _keyAlpha)
{
    m_keyAlpha = _keyAlpha;
    m_keyAlphaHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::KeyAlphaHasBeenSet() const
{
    return m_keyAlphaHasBeenSet;
}

string AdvancedAuthenticationTypeB::GetKeyBeta() const
{
    return m_keyBeta;
}

void AdvancedAuthenticationTypeB::SetKeyBeta(const string& _keyBeta)
{
    m_keyBeta = _keyBeta;
    m_keyBetaHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::KeyBetaHasBeenSet() const
{
    return m_keyBetaHasBeenSet;
}

string AdvancedAuthenticationTypeB::GetKeyGamma() const
{
    return m_keyGamma;
}

void AdvancedAuthenticationTypeB::SetKeyGamma(const string& _keyGamma)
{
    m_keyGamma = _keyGamma;
    m_keyGammaHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::KeyGammaHasBeenSet() const
{
    return m_keyGammaHasBeenSet;
}

string AdvancedAuthenticationTypeB::GetSignParam() const
{
    return m_signParam;
}

void AdvancedAuthenticationTypeB::SetSignParam(const string& _signParam)
{
    m_signParam = _signParam;
    m_signParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::SignParamHasBeenSet() const
{
    return m_signParamHasBeenSet;
}

string AdvancedAuthenticationTypeB::GetTimeParam() const
{
    return m_timeParam;
}

void AdvancedAuthenticationTypeB::SetTimeParam(const string& _timeParam)
{
    m_timeParam = _timeParam;
    m_timeParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::TimeParamHasBeenSet() const
{
    return m_timeParamHasBeenSet;
}

int64_t AdvancedAuthenticationTypeB::GetExpireTime() const
{
    return m_expireTime;
}

void AdvancedAuthenticationTypeB::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string AdvancedAuthenticationTypeB::GetTimeFormat() const
{
    return m_timeFormat;
}

void AdvancedAuthenticationTypeB::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

int64_t AdvancedAuthenticationTypeB::GetFailCode() const
{
    return m_failCode;
}

void AdvancedAuthenticationTypeB::SetFailCode(const int64_t& _failCode)
{
    m_failCode = _failCode;
    m_failCodeHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::FailCodeHasBeenSet() const
{
    return m_failCodeHasBeenSet;
}

int64_t AdvancedAuthenticationTypeB::GetExpireCode() const
{
    return m_expireCode;
}

void AdvancedAuthenticationTypeB::SetExpireCode(const int64_t& _expireCode)
{
    m_expireCode = _expireCode;
    m_expireCodeHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::ExpireCodeHasBeenSet() const
{
    return m_expireCodeHasBeenSet;
}

vector<string> AdvancedAuthenticationTypeB::GetRulePaths() const
{
    return m_rulePaths;
}

void AdvancedAuthenticationTypeB::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool AdvancedAuthenticationTypeB::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

