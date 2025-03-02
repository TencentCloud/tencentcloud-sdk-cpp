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
                     * 获取模板的名字
                     * @return TemplateName 模板的名字
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板的名字
                     * @param _templateName 模板的名字
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
                     * 获取此模板的资源ID
                     * @return DocumentResourceIds 此模板的资源ID
                     * 
                     */
                    std::vector<std::string> GetDocumentResourceIds() const;

                    /**
                     * 设置此模板的资源ID
                     * @param _documentResourceIds 此模板的资源ID
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
                     * 获取此模板里边附件的资源ID
                     * @return AttachmentResourceIds 此模板里边附件的资源ID
                     * 
                     */
                    std::vector<std::string> GetAttachmentResourceIds() const;

                    /**
                     * 设置此模板里边附件的资源ID
                     * @param _attachmentResourceIds 此模板里边附件的资源ID
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
                     * 获取签署人参与签署的顺序，可以分为以下两种方式：

<b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝
<b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝
                     * @return SignOrder 签署人参与签署的顺序，可以分为以下两种方式：

<b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝
<b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝
                     * 
                     */
                    std::vector<int64_t> GetSignOrder() const;

                    /**
                     * 设置签署人参与签署的顺序，可以分为以下两种方式：

<b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝
<b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝
                     * @param _signOrder 签署人参与签署的顺序，可以分为以下两种方式：

<b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝
<b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝
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
                     * 获取此模板的状态可以分为以下几种：

<b>-1</b>：不可用状态。
<b>0</b>：草稿态，即模板正在编辑或未发布状态。
<b>1</b>：正式态，只有正式态的模板才可以发起合同。
                     * @return Status 此模板的状态可以分为以下几种：

<b>-1</b>：不可用状态。
<b>0</b>：草稿态，即模板正在编辑或未发布状态。
<b>1</b>：正式态，只有正式态的模板才可以发起合同。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置此模板的状态可以分为以下几种：

<b>-1</b>：不可用状态。
<b>0</b>：草稿态，即模板正在编辑或未发布状态。
<b>1</b>：正式态，只有正式态的模板才可以发起合同。
                     * @param _status 此模板的状态可以分为以下几种：

<b>-1</b>：不可用状态。
<b>0</b>：草稿态，即模板正在编辑或未发布状态。
<b>1</b>：正式态，只有正式态的模板才可以发起合同。
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
                     * 获取模板的创建者信息，用户的名字

注： `是创建者的名字，而非创建者的用户ID`
                     * @return Creator 模板的创建者信息，用户的名字

注： `是创建者的名字，而非创建者的用户ID`
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置模板的创建者信息，用户的名字

注： `是创建者的名字，而非创建者的用户ID`
                     * @param _creator 模板的创建者信息，用户的名字

注： `是创建者的名字，而非创建者的用户ID`
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
                     * 获取此模板创建方角色信息。

[点击查看在模板中配置的创建方角色的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)

                     * @return Promoter 此模板创建方角色信息。

[点击查看在模板中配置的创建方角色的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)

                     * 
                     */
                    Recipient GetPromoter() const;

                    /**
                     * 设置此模板创建方角色信息。

[点击查看在模板中配置的创建方角色的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)

                     * @param _promoter 此模板创建方角色信息。

[点击查看在模板中配置的创建方角色的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)

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
                     * 获取模板类型可以分为以下两种：

<b>1</b>：带有本企业自动签署的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     * @return TemplateType 模板类型可以分为以下两种：

<b>1</b>：带有本企业自动签署的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置模板类型可以分为以下两种：

<b>1</b>：带有本企业自动签署的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     * @param _templateType 模板类型可以分为以下两种：

<b>1</b>：带有本企业自动签署的模板，即签署过程无需签署人手动操作，系统自动完成签署。
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
                     * 获取模板可用状态可以分为以下两种：

<b>1</b>：（默认）启用状态，即模板可以正常使用。
<b>2</b>：停用状态，即模板暂时无法使用。

可到控制台启停模板
                     * @return Available 模板可用状态可以分为以下两种：

<b>1</b>：（默认）启用状态，即模板可以正常使用。
<b>2</b>：停用状态，即模板暂时无法使用。

可到控制台启停模板
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置模板可用状态可以分为以下两种：

<b>1</b>：（默认）启用状态，即模板可以正常使用。
<b>2</b>：停用状态，即模板暂时无法使用。

可到控制台启停模板
                     * @param _available 模板可用状态可以分为以下两种：

<b>1</b>：（默认）启用状态，即模板可以正常使用。
<b>2</b>：停用状态，即模板暂时无法使用。

可到控制台启停模板
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
                     * 获取模板创建人用户ID
                     * @return CreatorId 模板创建人用户ID
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置模板创建人用户ID
                     * @param _creatorId 模板创建人用户ID
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
                     * 获取用户自定义合同类型。

返回配置模板的时候选择的合同类型。[点击查看配置的位置](https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png)

自定义合同类型配置的地方如链接图所示。[点击查看自定义合同类型管理的位置](https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png)

                     * @return UserFlowType 用户自定义合同类型。

返回配置模板的时候选择的合同类型。[点击查看配置的位置](https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png)

自定义合同类型配置的地方如链接图所示。[点击查看自定义合同类型管理的位置](https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png)

                     * 
                     */
                    UserFlowType GetUserFlowType() const;

                    /**
                     * 设置用户自定义合同类型。

返回配置模板的时候选择的合同类型。[点击查看配置的位置](https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png)

自定义合同类型配置的地方如链接图所示。[点击查看自定义合同类型管理的位置](https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png)

                     * @param _userFlowType 用户自定义合同类型。

返回配置模板的时候选择的合同类型。[点击查看配置的位置](https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png)

自定义合同类型配置的地方如链接图所示。[点击查看自定义合同类型管理的位置](https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png)

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
                     * 获取模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成
                     * @return TemplateVersion 模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成
                     * 
                     */
                    std::string GetTemplateVersion() const;

                    /**
                     * 设置模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成
                     * @param _templateVersion 模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成
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
                     * 获取模板是否已发布可以分为以下两种状态：

<b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。
<b>false</b>：未发布状态，表示该模板还未发布，无法使用。
                     * @return Published 模板是否已发布可以分为以下两种状态：

<b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。
<b>false</b>：未发布状态，表示该模板还未发布，无法使用。
                     * 
                     */
                    bool GetPublished() const;

                    /**
                     * 设置模板是否已发布可以分为以下两种状态：

<b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。
<b>false</b>：未发布状态，表示该模板还未发布，无法使用。
                     * @param _published 模板是否已发布可以分为以下两种状态：

<b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。
<b>false</b>：未发布状态，表示该模板还未发布，无法使用。
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
                     * 获取<b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。
                     * @return ShareTemplateId <b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。
                     * 
                     */
                    std::string GetShareTemplateId() const;

                    /**
                     * 设置<b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。
                     * @param _shareTemplateId <b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。
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
                     * 获取此模板配置的预填印章列表（包括自动签署指定的印章）
                     * @return TemplateSeals 此模板配置的预填印章列表（包括自动签署指定的印章）
                     * 
                     */
                    std::vector<SealInfo> GetTemplateSeals() const;

                    /**
                     * 设置此模板配置的预填印章列表（包括自动签署指定的印章）
                     * @param _templateSeals 此模板配置的预填印章列表（包括自动签署指定的印章）
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
                     * 模板的名字
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 此模块需要签署的各个参与方的角色列表。RecipientId标识每个参与方角色对应的唯一标识符，用于确定此角色的信息。

[点击查看在模板中配置的签署参与方角色列表的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)


                     */
                    std::vector<Recipient> m_recipients;
                    bool m_recipientsHasBeenSet;

                    /**
                     * 模板的填充控件列表

[点击查看在模板中配置的填充控件的样子](https://qcloudimg.tencent-cloud.cn/raw/cb2f58529fca8d909258f9d45a56f7f4.png)
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 此模板中的签署控件列表

[点击查看在模板中配置的签署控件的样子](https://qcloudimg.tencent-cloud.cn/raw/29bc6ed753a5a0fce4a3ab02e2c0d955.png)
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 模板描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 此模板的资源ID
                     */
                    std::vector<std::string> m_documentResourceIds;
                    bool m_documentResourceIdsHasBeenSet;

                    /**
                     * 生成模板的文件基础信息
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 此模板里边附件的资源ID
                     */
                    std::vector<std::string> m_attachmentResourceIds;
                    bool m_attachmentResourceIdsHasBeenSet;

                    /**
                     * 签署人参与签署的顺序，可以分为以下两种方式：

<b>无序</b>：不限定签署人的签署顺序，签署人可以在任何时间签署。此种方式值为 ：｛-1｝
<b>有序</b>：通过序列数字标识签署顺序，从0开始编码，数字越大签署顺序越靠后，签署人按照指定的顺序依次签署。此种方式值为： ｛0，1，2，3………｝
                     */
                    std::vector<int64_t> m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 此模板的状态可以分为以下几种：

