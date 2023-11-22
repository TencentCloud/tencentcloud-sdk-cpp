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

#include <tencentcloud/config/v20220802/model/SourceConditionForManage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

SourceConditionForManage::SourceConditionForManage() :
    m_emptyAsHasBeenSet(false),
    m_selectPathHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_desiredValueHasBeenSet(false)
{
}

CoreInternalOutcome SourceConditionForManage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EmptyAs") && !value["EmptyAs"].IsNull())
    {
        if (!value["EmptyAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceConditionForManage.EmptyAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emptyAs = string(value["EmptyAs"].GetString());
        m_emptyAsHasBeenSet = true;
    }

    if (value.HasMember("SelectPath") && !value["SelectPath"].IsNull())
    {
        if (!value["SelectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceConditionForManage.SelectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectPath = string(value["SelectPath"].GetString());
        m_selectPathHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceConditionForManage.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SourceConditionForManage.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("DesiredValue") && !value["DesiredValue"].IsNull())
    {
        if (!value["DesiredValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceConditionForManage.DesiredValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desiredValue = string(value["DesiredValue"].GetString());
        m_desiredValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceConditionForManage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_emptyAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emptyAs.c_str(), allocator).Move(), allocator);
    }

    if (m_selectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_desiredValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desiredValue.c_str(), allocator).Move(), allocator);
    }

}


string SourceConditionForManage::GetEmptyAs() const
{
    return m_emptyAs;
}

void SourceConditionForManage::SetEmptyAs(const string& _emptyAs)
{
    m_emptyAs = _emptyAs;
    m_emptyAsHasBeenSet = true;
}

bool SourceConditionForManage::EmptyAsHasBeenSet() const
{
    return m_emptyAsHasBeenSet;
}

string SourceConditionForManage::GetSelectPath() const
{
    return m_selectPath;
}

void SourceConditionForManage::SetSelectPath(const string& _selectPath)
{
    m_selectPath = _selectPath;
    m_selectPathHasBeenSet = true;
}

bool SourceConditionForManage::SelectPathHasBeenSet() const
{
    return m_selectPathHasBeenSet;
}

string SourceConditionForManage::GetOperator() const
{
    return m_operator;
}

void SourceConditionForManage::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SourceConditionForManage::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

bool SourceConditionForManage::GetRequired() const
{
    return m_required;
}

void SourceConditionForManage::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool SourceConditionForManage::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string SourceConditionForManage::GetDesiredValue() const
{
    return m_desiredValue;
}

void SourceConditionForManage::SetDesiredValue(const string& _desiredValue)
{
    m_desiredValue = _desiredValue;
    m_desiredValueHasBeenSet = true;
}

bool SourceConditionForManage::DesiredValueHasBeenSet() const
{
    return m_desiredValueHasBeenSet;
}

