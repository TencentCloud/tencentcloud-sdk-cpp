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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/OutputRisk.h>
#include <tencentcloud/ess/v20201111/model/RiskIdentificationRoleInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeContractReviewTask返回参数结构体
                */
                class DescribeContractReviewTaskResponse : public AbstractModel
                {
                public:
                    DescribeContractReviewTaskResponse();
                    ~DescribeContractReviewTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用于审查任务的审查清单ID。
                     * @return ChecklistId 用于审查任务的审查清单ID。
                     * 
                     */
                    std::string GetChecklistId() const;

                    /**
                     * 判断参数 ChecklistId 是否已赋值
                     * @return ChecklistId 是否已赋值
                     * 
                     */
                    bool ChecklistIdHasBeenSet() const;

                    /**
                     * 获取合同审查任务创建时间。
                     * @return CreatedOn 合同审查任务创建时间。
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
                     * 获取合同审查任务完成时间。
                     * @return FinishedOn 合同审查任务完成时间。
                     * 
                     */
                    int64_t GetFinishedOn() const;

                    /**
                     * 判断参数 FinishedOn 是否已赋值
                     * @return FinishedOn 是否已赋值
                     * 
                     */
                    bool FinishedOnHasBeenSet() const;

                    /**
                     * 获取合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     * @return PolicyType 合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取合同审查的PDF文件资源ID。
                     * @return ResourceId 合同审查的PDF文件资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取合同审查识别出的PDF文件风险信息，如果是空数组表示无风险。

注意：`审查结果由AI生成，仅供参考。请结合相关法律法规和公司制度要求综合判断。`
                     * @return Risks 合同审查识别出的PDF文件风险信息，如果是空数组表示无风险。

注意：`审查结果由AI生成，仅供参考。请结合相关法律法规和公司制度要求综合判断。`
                     * 
                     */
                    std::vector<OutputRisk> GetRisks() const;

                    /**
                     * 判断参数 Risks 是否已赋值
                     * @return Risks 是否已赋值
                     * 
                     */
                    bool RisksHasBeenSet() const;

                    /**
                     * 获取合同审查中的角色信息。
                     * @return Role 合同审查中的角色信息。
                     * 
                     */
                    RiskIdentificationRoleInfo GetRole() const;

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取合同审查任务状态。
状态如下：
<ul>
    <li>**1** - 合同审查任务创建成功</li>   
    <li>**2** - 合同审查任务排队中</li>  
    <li>**3** - 合同审查任务执行中</li>   
    <li>**4** - 合同审查任务执行成功</li>
    <li>**4** - 合同审查任务执行失败</li>
</ul>
                     * @return Status 合同审查任务状态。
状态如下：
<ul>
    <li>**1** - 合同审查任务创建成功</li>   
    <li>**2** - 合同审查任务排队中</li>  
    <li>**3** - 合同审查任务执行中</li>   
    <li>**4** - 合同审查任务执行成功</li>
    <li>**4** - 合同审查任务执行失败</li>
</ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取合同审查任务ID
                     * @return TaskId 合同审查任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 用于审查任务的审查清单ID。
                     */
                    std::string m_checklistId;
                    bool m_checklistIdHasBeenSet;

                    /**
                     * 合同审查任务创建时间。
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 合同审查任务完成时间。
                     */
                    int64_t m_finishedOn;
                    bool m_finishedOnHasBeenSet;

                    /**
                     * 合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 合同审查的PDF文件资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 合同审查识别出的PDF文件风险信息，如果是空数组表示无风险。

注意：`审查结果由AI生成，仅供参考。请结合相关法律法规和公司制度要求综合判断。`
                     */
                    std::vector<OutputRisk> m_risks;
                    bool m_risksHasBeenSet;

                    /**
                     * 合同审查中的角色信息。
                     */
                    RiskIdentificationRoleInfo m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 合同审查任务状态。
状态如下：
<ul>
    <li>**1** - 合同审查任务创建成功</li>   
    <li>**2** - 合同审查任务排队中</li>  
    <li>**3** - 合同审查任务执行中</li>   
    <li>**4** - 合同审查任务执行成功</li>
    <li>**4** - 合同审查任务执行失败</li>
</ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 合同审查任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWTASKRESPONSE_H_
