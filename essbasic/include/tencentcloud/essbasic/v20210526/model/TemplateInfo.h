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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>
#include <tencentcloud/essbasic/v20210526/model/Recipient.h>
#include <tencentcloud/essbasic/v20210526/model/UserFlowType.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构体 (TemplateInfo) 用于描述模板的信息。

> **模板组成** 
>
>  一个模板通常会包含以下结构信息
>- 模板基本信息
>- 签署参与方 Recipients，在模板发起合同时用于指定参与方
>- 填写控件 Components
>- 签署控件 SignComponents
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
                     * 获取<p>模板名</p>
                     * @return TemplateName <p>模板名</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名</p>
                     * @param _templateName <p>模板名</p>
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
                     * 获取<p>模板类型可以分为以下两种：<b>1</b>：带有<b>本企业“授权签”</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     * @return TemplateType <p>模板类型可以分为以下两种：<b>1</b>：带有<b>本企业“授权签”</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置<p>模板类型可以分为以下两种：<b>1</b>：带有<b>本企业“授权签”</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     * @param _templateType <p>模板类型可以分为以下两种：<b>1</b>：带有<b>本企业“授权签”</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
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
                     * 获取<p>是否是发起人 ,已弃用</p>
                     * @return IsPromoter <p>是否是发起人 ,已弃用</p>
                     * @deprecated
                     */
                    bool GetIsPromoter() const;

                    /**
                     * 设置<p>是否是发起人 ,已弃用</p>
                     * @param _isPromoter <p>是否是发起人 ,已弃用</p>
                     * @deprecated
                     */
                    void SetIsPromoter(const bool& _isPromoter);

                    /**
                     * 判断参数 IsPromoter 是否已赋值
                     * @return IsPromoter 是否已赋值
                     * @deprecated
                     */
                    bool IsPromoterHasBeenSet() const;

                    /**
                     * 获取<p>模板的创建者名字</p>
                     * @return Creator <p>模板的创建者名字</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>模板的创建者名字</p>
                     * @param _creator <p>模板的创建者名字</p>
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
                     * 获取<p>第三方应用集成-模板PDF文件链接，有效期5分钟。<br>请求参数WithPdfUrl=true时返回<br>（此功能开放需要联系客户经理）。</p>
                     * @return PdfUrl <p>第三方应用集成-模板PDF文件链接，有效期5分钟。<br>请求参数WithPdfUrl=true时返回<br>（此功能开放需要联系客户经理）。</p>
                     * 
                     */
                    std::string GetPdfUrl() const;

                    /**
                     * 设置<p>第三方应用集成-模板PDF文件链接，有效期5分钟。<br>请求参数WithPdfUrl=true时返回<br>（此功能开放需要联系客户经理）。</p>
                     * @param _pdfUrl <p>第三方应用集成-模板PDF文件链接，有效期5分钟。<br>请求参数WithPdfUrl=true时返回<br>（此功能开放需要联系客户经理）。</p>
                     * 
                     */
                    void SetPdfUrl(const std::string& _pdfUrl);

                    /**
                     * 判断参数 PdfUrl 是否已赋值
                     * @return PdfUrl 是否已赋值
                     * 
                     */
                    bool PdfUrlHasBeenSet() const;

                    /**
                     * 获取<p>本模板关联的第三方应用平台企业模板ID</p>
                     * @return ChannelTemplateId <p>本模板关联的第三方应用平台企业模板ID</p>
                     * 
                     */
                    std::string GetChannelTemplateId() const;

                    /**
                     * 设置<p>本模板关联的第三方应用平台企业模板ID</p>
                     * @param _channelTemplateId <p>本模板关联的第三方应用平台企业模板ID</p>
                     * 
                     */
                    void SetChannelTemplateId(const std::string& _channelTemplateId);

                    /**
                     * 判断参数 ChannelTemplateId 是否已赋值
                     * @return ChannelTemplateId 是否已赋值
                     * 
                     */
                    bool ChannelTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>本模板关联的三方应用平台平台企业模板名称</p>
                     * @return ChannelTemplateName <p>本模板关联的三方应用平台平台企业模板名称</p>
                     * 
                     */
                    std::string GetChannelTemplateName() const;

                    /**
                     * 设置<p>本模板关联的三方应用平台平台企业模板名称</p>
                     * @param _channelTemplateName <p>本模板关联的三方应用平台平台企业模板名称</p>
                     * 
                     */
                    void SetChannelTemplateName(const std::string& _channelTemplateName);

                    /**
                     * 判断参数 ChannelTemplateName 是否已赋值
                     * @return ChannelTemplateName 是否已赋值
                     * 
                     */
                    bool ChannelTemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>0-需要子客企业手动领取平台企业的模板(默认);<br>1-平台自动设置子客模板</p>
                     * @return ChannelAutoSave <p>0-需要子客企业手动领取平台企业的模板(默认);<br>1-平台自动设置子客模板</p>
                     * 
                     */
                    int64_t GetChannelAutoSave() const;

                    /**
                     * 设置<p>0-需要子客企业手动领取平台企业的模板(默认);<br>1-平台自动设置子客模板</p>
                     * @param _channelAutoSave <p>0-需要子客企业手动领取平台企业的模板(默认);<br>1-平台自动设置子客模板</p>
                     * 
                     */
                    void SetChannelAutoSave(const int64_t& _channelAutoSave);

                    /**
                     * 判断参数 ChannelAutoSave 是否已赋值
                     * @return ChannelAutoSave 是否已赋值
                     * 
                     */
                    bool ChannelAutoSaveHasBeenSet() const;

                    /**
                     * 获取<p>模板版本，由全数字字符组成。<br>默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。</p>
                     * @return TemplateVersion <p>模板版本，由全数字字符组成。<br>默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。</p>
                     * 
                     */
                    std::string GetTemplateVersion() const;

                    /**
                     * 设置<p>模板版本，由全数字字符组成。<br>默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。</p>
                     * @param _templateVersion <p>模板版本，由全数字字符组成。<br>默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。</p>
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
                     * 获取<p>模板可用状态的取值通常为以下两种：</p><ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li><li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     * @return Available <p>模板可用状态的取值通常为以下两种：</p><ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li><li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置<p>模板可用状态的取值通常为以下两种：</p><ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li><li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     * @param _available <p>模板可用状态的取值通常为以下两种：</p><ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li><li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
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
                     * 获取<p>模板的用户合同类型</p>
                     * @return UserFlowType <p>模板的用户合同类型</p>
                     * 
                     */
                    UserFlowType GetUserFlowType() const;

                    /**
                     * 设置<p>模板的用户合同类型</p>
                     * @param _userFlowType <p>模板的用户合同类型</p>
                     * 
                     */
                    void SetUserFlowType(const UserFlowType& _userFlowType);

                    /**
                     * 判断参数 UserFlowType 是否已赋值
                     * @return UserFlowType 是否已赋值
                     * 
                     */
                    bool UserFlowTypeHasBeenSet() const;

                private:

                    /**
                     * <p>模板ID，模板的唯一标识</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板名</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>模板描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模板的填充控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png">点击查看在模板中配置的填充控件的样子</a></p>
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png">点击查看在模板中配置的签署参与方角色列表的样子</a></p>
                     */
                    std::vector<Recipient> m_recipients;
                    bool m_recipientsHasBeenSet;

                    /**
                     * <p>此模板中的签署控件列表</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png">点击查看在模板中配置的签署控件的样子</a></p>
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * <p>模板类型可以分为以下两种：<b>1</b>：带有<b>本企业“授权签”</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。<b>3</b>：普通模板，即签署人需要手动进行签署操作。</p>
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>是否是发起人 ,已弃用</p>
                     */
                    bool m_isPromoter;
                    bool m_isPromoterHasBeenSet;

                    /**
                     * <p>模板的创建者名字</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>模板创建的时间戳，格式为Unix标准时间戳（秒）</p>
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>模板的 H5 预览链接，有效期为 5 分钟。<br>您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。</p><p>注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。</p>
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * <p>第三方应用集成-模板PDF文件链接，有效期5分钟。<br>请求参数WithPdfUrl=true时返回<br>（此功能开放需要联系客户经理）。</p>
                     */
                    std::string m_pdfUrl;
                    bool m_pdfUrlHasBeenSet;

                    /**
                     * <p>本模板关联的第三方应用平台企业模板ID</p>
                     */
                    std::string m_channelTemplateId;
                    bool m_channelTemplateIdHasBeenSet;

                    /**
                     * <p>本模板关联的三方应用平台平台企业模板名称</p>
                     */
                    std::string m_channelTemplateName;
                    bool m_channelTemplateNameHasBeenSet;

                    /**
                     * <p>0-需要子客企业手动领取平台企业的模板(默认);<br>1-平台自动设置子客模板</p>
                     */
                    int64_t m_channelAutoSave;
                    bool m_channelAutoSaveHasBeenSet;

                    /**
                     * <p>模板版本，由全数字字符组成。<br>默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。</p>
                     */
                    std::string m_templateVersion;
                    bool m_templateVersionHasBeenSet;

                    /**
                     * <p>模板可用状态的取值通常为以下两种：</p><ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li><li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>模板的用户合同类型</p>
                     */
                    UserFlowType m_userFlowType;
                    bool m_userFlowTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEINFO_H_
