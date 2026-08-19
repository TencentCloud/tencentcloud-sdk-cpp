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

#include <tencentcloud/csip/v20221121/model/CreateExposureAutoTagRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateExposureAutoTagRuleRequest::CreateExposureAutoTagRuleRequest() :
    m_memberIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_assetTypesHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_openStatusesHasBeenSet(false),
    m_applyNowHasBeenSet(false)
{
}

string CreateExposureAutoTagRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_assetTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetTypes.begin(); itr != m_assetTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_openStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openStatuses.begin(); itr != m_openStatuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applyNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateExposureAutoTagRuleRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateExposureAutoTagRuleRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CreateExposureAutoTagRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateExposureAutoTagRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CreateExposureAutoTagRuleRequest::GetTag() const
{
    return m_tag;
}

void CreateExposureAutoTagRuleRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string CreateExposureAutoTagRuleRequest::GetDescription() const
{
    return m_description;
}

void CreateExposureAutoTagRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateExposureAutoTagRuleRequest::GetEnable() const
{
    return m_enable;
}

void CreateExposureAutoTagRuleRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<string> CreateExposureAutoTagRuleRequest::GetAssetTypes() const
{
    return m_assetTypes;
}

void CreateExposureAutoTagRuleRequest::SetAssetTypes(const vector<string>& _assetTypes)
{
    m_assetTypes = _assetTypes;
    m_assetTypesHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::AssetTypesHasBeenSet() const
{
    return m_assetTypesHasBeenSet;
}

vector<string> CreateExposureAutoTagRuleRequest::GetPorts() const
{
    return m_ports;
}

void CreateExposureAutoTagRuleRequest::SetPorts(const vector<string>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

vector<string> CreateExposureAutoTagRuleRequest::GetOpenStatuses() const
{
    return m_openStatuses;
}

void CreateExposureAutoTagRuleRequest::SetOpenStatuses(const vector<string>& _openStatuses)
{
    m_openStatuses = _openStatuses;
    m_openStatusesHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::OpenStatusesHasBeenSet() const
{
    return m_openStatusesHasBeenSet;
}

bool CreateExposureAutoTagRuleRequest::GetApplyNow() const
{
    return m_applyNow;
}

void CreateExposureAutoTagRuleRequest::SetApplyNow(const bool& _applyNow)
{
    m_applyNow = _applyNow;
    m_applyNowHasBeenSet = true;
}

bool CreateExposureAutoTagRuleRequest::ApplyNowHasBeenSet() const
{
    return m_applyNowHasBeenSet;
}


