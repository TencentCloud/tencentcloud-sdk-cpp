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
                     * 获取是否顺序签署(true:无序签,false:顺序签)
                     * @return Unordered 是否顺序签署(true:无序签,false:顺序签)
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置是否顺序签署(true:无序签,false:顺序签)
                     * @param _unordered 是否顺序签署(true:无序签,false:顺序签)
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
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     * @return Deadline 签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     * @param _deadline 签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
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
                     * 获取用户自定义合同类型
                     * @return UserFlowTypeId 用户自定义合同类型
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置用户自定义合同类型
                     * @param _userFlowTypeId 用户自定义合同类型
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
                     * 获取打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * @return IntelligentStatus 打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * 
                     */
                    std::string GetIntelligentStatus() const;

                    /**
                     * 设置打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * @param _intelligentStatus 打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * 
                     */
                    void SetIntelligentStatus(const std::string& _intelligentStatus);

                    /**
                     * 判断参数 IntelligentStatus 是否已赋值
                     * @return IntelligentStatus 是否已赋值
                     * 
                     */
                    bool IntelligentStatusHasBeenSet() const;

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
                     * 是否顺序签署(true:无序签,false:顺序签)
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 用户自定义合同类型
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                    /**
                     * 签署流程参与者信息，最大限制50方
                     */
                    std::vector<FlowCreateApprover> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     */
                    std::string m_intelligentStatus;
                    bool m_intelligentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWREQUEST_H_