<b>-1</b>：不可用状态。
<b>0</b>：草稿态，即模板正在编辑或未发布状态。
<b>1</b>：正式态，只有正式态的模板才可以发起合同。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 模板的创建者信息，用户的名字

注： `是创建者的名字，而非创建者的用户ID`
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 模板创建的时间戳，格式为Unix标准时间戳（秒）
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 此模板创建方角色信息。

[点击查看在模板中配置的创建方角色的样子](https://qcloudimg.tencent-cloud.cn/raw/e082bbcc0d923f8cb723d98382410aa2.png)

                     */
                    Recipient m_promoter;
                    bool m_promoterHasBeenSet;

                    /**
                     * 模板类型可以分为以下两种：

<b>1</b>：带有本企业自动签署的模板，即签署过程无需签署人手动操作，系统自动完成签署。
<b>3</b>：普通模板，即签署人需要手动进行签署操作。
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 模板可用状态可以分为以下两种：

<b>1</b>：（默认）启用状态，即模板可以正常使用。
<b>2</b>：停用状态，即模板暂时无法使用。

可到控制台启停模板
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 创建模板的企业ID，电子签的机构ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 模板创建人用户ID
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 模板的 H5 预览链接，有效期为 5 分钟。
您可以通过浏览器直接打开此链接预览模板，或将其嵌入到 iframe 中进行预览。

注意：只有在请求接口时将 <b>WithPreviewUrl </b>参数设置为 true，才会生成预览链接。
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 用户自定义合同类型。

返回配置模板的时候选择的合同类型。[点击查看配置的位置](https://qcloudimg.tencent-cloud.cn/raw/4a766f0540253bf2a05d50c58bd14990.png)

自定义合同类型配置的地方如链接图所示。[点击查看自定义合同类型管理的位置](https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png)

                     */
                    UserFlowType m_userFlowType;
                    bool m_userFlowTypeHasBeenSet;

                    /**
                     * 模板版本的编号，旨在标识其独特的版本信息，通常呈现为一串字符串，由日期和递增的数字组成
                     */
                    std::string m_templateVersion;
                    bool m_templateVersionHasBeenSet;

                    /**
                     * 模板是否已发布可以分为以下两种状态：

<b>true</b>：已发布状态，表示该模板已经发布并可以正常使用。
<b>false</b>：未发布状态，表示该模板还未发布，无法使用。
                     */
                    bool m_published;
                    bool m_publishedHasBeenSet;

                    /**
                     * <b>集体账号场景下</b>： 集团账号分享给子企业的模板的来源模板ID。
                     */
                    std::string m_shareTemplateId;
                    bool m_shareTemplateIdHasBeenSet;

                    /**
                     * 此模板配置的预填印章列表（包括自动签署指定的印章）
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
