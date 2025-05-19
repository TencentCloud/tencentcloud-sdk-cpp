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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FlowCreateApprover.h>
#include <tencentcloud/ess/v20201111/model/Component.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowOption.h>
#include <tencentcloud/ess/v20201111/model/CcInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/SignComponentConfig.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePrepareFlow请求参数结构体
                */
                class CreatePrepareFlowRequest : public AbstractModel
                {
                public:
                    CreatePrepareFlowRequest();
                    ~CreatePrepareFlowRequest() = default;
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
                     * 获取资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     * @return ResourceType 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     * @param _resourceType 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
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
                     * 获取合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     * @return Unordered 合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     * @param _unordered 合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
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
                     * 获取合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。

                     * @return Deadline 合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。

                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。

                     * @param _deadline 合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。

                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取用户自定义合同类型Id

该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
注: `该参数如果和FlowType同时传，以该参数优先生效`
                     * @return UserFlowTypeId 用户自定义合同类型Id

该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
注: `该参数如果和FlowType同时传，以该参数优先生效`
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置用户自定义合同类型Id

该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
注: `该参数如果和FlowType同时传，以该参数优先生效`
                     * @param _userFlowTypeId 用户自定义合同类型Id

该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
注: `该参数如果和FlowType同时传，以该参数优先生效`
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
                     * 获取合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * @return FlowType 合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * @param _flowType 合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。

如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * @return Approvers 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。

如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * 
                     */
                    std::vector<FlowCreateApprover> GetApprovers() const;

                    /**
                     * 设置合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。

如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * @param _approvers 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。

如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * 
                     */
                    void SetApprovers(const std::vector<FlowCreateApprover>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取开启或者关闭智能添加填写区：
<ul><li> **OPEN**：开启（默认值）</li>
<li> **CLOSE**：关闭</li></ul>
                     * @return IntelligentStatus 开启或者关闭智能添加填写区：
<ul><li> **OPEN**：开启（默认值）</li>
<li> **CLOSE**：关闭</li></ul>
                     * 
                     */
                    std::string GetIntelligentStatus() const;

                    /**
                     * 设置开启或者关闭智能添加填写区：
<ul><li> **OPEN**：开启（默认值）</li>
<li> **CLOSE**：关闭</li></ul>
                     * @param _intelligentStatus 开启或者关闭智能添加填写区：
<ul><li> **OPEN**：开启（默认值）</li>
<li> **CLOSE**：关闭</li></ul>
                     * 
                     */
                    void SetIntelligentStatus(const std::string& _intelligentStatus);

                    /**
                     * 判断参数 IntelligentStatus 是否已赋值
                     * @return IntelligentStatus 是否已赋值
                     * 
                     */
                    bool IntelligentStatusHasBeenSet() const;

                    /**
                     * 获取该字段已不再使用，请使用InitiatorComponents
                     * @return Components 该字段已不再使用，请使用InitiatorComponents
                     * 
                     */
                    Component GetComponents() const;

                    /**
                     * 设置该字段已不再使用，请使用InitiatorComponents
                     * @param _components 该字段已不再使用，请使用InitiatorComponents
                     * 
                     */
                    void SetComponents(const Component& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取发起合同个性化参数
用于满足创建及页面操作过程中的个性化要求
具体定制化内容详见数据接口说明
                     * @return FlowOption 发起合同个性化参数
用于满足创建及页面操作过程中的个性化要求
具体定制化内容详见数据接口说明
                     * 
                     */
                    CreateFlowOption GetFlowOption() const;

                    /**
                     * 设置发起合同个性化参数
用于满足创建及页面操作过程中的个性化要求
具体定制化内容详见数据接口说明
                     * @param _flowOption 发起合同个性化参数
用于满足创建及页面操作过程中的个性化要求
具体定制化内容详见数据接口说明
                     * 
                     */
                    void SetFlowOption(const CreateFlowOption& _flowOption);

                    /**
                     * 判断参数 FlowOption 是否已赋值
                     * @return FlowOption 是否已赋值
                     * 
                     */
                    bool FlowOptionHasBeenSet() const;

                    /**
                     * 获取发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：
<ul><li> **false**：（默认）不需要审批，直接签署。</li>
<li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>
企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果
<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li>
<li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>
注：`此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同`
                     * @return NeedSignReview 发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：
<ul><li> **false**：（默认）不需要审批，直接签署。</li>
<li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>
企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果
<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li>
<li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>
注：`此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同`
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：
<ul><li> **false**：（默认）不需要审批，直接签署。</li>
<li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>
企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果
<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li>
<li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>
注：`此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同`
                     * @param _needSignReview 发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：
<ul><li> **false**：（默认）不需要审批，直接签署。</li>
<li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>
企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果
<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li>
<li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>
注：`此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同`
                     * 
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     * 
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取发起方企业的签署人进行发起操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。

若设置为true，发起审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行发起操作，否则会阻塞其发起操作。


                     * @return NeedCreateReview 发起方企业的签署人进行发起操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。

若设置为true，发起审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行发起操作，否则会阻塞其发起操作。


                     * 
                     */
                    bool GetNeedCreateReview() const;

                    /**
                     * 设置发起方企业的签署人进行发起操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。

若设置为true，发起审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行发起操作，否则会阻塞其发起操作。


                     * @param _needCreateReview 发起方企业的签署人进行发起操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。

若设置为true，发起审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行发起操作，否则会阻塞其发起操作。


                     * 
                     */
                    void SetNeedCreateReview(const bool& _needCreateReview);

                    /**
                     * 判断参数 NeedCreateReview 是否已赋值
                     * @return NeedCreateReview 是否已赋值
                     * 
                     */
                    bool NeedCreateReviewHasBeenSet() const;

                    /**
                     * 获取调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @return UserData 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @param _userData 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。

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
                     * 获取合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

                     * @return CcInfos 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

                     * 
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

                     * @param _ccInfos 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

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
                     * 获取合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     * @return FlowId 合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     * @param _flowId 合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

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
                     * 获取模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体

                     * @return InitiatorComponents 模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体

                     * 
                     */
                    std::vector<Component> GetInitiatorComponents() const;

                    /**
                     * 设置模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体

                     * @param _initiatorComponents 模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体

                     * 
                     */
                    void SetInitiatorComponents(const std::vector<Component>& _initiatorComponents);

                    /**
                     * 判断参数 InitiatorComponents 是否已赋值
                     * @return InitiatorComponents 是否已赋值
                     * 
                     */
                    bool InitiatorComponentsHasBeenSet() const;

                    /**
                     * 获取在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * @return FlowDisplayType 在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * 
                     */
                    int64_t GetFlowDisplayType() const;

                    /**
                     * 设置在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * @param _flowDisplayType 在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * 
                     */
                    void SetFlowDisplayType(const int64_t& _flowDisplayType);

                    /**
                     * 判断参数 FlowDisplayType 是否已赋值
                     * @return FlowDisplayType 是否已赋值
                     * 
                     */
                    bool FlowDisplayTypeHasBeenSet() const;

                    /**
                     * 获取<font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，
包括  

- 签署控件 是否默认展示日期.
                     * @return SignComponentConfig <font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，
包括  

- 签署控件 是否默认展示日期.
                     * @deprecated
                     */
                    SignComponentConfig GetSignComponentConfig() const;

                    /**
                     * 设置<font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，
包括  

- 签署控件 是否默认展示日期.
                     * @param _signComponentConfig <font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，
包括  

- 签署控件 是否默认展示日期.
                     * @deprecated
                     */
                    void SetSignComponentConfig(const SignComponentConfig& _signComponentConfig);

                    /**
                     * 判断参数 SignComponentConfig 是否已赋值
                     * @return SignComponentConfig 是否已赋值
                     * @deprecated
                     */
                    bool SignComponentConfigHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

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
                     * 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 合同流程的签署顺序类型：
<ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li>
<li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。

                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 用户自定义合同类型Id

该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取
注: `该参数如果和FlowType同时传，以该参数优先生效`
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                    /**
                     * 合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。

如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     */
                    std::vector<FlowCreateApprover> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 开启或者关闭智能添加填写区：
<ul><li> **OPEN**：开启（默认值）</li>
<li> **CLOSE**：关闭</li></ul>
                     */
                    std::string m_intelligentStatus;
                    bool m_intelligentStatusHasBeenSet;

                    /**
                     * 该字段已不再使用，请使用InitiatorComponents
                     */
                    Component m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 发起合同个性化参数
用于满足创建及页面操作过程中的个性化要求
具体定制化内容详见数据接口说明
                     */
                    CreateFlowOption m_flowOption;
                    bool m_flowOptionHasBeenSet;

                    /**
                     * 发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：
<ul><li> **false**：（默认）不需要审批，直接签署。</li>
<li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>
企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果
<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li>
<li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>
注：`此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同`
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 发起方企业的签署人进行发起操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。

若设置为true，发起审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行发起操作，否则会阻塞其发起操作。


                     */
                    bool m_needCreateReview;
                    bool m_needCreateReviewHasBeenSet;

                    /**
                     * 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。

                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体

                     */
                    std::vector<Component> m_initiatorComponents;
                    bool m_initiatorComponentsHasBeenSet;

                    /**
                     * 在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                    /**
                     * <font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，
包括  

- 签署控件 是否默认展示日期.
                     */
                    SignComponentConfig m_signComponentConfig;
                    bool m_signComponentConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWREQUEST_H_
