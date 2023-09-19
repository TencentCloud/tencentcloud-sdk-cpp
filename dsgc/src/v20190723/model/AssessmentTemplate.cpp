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

#include <tencentcloud/dsgc/v20190723/model/AssessmentTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssessmentTemplate::AssessmentTemplate() :
    m_idHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_useTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_controlItemCountHasBeenSet(false),
    m_appliedItemCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_supportDataSourceHasBeenSet(false),
    m_isASMTemplateHasBeenSet(false),
    m_identifyComplianceIdHasBeenSet(false)
{
}

CoreInternalOutcome AssessmentTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("UseType") && !value["UseType"].IsNull())
    {
        if (!value["UseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.UseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_useType = string(value["UseType"].GetString());
        m_useTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ControlItemCount") && !value["ControlItemCount"].IsNull())
    {
        if (!value["ControlItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.ControlItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_controlItemCount = value["ControlItemCount"].GetInt64();
        m_controlItemCountHasBeenSet = true;
    }

    if (value.HasMember("AppliedItemCount") && !value["AppliedItemCount"].IsNull())
    {
        if (!value["AppliedItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.AppliedItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appliedItemCount = value["AppliedItemCount"].GetInt64();
        m_appliedItemCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SupportDataSource") && !value["SupportDataSource"].IsNull())
    {
        if (!value["SupportDataSource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.SupportDataSource` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportDataSource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportDataSource.push_back((*itr).GetString());
        }
        m_supportDataSourceHasBeenSet = true;
    }

    if (value.HasMember("IsASMTemplate") && !value["IsASMTemplate"].IsNull())
    {
        if (!value["IsASMTemplate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.IsASMTemplate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isASMTemplate = value["IsASMTemplate"].GetBool();
        m_isASMTemplateHasBeenSet = true;
    }

    if (value.HasMember("IdentifyComplianceId") && !value["IdentifyComplianceId"].IsNull())
    {
        if (!value["IdentifyComplianceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplate.IdentifyComplianceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyComplianceId = value["IdentifyComplianceId"].GetInt64();
        m_identifyComplianceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessmentTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_useTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_useType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_controlItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_controlItemCount, allocator);
    }

    if (m_appliedItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppliedItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appliedItemCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_supportDataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportDataSource.begin(); itr != m_supportDataSource.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isASMTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsASMTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isASMTemplate, allocator);
    }

    if (m_identifyComplianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyComplianceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyComplianceId, allocator);
    }

}


int64_t AssessmentTemplate::GetId() const
{
    return m_id;
}

void AssessmentTemplate::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssessmentTemplate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssessmentTemplate::GetTemplateId() const
{
    return m_templateId;
}

void AssessmentTemplate::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AssessmentTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string AssessmentTemplate::GetTemplateName() const
{
    return m_templateName;
}

void AssessmentTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AssessmentTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string AssessmentTemplate::GetDescription() const
{
    return m_description;
}

void AssessmentTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AssessmentTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AssessmentTemplate::GetSource() const
{
    return m_source;
}

void AssessmentTemplate::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AssessmentTemplate::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AssessmentTemplate::GetUseType() const
{
    return m_useType;
}

void AssessmentTemplate::SetUseType(const string& _useType)
{
    m_useType = _useType;
    m_useTypeHasBeenSet = true;
}

bool AssessmentTemplate::UseTypeHasBeenSet() const
{
    return m_useTypeHasBeenSet;
}

string AssessmentTemplate::GetCreatedTime() const
{
    return m_createdTime;
}

void AssessmentTemplate::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AssessmentTemplate::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t AssessmentTemplate::GetControlItemCount() const
{
    return m_controlItemCount;
}

void AssessmentTemplate::SetControlItemCount(const int64_t& _controlItemCount)
{
    m_controlItemCount = _controlItemCount;
    m_controlItemCountHasBeenSet = true;
}

bool AssessmentTemplate::ControlItemCountHasBeenSet() const
{
    return m_controlItemCountHasBeenSet;
}

int64_t AssessmentTemplate::GetAppliedItemCount() const
{
    return m_appliedItemCount;
}

void AssessmentTemplate::SetAppliedItemCount(const int64_t& _appliedItemCount)
{
    m_appliedItemCount = _appliedItemCount;
    m_appliedItemCountHasBeenSet = true;
}

bool AssessmentTemplate::AppliedItemCountHasBeenSet() const
{
    return m_appliedItemCountHasBeenSet;
}

string AssessmentTemplate::GetStatus() const
{
    return m_status;
}

void AssessmentTemplate::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssessmentTemplate::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> AssessmentTemplate::GetSupportDataSource() const
{
    return m_supportDataSource;
}

void AssessmentTemplate::SetSupportDataSource(const vector<string>& _supportDataSource)
{
    m_supportDataSource = _supportDataSource;
    m_supportDataSourceHasBeenSet = true;
}

bool AssessmentTemplate::SupportDataSourceHasBeenSet() const
{
    return m_supportDataSourceHasBeenSet;
}

bool AssessmentTemplate::GetIsASMTemplate() const
{
    return m_isASMTemplate;
}

void AssessmentTemplate::SetIsASMTemplate(const bool& _isASMTemplate)
{
    m_isASMTemplate = _isASMTemplate;
    m_isASMTemplateHasBeenSet = true;
}

bool AssessmentTemplate::IsASMTemplateHasBeenSet() const
{
    return m_isASMTemplateHasBeenSet;
}

int64_t AssessmentTemplate::GetIdentifyComplianceId() const
{
    return m_identifyComplianceId;
}

void AssessmentTemplate::SetIdentifyComplianceId(const int64_t& _identifyComplianceId)
{
    m_identifyComplianceId = _identifyComplianceId;
    m_identifyComplianceIdHasBeenSet = true;
}

bool AssessmentTemplate::IdentifyComplianceIdHasBeenSet() const
{
    return m_identifyComplianceIdHasBeenSet;
}

