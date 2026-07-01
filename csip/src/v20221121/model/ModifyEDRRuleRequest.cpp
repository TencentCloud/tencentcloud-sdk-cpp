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

#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyEDRRuleRequest::ModifyEDRRuleRequest() :
    m_ruleTypeHasBeenSet(false),
    m_alertActionHasBeenSet(false),
    m_cWPScopeHasBeenSet(false),
    m_tCSSScopeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_detectModeHasBeenSet(false),
    m_attackStageHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dealOldEventsHasBeenSet(false),
    m_md5ListHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileDirectoryHasBeenSet(false),
    m_cmdLineRulesHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_outboundIPHasBeenSet(false),
    m_inboundIPHasBeenSet(false),
    m_imageIDsHasBeenSet(false),
    m_processNetworkRulesHasBeenSet(false),
    m_targetAppIDsHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_instanceIDsWithAppIdHasBeenSet(false),
    m_excludeInstanceIDsWithAppIdHasBeenSet(false)
{
}

string ModifyEDRRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_alertActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alertAction, allocator);
    }

    if (m_cWPScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cWPScope, allocator);
    }

    if (m_tCSSScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tCSSScope, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_level, allocator);
    }

    if (m_detectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_detectMode, allocator);
    }

    if (m_attackStageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attackStage.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_dealOldEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOldEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealOldEvents, allocator);
    }

    if (m_md5ListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5List";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_md5List.begin(); itr != m_md5List.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileName.begin(); itr != m_fileName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDirectory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileDirectory.begin(); itr != m_fileDirectory.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cmdLineRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLineRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cmdLineRules.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_outboundIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outboundIP.begin(); itr != m_outboundIP.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inboundIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inboundIP.begin(); itr != m_inboundIP.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIDs.begin(); itr != m_imageIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_processNetworkRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessNetworkRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processNetworkRules.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetAppIDs.begin(); itr != m_targetAppIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIDsWithAppId.begin(); itr != m_instanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeInstanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludeInstanceIDsWithAppId.begin(); itr != m_excludeInstanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyEDRRuleRequest::GetRuleType() const
{
    return m_ruleType;
}

void ModifyEDRRuleRequest::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ModifyEDRRuleRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t ModifyEDRRuleRequest::GetAlertAction() const
{
    return m_alertAction;
}

void ModifyEDRRuleRequest::SetAlertAction(const int64_t& _alertAction)
{
    m_alertAction = _alertAction;
    m_alertActionHasBeenSet = true;
}

bool ModifyEDRRuleRequest::AlertActionHasBeenSet() const
{
    return m_alertActionHasBeenSet;
}

int64_t ModifyEDRRuleRequest::GetCWPScope() const
{
    return m_cWPScope;
}

void ModifyEDRRuleRequest::SetCWPScope(const int64_t& _cWPScope)
{
    m_cWPScope = _cWPScope;
    m_cWPScopeHasBeenSet = true;
}

bool ModifyEDRRuleRequest::CWPScopeHasBeenSet() const
{
    return m_cWPScopeHasBeenSet;
}

int64_t ModifyEDRRuleRequest::GetTCSSScope() const
{
    return m_tCSSScope;
}

void ModifyEDRRuleRequest::SetTCSSScope(const int64_t& _tCSSScope)
{
    m_tCSSScope = _tCSSScope;
    m_tCSSScopeHasBeenSet = true;
}

bool ModifyEDRRuleRequest::TCSSScopeHasBeenSet() const
{
    return m_tCSSScopeHasBeenSet;
}

int64_t ModifyEDRRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyEDRRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyEDRRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyEDRRuleRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyEDRRuleRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyEDRRuleRequest::GetName() const
{
    return m_name;
}

void ModifyEDRRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyEDRRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyEDRRuleRequest::GetContentType() const
{
    return m_contentType;
}

void ModifyEDRRuleRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool ModifyEDRRuleRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

int64_t ModifyEDRRuleRequest::GetLevel() const
{
    return m_level;
}

void ModifyEDRRuleRequest::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ModifyEDRRuleRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t ModifyEDRRuleRequest::GetDetectMode() const
{
    return m_detectMode;
}

void ModifyEDRRuleRequest::SetDetectMode(const int64_t& _detectMode)
{
    m_detectMode = _detectMode;
    m_detectModeHasBeenSet = true;
}

bool ModifyEDRRuleRequest::DetectModeHasBeenSet() const
{
    return m_detectModeHasBeenSet;
}

string ModifyEDRRuleRequest::GetAttackStage() const
{
    return m_attackStage;
}

void ModifyEDRRuleRequest::SetAttackStage(const string& _attackStage)
{
    m_attackStage = _attackStage;
    m_attackStageHasBeenSet = true;
}

bool ModifyEDRRuleRequest::AttackStageHasBeenSet() const
{
    return m_attackStageHasBeenSet;
}

string ModifyEDRRuleRequest::GetRuleID() const
{
    return m_ruleID;
}

void ModifyEDRRuleRequest::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ModifyEDRRuleRequest::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string ModifyEDRRuleRequest::GetDescription() const
{
    return m_description;
}

void ModifyEDRRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyEDRRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyEDRRuleRequest::GetDealOldEvents() const
{
    return m_dealOldEvents;
}

void ModifyEDRRuleRequest::SetDealOldEvents(const int64_t& _dealOldEvents)
{
    m_dealOldEvents = _dealOldEvents;
    m_dealOldEventsHasBeenSet = true;
}

bool ModifyEDRRuleRequest::DealOldEventsHasBeenSet() const
{
    return m_dealOldEventsHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetMd5List() const
{
    return m_md5List;
}

void ModifyEDRRuleRequest::SetMd5List(const vector<string>& _md5List)
{
    m_md5List = _md5List;
    m_md5ListHasBeenSet = true;
}

bool ModifyEDRRuleRequest::Md5ListHasBeenSet() const
{
    return m_md5ListHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetFileName() const
{
    return m_fileName;
}

void ModifyEDRRuleRequest::SetFileName(const vector<string>& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ModifyEDRRuleRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetFileDirectory() const
{
    return m_fileDirectory;
}

void ModifyEDRRuleRequest::SetFileDirectory(const vector<string>& _fileDirectory)
{
    m_fileDirectory = _fileDirectory;
    m_fileDirectoryHasBeenSet = true;
}

bool ModifyEDRRuleRequest::FileDirectoryHasBeenSet() const
{
    return m_fileDirectoryHasBeenSet;
}

RuleContentCmdLine ModifyEDRRuleRequest::GetCmdLineRules() const
{
    return m_cmdLineRules;
}

void ModifyEDRRuleRequest::SetCmdLineRules(const RuleContentCmdLine& _cmdLineRules)
{
    m_cmdLineRules = _cmdLineRules;
    m_cmdLineRulesHasBeenSet = true;
}

bool ModifyEDRRuleRequest::CmdLineRulesHasBeenSet() const
{
    return m_cmdLineRulesHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetDomains() const
{
    return m_domains;
}

void ModifyEDRRuleRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool ModifyEDRRuleRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetOutboundIP() const
{
    return m_outboundIP;
}

void ModifyEDRRuleRequest::SetOutboundIP(const vector<string>& _outboundIP)
{
    m_outboundIP = _outboundIP;
    m_outboundIPHasBeenSet = true;
}

bool ModifyEDRRuleRequest::OutboundIPHasBeenSet() const
{
    return m_outboundIPHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetInboundIP() const
{
    return m_inboundIP;
}

void ModifyEDRRuleRequest::SetInboundIP(const vector<string>& _inboundIP)
{
    m_inboundIP = _inboundIP;
    m_inboundIPHasBeenSet = true;
}

bool ModifyEDRRuleRequest::InboundIPHasBeenSet() const
{
    return m_inboundIPHasBeenSet;
}

vector<string> ModifyEDRRuleRequest::GetImageIDs() const
{
    return m_imageIDs;
}

void ModifyEDRRuleRequest::SetImageIDs(const vector<string>& _imageIDs)
{
    m_imageIDs = _imageIDs;
    m_imageIDsHasBeenSet = true;
}

bool ModifyEDRRuleRequest::ImageIDsHasBeenSet() const
{
    return m_imageIDsHasBeenSet;
}

RuleContentProcessNetwork ModifyEDRRuleRequest::GetProcessNetworkRules() const
{
    return m_processNetworkRules;
}

void ModifyEDRRuleRequest::SetProcessNetworkRules(const RuleContentProcessNetwork& _processNetworkRules)
{
    m_processNetworkRules = _processNetworkRules;
    m_processNetworkRulesHasBeenSet = true;
}

bool ModifyEDRRuleRequest::ProcessNetworkRulesHasBeenSet() const
{
    return m_processNetworkRulesHasBeenSet;
}

vector<uint64_t> ModifyEDRRuleRequest::GetTargetAppIDs() const
{
    return m_targetAppIDs;
}

void ModifyEDRRuleRequest::SetTargetAppIDs(const vector<uint64_t>& _targetAppIDs)
{
    m_targetAppIDs = _targetAppIDs;
    m_targetAppIDsHasBeenSet = true;
}

bool ModifyEDRRuleRequest::TargetAppIDsHasBeenSet() const
{
    return m_targetAppIDsHasBeenSet;
}

EdrAlertTarget ModifyEDRRuleRequest::GetTarget() const
{
    return m_target;
}

void ModifyEDRRuleRequest::SetTarget(const EdrAlertTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ModifyEDRRuleRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyEDRRuleRequest::GetInstanceIDsWithAppId() const
{
    return m_instanceIDsWithAppId;
}

void ModifyEDRRuleRequest::SetInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId)
{
    m_instanceIDsWithAppId = _instanceIDsWithAppId;
    m_instanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyEDRRuleRequest::InstanceIDsWithAppIdHasBeenSet() const
{
    return m_instanceIDsWithAppIdHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyEDRRuleRequest::GetExcludeInstanceIDsWithAppId() const
{
    return m_excludeInstanceIDsWithAppId;
}

void ModifyEDRRuleRequest::SetExcludeInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId)
{
    m_excludeInstanceIDsWithAppId = _excludeInstanceIDsWithAppId;
    m_excludeInstanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyEDRRuleRequest::ExcludeInstanceIDsWithAppIdHasBeenSet() const
{
    return m_excludeInstanceIDsWithAppIdHasBeenSet;
}


