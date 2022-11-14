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

#include <tencentcloud/wedata/v20210820/model/RuleHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleHistory::RuleHistory() :
    m_ruleIdHasBeenSet(false),
    m_alterTimeHasBeenSet(false),
    m_alterContentHasBeenSet(false),
    m_operatorUserIdHasBeenSet(false),
    m_operatorNameHasBeenSet(false)
{
}

CoreInternalOutcome RuleHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleHistory.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("AlterTime") && !value["AlterTime"].IsNull())
    {
        if (!value["AlterTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleHistory.AlterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alterTime = string(value["AlterTime"].GetString());
        m_alterTimeHasBeenSet = true;
    }

    if (value.HasMember("AlterContent") && !value["AlterContent"].IsNull())
    {
        if (!value["AlterContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleHistory.AlterContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alterContent = string(value["AlterContent"].GetString());
        m_alterContentHasBeenSet = true;
    }

    if (value.HasMember("OperatorUserId") && !value["OperatorUserId"].IsNull())
    {
        if (!value["OperatorUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleHistory.OperatorUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUserId = value["OperatorUserId"].GetUint64();
        m_operatorUserIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleHistory.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_alterTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alterTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alterContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlterContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alterContent.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorUserId, allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleHistory::GetRuleId() const
{
    return m_ruleId;
}

void RuleHistory::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleHistory::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleHistory::GetAlterTime() const
{
    return m_alterTime;
}

void RuleHistory::SetAlterTime(const string& _alterTime)
{
    m_alterTime = _alterTime;
    m_alterTimeHasBeenSet = true;
}

bool RuleHistory::AlterTimeHasBeenSet() const
{
    return m_alterTimeHasBeenSet;
}

string RuleHistory::GetAlterContent() const
{
    return m_alterContent;
}

void RuleHistory::SetAlterContent(const string& _alterContent)
{
    m_alterContent = _alterContent;
    m_alterContentHasBeenSet = true;
}

bool RuleHistory::AlterContentHasBeenSet() const
{
    return m_alterContentHasBeenSet;
}

uint64_t RuleHistory::GetOperatorUserId() const
{
    return m_operatorUserId;
}

void RuleHistory::SetOperatorUserId(const uint64_t& _operatorUserId)
{
    m_operatorUserId = _operatorUserId;
    m_operatorUserIdHasBeenSet = true;
}

bool RuleHistory::OperatorUserIdHasBeenSet() const
{
    return m_operatorUserIdHasBeenSet;
}

string RuleHistory::GetOperatorName() const
{
    return m_operatorName;
}

void RuleHistory::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool RuleHistory::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

