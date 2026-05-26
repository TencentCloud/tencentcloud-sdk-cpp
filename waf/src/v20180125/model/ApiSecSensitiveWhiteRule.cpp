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

#include <tencentcloud/waf/v20180125/model/ApiSecSensitiveWhiteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecSensitiveWhiteRule::ApiSecSensitiveWhiteRule() :
    m_ruleNameHasBeenSet(false),
    m_apiNameOpHasBeenSet(false),
    m_whiteModeHasBeenSet(false),
    m_whiteFieldsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecSensitiveWhiteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("ApiNameOp") && !value["ApiNameOp"].IsNull())
    {
        if (!value["ApiNameOp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteRule.ApiNameOp` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiNameOp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiNameOp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiNameOp.push_back(item);
        }
        m_apiNameOpHasBeenSet = true;
    }

    if (value.HasMember("WhiteMode") && !value["WhiteMode"].IsNull())
    {
        if (!value["WhiteMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteRule.WhiteMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteMode = value["WhiteMode"].GetInt64();
        m_whiteModeHasBeenSet = true;
    }

    if (value.HasMember("WhiteFields") && !value["WhiteFields"].IsNull())
    {
        if (!value["WhiteFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteRule.WhiteFields` is not array type"));

        const rapidjson::Value &tmpValue = value["WhiteFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecSensitiveWhiteField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_whiteFields.push_back(item);
        }
        m_whiteFieldsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveWhiteRule.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecSensitiveWhiteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiNameOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiNameOp.begin(); itr != m_apiNameOp.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_whiteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteMode, allocator);
    }

    if (m_whiteFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_whiteFields.begin(); itr != m_whiteFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string ApiSecSensitiveWhiteRule::GetRuleName() const
{
    return m_ruleName;
}

void ApiSecSensitiveWhiteRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ApiSecSensitiveWhiteRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<ApiNameOp> ApiSecSensitiveWhiteRule::GetApiNameOp() const
{
    return m_apiNameOp;
}

void ApiSecSensitiveWhiteRule::SetApiNameOp(const vector<ApiNameOp>& _apiNameOp)
{
    m_apiNameOp = _apiNameOp;
    m_apiNameOpHasBeenSet = true;
}

bool ApiSecSensitiveWhiteRule::ApiNameOpHasBeenSet() const
{
    return m_apiNameOpHasBeenSet;
}

int64_t ApiSecSensitiveWhiteRule::GetWhiteMode() const
{
    return m_whiteMode;
}

void ApiSecSensitiveWhiteRule::SetWhiteMode(const int64_t& _whiteMode)
{
    m_whiteMode = _whiteMode;
    m_whiteModeHasBeenSet = true;
}

bool ApiSecSensitiveWhiteRule::WhiteModeHasBeenSet() const
{
    return m_whiteModeHasBeenSet;
}

vector<ApiSecSensitiveWhiteField> ApiSecSensitiveWhiteRule::GetWhiteFields() const
{
    return m_whiteFields;
}

void ApiSecSensitiveWhiteRule::SetWhiteFields(const vector<ApiSecSensitiveWhiteField>& _whiteFields)
{
    m_whiteFields = _whiteFields;
    m_whiteFieldsHasBeenSet = true;
}

bool ApiSecSensitiveWhiteRule::WhiteFieldsHasBeenSet() const
{
    return m_whiteFieldsHasBeenSet;
}

int64_t ApiSecSensitiveWhiteRule::GetStatus() const
{
    return m_status;
}

void ApiSecSensitiveWhiteRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiSecSensitiveWhiteRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApiSecSensitiveWhiteRule::GetDescription() const
{
    return m_description;
}

void ApiSecSensitiveWhiteRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiSecSensitiveWhiteRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ApiSecSensitiveWhiteRule::GetUpdateTime() const
{
    return m_updateTime;
}

void ApiSecSensitiveWhiteRule::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApiSecSensitiveWhiteRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

