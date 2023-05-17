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

#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeEnterpriseSecurityGroupRuleRequest::DescribeEnterpriseSecurityGroupRuleRequest() :
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sourceContentHasBeenSet(false),
    m_destContentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_serviceTemplateIdHasBeenSet(false),
    m_ruleUuidHasBeenSet(false)
{
}

string DescribeEnterpriseSecurityGroupRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageNo.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageSize.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_destContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destContent.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleUuid, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEnterpriseSecurityGroupRuleRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetPageNo(const string& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetPageSize(const string& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetSourceContent() const
{
    return m_sourceContent;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetDestContent() const
{
    return m_destContent;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetDestContent(const string& _destContent)
{
    m_destContent = _destContent;
    m_destContentHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::DestContentHasBeenSet() const
{
    return m_destContentHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetDescription() const
{
    return m_description;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetEnable() const
{
    return m_enable;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetPort() const
{
    return m_port;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleRequest::GetServiceTemplateId() const
{
    return m_serviceTemplateId;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetServiceTemplateId(const string& _serviceTemplateId)
{
    m_serviceTemplateId = _serviceTemplateId;
    m_serviceTemplateIdHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::ServiceTemplateIdHasBeenSet() const
{
    return m_serviceTemplateIdHasBeenSet;
}

int64_t DescribeEnterpriseSecurityGroupRuleRequest::GetRuleUuid() const
{
    return m_ruleUuid;
}

void DescribeEnterpriseSecurityGroupRuleRequest::SetRuleUuid(const int64_t& _ruleUuid)
{
    m_ruleUuid = _ruleUuid;
    m_ruleUuidHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleRequest::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}


