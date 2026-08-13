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

#include <tencentcloud/teo/v20220901/model/WebSecurityTemplates.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

WebSecurityTemplates::WebSecurityTemplates() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

CoreInternalOutcome WebSecurityTemplates::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebSecurityTemplates.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebSecurityTemplates.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebSecurityTemplates.Policy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policy.Deserialize(value["Policy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebSecurityTemplates::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policy.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WebSecurityTemplates::GetTemplateId() const
{
    return m_templateId;
}

void WebSecurityTemplates::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool WebSecurityTemplates::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string WebSecurityTemplates::GetTemplateName() const
{
    return m_templateName;
}

void WebSecurityTemplates::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool WebSecurityTemplates::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

SecurityPolicy WebSecurityTemplates::GetPolicy() const
{
    return m_policy;
}

void WebSecurityTemplates::SetPolicy(const SecurityPolicy& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool WebSecurityTemplates::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

