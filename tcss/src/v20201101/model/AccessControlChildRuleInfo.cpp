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

#include <tencentcloud/tcss/v20201101/model/AccessControlChildRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AccessControlChildRuleInfo::AccessControlChildRuleInfo() :
    m_ruleModeHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_targetFilePathHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome AccessControlChildRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleMode") && !value["RuleMode"].IsNull())
    {
        if (!value["RuleMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlChildRuleInfo.RuleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleMode = string(value["RuleMode"].GetString());
        m_ruleModeHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlChildRuleInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("TargetFilePath") && !value["TargetFilePath"].IsNull())
    {
        if (!value["TargetFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlChildRuleInfo.TargetFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetFilePath = string(value["TargetFilePath"].GetString());
        m_targetFilePathHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlChildRuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessControlChildRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_targetFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

}


string AccessControlChildRuleInfo::GetRuleMode() const
{
    return m_ruleMode;
}

void AccessControlChildRuleInfo::SetRuleMode(const string& _ruleMode)
{
    m_ruleMode = _ruleMode;
    m_ruleModeHasBeenSet = true;
}

bool AccessControlChildRuleInfo::RuleModeHasBeenSet() const
{
    return m_ruleModeHasBeenSet;
}

string AccessControlChildRuleInfo::GetProcessPath() const
{
    return m_processPath;
}

void AccessControlChildRuleInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool AccessControlChildRuleInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string AccessControlChildRuleInfo::GetTargetFilePath() const
{
    return m_targetFilePath;
}

void AccessControlChildRuleInfo::SetTargetFilePath(const string& _targetFilePath)
{
    m_targetFilePath = _targetFilePath;
    m_targetFilePathHasBeenSet = true;
}

bool AccessControlChildRuleInfo::TargetFilePathHasBeenSet() const
{
    return m_targetFilePathHasBeenSet;
}

string AccessControlChildRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void AccessControlChildRuleInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AccessControlChildRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

