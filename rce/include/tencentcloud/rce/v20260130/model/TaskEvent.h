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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_TASKEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_TASKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 做任务事件详情
                */
                class TaskEvent : public AbstractModel
                {
                public:
                    TaskEvent();
                    ~TaskEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>营销活动ID</p>
                     * @return PromotionId <p>营销活动ID</p>
                     * 
                     */
                    std::string GetPromotionId() const;

                    /**
                     * 设置<p>营销活动ID</p>
                     * @param _promotionId <p>营销活动ID</p>
                     * 
                     */
                    void SetPromotionId(const std::string& _promotionId);

                    /**
                     * 判断参数 PromotionId 是否已赋值
                     * @return PromotionId 是否已赋值
                     * 
                     */
                    bool PromotionIdHasBeenSet() const;

                    /**
                     * 获取<p>营销活动名称</p>
                     * @return PromotionName <p>营销活动名称</p>
                     * 
                     */
                    std::string GetPromotionName() const;

                    /**
                     * 设置<p>营销活动名称</p>
                     * @param _promotionName <p>营销活动名称</p>
                     * 
                     */
                    void SetPromotionName(const std::string& _promotionName);

                    /**
                     * 判断参数 PromotionName 是否已赋值
                     * @return PromotionName 是否已赋值
                     * 
                     */
                    bool PromotionNameHasBeenSet() const;

                    /**
                     * 获取<p>营销活动描述</p>
                     * @return Description <p>营销活动描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>营销活动描述</p>
                     * @param _description <p>营销活动描述</p>
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
                     * 获取<p>邀请人ID</p>
                     * @return InviterUserId <p>邀请人ID</p>
                     * 
                     */
                    std::string GetInviterUserId() const;

                    /**
                     * 设置<p>邀请人ID</p>
                     * @param _inviterUserId <p>邀请人ID</p>
                     * 
                     */
                    void SetInviterUserId(const std::string& _inviterUserId);

                    /**
                     * 判断参数 InviterUserId 是否已赋值
                     * @return InviterUserId 是否已赋值
                     * 
                     */
                    bool InviterUserIdHasBeenSet() const;

                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>任务类型，如签到打卡、观看广告、累计步数等</p>
                     * @return TaskType <p>任务类型，如签到打卡、观看广告、累计步数等</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型，如签到打卡、观看广告、累计步数等</p>
                     * @param _taskType <p>任务类型，如签到打卡、观看广告、累计步数等</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务完成耗时</p><p>单位：毫秒</p>
                     * @return TaskCostTime <p>任务完成耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetTaskCostTime() const;

                    /**
                     * 设置<p>任务完成耗时</p><p>单位：毫秒</p>
                     * @param _taskCostTime <p>任务完成耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetTaskCostTime(const int64_t& _taskCostTime);

                    /**
                     * 判断参数 TaskCostTime 是否已赋值
                     * @return TaskCostTime 是否已赋值
                     * 
                     */
                    bool TaskCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>营销活动ID</p>
                     */
                    std::string m_promotionId;
                    bool m_promotionIdHasBeenSet;

                    /**
                     * <p>营销活动名称</p>
                     */
                    std::string m_promotionName;
                    bool m_promotionNameHasBeenSet;

                    /**
                     * <p>营销活动描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>邀请人ID</p>
                     */
                    std::string m_inviterUserId;
                    bool m_inviterUserIdHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务类型，如签到打卡、观看广告、累计步数等</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务完成耗时</p><p>单位：毫秒</p>
                     */
                    int64_t m_taskCostTime;
                    bool m_taskCostTimeHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_TASKEVENT_H_
