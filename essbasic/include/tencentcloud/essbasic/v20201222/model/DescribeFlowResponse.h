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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFLOWRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeFlow返回参数结构体
                */
                class DescribeFlowResponse : public AbstractModel
                {
                public:
                    DescribeFlowResponse();
                    ~DescribeFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流程创建者信息
                     * @return Creator 流程创建者信息
                     * 
                     */
                    Caller GetCreator() const;

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取流程编号
                     * @return FlowId 流程编号
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取流程名称
                     * @return FlowName 流程名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取流程描述
                     * @return FlowDescription 流程描述
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     * 
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取流程的类型: ”劳务合同“,”租赁合同“,”销售合同“,”其他“
                     * @return FlowType 流程的类型: ”劳务合同“,”租赁合同“,”销售合同“,”其他“
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取流程状态：
0-创建；
1-签署中；
2-拒签；
3-撤回；
4-签完存档完成；
5-已过期；
6-已销毁
7-签署完成未归档
                     * @return FlowStatus 流程状态：
0-创建；
1-签署中；
2-拒签；
3-撤回；
4-签完存档完成；
5-已过期；
6-已销毁
7-签署完成未归档
                     * 
                     */
                    int64_t GetFlowStatus() const;

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     * 
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取流程创建时间
                     * @return CreatedOn 流程创建时间
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取流程完成时间
                     * @return UpdatedOn 流程完成时间
                     * 
                     */
                    int64_t GetUpdatedOn() const;

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取流程截止日期
                     * @return Deadline 流程截止日期
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取回调地址
                     * @return CallbackUrl 回调地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取流程中止原因
                     * @return FlowMessage 流程中止原因
                     * 
                     */
                    std::string GetFlowMessage() const;

                    /**
                     * 判断参数 FlowMessage 是否已赋值
                     * @return FlowMessage 是否已赋值
                     * 
                     */
                    bool FlowMessageHasBeenSet() const;

                private:

                    /**
                     * 流程创建者信息
                     */
                    Caller m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 流程编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流程名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 流程描述
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 流程的类型: ”劳务合同“,”租赁合同“,”销售合同“,”其他“
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 流程状态：
0-创建；
1-签署中；
2-拒签；
3-撤回；
4-签完存档完成；
5-已过期；
6-已销毁
7-签署完成未归档
                     */
                    int64_t m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 流程创建时间
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 流程完成时间
                     */
                    int64_t m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 流程截止日期
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 流程中止原因
                     */
                    std::string m_flowMessage;
                    bool m_flowMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFLOWRESPONSE_H_
