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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPADiscoveryRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPADiscoveryRuleRequest::ModifyDSPADiscoveryRuleRequest() :
    m_dspaIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rDBRulesHasBeenSet(false),
    m_cOSRulesHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyDSPADiscoveryRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_rDBRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RDBRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rDBRules.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cOSRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cOSRules.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPADiscoveryRuleRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPADiscoveryRuleRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPADiscoveryRuleRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string ModifyDSPADiscoveryRuleRequest::GetName() const
{
    return m_name;
}

void ModifyDSPADiscoveryRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDSPADiscoveryRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyDSPADiscoveryRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyDSPADiscoveryRuleRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyDSPADiscoveryRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyDSPADiscoveryRuleRequest::GetDescription() const
{
    return m_description;
}

void ModifyDSPADiscoveryRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDSPADiscoveryRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

ScanTaskRDBRules ModifyDSPADiscoveryRuleRequest::GetRDBRules() const
{
    return m_rDBRules;
}

void ModifyDSPADiscoveryRuleRequest::SetRDBRules(const ScanTaskRDBRules& _rDBRules)
{
    m_rDBRules = _rDBRules;
    m_rDBRulesHasBeenSet = true;
}

bool ModifyDSPADiscoveryRuleRequest::RDBRulesHasBeenSet() const
{
    return m_rDBRulesHasBeenSet;
}

ScanTaskCOSRules ModifyDSPADiscoveryRuleRequest::GetCOSRules() const
{
    return m_cOSRules;
}

void ModifyDSPADiscoveryRuleRequest::SetCOSRules(const ScanTaskCOSRules& _cOSRules)
{
    m_cOSRules = _cOSRules;
    m_cOSRulesHasBeenSet = true;
}

bool ModifyDSPADiscoveryRuleRequest::COSRulesHasBeenSet() const
{
    return m_cOSRulesHasBeenSet;
}

int64_t ModifyDSPADiscoveryRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyDSPADiscoveryRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDSPADiscoveryRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


