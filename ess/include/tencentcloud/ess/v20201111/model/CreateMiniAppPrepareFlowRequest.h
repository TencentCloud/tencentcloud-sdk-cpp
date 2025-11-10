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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMINIAPPPREPAREFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMINIAPPPREPAREFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/MiniAppCreateApproverInfo.h>
#include <tencentcloud/ess/v20201111/model/CcInfo.h>
#include <tencentcloud/ess/v20201111/model/MiniAppCreateFlowOption.h>
#include <tencentcloud/ess/v20201111/model/MiniAppCreateFlowPageOption.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateMiniAppPrepareFlow请求参数结构体
                */
                class CreateMiniAppPrepareFlowRequest : public AbstractModel
                {
                public:
                    CreateMiniAppPrepareFlowRequest();
                    ~CreateMiniAppPrepareFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件 </li></ul>
                     * @return ResourceType 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件 </li></ul>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件 </li></ul>
                     * @param _resourceType 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件 </li></ul>
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * @return ResourceId 资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * @param _resourceId 资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&)、（+）组成。

该名称还将用于合同签署完成后文件下载的默认文件名称。
                     * @return FlowName 自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&)、（+）组成。

该名称还将用于合同签署完成后文件下载的默认文件名称。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&)、（+）组成。

该名称还将用于合同签署完成后文件下载的默认文件名称。
                     * @param _flowName 自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&)、（+）组成。

