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
#include <tencentcloud/ess/v20201111/model/Agent.h>


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
                     * 获取调用方用户信息，userId 必填
                     * @return Operator 调用方用户信息，userId 必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填
                     * @param _operator 调用方用户信息，userId 必填
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
                     * 获取资源Id，通过多文件上传（UploadFiles）接口获得
                     * @return ResourceId 资源Id，通过多文件上传（UploadFiles）接口获得
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id，通过多文件上传（UploadFiles）接口获得
                     * @param _resourceId 资源Id，通过多文件上传（UploadFiles）接口获得
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
                     * 获取合同名称
                     * @return FlowName 合同名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同名称
                     * @param _flowName 合同名称
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
                     * 获取是否顺序签署
true:无序签
false:顺序签
                     * @return Unordered 是否顺序签署
true:无序签
false:顺序签
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置是否顺序签署
true:无序签
false:顺序签
                     * @param _unordered 是否顺序签署
true:无序签
false:顺序签
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
                     * 获取签署流程的签署截止时间。
值为unix时间戳,精确到秒
不传默认为当前时间一年后
                     * @return Deadline 签署流程的签署截止时间。
值为unix时间戳,精确到秒
不传默认为当前时间一年后
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署流程的签署截止时间。
值为unix时间戳,精确到秒
不传默认为当前时间一年后
                     * @param _deadline 签署流程的签署截止时间。
值为unix时间戳,精确到秒
不传默认为当前时间一年后
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
该id为电子签企业内的合同类型id
                     * @return UserFlowTypeId 用户自定义合同类型Id
该id为电子签企业内的合同类型id
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置用户自定义合同类型Id
该id为电子签企业内的合同类型id
                     * @param _userFlowTypeId 用户自定义合同类型Id
该id为电子签企业内的合同类型id
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
                     * 获取签署流程参与者信息，最大限制50方
                     * @return Approvers 签署流程参与者信息，最大限制50方
                     * 
                     */
                    std::vector<FlowCreateApprover> GetApprovers() const;

                    /**
                     * 设置签署流程参与者信息，最大限制50方
                     * @param _approvers 签署流程参与者信息，最大限制50方
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
                     * 获取打开智能添加填写区
(默认开启，打开:"OPEN"
 关闭："CLOSE"
                     * @return IntelligentStatus 打开智能添加填写区
(默认开启，打开:"OPEN"
 关闭："CLOSE"
                     * 
                     */
                    std::string GetIntelligentStatus() const;

                    /**
                     * 设置打开智能添加填写区
(默认开启，打开:"OPEN"
 关闭："CLOSE"
                     * @param _intelligentStatus 打开智能添加填写区
(默认开启，打开:"OPEN"
 关闭："CLOSE"
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
                     * 获取资源类型，
1：文件，
2：模板
不传默认为1：文件
目前仅支持文件
                     * @return ResourceType 资源类型，
1：文件，
2：模板
不传默认为1：文件
目前仅支持文件
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型，
1：文件，
2：模板
不传默认为1：文件
目前仅支持文件
                     * @param _resourceType 资源类型，
1：文件，
2：模板
不传默认为1：文件
目前仅支持文件
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
                     * 获取发起方填写控件
该类型控件由发起方完成填写
                     * @return Components 发起方填写控件
该类型控件由发起方完成填写
                     * 
                     */
                    Component GetComponents() const;

                    /**
                     * 设置发起方填写控件
该类型控件由发起方完成填写
                     * @param _components 发起方填写控件
该类型控件由发起方完成填写
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
                     * 获取是否开启发起方签署审核
true:开启发起方签署审核
false:不开启发起方签署审核
默认false:不开启发起方签署审核
                     * @return NeedSignReview 是否开启发起方签署审核
true:开启发起方签署审核
false:不开启发起方签署审核
默认false:不开启发起方签署审核
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置是否开启发起方签署审核
true:开启发起方签署审核
false:不开启发起方签署审核
默认false:不开启发起方签署审核
                     * @param _needSignReview 是否开启发起方签署审核
true:开启发起方签署审核
false:不开启发起方签署审核
默认false:不开启发起方签署审核
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
                     * 获取开启发起方发起合同审核
true:开启发起方发起合同审核
false:不开启发起方发起合同审核
默认false:不开启发起方发起合同审核
                     * @return NeedCreateReview 开启发起方发起合同审核
true:开启发起方发起合同审核
false:不开启发起方发起合同审核
默认false:不开启发起方发起合同审核
                     * 
                     */
                    bool GetNeedCreateReview() const;

                    /**
                     * 设置开启发起方发起合同审核
true:开启发起方发起合同审核
false:不开启发起方发起合同审核
默认false:不开启发起方发起合同审核
                     * @param _needCreateReview 开启发起方发起合同审核
true:开启发起方发起合同审核
false:不开启发起方发起合同审核
默认false:不开启发起方发起合同审核
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
                     * 获取用户自定义参数
                     * @return UserData 用户自定义参数
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置用户自定义参数
                     * @param _userData 用户自定义参数
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
                     * 获取合同id,用于通过已web页面发起的合同id快速生成一个web发起合同链接
                     * @return FlowId 合同id,用于通过已web页面发起的合同id快速生成一个web发起合同链接
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同id,用于通过已web页面发起的合同id快速生成一个web发起合同链接
                     * @param _flowId 合同id,用于通过已web页面发起的合同id快速生成一个web发起合同链接
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
                     * 获取合同类型名称
该字段用于客户自定义合同类型
建议使用时指定合同类型，便于之后合同分类以及查看
                     * @return FlowType 合同类型名称
该字段用于客户自定义合同类型
建议使用时指定合同类型，便于之后合同分类以及查看
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同类型名称
该字段用于客户自定义合同类型
建议使用时指定合同类型，便于之后合同分类以及查看
                     * @param _flowType 合同类型名称
该字段用于客户自定义合同类型
建议使用时指定合同类型，便于之后合同分类以及查看
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
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填	
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填	
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填	
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填	
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 资源Id，通过多文件上传（UploadFiles）接口获得
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 合同名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 是否顺序签署
true:无序签
false:顺序签
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 签署流程的签署截止时间。
值为unix时间戳,精确到秒
不传默认为当前时间一年后
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 用户自定义合同类型Id
该id为电子签企业内的合同类型id
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                    /**
                     * 签署流程参与者信息，最大限制50方
                     */
                    std::vector<FlowCreateApprover> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 打开智能添加填写区
(默认开启，打开:"OPEN"
 关闭："CLOSE"
                     */
                    std::string m_intelligentStatus;
                    bool m_intelligentStatusHasBeenSet;

                    /**
                     * 资源类型，
1：文件，
2：模板
不传默认为1：文件
目前仅支持文件
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 发起方填写控件
该类型控件由发起方完成填写
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
                     * 是否开启发起方签署审核
true:开启发起方签署审核
false:不开启发起方签署审核
默认false:不开启发起方签署审核
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 开启发起方发起合同审核
true:开启发起方发起合同审核
false:不开启发起方发起合同审核
默认false:不开启发起方发起合同审核
                     */
                    bool m_needCreateReview;
                    bool m_needCreateReviewHasBeenSet;

                    /**
                     * 用户自定义参数
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 合同id,用于通过已web页面发起的合同id快速生成一个web发起合同链接
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同类型名称
该字段用于客户自定义合同类型
建议使用时指定合同类型，便于之后合同分类以及查看
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填	
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWREQUEST_H_
