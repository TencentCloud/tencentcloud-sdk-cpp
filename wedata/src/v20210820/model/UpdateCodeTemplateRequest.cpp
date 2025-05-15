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

#include <tencentcloud/wedata/v20210820/model/UpdateCodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateCodeTemplateRequest::UpdateCodeTemplateRequest() :
    m_projectIdHasBeenSet(false),
    m_codeTemplateIdHasBeenSet(false),
    m_codeTemplateNameHasBeenSet(false),
    m_inChargeIdHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_extHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_codeTemplateDescHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_scriptChangeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

string UpdateCodeTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inChargeId.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ext.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTemplateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeTemplateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptChange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scriptChange, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCodeTemplateRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateCodeTemplateRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateCodeTemplateRequest::GetCodeTemplateId() const
{
    return m_codeTemplateId;
}

void UpdateCodeTemplateRequest::SetCodeTemplateId(const string& _codeTemplateId)
{
    m_codeTemplateId = _codeTemplateId;
    m_codeTemplateIdHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::CodeTemplateIdHasBeenSet() const
{
    return m_codeTemplateIdHasBeenSet;
}

string UpdateCodeTemplateRequest::GetCodeTemplateName() const
{
    return m_codeTemplateName;
}

void UpdateCodeTemplateRequest::SetCodeTemplateName(const string& _codeTemplateName)
{
    m_codeTemplateName = _codeTemplateName;
    m_codeTemplateNameHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::CodeTemplateNameHasBeenSet() const
{
    return m_codeTemplateNameHasBeenSet;
}

string UpdateCodeTemplateRequest::GetInChargeId() const
{
    return m_inChargeId;
}

void UpdateCodeTemplateRequest::SetInChargeId(const string& _inChargeId)
{
    m_inChargeId = _inChargeId;
    m_inChargeIdHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::InChargeIdHasBeenSet() const
{
    return m_inChargeIdHasBeenSet;
}

string UpdateCodeTemplateRequest::GetInCharge() const
{
    return m_inCharge;
}

void UpdateCodeTemplateRequest::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

TaskExtDsVO UpdateCodeTemplateRequest::GetExt() const
{
    return m_ext;
}

void UpdateCodeTemplateRequest::SetExt(const TaskExtDsVO& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string UpdateCodeTemplateRequest::GetBrokerIp() const
{
    return m_brokerIp;
}

void UpdateCodeTemplateRequest::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string UpdateCodeTemplateRequest::GetResourceGroup() const
{
    return m_resourceGroup;
}

void UpdateCodeTemplateRequest::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string UpdateCodeTemplateRequest::GetCodeTemplateDesc() const
{
    return m_codeTemplateDesc;
}

void UpdateCodeTemplateRequest::SetCodeTemplateDesc(const string& _codeTemplateDesc)
{
    m_codeTemplateDesc = _codeTemplateDesc;
    m_codeTemplateDescHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::CodeTemplateDescHasBeenSet() const
{
    return m_codeTemplateDescHasBeenSet;
}

string UpdateCodeTemplateRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void UpdateCodeTemplateRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

bool UpdateCodeTemplateRequest::GetScriptChange() const
{
    return m_scriptChange;
}

void UpdateCodeTemplateRequest::SetScriptChange(const bool& _scriptChange)
{
    m_scriptChange = _scriptChange;
    m_scriptChangeHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::ScriptChangeHasBeenSet() const
{
    return m_scriptChangeHasBeenSet;
}

string UpdateCodeTemplateRequest::GetContent() const
{
    return m_content;
}

void UpdateCodeTemplateRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UpdateCodeTemplateRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


