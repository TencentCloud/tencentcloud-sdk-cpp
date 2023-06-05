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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FileInfo.h>
#include <tencentcloud/ess/v20201111/model/Recipient.h>
#include <tencentcloud/ess/v20201111/model/Component.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 企业模板的信息结构
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param TemplateId 模板ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名字
                     * @return TemplateName 模板名字
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名字
                     * @param TemplateName 模板名字
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取模板描述信息
                     * @return Description 模板描述信息
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述信息
                     * @param Description 模板描述信息
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模板关联的资源ID列表
                     * @return DocumentResourceIds 模板关联的资源ID列表
                     */
                    std::vector<std::string> GetDocumentResourceIds() const;

                    /**
                     * 设置模板关联的资源ID列表
                     * @param DocumentResourceIds 模板关联的资源ID列表
                     */
                    void SetDocumentResourceIds(const std::vector<std::string>& _documentResourceIds);

                    /**
                     * 判断参数 DocumentResourceIds 是否已赋值
                     * @return DocumentResourceIds 是否已赋值
                     */
                    bool DocumentResourceIdsHasBeenSet() const;

                    /**
                     * 获取返回的文件信息结构
                     * @return FileInfos 返回的文件信息结构
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置返回的文件信息结构
                     * @param FileInfos 返回的文件信息结构
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取附件关联的资源ID
                     * @return AttachmentResourceIds 附件关联的资源ID
                     */
                    std::vector<std::string> GetAttachmentResourceIds() const;

                    /**
                     * 设置附件关联的资源ID
                     * @param AttachmentResourceIds 附件关联的资源ID
                     */
                    void SetAttachmentResourceIds(const std::vector<std::string>& _attachmentResourceIds);

                    /**
                     * 判断参数 AttachmentResourceIds 是否已赋值
                     * @return AttachmentResourceIds 是否已赋值
                     */
                    bool AttachmentResourceIdsHasBeenSet() const;

                    /**
                     * 获取签署顺序
                     * @return SignOrder 签署顺序
                     */
                    std::vector<int64_t> GetSignOrder() const;

                    /**
                     * 设置签署顺序
                     * @param SignOrder 签署顺序
                     */
                    void SetSignOrder(const std::vector<int64_t>& _signOrder);

                    /**
                     * 判断参数 SignOrder 是否已赋值
                     * @return SignOrder 是否已赋值
                     */
                    bool SignOrderHasBeenSet() const;

                    /**
                     * 获取签署参与者的信息
                     * @return Recipients 签署参与者的信息
                     */
                    std::vector<Recipient> GetRecipients() const;

                    /**
                     * 设置签署参与者的信息
                     * @param Recipients 签署参与者的信息
                     */
                    void SetRecipients(const std::vector<Recipient>& _recipients);

                    /**
                     * 判断参数 Recipients 是否已赋值
                     * @return Recipients 是否已赋值
                     */
                    bool RecipientsHasBeenSet() const;

                    /**
                     * 获取模板信息结构
                     * @return Components 模板信息结构
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置模板信息结构
                     * @param Components 模板信息结构
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取签署区模板信息结构
                     * @return SignComponents 签署区模板信息结构
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置签署区模板信息结构
                     * @param SignComponents 签署区模板信息结构
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取模板状态(-1:不可用；0:草稿态；1:正式态)
                     * @return Status 模板状态(-1:不可用；0:草稿态；1:正式态)
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置模板状态(-1:不可用；0:草稿态；1:正式态)
                     * @param Status 模板状态(-1:不可用；0:草稿态；1:正式态)
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取模板的创建人UserId
                     * @return Creator 模板的创建人UserId
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置模板的创建人UserId
                     * @param Creator 模板的创建人UserId
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取模板创建的时间戳，单位秒
                     * @return CreatedOn 模板创建的时间戳，单位秒
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置模板创建的时间戳，单位秒
                     * @param CreatedOn 模板创建的时间戳，单位秒
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取发起人角色信息
                     * @return Promoter 发起人角色信息
                     */
                    Recipient GetPromoter() const;

                    /**
                     * 设置发起人角色信息
                     * @param Promoter 发起人角色信息
                     */
                    void SetPromoter(const Recipient& _promoter);

                    /**
                     * 判断参数 Promoter 是否已赋值
                     * @return Promoter 是否已赋值
                     */
                    bool PromoterHasBeenSet() const;

                    /**
                     * 获取模板类型
取值：
1  静默签,
3  普通模板
                     * @return TemplateType 模板类型
取值：
1  静默签,
3  普通模板
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置模板类型
取值：
1  静默签,
3  普通模板
                     * @param TemplateType 模板类型
取值：
1  静默签,
3  普通模板
                     */
                    void SetTemplateType(const int64_t& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取模板可用状态，取值：1启用（默认），2停用
                     * @return Available 模板可用状态，取值：1启用（默认），2停用
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置模板可用状态，取值：1启用（默认），2停用
                     * @param Available 模板可用状态，取值：1启用（默认），2停用
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取创建模板的机构id
                     * @return OrganizationId 创建模板的机构id
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置创建模板的机构id
                     * @param OrganizationId 创建模板的机构id
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewUrl 模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PreviewUrl 模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateVersion 模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTemplateVersion() const;

                    /**
                     * 设置模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TemplateVersion 模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplateVersion(const std::string& _templateVersion);

                    /**
                     * 判断参数 TemplateVersion 是否已赋值
                     * @return TemplateVersion 是否已赋值
                     */
                    bool TemplateVersionHasBeenSet() const;

                    /**
                     * 获取模板是否已发布。true-已发布；false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Published 模板是否已发布。true-已发布；false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetPublished() const;

                    /**
                     * 设置模板是否已发布。true-已发布；false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Published 模板是否已发布。true-已发布；false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublished(const bool& _published);

                    /**
                     * 判断参数 Published 是否已赋值
                     * @return Published 是否已赋值
                     */
                    bool PublishedHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名字
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模板关联的资源ID列表
                     */
                    std::vector<std::string> m_documentResourceIds;
                    bool m_documentResourceIdsHasBeenSet;

                    /**
                     * 返回的文件信息结构
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 附件关联的资源ID
                     */
                    std::vector<std::string> m_attachmentResourceIds;
                    bool m_attachmentResourceIdsHasBeenSet;

                    /**
                     * 签署顺序
                     */
                    std::vector<int64_t> m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 签署参与者的信息
                     */
                    std::vector<Recipient> m_recipients;
                    bool m_recipientsHasBeenSet;

                    /**
                     * 模板信息结构
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 签署区模板信息结构
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 模板状态(-1:不可用；0:草稿态；1:正式态)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 模板的创建人UserId
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 模板创建的时间戳，单位秒
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 发起人角色信息
                     */
                    Recipient m_promoter;
                    bool m_promoterHasBeenSet;

                    /**
                     * 模板类型
取值：
1  静默签,
3  普通模板
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 模板可用状态，取值：1启用（默认），2停用
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 创建模板的机构id
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateVersion;
                    bool m_templateVersionHasBeenSet;

                    /**
                     * 模板是否已发布。true-已发布；false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_published;
                    bool m_publishedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEINFO_H_
