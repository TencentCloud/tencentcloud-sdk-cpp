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

#include <tencentcloud/ess/v20201111/model/TemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

TemplateInfo::TemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_recipientsHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_signComponentsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_documentResourceIdsHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_attachmentResourceIdsHasBeenSet(false),
    m_signOrderHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_promoterHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_userFlowTypeHasBeenSet(false),
    m_templateVersionHasBeenSet(false),
    m_publishedHasBeenSet(false),
    m_shareTemplateIdHasBeenSet(false),
    m_templateSealsHasBeenSet(false),
    m_sealsHasBeenSet(false)
{
}

CoreInternalOutcome TemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Recipients") && !value["Recipients"].IsNull())
    {
        if (!value["Recipients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Recipients` is not array type"));

        const rapidjson::Value &tmpValue = value["Recipients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Recipient item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recipients.push_back(item);
        }
        m_recipientsHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("SignComponents") && !value["SignComponents"].IsNull())
    {
        if (!value["SignComponents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.SignComponents` is not array type"));

        const rapidjson::Value &tmpValue = value["SignComponents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_signComponents.push_back(item);
        }
        m_signComponentsHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DocumentResourceIds") && !value["DocumentResourceIds"].IsNull())
    {
        if (!value["DocumentResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.DocumentResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DocumentResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_documentResourceIds.push_back((*itr).GetString());
        }
        m_documentResourceIdsHasBeenSet = true;
    }

    if (value.HasMember("FileInfos") && !value["FileInfos"].IsNull())
    {
        if (!value["FileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.FileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfos.push_back(item);
        }
        m_fileInfosHasBeenSet = true;
    }

    if (value.HasMember("AttachmentResourceIds") && !value["AttachmentResourceIds"].IsNull())
    {
        if (!value["AttachmentResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.AttachmentResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachmentResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attachmentResourceIds.push_back((*itr).GetString());
        }
        m_attachmentResourceIdsHasBeenSet = true;
    }

    if (value.HasMember("SignOrder") && !value["SignOrder"].IsNull())
    {
        if (!value["SignOrder"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.SignOrder` is not array type"));

        const rapidjson::Value &tmpValue = value["SignOrder"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_signOrder.push_back((*itr).GetInt64());
        }
        m_signOrderHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("Promoter") && !value["Promoter"].IsNull())
    {
        if (!value["Promoter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Promoter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_promoter.Deserialize(value["Promoter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_promoterHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = value["TemplateType"].GetInt64();
        m_templateTypeHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Available` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetInt64();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (value.HasMember("UserFlowType") && !value["UserFlowType"].IsNull())
    {
        if (!value["UserFlowType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.UserFlowType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userFlowType.Deserialize(value["UserFlowType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userFlowTypeHasBeenSet = true;
    }

    if (value.HasMember("TemplateVersion") && !value["TemplateVersion"].IsNull())
    {
        if (!value["TemplateVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateVersion = string(value["TemplateVersion"].GetString());
        m_templateVersionHasBeenSet = true;
    }

    if (value.HasMember("Published") && !value["Published"].IsNull())
    {
        if (!value["Published"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Published` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_published = value["Published"].GetBool();
        m_publishedHasBeenSet = true;
    }

    if (value.HasMember("ShareTemplateId") && !value["ShareTemplateId"].IsNull())
    {
        if (!value["ShareTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.ShareTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareTemplateId = string(value["ShareTemplateId"].GetString());
        m_shareTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateSeals") && !value["TemplateSeals"].IsNull())
    {
        if (!value["TemplateSeals"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateSeals` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateSeals"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SealInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateSeals.push_back(item);
        }
        m_templateSealsHasBeenSet = true;
    }

    if (value.HasMember("Seals") && !value["Seals"].IsNull())
    {
        if (!value["Seals"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Seals` is not array type"));

        const rapidjson::Value &tmpValue = value["Seals"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SealInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_seals.push_back(item);
        }
        m_sealsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_recipientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recipients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recipients.begin(); itr != m_recipients.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_signComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignComponents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signComponents.begin(); itr != m_signComponents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_documentResourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_documentResourceIds.begin(); itr != m_documentResourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attachmentResourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attachmentResourceIds.begin(); itr != m_attachmentResourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_signOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signOrder.begin(); itr != m_signOrder.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_promoterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Promoter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promoter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateType, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userFlowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userFlowType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_publishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Published";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_published, allocator);
    }

    if (m_shareTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateSealsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateSeals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateSeals.begin(); itr != m_templateSeals.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sealsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_seals.begin(); itr != m_seals.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void TemplateInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void TemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool TemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<Recipient> TemplateInfo::GetRecipients() const
{
    return m_recipients;
}

void TemplateInfo::SetRecipients(const vector<Recipient>& _recipients)
{
    m_recipients = _recipients;
    m_recipientsHasBeenSet = true;
}

bool TemplateInfo::RecipientsHasBeenSet() const
{
    return m_recipientsHasBeenSet;
}

vector<Component> TemplateInfo::GetComponents() const
{
    return m_components;
}

void TemplateInfo::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool TemplateInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

vector<Component> TemplateInfo::GetSignComponents() const
{
    return m_signComponents;
}

void TemplateInfo::SetSignComponents(const vector<Component>& _signComponents)
{
    m_signComponents = _signComponents;
    m_signComponentsHasBeenSet = true;
}

bool TemplateInfo::SignComponentsHasBeenSet() const
{
    return m_signComponentsHasBeenSet;
}

string TemplateInfo::GetDescription() const
{
    return m_description;
}

void TemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> TemplateInfo::GetDocumentResourceIds() const
{
    return m_documentResourceIds;
}

void TemplateInfo::SetDocumentResourceIds(const vector<string>& _documentResourceIds)
{
    m_documentResourceIds = _documentResourceIds;
    m_documentResourceIdsHasBeenSet = true;
}

bool TemplateInfo::DocumentResourceIdsHasBeenSet() const
{
    return m_documentResourceIdsHasBeenSet;
}

vector<FileInfo> TemplateInfo::GetFileInfos() const
{
    return m_fileInfos;
}

void TemplateInfo::SetFileInfos(const vector<FileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool TemplateInfo::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

vector<string> TemplateInfo::GetAttachmentResourceIds() const
{
    return m_attachmentResourceIds;
}

void TemplateInfo::SetAttachmentResourceIds(const vector<string>& _attachmentResourceIds)
{
    m_attachmentResourceIds = _attachmentResourceIds;
    m_attachmentResourceIdsHasBeenSet = true;
}

bool TemplateInfo::AttachmentResourceIdsHasBeenSet() const
{
    return m_attachmentResourceIdsHasBeenSet;
}

vector<int64_t> TemplateInfo::GetSignOrder() const
{
    return m_signOrder;
}

void TemplateInfo::SetSignOrder(const vector<int64_t>& _signOrder)
{
    m_signOrder = _signOrder;
    m_signOrderHasBeenSet = true;
}

bool TemplateInfo::SignOrderHasBeenSet() const
{
    return m_signOrderHasBeenSet;
}

int64_t TemplateInfo::GetStatus() const
{
    return m_status;
}

void TemplateInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TemplateInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TemplateInfo::GetCreator() const
{
    return m_creator;
}

void TemplateInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TemplateInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t TemplateInfo::GetCreatedOn() const
{
    return m_createdOn;
}

void TemplateInfo::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool TemplateInfo::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

Recipient TemplateInfo::GetPromoter() const
{
    return m_promoter;
}

void TemplateInfo::SetPromoter(const Recipient& _promoter)
{
    m_promoter = _promoter;
    m_promoterHasBeenSet = true;
}

bool TemplateInfo::PromoterHasBeenSet() const
{
    return m_promoterHasBeenSet;
}

int64_t TemplateInfo::GetTemplateType() const
{
    return m_templateType;
}

void TemplateInfo::SetTemplateType(const int64_t& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool TemplateInfo::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

int64_t TemplateInfo::GetAvailable() const
{
    return m_available;
}

void TemplateInfo::SetAvailable(const int64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool TemplateInfo::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

string TemplateInfo::GetOrganizationId() const
{
    return m_organizationId;
}

void TemplateInfo::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool TemplateInfo::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string TemplateInfo::GetCreatorId() const
{
    return m_creatorId;
}

void TemplateInfo::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool TemplateInfo::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

string TemplateInfo::GetPreviewUrl() const
{
    return m_previewUrl;
}

void TemplateInfo::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool TemplateInfo::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

UserFlowType TemplateInfo::GetUserFlowType() const
{
    return m_userFlowType;
}

void TemplateInfo::SetUserFlowType(const UserFlowType& _userFlowType)
{
    m_userFlowType = _userFlowType;
    m_userFlowTypeHasBeenSet = true;
}

bool TemplateInfo::UserFlowTypeHasBeenSet() const
{
    return m_userFlowTypeHasBeenSet;
}

string TemplateInfo::GetTemplateVersion() const
{
    return m_templateVersion;
}

void TemplateInfo::SetTemplateVersion(const string& _templateVersion)
{
    m_templateVersion = _templateVersion;
    m_templateVersionHasBeenSet = true;
}

bool TemplateInfo::TemplateVersionHasBeenSet() const
{
    return m_templateVersionHasBeenSet;
}

bool TemplateInfo::GetPublished() const
{
    return m_published;
}

void TemplateInfo::SetPublished(const bool& _published)
{
    m_published = _published;
    m_publishedHasBeenSet = true;
}

bool TemplateInfo::PublishedHasBeenSet() const
{
    return m_publishedHasBeenSet;
}

string TemplateInfo::GetShareTemplateId() const
{
    return m_shareTemplateId;
}

void TemplateInfo::SetShareTemplateId(const string& _shareTemplateId)
{
    m_shareTemplateId = _shareTemplateId;
    m_shareTemplateIdHasBeenSet = true;
}

bool TemplateInfo::ShareTemplateIdHasBeenSet() const
{
    return m_shareTemplateIdHasBeenSet;
}

vector<SealInfo> TemplateInfo::GetTemplateSeals() const
{
    return m_templateSeals;
}

void TemplateInfo::SetTemplateSeals(const vector<SealInfo>& _templateSeals)
{
    m_templateSeals = _templateSeals;
    m_templateSealsHasBeenSet = true;
}

bool TemplateInfo::TemplateSealsHasBeenSet() const
{
    return m_templateSealsHasBeenSet;
}

vector<SealInfo> TemplateInfo::GetSeals() const
{
    return m_seals;
}

void TemplateInfo::SetSeals(const vector<SealInfo>& _seals)
{
    m_seals = _seals;
    m_sealsHasBeenSet = true;
}

bool TemplateInfo::SealsHasBeenSet() const
{
    return m_sealsHasBeenSet;
}

