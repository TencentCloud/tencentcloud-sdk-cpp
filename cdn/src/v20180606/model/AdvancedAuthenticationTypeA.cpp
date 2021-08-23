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

#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeA.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedAuthenticationTypeA::AdvancedAuthenticationTypeA() :
    m_secretKeyHasBeenSet(false),
    m_signParamHasBeenSet(false),
    m_timeParamHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_expireTimeRequiredHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_failCodeHasBeenSet(false),
    m_expireCodeHasBeenSet(false),
    m_rulePathsHasBeenSet(false),
    m_transformationHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedAuthenticationTypeA::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("SignParam") && !value["SignParam"].IsNull())
    {
        if (!value["SignParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.SignParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signParam = string(value["SignParam"].GetString());
        m_signParamHasBeenSet = true;
    }

    if (value.HasMember("TimeParam") && !value["TimeParam"].IsNull())
    {
        if (!value["TimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.TimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeParam = string(value["TimeParam"].GetString());
        m_timeParamHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTimeRequired") && !value["ExpireTimeRequired"].IsNull())
    {
        if (!value["ExpireTimeRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.ExpireTimeRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expireTimeRequired = value["ExpireTimeRequired"].GetBool();
        m_expireTimeRequiredHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("FailCode") && !value["FailCode"].IsNull())
    {
        if (!value["FailCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.FailCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCode = value["FailCode"].GetInt64();
        m_failCodeHasBeenSet = true;
    }

    if (value.HasMember("ExpireCode") && !value["ExpireCode"].IsNull())
    {
        if (!value["ExpireCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.ExpireCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireCode = value["ExpireCode"].GetInt64();
        m_expireCodeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("Transformation") && !value["Transformation"].IsNull())
    {
        if (!value["Transformation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeA.Transformation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transformation = value["Transformation"].GetInt64();
        m_transformationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedAuthenticationTypeA::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_expireTimeRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimeRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTimeRequired, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
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

    if (m_transformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transformation, allocator);
    }

}


string AdvancedAuthenticationTypeA::GetSecretKey() const
{
    return m_secretKey;
}

void AdvancedAuthenticationTypeA::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string AdvancedAuthenticationTypeA::GetSignParam() const
{
    return m_signParam;
}

void AdvancedAuthenticationTypeA::SetSignParam(const string& _signParam)
{
    m_signParam = _signParam;
    m_signParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::SignParamHasBeenSet() const
{
    return m_signParamHasBeenSet;
}

string AdvancedAuthenticationTypeA::GetTimeParam() const
{
    return m_timeParam;
}

void AdvancedAuthenticationTypeA::SetTimeParam(const string& _timeParam)
{
    m_timeParam = _timeParam;
    m_timeParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::TimeParamHasBeenSet() const
{
    return m_timeParamHasBeenSet;
}

int64_t AdvancedAuthenticationTypeA::GetExpireTime() const
{
    return m_expireTime;
}

void AdvancedAuthenticationTypeA::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

bool AdvancedAuthenticationTypeA::GetExpireTimeRequired() const
{
    return m_expireTimeRequired;
}

void AdvancedAuthenticationTypeA::SetExpireTimeRequired(const bool& _expireTimeRequired)
{
    m_expireTimeRequired = _expireTimeRequired;
    m_expireTimeRequiredHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::ExpireTimeRequiredHasBeenSet() const
{
    return m_expireTimeRequiredHasBeenSet;
}

string AdvancedAuthenticationTypeA::GetFormat() const
{
    return m_format;
}

void AdvancedAuthenticationTypeA::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string AdvancedAuthenticationTypeA::GetTimeFormat() const
{
    return m_timeFormat;
}

void AdvancedAuthenticationTypeA::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

int64_t AdvancedAuthenticationTypeA::GetFailCode() const
{
    return m_failCode;
}

void AdvancedAuthenticationTypeA::SetFailCode(const int64_t& _failCode)
{
    m_failCode = _failCode;
    m_failCodeHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::FailCodeHasBeenSet() const
{
    return m_failCodeHasBeenSet;
}

int64_t AdvancedAuthenticationTypeA::GetExpireCode() const
{
    return m_expireCode;
}

void AdvancedAuthenticationTypeA::SetExpireCode(const int64_t& _expireCode)
{
    m_expireCode = _expireCode;
    m_expireCodeHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::ExpireCodeHasBeenSet() const
{
    return m_expireCodeHasBeenSet;
}

vector<string> AdvancedAuthenticationTypeA::GetRulePaths() const
{
    return m_rulePaths;
}

void AdvancedAuthenticationTypeA::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

int64_t AdvancedAuthenticationTypeA::GetTransformation() const
{
    return m_transformation;
}

void AdvancedAuthenticationTypeA::SetTransformation(const int64_t& _transformation)
{
    m_transformation = _transformation;
    m_transformationHasBeenSet = true;
}

bool AdvancedAuthenticationTypeA::TransformationHasBeenSet() const
{
    return m_transformationHasBeenSet;
}

