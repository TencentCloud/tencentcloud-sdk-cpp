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

#include <tencentcloud/waf/v20180125/model/ApiSecPrivilegeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecPrivilegeRule::ApiSecPrivilegeRule() :
    m_ruleNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_parameterListHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_apiNameOpHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecPrivilegeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.ApiName` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_apiName.push_back((*itr).GetString());
        }
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("ParameterList") && !value["ParameterList"].IsNull())
    {
        if (!value["ParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.ParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_parameterList.push_back((*itr).GetString());
        }
        m_parameterListHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ApiNameOp") && !value["ApiNameOp"].IsNull())
    {
        if (!value["ApiNameOp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.ApiNameOp` is not array type"));

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

    if (value.HasMember("Option") && !value["Option"].IsNull())
    {
        if (!value["Option"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule.Option` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_option = value["Option"].GetUint64();
        m_optionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecPrivilegeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiName.begin(); itr != m_apiName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_parameterList.begin(); itr != m_parameterList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
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

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_option, allocator);
    }

}


string ApiSecPrivilegeRule::GetRuleName() const
{
    return m_ruleName;
}

void ApiSecPrivilegeRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ApiSecPrivilegeRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t ApiSecPrivilegeRule::GetStatus() const
{
    return m_status;
}

void ApiSecPrivilegeRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiSecPrivilegeRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ApiSecPrivilegeRule::GetApiName() const
{
    return m_apiName;
}

void ApiSecPrivilegeRule::SetApiName(const vector<string>& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiSecPrivilegeRule::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiSecPrivilegeRule::GetPosition() const
{
    return m_position;
}

void ApiSecPrivilegeRule::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ApiSecPrivilegeRule::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

vector<string> ApiSecPrivilegeRule::GetParameterList() const
{
    return m_parameterList;
}

void ApiSecPrivilegeRule::SetParameterList(const vector<string>& _parameterList)
{
    m_parameterList = _parameterList;
    m_parameterListHasBeenSet = true;
}

bool ApiSecPrivilegeRule::ParameterListHasBeenSet() const
{
    return m_parameterListHasBeenSet;
}

int64_t ApiSecPrivilegeRule::GetUpdateTime() const
{
    return m_updateTime;
}

void ApiSecPrivilegeRule::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApiSecPrivilegeRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ApiSecPrivilegeRule::GetSource() const
{
    return m_source;
}

void ApiSecPrivilegeRule::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ApiSecPrivilegeRule::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<ApiNameOp> ApiSecPrivilegeRule::GetApiNameOp() const
{
    return m_apiNameOp;
}

void ApiSecPrivilegeRule::SetApiNameOp(const vector<ApiNameOp>& _apiNameOp)
{
    m_apiNameOp = _apiNameOp;
    m_apiNameOpHasBeenSet = true;
}

bool ApiSecPrivilegeRule::ApiNameOpHasBeenSet() const
{
    return m_apiNameOpHasBeenSet;
}

uint64_t ApiSecPrivilegeRule::GetOption() const
{
    return m_option;
}

void ApiSecPrivilegeRule::SetOption(const uint64_t& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool ApiSecPrivilegeRule::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

