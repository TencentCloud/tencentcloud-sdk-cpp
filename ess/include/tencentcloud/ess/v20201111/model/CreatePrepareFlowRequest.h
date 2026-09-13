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
                     * 获取<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>资源id，与ResourceType相对应，取值范围：</p><ul><li>文件Id（通过UploadFiles获取文件资源Id）</li><li>模板Id（通过控制台创建模板后获取模板Id）</li><li>草稿Id（通过嵌入页面保存草稿后获取草稿Id）</li></ul>注意：需要同时设置 ResourceType 参数指定资源类型
                     * @return ResourceId <p>资源id，与ResourceType相对应，取值范围：</p><ul><li>文件Id（通过UploadFiles获取文件资源Id）</li><li>模板Id（通过控制台创建模板后获取模板Id）</li><li>草稿Id（通过嵌入页面保存草稿后获取草稿Id）</li></ul>注意：需要同时设置 ResourceType 参数指定资源类型
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源id，与ResourceType相对应，取值范围：</p><ul><li>文件Id（通过UploadFiles获取文件资源Id）</li><li>模板Id（通过控制台创建模板后获取模板Id）</li><li>草稿Id（通过嵌入页面保存草稿后获取草稿Id）</li></ul>注意：需要同时设置 ResourceType 参数指定资源类型
                     * @param _resourceId <p>资源id，与ResourceType相对应，取值范围：</p><ul><li>文件Id（通过UploadFiles获取文件资源Id）</li><li>模板Id（通过控制台创建模板后获取模板Id）</li><li>草稿Id（通过嵌入页面保存草稿后获取草稿Id）</li></ul>注意：需要同时设置 ResourceType 参数指定资源类型
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
                     * 获取<p>自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&amp;)、（+）组成。</p><p>该名称还将用于合同签署完成后文件下载的默认文件名称。</p>
                     * @return FlowName <p>自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&amp;)、（+）组成。</p><p>该名称还将用于合同签署完成后文件下载的默认文件名称。</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&amp;)、（+）组成。</p><p>该名称还将用于合同签署完成后文件下载的默认文件名称。</p>
                     * @param _flowName <p>自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&amp;)、（+）组成。</p><p>该名称还将用于合同签署完成后文件下载的默认文件名称。</p>
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
                     * 获取<p>资源类型，取值有：</p><ul><li> **1**：模板</li><li> **2**：文件（默认值）</li><li> **3**：草稿</li></ul>
                     * @return ResourceType <p>资源类型，取值有：</p><ul><li> **1**：模板</li><li> **2**：文件（默认值）</li><li> **3**：草稿</li></ul>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置<p>资源类型，取值有：</p><ul><li> **1**：模板</li><li> **2**：文件（默认值）</li><li> **3**：草稿</li></ul>
                     * @param _resourceType <p>资源类型，取值有：</p><ul><li> **1**：模板</li><li> **2**：文件（默认值）</li><li> **3**：草稿</li></ul>
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
                     * 获取<p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     * @return Unordered <p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置<p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     * @param _unordered <p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
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
                     * 获取<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。</p>
                     * @return Deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。</p>
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。</p>
                     * @param _deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。</p>
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
                     * 获取<p>用户自定义合同类型Id</p><p>该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取<br>注: <code>该参数如果和FlowType同时传，以该参数优先生效</code></p>
                     * @return UserFlowTypeId <p>用户自定义合同类型Id</p><p>该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取<br>注: <code>该参数如果和FlowType同时传，以该参数优先生效</code></p>
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置<p>用户自定义合同类型Id</p><p>该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取<br>注: <code>该参数如果和FlowType同时传，以该参数优先生效</code></p>
                     * @param _userFlowTypeId <p>用户自定义合同类型Id</p><p>该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取<br>注: <code>该参数如果和FlowType同时传，以该参数优先生效</code></p>
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
                     * 获取<p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @return FlowType <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置<p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @param _flowType <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
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
                     * 获取<p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * @return Approvers <p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * 
                     */
                    std::vector<FlowCreateApprover> GetApprovers() const;

                    /**
                     * 设置<p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * @param _approvers <p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
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
                     * 获取<p>开启或者关闭智能添加填写区：</p><ul><li> **OPEN**：开启（默认值）</li><li> **CLOSE**：关闭</li></ul>
                     * @return IntelligentStatus <p>开启或者关闭智能添加填写区：</p><ul><li> **OPEN**：开启（默认值）</li><li> **CLOSE**：关闭</li></ul>
                     * 
                     */
                    std::string GetIntelligentStatus() const;

                    /**
                     * 设置<p>开启或者关闭智能添加填写区：</p><ul><li> **OPEN**：开启（默认值）</li><li> **CLOSE**：关闭</li></ul>
                     * @param _intelligentStatus <p>开启或者关闭智能添加填写区：</p><ul><li> **OPEN**：开启（默认值）</li><li> **CLOSE**：关闭</li></ul>
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
                     * 获取<p>该字段已不再使用，请使用InitiatorComponents</p>
                     * @return Components <p>该字段已不再使用，请使用InitiatorComponents</p>
                     * 
                     */
                    Component GetComponents() const;

                    /**
                     * 设置<p>该字段已不再使用，请使用InitiatorComponents</p>
                     * @param _components <p>该字段已不再使用，请使用InitiatorComponents</p>
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
                     * 获取<p>发起合同个性化参数<br>用于满足创建及页面操作过程中的个性化要求<br>具体定制化内容详见数据接口说明</p>
                     * @return FlowOption <p>发起合同个性化参数<br>用于满足创建及页面操作过程中的个性化要求<br>具体定制化内容详见数据接口说明</p>
                     * 
                     */
                    CreateFlowOption GetFlowOption() const;

                    /**
                     * 设置<p>发起合同个性化参数<br>用于满足创建及页面操作过程中的个性化要求<br>具体定制化内容详见数据接口说明</p>
                     * @param _flowOption <p>发起合同个性化参数<br>用于满足创建及页面操作过程中的个性化要求<br>具体定制化内容详见数据接口说明</p>
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
                     * 获取<p>发起方企业签署员工，在进行签署操作前，是否需要先通过企业内部审批流程 （签署审核）1. <strong>false（默认）</strong>：  无需审批，发起方企业签署员工可直接进行签署操作。2. <strong>true</strong>：  需要先走企业内部审批流程。 当流程进展到发起方企业签署员工时，其签署操作会被阻塞，等待企业内部审批结果。企业应通过 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a>审批接口，将内部审批结果通知腾讯电子签平台：1. 若通知为“审核通过”，发起方企业签署员工可继续完成签署操作。2. 若通知为“审核未通过”，平台将继续阻塞该签署方的签署操作，直到企业再次通知平台审核通过为止。说明： 此能力可用于与企业内部审批流程打通，适用于手动签署和“授权签”两种模式。</p>
                     * @return NeedSignReview <p>发起方企业签署员工，在进行签署操作前，是否需要先通过企业内部审批流程 （签署审核）1. <strong>false（默认）</strong>：  无需审批，发起方企业签署员工可直接进行签署操作。2. <strong>true</strong>：  需要先走企业内部审批流程。 当流程进展到发起方企业签署员工时，其签署操作会被阻塞，等待企业内部审批结果。企业应通过 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a>审批接口，将内部审批结果通知腾讯电子签平台：1. 若通知为“审核通过”，发起方企业签署员工可继续完成签署操作。2. 若通知为“审核未通过”，平台将继续阻塞该签署方的签署操作，直到企业再次通知平台审核通过为止。说明： 此能力可用于与企业内部审批流程打通，适用于手动签署和“授权签”两种模式。</p>
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置<p>发起方企业签署员工，在进行签署操作前，是否需要先通过企业内部审批流程 （签署审核）1. <strong>false（默认）</strong>：  无需审批，发起方企业签署员工可直接进行签署操作。2. <strong>true</strong>：  需要先走企业内部审批流程。 当流程进展到发起方企业签署员工时，其签署操作会被阻塞，等待企业内部审批结果。企业应通过 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a>审批接口，将内部审批结果通知腾讯电子签平台：1. 若通知为“审核通过”，发起方企业签署员工可继续完成签署操作。2. 若通知为“审核未通过”，平台将继续阻塞该签署方的签署操作，直到企业再次通知平台审核通过为止。说明： 此能力可用于与企业内部审批流程打通，适用于手动签署和“授权签”两种模式。</p>
                     * @param _needSignReview <p>发起方企业签署员工，在进行签署操作前，是否需要先通过企业内部审批流程 （签署审核）1. <strong>false（默认）</strong>：  无需审批，发起方企业签署员工可直接进行签署操作。2. <strong>true</strong>：  需要先走企业内部审批流程。 当流程进展到发起方企业签署员工时，其签署操作会被阻塞，等待企业内部审批结果。企业应通过 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a>审批接口，将内部审批结果通知腾讯电子签平台：1. 若通知为“审核通过”，发起方企业签署员工可继续完成签署操作。2. 若通知为“审核未通过”，平台将继续阻塞该签署方的签署操作，直到企业再次通知平台审核通过为止。说明： 此能力可用于与企业内部审批流程打通，适用于手动签署和“授权签”两种模式。</p>
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
                     * 获取<p>发起方在创建合同流程前，是否必须先通过企业内部审批流程 （发起审核）</p><p>当设置为 <code>true</code> 时：  </p><ol><li>您需要在企业内部完成审批，并通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a> 将审批结果回传给腾讯电子签。 </li><li>只有当审核状态为“通过”时，合同流程正常发起。  </li><li>若未通过或未回传审核结果，发起操作将被阻塞，阻止合同流程。</li></ol><p>当设置为 <code>false</code> （默认值）时：<br>  发起方无需经过企业内部审批，可直接发起合同流程。</p>
                     * @return NeedCreateReview <p>发起方在创建合同流程前，是否必须先通过企业内部审批流程 （发起审核）</p><p>当设置为 <code>true</code> 时：  </p><ol><li>您需要在企业内部完成审批，并通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a> 将审批结果回传给腾讯电子签。 </li><li>只有当审核状态为“通过”时，合同流程正常发起。  </li><li>若未通过或未回传审核结果，发起操作将被阻塞，阻止合同流程。</li></ol><p>当设置为 <code>false</code> （默认值）时：<br>  发起方无需经过企业内部审批，可直接发起合同流程。</p>
                     * 
                     */
                    bool GetNeedCreateReview() const;

                    /**
                     * 设置<p>发起方在创建合同流程前，是否必须先通过企业内部审批流程 （发起审核）</p><p>当设置为 <code>true</code> 时：  </p><ol><li>您需要在企业内部完成审批，并通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a> 将审批结果回传给腾讯电子签。 </li><li>只有当审核状态为“通过”时，合同流程正常发起。  </li><li>若未通过或未回传审核结果，发起操作将被阻塞，阻止合同流程。</li></ol><p>当设置为 <code>false</code> （默认值）时：<br>  发起方无需经过企业内部审批，可直接发起合同流程。</p>
                     * @param _needCreateReview <p>发起方在创建合同流程前，是否必须先通过企业内部审批流程 （发起审核）</p><p>当设置为 <code>true</code> 时：  </p><ol><li>您需要在企业内部完成审批，并通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a> 将审批结果回传给腾讯电子签。 </li><li>只有当审核状态为“通过”时，合同流程正常发起。  </li><li>若未通过或未回传审核结果，发起操作将被阻塞，阻止合同流程。</li></ol><p>当设置为 <code>false</code> （默认值）时：<br>  发起方无需经过企业内部审批，可直接发起合同流程。</p>
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
                     * 获取<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * @return UserData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * @param _userData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
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
                     * 获取<p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p>
                     * @return CcInfos <p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p>
                     * 
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置<p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p>
                     * @param _ccInfos <p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p>
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
                     * 获取<p>合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接<br>注: <code>该参数必须是一个待发起审核的合同id，并且还未审核通过</code></p>
                     * @return FlowId <p>合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接<br>注: <code>该参数必须是一个待发起审核的合同id，并且还未审核通过</code></p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接<br>注: <code>该参数必须是一个待发起审核的合同id，并且还未审核通过</code></p>
                     * @param _flowId <p>合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接<br>注: <code>该参数必须是一个待发起审核的合同id，并且还未审核通过</code></p>
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
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p>
                     * @return InitiatorComponents <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p>
                     * 
                     */
                    std::vector<Component> GetInitiatorComponents() const;

                    /**
                     * 设置<p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p>
                     * @param _initiatorComponents <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p>
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
                     * 获取<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * @return FlowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * 
                     */
                    int64_t GetFlowDisplayType() const;

                    /**
                     * 设置<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * @param _flowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
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
                     * 获取<p><font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font><br>签署控件的配置信息，用在嵌入式发起的页面配置，<br>包括  </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     * @return SignComponentConfig <p><font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font><br>签署控件的配置信息，用在嵌入式发起的页面配置，<br>包括  </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     * @deprecated
                     */
                    SignComponentConfig GetSignComponentConfig() const;

                    /**
                     * 设置<p><font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font><br>签署控件的配置信息，用在嵌入式发起的页面配置，<br>包括  </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     * @param _signComponentConfig <p><font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font><br>签署控件的配置信息，用在嵌入式发起的页面配置，<br>包括  </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     * @deprecated
                     */
                    void SetSignComponentConfig(const SignComponentConfig& _signComponentConfig);

                    /**
                     * 判断参数 SignComponentConfig 是否已赋值
                     * @return SignComponentConfig 是否已赋值
                     * @deprecated
                     */
                    bool SignComponentConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启嵌入式合同发起时，提交发起审批流，默认：false（不开启），开启后，嵌入式合同发起后，会提交电子签内置审批流</p>
                     * @return Workflow <p>是否开启嵌入式合同发起时，提交发起审批流，默认：false（不开启），开启后，嵌入式合同发起后，会提交电子签内置审批流</p>
                     * 
                     */
                    bool GetWorkflow() const;

                    /**
                     * 设置<p>是否开启嵌入式合同发起时，提交发起审批流，默认：false（不开启），开启后，嵌入式合同发起后，会提交电子签内置审批流</p>
                     * @param _workflow <p>是否开启嵌入式合同发起时，提交发起审批流，默认：false（不开启），开启后，嵌入式合同发起后，会提交电子签内置审批流</p>
                     * 
                     */
                    void SetWorkflow(const bool& _workflow);

                    /**
                     * 判断参数 Workflow 是否已赋值
                     * @return Workflow 是否已赋值
                     * 
                     */
                    bool WorkflowHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>资源id，与ResourceType相对应，取值范围：</p><ul><li>文件Id（通过UploadFiles获取文件资源Id）</li><li>模板Id（通过控制台创建模板后获取模板Id）</li><li>草稿Id（通过嵌入页面保存草稿后获取草稿Id）</li></ul>注意：需要同时设置 ResourceType 参数指定资源类型
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>自定义的合同流程的名称，长度不能超过200个字符，只能由中文汉字、中文标点、英文字母、阿拉伯数字、空格、小括号、中括号、中划线、下划线以及（,）、（;）、（.）、(&amp;)、（+）组成。</p><p>该名称还将用于合同签署完成后文件下载的默认文件名称。</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>资源类型，取值有：</p><ul><li> **1**：模板</li><li> **2**：文件（默认值）</li><li> **3**：草稿</li></ul>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。</p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>用户自定义合同类型Id</p><p>该id为电子签企业内的合同类型id， 可以在控制台-合同-自定义合同类型处获取<br>注: <code>该参数如果和FlowType同时传，以该参数优先生效</code></p>
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                    /**
                     * <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * <p>合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。</p>
                     */
                    std::vector<FlowCreateApprover> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * <p>开启或者关闭智能添加填写区：</p><ul><li> **OPEN**：开启（默认值）</li><li> **CLOSE**：关闭</li></ul>
                     */
                    std::string m_intelligentStatus;
                    bool m_intelligentStatusHasBeenSet;

                    /**
                     * <p>该字段已不再使用，请使用InitiatorComponents</p>
                     */
                    Component m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>发起合同个性化参数<br>用于满足创建及页面操作过程中的个性化要求<br>具体定制化内容详见数据接口说明</p>
                     */
                    CreateFlowOption m_flowOption;
                    bool m_flowOptionHasBeenSet;

                    /**
                     * <p>发起方企业签署员工，在进行签署操作前，是否需要先通过企业内部审批流程 （签署审核）1. <strong>false（默认）</strong>：  无需审批，发起方企业签署员工可直接进行签署操作。2. <strong>true</strong>：  需要先走企业内部审批流程。 当流程进展到发起方企业签署员工时，其签署操作会被阻塞，等待企业内部审批结果。企业应通过 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a>审批接口，将内部审批结果通知腾讯电子签平台：1. 若通知为“审核通过”，发起方企业签署员工可继续完成签署操作。2. 若通知为“审核未通过”，平台将继续阻塞该签署方的签署操作，直到企业再次通知平台审核通过为止。说明： 此能力可用于与企业内部审批流程打通，适用于手动签署和“授权签”两种模式。</p>
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * <p>发起方在创建合同流程前，是否必须先通过企业内部审批流程 （发起审核）</p><p>当设置为 <code>true</code> 时：  </p><ol><li>您需要在企业内部完成审批，并通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview" target="_blank">提交签署流程审批结果</a> 将审批结果回传给腾讯电子签。 </li><li>只有当审核状态为“通过”时，合同流程正常发起。  </li><li>若未通过或未回传审核结果，发起操作将被阻塞，阻止合同流程。</li></ol><p>当设置为 <code>false</code> （默认值）时：<br>  发起方无需经过企业内部审批，可直接发起合同流程。</p>
                     */
                    bool m_needCreateReview;
                    bool m_needCreateReviewHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p>
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * <p>合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接<br>注: <code>该参数必须是一个待发起审核的合同id，并且还未审核通过</code></p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p>
                     */
                    std::vector<Component> m_initiatorComponents;
                    bool m_initiatorComponentsHasBeenSet;

                    /**
                     * <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                    /**
                     * <p><font color="red">此字段已不再使用，请使用 CreateFlowOption 里面的 SignComponentConfig</font><br>签署控件的配置信息，用在嵌入式发起的页面配置，<br>包括  </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     */
                    SignComponentConfig m_signComponentConfig;
                    bool m_signComponentConfigHasBeenSet;

                    /**
                     * <p>是否开启嵌入式合同发起时，提交发起审批流，默认：false（不开启），开启后，嵌入式合同发起后，会提交电子签内置审批流</p>
                     */
                    bool m_workflow;
                    bool m_workflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWREQUEST_H_
