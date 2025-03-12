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
                     * 获取模板的填充控件列表

[点击查看在模板中配置的填充控件的样子](https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png)
                     * @return Components 模板的填充控件列表

[点击查看在模板中配置的填充控件的样子](https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png)
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置模板的填充控件列表

[点击查看在模板中配置的填充控件的样子](https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png)
                     * @param _components 模板的填充控件列表

[点击查看在模板中配置的填充控件的样子](https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png)
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
                     * 获取此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。

[点击查看在模板中配置的签署参与方角色列表的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)


                     * @return Recipients 此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。

[点击查看在模板中配置的签署参与方角色列表的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)


                     * 
                     */
                    std::vector<Recipient> GetRecipients() const;

                    /**
                     * 设置此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。

[点击查看在模板中配置的签署参与方角色列表的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)


                     * @param _recipients 此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。

[点击查看在模板中配置的签署参与方角色列表的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)


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
                     * 获取此模板中的签署控件列表

[点击查看在模板中配置的签署控件的样子](https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png)
                     * @return SignComponents 此模板中的签署控件列表

[点击查看在模板中配置的签署控件的样子](https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png)
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置此模板中的签署控件列表

[点击查看在模板中配置的签署控件的样子](https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png)
                     * @param _signComponents 此模板中的签署控件列表

[点击查看在模板中配置的签署控件的样子](https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png)
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
                     * 获取模板类型可以分为以下两种：

<b>1</b>：带有<b>本企业自动签署</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     * @return TemplateType 模板类型可以分为以下两种：

<b>1</b>：带有<b>本企业自动签署</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置模板类型可以分为以下两种：

<b>1</b>：带有<b>本企业自动签署</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     * @param _templateType 模板类型可以分为以下两种：

<b>1</b>：带有<b>本企业自动签署</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
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
                     * 获取是否是发起人 ,已弃用
                     * @return IsPromoter 是否是发起人 ,已弃用
                     * @deprecated
                     */
                    bool GetIsPromoter() const;

                    /**
                     * 设置是否是发起人 ,已弃用
                     * @param _isPromoter 是否是发起人 ,已弃用
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
                     * 获取模板的创建者名字
                     * @return Creator 模板的创建者名字
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置模板的创建者名字
                     * @param _creator 模板的创建者名字
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
                     * 获取模板的 H5 预览链接，有效期为 5 分钟。
您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。

注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。
                     * @return PreviewUrl 模板的 H5 预览链接，有效期为 5 分钟。
您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。

注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置模板的 H5 预览链接，有效期为 5 分钟。
您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。

注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。
                     * @param _previewUrl 模板的 H5 预览链接，有效期为 5 分钟。
您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。

注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。
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
                     * 获取第三方应用集成-模板PDF文件链接，有效期5分钟。
请求参数WithPdfUrl=true时返回
（此功能开放需要联系客户经理）。
                     * @return PdfUrl 第三方应用集成-模板PDF文件链接，有效期5分钟。
请求参数WithPdfUrl=true时返回
（此功能开放需要联系客户经理）。
                     * 
                     */
                    std::string GetPdfUrl() const;

                    /**
                     * 设置第三方应用集成-模板PDF文件链接，有效期5分钟。
请求参数WithPdfUrl=true时返回
（此功能开放需要联系客户经理）。
                     * @param _pdfUrl 第三方应用集成-模板PDF文件链接，有效期5分钟。
请求参数WithPdfUrl=true时返回
（此功能开放需要联系客户经理）。
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
                     * 获取本模板关联的第三方应用平台企业模板ID
                     * @return ChannelTemplateId 本模板关联的第三方应用平台企业模板ID
                     * 
                     */
                    std::string GetChannelTemplateId() const;

                    /**
                     * 设置本模板关联的第三方应用平台企业模板ID
                     * @param _channelTemplateId 本模板关联的第三方应用平台企业模板ID
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
                     * 获取本模板关联的三方应用平台平台企业模板名称
                     * @return ChannelTemplateName 本模板关联的三方应用平台平台企业模板名称
                     * 
                     */
                    std::string GetChannelTemplateName() const;

                    /**
                     * 设置本模板关联的三方应用平台平台企业模板名称
                     * @param _channelTemplateName 本模板关联的三方应用平台平台企业模板名称
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
                     * 获取0-需要子客企业手动领取平台企业的模板(默认); 
1-平台自动设置子客模板
                     * @return ChannelAutoSave 0-需要子客企业手动领取平台企业的模板(默认); 
1-平台自动设置子客模板
                     * 
                     */
                    int64_t GetChannelAutoSave() const;

                    /**
                     * 设置0-需要子客企业手动领取平台企业的模板(默认); 
1-平台自动设置子客模板
                     * @param _channelAutoSave 0-需要子客企业手动领取平台企业的模板(默认); 
1-平台自动设置子客模板
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
                     * 获取模板版本，由全数字字符组成。
默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。
                     * @return TemplateVersion 模板版本，由全数字字符组成。
默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。
                     * 
                     */
                    std::string GetTemplateVersion() const;

                    /**
                     * 设置模板版本，由全数字字符组成。
默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。
                     * @param _templateVersion 模板版本，由全数字字符组成。
默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。
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
                     * 获取模板可用状态的取值通常为以下两种：

<ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li>
<li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     * @return Available 模板可用状态的取值通常为以下两种：

<ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li>
<li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置模板可用状态的取值通常为以下两种：

<ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li>
<li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     * @param _available 模板可用状态的取值通常为以下两种：

<ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li>
<li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
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
                     * 获取模版的用户合同类型
                     * @return UserFlowType 模版的用户合同类型
                     * 
                     */
                    UserFlowType GetUserFlowType() const;

                    /**
                     * 设置模版的用户合同类型
                     * @param _userFlowType 模版的用户合同类型
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
                     * 模板的填充控件列表

[点击查看在模板中配置的填充控件的样子](https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png)
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。

[点击查看在模板中配置的签署参与方角色列表的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)


                     */
                    std::vector<Recipient> m_recipients;
                    bool m_recipientsHasBeenSet;

                    /**
                     * 此模板中的签署控件列表

[点击查看在模板中配置的签署控件的样子](https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png)
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 模板类型可以分为以下两种：

<b>1</b>：带有<b>本企业自动签署</b>的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 是否是发起人 ,已弃用
                     */
                    bool m_isPromoter;
                    bool m_isPromoterHasBeenSet;

                    /**
                     * 模板的创建者名字
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 模板创建的时间戳，格式为Unix标准时间戳（秒）
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 模板的 H5 预览链接，有效期为 5 分钟。
您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。

注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 第三方应用集成-模板PDF文件链接，有效期5分钟。
请求参数WithPdfUrl=true时返回
（此功能开放需要联系客户经理）。
                     */
                    std::string m_pdfUrl;
                    bool m_pdfUrlHasBeenSet;

                    /**
                     * 本模板关联的第三方应用平台企业模板ID
                     */
                    std::string m_channelTemplateId;
                    bool m_channelTemplateIdHasBeenSet;

                    /**
                     * 本模板关联的三方应用平台平台企业模板名称
                     */
                    std::string m_channelTemplateName;
                    bool m_channelTemplateNameHasBeenSet;

                    /**
                     * 0-需要子客企业手动领取平台企业的模板(默认); 
1-平台自动设置子客模板
                     */
                    int64_t m_channelAutoSave;
                    bool m_channelAutoSaveHasBeenSet;

                    /**
                     * 模板版本，由全数字字符组成。
默认为空，模板版本号由日期和序号组成，初始版本为yyyyMMdd001，yyyyMMdd002表示第二个版本，以此类推。
                     */
                    std::string m_templateVersion;
                    bool m_templateVersionHasBeenSet;

                    /**
                     * 模板可用状态的取值通常为以下两种：

<ul><li>1：启用（默认），表示模板处于启用状态，可以被用户正常使用。</li>
<li>2：停用，表示模板处于停用状态，禁止用户使用该模板。</li></ul>
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 模版的用户合同类型
                     */
                    UserFlowType m_userFlowType;
                    bool m_userFlowTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEINFO_H_
