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

#include <tencentcloud/lighthouse/v20200324/model/FirewallTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

FirewallTemplate::FirewallTemplate() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_templateStateHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome FirewallTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplate.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplate.TemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = string(value["TemplateType"].GetString());
        m_templateTypeHasBeenSet = true;
    }

    if (value.HasMember("TemplateState") && !value["TemplateState"].IsNull())
    {
        if (!value["TemplateState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplate.TemplateState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateState = string(value["TemplateState"].GetString());
        m_templateStateHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplate.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirewallTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }

    if (m_templateStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateState.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string FirewallTemplate::GetTemplateId() const
{
    return m_templateId;
}

void FirewallTemplate::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool FirewallTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string FirewallTemplate::GetTemplateName() const
{
    return m_templateName;
}

void FirewallTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool FirewallTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string FirewallTemplate::GetTemplateType() const
{
    return m_templateType;
}

void FirewallTemplate::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool FirewallTemplate::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string FirewallTemplate::GetTemplateState() const
{
    return m_templateState;
}

void FirewallTemplate::SetTemplateState(const string& _templateState)
{
    m_templateState = _templateState;
    m_templateStateHasBeenSet = true;
}

bool FirewallTemplate::TemplateStateHasBeenSet() const
{
    return m_templateStateHasBeenSet;
}

string FirewallTemplate::GetCreatedTime() const
{
    return m_createdTime;
}

void FirewallTemplate::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool FirewallTemplate::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

