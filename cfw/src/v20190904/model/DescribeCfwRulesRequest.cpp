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

#include <tencentcloud/cfw/v20190904/model/DescribeCfwRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCfwRulesRequest::DescribeCfwRulesRequest() :
    m_ruleTypeHasBeenSet(false),
    m_listTypeHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_includeDisabledHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleUuidHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_expandNamesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeCfwRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_listTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listType.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleAction, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_includeDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeDisabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeDisabled, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_expandNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expandNames, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCfwRulesRequest::GetRuleType() const
{
    return m_ruleType;
}

void DescribeCfwRulesRequest::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeCfwRulesRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DescribeCfwRulesRequest::GetListType() const
{
    return m_listType;
}

void DescribeCfwRulesRequest::SetListType(const string& _listType)
{
    m_listType = _listType;
    m_listTypeHasBeenSet = true;
}

bool DescribeCfwRulesRequest::ListTypeHasBeenSet() const
{
    return m_listTypeHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetDirection() const
{
    return m_direction;
}

void DescribeCfwRulesRequest::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeCfwRulesRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void DescribeCfwRulesRequest::SetRuleAction(const int64_t& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool DescribeCfwRulesRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

bool DescribeCfwRulesRequest::GetEnabled() const
{
    return m_enabled;
}

void DescribeCfwRulesRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool DescribeCfwRulesRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool DescribeCfwRulesRequest::GetIncludeDisabled() const
{
    return m_includeDisabled;
}

void DescribeCfwRulesRequest::SetIncludeDisabled(const bool& _includeDisabled)
{
    m_includeDisabled = _includeDisabled;
    m_includeDisabledHasBeenSet = true;
}

bool DescribeCfwRulesRequest::IncludeDisabledHasBeenSet() const
{
    return m_includeDisabledHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeCfwRulesRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeCfwRulesRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DescribeCfwRulesRequest::GetRuleUuid() const
{
    return m_ruleUuid;
}

void DescribeCfwRulesRequest::SetRuleUuid(const string& _ruleUuid)
{
    m_ruleUuid = _ruleUuid;
    m_ruleUuidHasBeenSet = true;
}

bool DescribeCfwRulesRequest::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}

string DescribeCfwRulesRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeCfwRulesRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeCfwRulesRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeCfwRulesRequest::GetSrcIp() const
{
    return m_srcIp;
}

void DescribeCfwRulesRequest::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool DescribeCfwRulesRequest::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string DescribeCfwRulesRequest::GetDstIp() const
{
    return m_dstIp;
}

void DescribeCfwRulesRequest::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool DescribeCfwRulesRequest::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string DescribeCfwRulesRequest::GetDescription() const
{
    return m_description;
}

void DescribeCfwRulesRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeCfwRulesRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeCfwRulesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeCfwRulesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeCfwRulesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeCfwRulesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeCfwRulesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeCfwRulesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool DescribeCfwRulesRequest::GetExpandNames() const
{
    return m_expandNames;
}

void DescribeCfwRulesRequest::SetExpandNames(const bool& _expandNames)
{
    m_expandNames = _expandNames;
    m_expandNamesHasBeenSet = true;
}

bool DescribeCfwRulesRequest::ExpandNamesHasBeenSet() const
{
    return m_expandNamesHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCfwRulesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCfwRulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCfwRulesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCfwRulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


