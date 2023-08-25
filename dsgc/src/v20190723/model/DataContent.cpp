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

#include <tencentcloud/dsgc/v20190723/model/DataContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DataContent::DataContent() :
    m_ruleContentHasBeenSet(false),
    m_isIgnoreCaseHasBeenSet(false)
{
}

CoreInternalOutcome DataContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleContent") && !value["RuleContent"].IsNull())
    {
        if (!value["RuleContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataContent.RuleContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleContent = string(value["RuleContent"].GetString());
        m_ruleContentHasBeenSet = true;
    }

    if (value.HasMember("IsIgnoreCase") && !value["IsIgnoreCase"].IsNull())
    {
        if (!value["IsIgnoreCase"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataContent.IsIgnoreCase` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnoreCase = value["IsIgnoreCase"].GetBool();
        m_isIgnoreCaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_isIgnoreCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnoreCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnoreCase, allocator);
    }

}


string DataContent::GetRuleContent() const
{
    return m_ruleContent;
}

void DataContent::SetRuleContent(const string& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool DataContent::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

bool DataContent::GetIsIgnoreCase() const
{
    return m_isIgnoreCase;
}

void DataContent::SetIsIgnoreCase(const bool& _isIgnoreCase)
{
    m_isIgnoreCase = _isIgnoreCase;
    m_isIgnoreCaseHasBeenSet = true;
}

bool DataContent::IsIgnoreCaseHasBeenSet() const
{
    return m_isIgnoreCaseHasBeenSet;
}

