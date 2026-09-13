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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Recipient.h>
#include <tencentcloud/ess/v20201111/model/Component.h>
#include <tencentcloud/ess/v20201111/model/FileInfo.h>
#include <tencentcloud/ess/v20201111/model/UserFlowType.h>
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
                     * 获取<p>模板ID，模板的唯一标识</p>
                     * @return TemplateId <p>模板ID，模板的唯一标识</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板ID，模板的唯一标识</p>
                     * @param _templateId <p>模板ID，模板的唯一标识</p>
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
                     * 获取<p>模板的名字</p>
                     * @return TemplateName <p>模板的名字</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板的名字</p>
                     * @param _templateName <p>模板的名字</p>
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
                     * 获取<p>此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的签署参与方角色列表的样子</a></p>
                     * @return Recipients <p>此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的签署参与方角色列表的样子</a></p>
                     * 
                     */
                    std::vector<Recipient> GetRecipients() const;

                    /**
                     * 设置<p>此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的签署参与方角色列表的样子</a></p>
                     * @param _recipients <p>此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的签署参与方角色列表的样子</a></p>
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
                     * 获取<p>模板的填充控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png">点击查看在模板中配置的填充控件的样子</a></p>
                     * @return Components <p>模板的填充控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png">点击查看在模板中配置的填充控件的样子</a></p>
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置<p>模板的填充控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png">点击查看在模板中配置的填充控件的样子</a></p>
                     * @param _components <p>模板的填充控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png">点击查看在模板中配置的填充控件的样子</a></p>
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
                     * 获取<p>此模板中的签署控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png">点击查看在模板中配置的签署控件的样子</a></p>
                     * @return SignComponents <p>此模板中的签署控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png">点击查看在模板中配置的签署控件的样子</a></p>
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置<p>此模板中的签署控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png">点击查看在模板中配置的签署控件的样子</a></p>
                     * @param _signComponents <p>此模板中的签署控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png">点击查看在模板中配置的签署控件的样子</a></p>
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
                     * 获取<p>模板描述信息</p>
                     * @return Description <p>模板描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模板描述信息</p>
                     * @param _description <p>模板描述信息</p>
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
                     * 获取<p>此模板的资源ID</p>
                     * @return DocumentResourceIds <p>此模板的资源ID</p>
                     * 
                     */
                    std::vector<std::string> GetDocumentResourceIds() const;

                    /**
                     * 设置<p>此模板的资源ID</p>
                     * @param _documentResourceIds <p>此模板的资源ID</p>
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
                     * 获取<p>生成模板的文件基础信息</p>
                     * @return FileInfos <p>生成模板的文件基础信息</p>
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>生成模板的文件基础信息</p>
                     * @param _fileInfos <p>生成模板的文件基础信息</p>
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
                     * 获取<p>此模板里边附件的资源ID</p>
                     * @return AttachmentResourceIds <p>此模板里边附件的资源ID</p>
                     * 
                     */
                    std::vector<std::string> GetAttachmentResourceIds() const;

                    /**
                     * 设置<p>此模板里边附件的资源ID</p>
                     * @param _attachmentResourceIds <p>此模板里边附件的资源ID</p>
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
                     * 获取<p>签署人参与签署的顺序，可以分为以下两种方式：</p><p><b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝<br><b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝</p>
                     * @return SignOrder <p>签署人参与签署的顺序，可以分为以下两种方式：</p><p><b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝<br><b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝</p>
                     * 
                     */
                    std::vector<int64_t> GetSignOrder() const;

                    /**
                     * 设置<p>签署人参与签署的顺序，可以分为以下两种方式：</p><p><b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝<br><b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝</p>
                     * @param _signOrder <p>签署人参与签署的顺序，可以分为以下两种方式：</p><p><b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝<br><b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝</p>
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
                     * 获取<p>此模板的状态可以分为以下几种：</p><p><b>-1</b>：不可用状态。<br><b>0</b>：草稿态，即模板正在编辑或未发布状态。<br><b>1</b>：正式态，只有正式态的模板才可以发起合同。</p>
                     * @return Status <p>此模板的状态可以分为以下几种：</p><p><b>-1</b>：不可用状态。<br><b>0</b>：草稿态，即模板正在编辑或未发布状态。<br><b>1</b>：正式态，只有正式态的模板才可以发起合同。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>此模板的状态可以分为以下几种：</p><p><b>-1</b>：不可用状态。<br><b>0</b>：草稿态，即模板正在编辑或未发布状态。<br><b>1</b>：正式态，只有正式态的模板才可以发起合同。</p>
                     * @param _status <p>此模板的状态可以分为以下几种：</p><p><b>-1</b>：不可用状态。<br><b>0</b>：草稿态，即模板正在编辑或未发布状态。<br><b>1</b>：正式态，只有正式态的模板才可以发起合同。</p>
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
                     * 获取<p>模板的创建者信息，用户的名字</p><p>注： <code>是创建者的名字，而非创建者的用户ID</code></p>
                     * @return Creator <p>模板的创建者信息，用户的名字</p><p>注： <code>是创建者的名字，而非创建者的用户ID</code></p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>模板的创建者信息，用户的名字</p><p>注： <code>是创建者的名字，而非创建者的用户ID</code></p>
                     * @param _creator <p>模板的创建者信息，用户的名字</p><p>注： <code>是创建者的名字，而非创建者的用户ID</code></p>
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
                     * 获取<p>模板创建的时间戳，格式为Unix标准时间戳（秒）</p>
                     * @return CreatedOn <p>模板创建的时间戳，格式为Unix标准时间戳（秒）</p>
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置<p>模板创建的时间戳，格式为Unix标准时间戳（秒）</p>
                     * @param _createdOn <p>模板创建的时间戳，格式为Unix标准时间戳（秒）</p>
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
                     * 获取<p>此模板创建方角色信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的创建方角色的样子</a></p>
                     * @return Promoter <p>此模板创建方角色信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的创建方角色的样子</a></p>
                     * 
                     */
                    Recipient GetPromoter() const;

                    /**
                     * 设置<p>此模板创建方角色信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的创建方角色的样子</a></p>
                     * @param _promoter <p>此模板创建方角色信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的创建方角色的样子</a></p>
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
                     * 获取<p>模板类型可以分为以下两种：<b>1</b>：带有本企业“授权签”的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     * @return TemplateType <p>模板类型可以分为以下两种：<b>1</b>：带有本企业“授权签”的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置<p>模板类型可以分为以下两种：<b>1</b>：带有本企业“授权签”的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     * @param _templateType <p>模板类型可以分为以下两种：<b>1</b>：带有本企业“授权签”的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
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
                     * 获取<p>模板可用状态可以分为以下两种：</p><p><b>1</b>：（默认）启用状态，即模板可以正常使用。<br><b>2</b>：停用状态，即模板暂时无法使用。</p><p>可到控制台启停模板</p>
                     * @return Available <p>模板可用状态可以分为以下两种：</p><p><b>1</b>：（默认）启用状态，即模板可以正常使用。<br><b>2</b>：停用状态，即模板暂时无法使用。</p><p>可到控制台启停模板</p>
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置<p>模板可用状态可以分为以下两种：</p><p><b>1</b>：（默认）启用状态，即模板可以正常使用。<br><b>2</b>：停用状态，即模板暂时无法使用。</p><p>可到控制台启停模板</p>
                     * @param _available <p>模板可用状态可以分为以下两种：</p><p><b>1</b>：（默认）启用状态，即模板可以正常使用。<br><b>2</b>：停用状态，即模板暂时无法使用。</p><p>可到控制台启停模板</p>
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
                     * 获取<p>创建模板的企业ID，电子签的机构ID</p>
                     * @return OrganizationId <p>创建模板的企业ID，电子签的机构ID</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>创建模板的企业ID，电子签的机构ID</p>
                     * @param _organizationId <p>创建模板的企业ID，电子签的机构ID</p>
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
                     * 获取<p>模板创建人用户ID</p>
                     * @return CreatorId <p>模板创建人用户ID</p>
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置<p>模板创建人用户ID</p>
                     * @param _creatorId <p>模板创建人用户ID</p>
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取<p>模板的 H5 预览链接，有效期为 5 分钟。<br>您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。</p><p>注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。</p>
                     * @return PreviewUrl <p>模板的 H5 预览链接，有效期为 5 分钟。<br>您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。</p><p>注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。</p>
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置<p>模板的 H5 预览链接，有效期为 5 分钟。<br>您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。</p><p>注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。</p>
                     * @param _previewUrl <p>模板的 H5 预览链接，有效期为 5 分钟。<br>您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。</p><p>注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。</p>
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
                     * 获取<p>用户自定义合同类型。</p><p>返回配置模板的时候选择的合同类型。<a href="https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png">点击查看配置的位置</a></p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p>
                     * @return UserFlowType <p>用户自定义合同类型。</p><p>返回配置模板的时候选择的合同类型。<a href="https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png">点击查看配置的位置</a></p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p>
                     * 
                     */
                    UserFlowType GetUserFlowType() const;

                    /**
                     * 设置<p>用户自定义合同类型。</p><p>返回配置模板的时候选择的合同类型。<a href="https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png">点击查看配置的位置</a></p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p>
                     * @param _userFlowType <p>用户自定义合同类型。</p><p>返回配置模板的时候选择的合同类型。<a href="https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png">点击查看配置的位置</a></p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p>
                     * 
                     */
                    void SetUserFlowType(const UserFlowType& _userFlowType);

                    /**
                     * 判断参数 UserFlowType 是否已赋值
                     * @return UserFlowType 是否已赋值
                     * 
                     */
                    bool UserFlowTypeHasBeenSet() const;

                    /**
                     * 获取<p>模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成</p>
                     * @return TemplateVersion <p>模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成</p>
                     * 
                     */
                    std::string GetTemplateVersion() const;

                    /**
                     * 设置<p>模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成</p>
                     * @param _templateVersion <p>模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成</p>
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
                     * 获取<p>模板是否已发布可以分为以下两种状态：</p><p><b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。<br><b>false</b>：未发布状态，表示该模板还未发布，无法使用。</p>
                     * @return Published <p>模板是否已发布可以分为以下两种状态：</p><p><b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。<br><b>false</b>：未发布状态，表示该模板还未发布，无法使用。</p>
                     * 
                     */
                    bool GetPublished() const;

                    /**
                     * 设置<p>模板是否已发布可以分为以下两种状态：</p><p><b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。<br><b>false</b>：未发布状态，表示该模板还未发布，无法使用。</p>
                     * @param _published <p>模板是否已发布可以分为以下两种状态：</p><p><b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。<br><b>false</b>：未发布状态，表示该模板还未发布，无法使用。</p>
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
                     * 获取<p><b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。</p>
                     * @return ShareTemplateId <p><b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。</p>
                     * 
                     */
                    std::string GetShareTemplateId() const;

                    /**
                     * 设置<p><b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。</p>
                     * @param _shareTemplateId <p><b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。</p>
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
                     * 获取<p>此模板配置的预填印章列表（包括“授权签”指定的印章）</p>
                     * @return TemplateSeals <p>此模板配置的预填印章列表（包括“授权签”指定的印章）</p>
                     * 
                     */
                    std::vector<SealInfo> GetTemplateSeals() const;

                    /**
                     * 设置<p>此模板配置的预填印章列表（包括“授权签”指定的印章）</p>
                     * @param _templateSeals <p>此模板配置的预填印章列表（包括“授权签”指定的印章）</p>
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
                     * 获取<p>模板内部指定的印章列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seals <p>模板内部指定的印章列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<SealInfo> GetSeals() const;

                    /**
                     * 设置<p>模板内部指定的印章列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seals <p>模板内部指定的印章列表</p>
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
                     * <p>模板ID，模板的唯一标识</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板的名字</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的签署参与方角色列表的样子</a></p>
                     */
                    std::vector<Recipient> m_recipients;
                    bool m_recipientsHasBeenSet;

                    /**
                     * <p>模板的填充控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png">点击查看在模板中配置的填充控件的样子</a></p>
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>此模板中的签署控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png">点击查看在模板中配置的签署控件的样子</a></p>
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * <p>模板描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>此模板的资源ID</p>
                     */
                    std::vector<std::string> m_documentResourceIds;
                    bool m_documentResourceIdsHasBeenSet;

                    /**
                     * <p>生成模板的文件基础信息</p>
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>此模板里边附件的资源ID</p>
                     */
                    std::vector<std::string> m_attachmentResourceIds;
                    bool m_attachmentResourceIdsHasBeenSet;

                    /**
                     * <p>签署人参与签署的顺序，可以分为以下两种方式：</p><p><b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝<br><b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝</p>
                     */
                    std::vector<int64_t> m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * <p>此模板的状态可以分为以下几种：</p><p><b>-1</b>：不可用状态。<br><b>0</b>：草稿态，即模板正在编辑或未发布状态。<br><b>1</b>：正式态，只有正式态的模板才可以发起合同。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>模板的创建者信息，用户的名字</p><p>注： <code>是创建者的名字，而非创建者的用户ID</code></p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>模板创建的时间戳，格式为Unix标准时间戳（秒）</p>
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>此模板创建方角色信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的创建方角色的样子</a></p>
                     */
                    Recipient m_promoter;
                    bool m_promoterHasBeenSet;

                    /**
                     * <p>模板类型可以分为以下两种：<b>1</b>：带有本企业“授权签”的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>模板可用状态可以分为以下两种：</p><p><b>1</b>：（默认）启用状态，即模板可以正常使用。<br><b>2</b>：停用状态，即模板暂时无法使用。</p><p>可到控制台启停模板</p>
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>创建模板的企业ID，电子签的机构ID</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>模板创建人用户ID</p>
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * <p>模板的 H5 预览链接，有效期为 5 分钟。<br>您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。</p><p>注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。</p>
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * <p>用户自定义合同类型。</p><p>返回配置模板的时候选择的合同类型。<a href="https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png">点击查看配置的位置</a></p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p>
                     */
                    UserFlowType m_userFlowType;
                    bool m_userFlowTypeHasBeenSet;

                    /**
                     * <p>模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成</p>
                     */
                    std::string m_templateVersion;
                    bool m_templateVersionHasBeenSet;

                    /**
                     * <p>模板是否已发布可以分为以下两种状态：</p><p><b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。<br><b>false</b>：未发布状态，表示该模板还未发布，无法使用。</p>
                     */
                    bool m_published;
                    bool m_publishedHasBeenSet;

                    /**
                     * <p><b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。</p>
                     */
                    std::string m_shareTemplateId;
                    bool m_shareTemplateIdHasBeenSet;

                    /**
                     * <p>此模板配置的预填印章列表（包括“授权签”指定的印章）</p>
                     */
                    std::vector<SealInfo> m_templateSeals;
                    bool m_templateSealsHasBeenSet;

                    /**
                     * <p>模板内部指定的印章列表</p>
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
