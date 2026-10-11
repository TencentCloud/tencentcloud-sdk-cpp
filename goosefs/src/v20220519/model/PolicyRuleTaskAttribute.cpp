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

#include <tencentcloud/goosefs/v20220519/model/PolicyRuleTaskAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

PolicyRuleTaskAttribute::PolicyRuleTaskAttribute() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scanDirHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_policyRuleSetHasBeenSet(false),
    m_enableManifestHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome PolicyRuleTaskAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ScanDir") && !value["ScanDir"].IsNull())
    {
        if (!value["ScanDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.ScanDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanDir = string(value["ScanDir"].GetString());
        m_scanDirHasBeenSet = true;
    }

    if (value.HasMember("Execution") && !value["Execution"].IsNull())
    {
        if (!value["Execution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.Execution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_execution.Deserialize(value["Execution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_executionHasBeenSet = true;
    }

    if (value.HasMember("PolicyRuleSet") && !value["PolicyRuleSet"].IsNull())
    {
        if (!value["PolicyRuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.PolicyRuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyRuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PolicyRuleOperator item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policyRuleSet.push_back(item);
        }
        m_policyRuleSetHasBeenSet = true;
    }

    if (value.HasMember("EnableManifest") && !value["EnableManifest"].IsNull())
    {
        if (!value["EnableManifest"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.EnableManifest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableManifest = value["EnableManifest"].GetBool();
        m_enableManifestHasBeenSet = true;
    }

    if (value.HasMember("Manifest") && !value["Manifest"].IsNull())
    {
        if (!value["Manifest"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.Manifest` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manifest.Deserialize(value["Manifest"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manifestHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRuleTaskAttribute.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyRuleTaskAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scanDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanDir.c_str(), allocator).Move(), allocator);
    }

    if (m_executionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Execution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_execution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_policyRuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyRuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyRuleSet.begin(); itr != m_policyRuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableManifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableManifest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableManifest, allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manifest.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string PolicyRuleTaskAttribute::GetRuleId() const
{
    return m_ruleId;
}

void PolicyRuleTaskAttribute::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string PolicyRuleTaskAttribute::GetName() const
{
    return m_name;
}

void PolicyRuleTaskAttribute::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PolicyRuleTaskAttribute::GetScanDir() const
{
    return m_scanDir;
}

void PolicyRuleTaskAttribute::SetScanDir(const string& _scanDir)
{
    m_scanDir = _scanDir;
    m_scanDirHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::ScanDirHasBeenSet() const
{
    return m_scanDirHasBeenSet;
}

ExecutionPlan PolicyRuleTaskAttribute::GetExecution() const
{
    return m_execution;
}

void PolicyRuleTaskAttribute::SetExecution(const ExecutionPlan& _execution)
{
    m_execution = _execution;
    m_executionHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::ExecutionHasBeenSet() const
{
    return m_executionHasBeenSet;
}

vector<PolicyRuleOperator> PolicyRuleTaskAttribute::GetPolicyRuleSet() const
{
    return m_policyRuleSet;
}

void PolicyRuleTaskAttribute::SetPolicyRuleSet(const vector<PolicyRuleOperator>& _policyRuleSet)
{
    m_policyRuleSet = _policyRuleSet;
    m_policyRuleSetHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::PolicyRuleSetHasBeenSet() const
{
    return m_policyRuleSetHasBeenSet;
}

bool PolicyRuleTaskAttribute::GetEnableManifest() const
{
    return m_enableManifest;
}

void PolicyRuleTaskAttribute::SetEnableManifest(const bool& _enableManifest)
{
    m_enableManifest = _enableManifest;
    m_enableManifestHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::EnableManifestHasBeenSet() const
{
    return m_enableManifestHasBeenSet;
}

ManifestAttr PolicyRuleTaskAttribute::GetManifest() const
{
    return m_manifest;
}

void PolicyRuleTaskAttribute::SetManifest(const ManifestAttr& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

uint64_t PolicyRuleTaskAttribute::GetStatus() const
{
    return m_status;
}

void PolicyRuleTaskAttribute::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PolicyRuleTaskAttribute::GetCreateTime() const
{
    return m_createTime;
}

void PolicyRuleTaskAttribute::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PolicyRuleTaskAttribute::GetModifyTime() const
{
    return m_modifyTime;
}

void PolicyRuleTaskAttribute::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool PolicyRuleTaskAttribute::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

