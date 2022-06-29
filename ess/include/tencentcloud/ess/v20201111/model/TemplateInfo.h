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
                * 二期接口返回的模板的信息结构
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
                     * 获取模板关联的资源IDs
                     * @return DocumentResourceIds 模板关联的资源IDs
                     */
                    std::vector<std::string> GetDocumentResourceIds() const;

                    /**
                     * 设置模板关联的资源IDs
                     * @param DocumentResourceIds 模板关联的资源IDs
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
                     * 获取附件关联的资源ID是
                     * @return AttachmentResourceIds 附件关联的资源ID是
                     */
                    std::vector<std::string> GetAttachmentResourceIds() const;

                    /**
                     * 设置附件关联的资源ID是
                     * @param AttachmentResourceIds 附件关联的资源ID是
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
                     * 获取模板的创建人
                     * @return Creator 模板的创建人
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置模板的创建人
                     * @param Creator 模板的创建人
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取模板创建的时间戳（精确到秒）
                     * @return CreatedOn 模板创建的时间戳（精确到秒）
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置模板创建的时间戳（精确到秒）
                     * @param CreatedOn 模板创建的时间戳（精确到秒）
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
                     * 模板关联的资源IDs
                     */
                    std::vector<std::string> m_documentResourceIds;
                    bool m_documentResourceIdsHasBeenSet;

                    /**
                     * 返回的文件信息结构
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 附件关联的资源ID是
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
                     * 模板的创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 模板创建的时间戳（精确到秒）
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 发起人角色信息
                     */
                    Recipient m_promoter;
                    bool m_promoterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEINFO_H_
