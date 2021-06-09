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

#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateTagRetentionRuleRequest::CreateTagRetentionRuleRequest() :
    m_registryIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_retentionRuleHasBeenSet(false),
    m_cronSettingHasBeenSet(false),
    m_disabledHasBeenSet(false)
{
}

string CreateTagRetentionRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_namespaceId, allocator);
    }

    if (m_retentionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retentionRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cronSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronSetting.c_str(), allocator).Move(), allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTagRetentionRuleRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateTagRetentionRuleRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateTagRetentionRuleRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

int64_t CreateTagRetentionRuleRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void CreateTagRetentionRuleRequest::SetNamespaceId(const int64_t& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool CreateTagRetentionRuleRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

RetentionRule CreateTagRetentionRuleRequest::GetRetentionRule() const
{
    return m_retentionRule;
}

void CreateTagRetentionRuleRequest::SetRetentionRule(const RetentionRule& _retentionRule)
{
    m_retentionRule = _retentionRule;
    m_retentionRuleHasBeenSet = true;
}

bool CreateTagRetentionRuleRequest::RetentionRuleHasBeenSet() const
{
    return m_retentionRuleHasBeenSet;
}

string CreateTagRetentionRuleRequest::GetCronSetting() const
{
    return m_cronSetting;
}

void CreateTagRetentionRuleRequest::SetCronSetting(const string& _cronSetting)
{
    m_cronSetting = _cronSetting;
    m_cronSettingHasBeenSet = true;
}

bool CreateTagRetentionRuleRequest::CronSettingHasBeenSet() const
{
    return m_cronSettingHasBeenSet;
}

bool CreateTagRetentionRuleRequest::GetDisabled() const
{
    return m_disabled;
}

void CreateTagRetentionRuleRequest::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool CreateTagRetentionRuleRequest::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}