该名称还将用于合同签署完成后文件下载的默认文件名称。
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息。
                     * @return Approvers 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息。
                     * 
                     */
                    std::vector<MiniAppCreateApproverInfo> GetApprovers() const;

                    /**
                     * 设置合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息。
                     * @param _approvers 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息。
                     * 
                     */
                    void SetApprovers(const std::vector<MiniAppCreateApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

**注：暂不支持通过NotifyType参数控制抄送人通知方式**
                     * @return CcInfos 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

**注：暂不支持通过NotifyType参数控制抄送人通知方式**
                     * 
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

**注：暂不支持通过NotifyType参数控制抄送人通知方式**
                     * @param _ccInfos 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

**注：暂不支持通过NotifyType参数控制抄送人通知方式**
                     * 
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     * 
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>

**注：仅在文件发起模式下设置有效，模板发起以模板配置为准**
                     * @return Unordered 合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>

**注：仅在文件发起模式下设置有效，模板发起以模板配置为准**
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>

**注：仅在文件发起模式下设置有效，模板发起以模板配置为准**
                     * @param _unordered 合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>

**注：仅在文件发起模式下设置有效，模板发起以模板配置为准**
                     * 
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     * 
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取合同发起后经过多少天截止（1-30天可选），默认7天
                     * @return DeadlineAfterStartDays 合同发起后经过多少天截止（1-30天可选），默认7天
                     * 
                     */
                    int64_t GetDeadlineAfterStartDays() const;

                    /**
                     * 设置合同发起后经过多少天截止（1-30天可选），默认7天
                     * @param _deadlineAfterStartDays 合同发起后经过多少天截止（1-30天可选），默认7天
                     * 
                     */
                    void SetDeadlineAfterStartDays(const int64_t& _deadlineAfterStartDays);

                    /**
                     * 判断参数 DeadlineAfterStartDays 是否已赋值
                     * @return DeadlineAfterStartDays 是否已赋值
                     * 
                     */
                    bool DeadlineAfterStartDaysHasBeenSet() const;

                    /**
                     * 获取用户自定义合同类型Id  该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
                     * @return UserFlowTypeId 用户自定义合同类型Id  该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置用户自定义合同类型Id  该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
                     * @param _userFlowTypeId 用户自定义合同类型Id  该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
                     * 
                     */
                    void SetUserFlowTypeId(const std::string& _userFlowTypeId);

                    /**
                     * 判断参数 UserFlowTypeId 是否已赋值
                     * @return UserFlowTypeId 是否已赋值
                     * 
                     */
                    bool UserFlowTypeIdHasBeenSet() const;

                    /**
                     * 获取发起合同个性化参数
用于满足小程序合同创建的个性化要求
具体定制化内容详见数据接口说明
                     * @return FlowOption 发起合同个性化参数
用于满足小程序合同创建的个性化要求
具体定制化内容详见数据接口说明
                     * 
                     */
                    MiniAppCreateFlowOption GetFlowOption() const;

                    /**
                     * 设置发起合同个性化参数
用于满足小程序合同创建的个性化要求
具体定制化内容详见数据接口说明
                     * @param _flowOption 发起合同个性化参数
用于满足小程序合同创建的个性化要求
具体定制化内容详见数据接口说明
                     * 
                     */
                    void SetFlowOption(const MiniAppCreateFlowOption& _flowOption);

                    /**
                     * 判断参数 FlowOption 是否已赋值
                     * @return FlowOption 是否已赋值
                     * 
                     */
                    bool FlowOptionHasBeenSet() const;

                    /**
                     * 获取发起合同小程序页面个性化参数 
用于满足小程序合同创建页面的个性化要求 具体定制化内容详见数据接口说明
                     * @return PageOption 发起合同小程序页面个性化参数 
用于满足小程序合同创建页面的个性化要求 具体定制化内容详见数据接口说明
                     * 
                     */
                    MiniAppCreateFlowPageOption GetPageOption() const;

                    /**
                     * 设置发起合同小程序页面个性化参数 
用于满足小程序合同创建页面的个性化要求 具体定制化内容详见数据接口说明
                     * @param _pageOption 发起合同小程序页面个性化参数 
用于满足小程序合同创建页面的个性化要求 具体定制化内容详见数据接口说明
                     * 
                     */
                    void SetPageOption(const MiniAppCreateFlowPageOption& _pageOption);

                    /**
                     * 判断参数 PageOption 是否已赋值
                     * @return PageOption 是否已赋值
                     * 
                     */
                    bool PageOptionHasBeenSet() const;

                    /**
                     * 获取调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000 长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @return UserData 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000 长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000 长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @param _userData 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000 长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li>
<li> **4** :合同签署页面更多操作的查看合同基本信息按钮</li>
<li> **5** :合同签署页面更多操作的撤销按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * @return Hides 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li>
<li> **4** :合同签署页面更多操作的查看合同基本信息按钮</li>
<li> **5** :合同签署页面更多操作的撤销按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * 
                     */
                    std::vector<int64_t> GetHides() const;

                    /**
                     * 设置生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li>
<li> **4** :合同签署页面更多操作的查看合同基本信息按钮</li>
<li> **5** :合同签署页面更多操作的撤销按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * @param _hides 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li>
<li> **4** :合同签署页面更多操作的查看合同基本信息按钮</li>
<li> **5** :合同签署页面更多操作的撤销按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * 
                     */
                    void SetHides(const std::vector<int64_t>& _hides);

                    /**
                     * 判断参数 Hides 是否已赋值
                     * @return Hides 是否已赋值
                     * 
                     */
                    bool HidesHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件 </li></ul>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&)、（+）组成。

该名称还将用于合同签署完成后文件下载的默认文件名称。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息。
                     */
                    std::vector<MiniAppCreateApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

**注：暂不支持通过NotifyType参数控制抄送人通知方式**
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>

**注：仅在文件发起模式下设置有效，模板发起以模板配置为准**
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 合同发起后经过多少天截止（1-30天可选），默认7天
                     */
                    int64_t m_deadlineAfterStartDays;
                    bool m_deadlineAfterStartDaysHasBeenSet;

                    /**
                     * 用户自定义合同类型Id  该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                    /**
                     * 发起合同个性化参数
用于满足小程序合同创建的个性化要求
具体定制化内容详见数据接口说明
                     */
                    MiniAppCreateFlowOption m_flowOption;
                    bool m_flowOptionHasBeenSet;

                    /**
                     * 发起合同小程序页面个性化参数 
用于满足小程序合同创建页面的个性化要求 具体定制化内容详见数据接口说明
                     */
                    MiniAppCreateFlowPageOption m_pageOption;
                    bool m_pageOptionHasBeenSet;

                    /**
                     * 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000 长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li>
<li> **4** :合同签署页面更多操作的查看合同基本信息按钮</li>
<li> **5** :合同签署页面更多操作的撤销按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     */
                    std::vector<int64_t> m_hides;
                    bool m_hidesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMINIAPPPREPAREFLOWREQUEST_H_
