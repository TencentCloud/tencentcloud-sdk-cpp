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
#include <tencentcloud/ess/v20201111/model/SealInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 此结构体 (TemplateInfo) 用于描述模板的信息。

> **模板组成** 
>
>  一个模板通常会包含以下结构信息
>- 模板基本信息
>- 发起方参与信息Promoter、签署参与方 Recipients，后者会在模板发起合同时用于指定参与方
>- 填写控件 Components
>- 签署控件 SignComponents
>- 生成模板的文件基础信息 FileInfos
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID，模板的唯一标识
                     * @return TemplateId 模板ID，模板的唯一标识
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID，模板的唯一标识
                     * @param _templateId 模板ID，模板的唯一标识
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名
                     * @return TemplateName 模板名
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名
                     * @param _templateName 模板名
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取模板描述信息
                     * @return Description 模板描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述信息
                     * @param _description 模板描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模板关联的资源ID列表
                     * @return DocumentResourceIds 模板关联的资源ID列表
                     * 
                     */
                    std::vector<std::string> GetDocumentResourceIds() const;

                    /**
                     * 设置模板关联的资源ID列表
                     * @param _documentResourceIds 模板关联的资源ID列表
                     * 
                     */
                    void SetDocumentResourceIds(const std::vector<std::string>& _documentResourceIds);

                    /**
                     * 判断参数 DocumentResourceIds 是否已赋值
                     * @return DocumentResourceIds 是否已赋值
                     * 
                     */
                    bool DocumentResourceIdsHasBeenSet() const;

                    /**
                     * 获取生成模板的文件基础信息
                     * @return FileInfos 生成模板的文件基础信息
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置生成模板的文件基础信息
                     * @param _fileInfos 生成模板的文件基础信息
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取附件关联的资源ID
                     * @return AttachmentResourceIds 附件关联的资源ID
                     * 
                     */
                    std::vector<std::string> GetAttachmentResourceIds() const;

                    /**
                     * 设置附件关联的资源ID
                     * @param _attachmentResourceIds 附件关联的资源ID
                     * 
                     */
                    void SetAttachmentResourceIds(const std::vector<std::string>& _attachmentResourceIds);

                    /**
                     * 判断参数 AttachmentResourceIds 是否已赋值
                     * @return AttachmentResourceIds 是否已赋值
                     * 
                     */
                    bool AttachmentResourceIdsHasBeenSet() const;

                    /**
                     * 获取签署顺序
无序 -1
有序为序列数字 0,1,2
                     * @return SignOrder 签署顺序
无序 -1
有序为序列数字 0,1,2
                     * 
                     */
                    std::vector<int64_t> GetSignOrder() const;

                    /**
                     * 设置签署顺序
无序 -1
有序为序列数字 0,1,2
                     * @param _signOrder 签署顺序
无序 -1
有序为序列数字 0,1,2
                     * 
                     */
                    void SetSignOrder(const std::vector<int64_t>& _signOrder);

                    /**
                     * 判断参数 SignOrder 是否已赋值
                     * @return SignOrder 是否已赋值
                     * 
                     */
                    bool SignOrderHasBeenSet() const;

                    /**
                     * 获取模板中的签署参与方列表
                     * @return Recipients 模板中的签署参与方列表
                     * 
                     */
                    std::vector<Recipient> GetRecipients() const;

                    /**
                     * 设置模板中的签署参与方列表
                     * @param _recipients 模板中的签署参与方列表
                     * 
                     */
                    void SetRecipients(const std::vector<Recipient>& _recipients);

                    /**
                     * 判断参数 Recipients 是否已赋值
                     * @return Recipients 是否已赋值
                     * 
                     */
                    bool RecipientsHasBeenSet() const;

                    /**
                     * 获取模板的填充控件列表
                     * @return Components 模板的填充控件列表
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置模板的填充控件列表
                     * @param _components 模板的填充控件列表
                     * 
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取模板中的签署控件列表
                     * @return SignComponents 模板中的签署控件列表
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置模板中的签署控件列表
                     * @param _signComponents 模板中的签署控件列表
                     * 
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     * 
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取模板状态
-1:不可用
0:草稿态
1:正式态，可以正常使用
                     * @return Status 模板状态
-1:不可用
0:草稿态
1:正式态，可以正常使用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置模板状态
-1:不可用
0:草稿态
1:正式态，可以正常使用
                     * @param _status 模板状态
-1:不可用
0:草稿态
1:正式态，可以正常使用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取模板的创建者信息，电子签系统用户ID
                     * @return Creator 模板的创建者信息，电子签系统用户ID
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置模板的创建者信息，电子签系统用户ID
                     * @param _creator 模板的创建者信息，电子签系统用户ID
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取模板创建的时间戳，格式为Unix标准时间戳（秒）
                     * @return CreatedOn 模板创建的时间戳，格式为Unix标准时间戳（秒）
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置模板创建的时间戳，格式为Unix标准时间戳（秒）
                     * @param _createdOn 模板创建的时间戳，格式为Unix标准时间戳（秒）
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取发起方参与信息Promoter
                     * @return Promoter 发起方参与信息Promoter
                     * 
                     */
                    Recipient GetPromoter() const;

                    /**
                     * 设置发起方参与信息Promoter
                     * @param _promoter 发起方参与信息Promoter
                     * 
                     */
                    void SetPromoter(const Recipient& _promoter);

                    /**
                     * 判断参数 Promoter 是否已赋值
                     * @return Promoter 是否已赋值
                     * 
                     */
                    bool PromoterHasBeenSet() const;

                    /**
                     * 获取模板类型：
1  静默签,
3  普通模板
                     * @return TemplateType 模板类型：
1  静默签,
3  普通模板
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置模板类型：
1  静默签,
3  普通模板
                     * @param _templateType 模板类型：
1  静默签,
3  普通模板
                     * 
                     */
                    void SetTemplateType(const int64_t& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取模板可用状态：
1 启用（默认）
2 停用
                     * @return Available 模板可用状态：
1 启用（默认）
2 停用
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置模板可用状态：
1 启用（默认）
2 停用
                     * @param _available 模板可用状态：
1 启用（默认）
2 停用
                     * 
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取创建模板的企业ID，电子签的机构ID
                     * @return OrganizationId 创建模板的企业ID，电子签的机构ID
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置创建模板的企业ID，电子签的机构ID
                     * @param _organizationId 创建模板的企业ID，电子签的机构ID
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewUrl 模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _previewUrl 模板预览链接，有效时间5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateVersion 模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateVersion() const;

                    /**
                     * 设置模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateVersion 模板版本。默认为空时，全数字字符，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateVersion(const std::string& _templateVersion);

                    /**
                     * 判断参数 TemplateVersion 是否已赋值
                     * @return TemplateVersion 是否已赋值
                     * 
                     */
                    bool TemplateVersionHasBeenSet() const;

                    /**
                     * 获取模板是否已发布：
true-已发布
false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Published 模板是否已发布：
true-已发布
false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPublished() const;

                    /**
                     * 设置模板是否已发布：
true-已发布
false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _published 模板是否已发布：
true-已发布
false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublished(const bool& _published);

                    /**
                     * 判断参数 Published 是否已赋值
                     * @return Published 是否已赋值
                     * 
                     */
                    bool PublishedHasBeenSet() const;

                    /**
                     * 获取分享来源的模板ID。用在集团账号子企业模板里
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareTemplateId 分享来源的模板ID。用在集团账号子企业模板里
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareTemplateId() const;

                    /**
                     * 设置分享来源的模板ID。用在集团账号子企业模板里
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shareTemplateId 分享来源的模板ID。用在集团账号子企业模板里
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShareTemplateId(const std::string& _shareTemplateId);

                    /**
                     * 判断参数 ShareTemplateId 是否已赋值
                     * @return ShareTemplateId 是否已赋值
                     * 
                     */
                    bool ShareTemplateIdHasBeenSet() const;

                    /**
                     * 获取模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateSeals 模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SealInfo> GetTemplateSeals() const;

                    /**
                     * 设置模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateSeals 模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateSeals(const std::vector<SealInfo>& _templateSeals);

                    /**
                     * 判断参数 TemplateSeals 是否已赋值
                     * @return TemplateSeals 是否已赋值
                     * 
                     */
                    bool TemplateSealsHasBeenSet() const;

                    /**
                     * 获取模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seals 模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<SealInfo> GetSeals() const;

                    /**
                     * 设置模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seals 模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetSeals(const std::vector<SealInfo>& _seals);

                    /**
                     * 判断参数 Seals 是否已赋值
                     * @return Seals 是否已赋值
                     * @deprecated
                     */
                    bool SealsHasBeenSet() const;

                private:

                    /**
                     * 模板ID，模板的唯一标识
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名
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
                     * 生成模板的文件基础信息
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
无序 -1
有序为序列数字 0,1,2
                     */
                    std::vector<int64_t> m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 模板中的签署参与方列表
                     */
                    std::vector<Recipient> m_recipients;
                    bool m_recipientsHasBeenSet;

                    /**
                     * 模板的填充控件列表
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 模板中的签署控件列表
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 模板状态
-1:不可用
0:草稿态
1:正式态，可以正常使用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 模板的创建者信息，电子签系统用户ID
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 模板创建的时间戳，格式为Unix标准时间戳（秒）
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 发起方参与信息Promoter
                     */
                    Recipient m_promoter;
                    bool m_promoterHasBeenSet;

                    /**
                     * 模板类型：
1  静默签,
3  普通模板
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 模板可用状态：
1 启用（默认）
2 停用
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 创建模板的企业ID，电子签的机构ID
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
                     * 模板是否已发布：
true-已发布
false-未发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_published;
                    bool m_publishedHasBeenSet;

                    /**
                     * 分享来源的模板ID。用在集团账号子企业模板里
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareTemplateId;
                    bool m_shareTemplateIdHasBeenSet;

                    /**
                     * 模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SealInfo> m_templateSeals;
                    bool m_templateSealsHasBeenSet;

                    /**
                     * 模板内部指定的印章列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SealInfo> m_seals;
                    bool m_sealsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEINFO_H_
