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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_UPDATETARGETREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_UPDATETARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * UpdateTarget请求参数结构体
                */
                class UpdateTargetRequest : public AbstractModel
                {
                public:
                    UpdateTargetRequest();
                    ~UpdateTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取事件规则ID
                     * @return RuleId 事件规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置事件规则ID
                     * @param _ruleId 事件规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取事件目标ID
                     * @return TargetId 事件目标ID
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置事件目标ID
                     * @param _targetId 事件目标ID
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取开启批量投递使能
                     * @return EnableBatchDelivery 开启批量投递使能
                     * 
                     */
                    bool GetEnableBatchDelivery() const;

                    /**
                     * 设置开启批量投递使能
                     * @param _enableBatchDelivery 开启批量投递使能
                     * 
                     */
                    void SetEnableBatchDelivery(const bool& _enableBatchDelivery);

                    /**
                     * 判断参数 EnableBatchDelivery 是否已赋值
                     * @return EnableBatchDelivery 是否已赋值
                     * 
                     */
                    bool EnableBatchDeliveryHasBeenSet() const;

                    /**
                     * 获取批量投递最长等待时间
                     * @return BatchTimeout 批量投递最长等待时间
                     * 
                     */
                    int64_t GetBatchTimeout() const;

                    /**
                     * 设置批量投递最长等待时间
                     * @param _batchTimeout 批量投递最长等待时间
                     * 
                     */
                    void SetBatchTimeout(const int64_t& _batchTimeout);

                    /**
                     * 判断参数 BatchTimeout 是否已赋值
                     * @return BatchTimeout 是否已赋值
                     * 
                     */
                    bool BatchTimeoutHasBeenSet() const;

                    /**
                     * 获取批量投递最大事件条数
                     * @return BatchEventCount 批量投递最大事件条数
                     * 
                     */
                    int64_t GetBatchEventCount() const;

                    /**
                     * 设置批量投递最大事件条数
                     * @param _batchEventCount 批量投递最大事件条数
                     * 
                     */
                    void SetBatchEventCount(const int64_t& _batchEventCount);

                    /**
                     * 判断参数 BatchEventCount 是否已赋值
                     * @return BatchEventCount 是否已赋值
                     * 
                     */
                    bool BatchEventCountHasBeenSet() const;

                private:

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 事件规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 事件目标ID
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 开启批量投递使能
                     */
                    bool m_enableBatchDelivery;
                    bool m_enableBatchDeliveryHasBeenSet;

                    /**
                     * 批量投递最长等待时间
                     */
                    int64_t m_batchTimeout;
                    bool m_batchTimeoutHasBeenSet;

                    /**
                     * 批量投递最大事件条数
                     */
                    int64_t m_batchEventCount;
                    bool m_batchEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_UPDATETARGETREQUEST_H_
