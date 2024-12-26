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

#include <tencentcloud/csip/v20221121/model/UebaCustomRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UebaCustomRule::UebaCustomRule() :
    m_ruleNameHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_timeIntervalHasBeenSet(false),
    m_eventContentHasBeenSet(false),
    m_alertNameHasBeenSet(false),
    m_alterLevelHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operateObjectHasBeenSet(false),
    m_operateMethodHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_logTypeStrHasBeenSet(false)
{
}

CoreInternalOutcome UebaCustomRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.UserType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetInt64();
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeInterval") && !value["TimeInterval"].IsNull())
    {
        if (!value["TimeInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.TimeInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeInterval = value["TimeInterval"].GetInt64();
        m_timeIntervalHasBeenSet = true;
    }

    if (value.HasMember("EventContent") && !value["EventContent"].IsNull())
    {
        if (!value["EventContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.EventContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventContent.Deserialize(value["EventContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventContentHasBeenSet = true;
    }

    if (value.HasMember("AlertName") && !value["AlertName"].IsNull())
    {
        if (!value["AlertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.AlertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertName = string(value["AlertName"].GetString());
        m_alertNameHasBeenSet = true;
    }

    if (value.HasMember("AlterLevel") && !value["AlterLevel"].IsNull())
    {
        if (!value["AlterLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.AlterLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alterLevel = value["AlterLevel"].GetInt64();
        m_alterLevelHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.Operator` is not array type"));

        const rapidjson::Value &tmpValue = value["Operator"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operator.push_back((*itr).GetString());
        }
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("OperateObject") && !value["OperateObject"].IsNull())
    {
        if (!value["OperateObject"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.OperateObject` is not array type"));

        const rapidjson::Value &tmpValue = value["OperateObject"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operateObject.push_back((*itr).GetString());
        }
        m_operateObjectHasBeenSet = true;
    }

    if (value.HasMember("OperateMethod") && !value["OperateMethod"].IsNull())
    {
        if (!value["OperateMethod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.OperateMethod` is not array type"));

        const rapidjson::Value &tmpValue = value["OperateMethod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operateMethod.push_back((*itr).GetString());
        }
        m_operateMethodHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("LogTypeStr") && !value["LogTypeStr"].IsNull())
    {
        if (!value["LogTypeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaCustomRule.LogTypeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTypeStr = string(value["LogTypeStr"].GetString());
        m_logTypeStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UebaCustomRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userType, allocator);
    }

    if (m_timeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeInterval, allocator);
    }

    if (m_eventContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_alertNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertName.c_str(), allocator).Move(), allocator);
    }

    if (m_alterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alterLevel, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operator.begin(); itr != m_operator.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operateObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operateObject.begin(); itr != m_operateObject.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operateMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operateMethod.begin(); itr != m_operateMethod.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTypeStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTypeStr.c_str(), allocator).Move(), allocator);
    }

}


string UebaCustomRule::GetRuleName() const
{
    return m_ruleName;
}

void UebaCustomRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool UebaCustomRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t UebaCustomRule::GetUserType() const
{
    return m_userType;
}

void UebaCustomRule::SetUserType(const int64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool UebaCustomRule::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

int64_t UebaCustomRule::GetTimeInterval() const
{
    return m_timeInterval;
}

void UebaCustomRule::SetTimeInterval(const int64_t& _timeInterval)
{
    m_timeInterval = _timeInterval;
    m_timeIntervalHasBeenSet = true;
}

bool UebaCustomRule::TimeIntervalHasBeenSet() const
{
    return m_timeIntervalHasBeenSet;
}

UebaEventContent UebaCustomRule::GetEventContent() const
{
    return m_eventContent;
}

void UebaCustomRule::SetEventContent(const UebaEventContent& _eventContent)
{
    m_eventContent = _eventContent;
    m_eventContentHasBeenSet = true;
}

bool UebaCustomRule::EventContentHasBeenSet() const
{
    return m_eventContentHasBeenSet;
}

string UebaCustomRule::GetAlertName() const
{
    return m_alertName;
}

void UebaCustomRule::SetAlertName(const string& _alertName)
{
    m_alertName = _alertName;
    m_alertNameHasBeenSet = true;
}

bool UebaCustomRule::AlertNameHasBeenSet() const
{
    return m_alertNameHasBeenSet;
}

int64_t UebaCustomRule::GetAlterLevel() const
{
    return m_alterLevel;
}

void UebaCustomRule::SetAlterLevel(const int64_t& _alterLevel)
{
    m_alterLevel = _alterLevel;
    m_alterLevelHasBeenSet = true;
}

bool UebaCustomRule::AlterLevelHasBeenSet() const
{
    return m_alterLevelHasBeenSet;
}

vector<string> UebaCustomRule::GetOperator() const
{
    return m_operator;
}

void UebaCustomRule::SetOperator(const vector<string>& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool UebaCustomRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> UebaCustomRule::GetOperateObject() const
{
    return m_operateObject;
}

void UebaCustomRule::SetOperateObject(const vector<string>& _operateObject)
{
    m_operateObject = _operateObject;
    m_operateObjectHasBeenSet = true;
}

bool UebaCustomRule::OperateObjectHasBeenSet() const
{
    return m_operateObjectHasBeenSet;
}

vector<string> UebaCustomRule::GetOperateMethod() const
{
    return m_operateMethod;
}

void UebaCustomRule::SetOperateMethod(const vector<string>& _operateMethod)
{
    m_operateMethod = _operateMethod;
    m_operateMethodHasBeenSet = true;
}

bool UebaCustomRule::OperateMethodHasBeenSet() const
{
    return m_operateMethodHasBeenSet;
}

string UebaCustomRule::GetLogType() const
{
    return m_logType;
}

void UebaCustomRule::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool UebaCustomRule::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string UebaCustomRule::GetLogTypeStr() const
{
    return m_logTypeStr;
}

void UebaCustomRule::SetLogTypeStr(const string& _logTypeStr)
{
    m_logTypeStr = _logTypeStr;
    m_logTypeStrHasBeenSet = true;
}

bool UebaCustomRule::LogTypeStrHasBeenSet() const
{
    return m_logTypeStrHasBeenSet;
}

