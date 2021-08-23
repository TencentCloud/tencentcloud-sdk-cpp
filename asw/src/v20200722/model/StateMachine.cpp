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

#include <tencentcloud/asw/v20200722/model/StateMachine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

StateMachine::StateMachine() :
    m_flowServiceResourceHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_flowServiceNameHasBeenSet(false),
    m_flowServiceChineseNameHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_modifyDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_modifierHasBeenSet(false),
    m_flowServiceIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome StateMachine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowServiceResource") && !value["FlowServiceResource"].IsNull())
    {
        if (!value["FlowServiceResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.FlowServiceResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceResource = string(value["FlowServiceResource"].GetString());
        m_flowServiceResourceHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FlowServiceName") && !value["FlowServiceName"].IsNull())
    {
        if (!value["FlowServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.FlowServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceName = string(value["FlowServiceName"].GetString());
        m_flowServiceNameHasBeenSet = true;
    }

    if (value.HasMember("FlowServiceChineseName") && !value["FlowServiceChineseName"].IsNull())
    {
        if (!value["FlowServiceChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.FlowServiceChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceChineseName = string(value["FlowServiceChineseName"].GetString());
        m_flowServiceChineseNameHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("ModifyDate") && !value["ModifyDate"].IsNull())
    {
        if (!value["ModifyDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.ModifyDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyDate = string(value["ModifyDate"].GetString());
        m_modifyDateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("Modifier") && !value["Modifier"].IsNull())
    {
        if (!value["Modifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.Modifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifier = string(value["Modifier"].GetString());
        m_modifierHasBeenSet = true;
    }

    if (value.HasMember("FlowServiceId") && !value["FlowServiceId"].IsNull())
    {
        if (!value["FlowServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.FlowServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceId = string(value["FlowServiceId"].GetString());
        m_flowServiceIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateMachine.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StateMachine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowServiceResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowServiceResource.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_flowServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowServiceChineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowServiceChineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyDate.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_modifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifier.c_str(), allocator).Move(), allocator);
    }

    if (m_flowServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string StateMachine::GetFlowServiceResource() const
{
    return m_flowServiceResource;
}

void StateMachine::SetFlowServiceResource(const string& _flowServiceResource)
{
    m_flowServiceResource = _flowServiceResource;
    m_flowServiceResourceHasBeenSet = true;
}

bool StateMachine::FlowServiceResourceHasBeenSet() const
{
    return m_flowServiceResourceHasBeenSet;
}

string StateMachine::GetType() const
{
    return m_type;
}

void StateMachine::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StateMachine::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string StateMachine::GetFlowServiceName() const
{
    return m_flowServiceName;
}

void StateMachine::SetFlowServiceName(const string& _flowServiceName)
{
    m_flowServiceName = _flowServiceName;
    m_flowServiceNameHasBeenSet = true;
}

bool StateMachine::FlowServiceNameHasBeenSet() const
{
    return m_flowServiceNameHasBeenSet;
}

string StateMachine::GetFlowServiceChineseName() const
{
    return m_flowServiceChineseName;
}

void StateMachine::SetFlowServiceChineseName(const string& _flowServiceChineseName)
{
    m_flowServiceChineseName = _flowServiceChineseName;
    m_flowServiceChineseNameHasBeenSet = true;
}

bool StateMachine::FlowServiceChineseNameHasBeenSet() const
{
    return m_flowServiceChineseNameHasBeenSet;
}

string StateMachine::GetCreateDate() const
{
    return m_createDate;
}

void StateMachine::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool StateMachine::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string StateMachine::GetModifyDate() const
{
    return m_modifyDate;
}

void StateMachine::SetModifyDate(const string& _modifyDate)
{
    m_modifyDate = _modifyDate;
    m_modifyDateHasBeenSet = true;
}

bool StateMachine::ModifyDateHasBeenSet() const
{
    return m_modifyDateHasBeenSet;
}

string StateMachine::GetStatus() const
{
    return m_status;
}

void StateMachine::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StateMachine::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StateMachine::GetCreator() const
{
    return m_creator;
}

void StateMachine::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool StateMachine::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string StateMachine::GetModifier() const
{
    return m_modifier;
}

void StateMachine::SetModifier(const string& _modifier)
{
    m_modifier = _modifier;
    m_modifierHasBeenSet = true;
}

bool StateMachine::ModifierHasBeenSet() const
{
    return m_modifierHasBeenSet;
}

string StateMachine::GetFlowServiceId() const
{
    return m_flowServiceId;
}

void StateMachine::SetFlowServiceId(const string& _flowServiceId)
{
    m_flowServiceId = _flowServiceId;
    m_flowServiceIdHasBeenSet = true;
}

bool StateMachine::FlowServiceIdHasBeenSet() const
{
    return m_flowServiceIdHasBeenSet;
}

string StateMachine::GetTemplateId() const
{
    return m_templateId;
}

void StateMachine::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool StateMachine::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string StateMachine::GetDescription() const
{
    return m_description;
}

void StateMachine::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool StateMachine::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

