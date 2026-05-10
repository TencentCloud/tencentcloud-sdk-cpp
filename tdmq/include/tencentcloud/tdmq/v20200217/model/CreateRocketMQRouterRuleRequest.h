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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROUTERRULEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROUTERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQRouterRuleInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQRouterRule请求参数结构体
                */
                class CreateRocketMQRouterRuleRequest : public AbstractModel
                {
                public:
                    CreateRocketMQRouterRuleRequest();
                    ~CreateRocketMQRouterRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>true: 立即启动任务<br>false: 创建任务后不立即启动，可以在控制台操作启动</p>
                     * @return StartNow <p>true: 立即启动任务<br>false: 创建任务后不立即启动，可以在控制台操作启动</p>
                     * 
                     */
                    bool GetStartNow() const;

                    /**
                     * 设置<p>true: 立即启动任务<br>false: 创建任务后不立即启动，可以在控制台操作启动</p>
                     * @param _startNow <p>true: 立即启动任务<br>false: 创建任务后不立即启动，可以在控制台操作启动</p>
                     * 
                     */
                    void SetStartNow(const bool& _startNow);

                    /**
                     * 判断参数 StartNow 是否已赋值
                     * @return StartNow 是否已赋值
                     * 
                     */
                    bool StartNowHasBeenSet() const;

                    /**
                     * 获取<p>规则数据结构</p>
                     * @return Rule <p>规则数据结构</p>
                     * 
                     */
                    RocketMQRouterRuleInfo GetRule() const;

                    /**
                     * 设置<p>规则数据结构</p>
                     * @param _rule <p>规则数据结构</p>
                     * 
                     */
                    void SetRule(const RocketMQRouterRuleInfo& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>数据同步类型。<br>Topic：按照topic维度同步</p>
                     * @return SyncType <p>数据同步类型。<br>Topic：按照topic维度同步</p>
                     * 
                     */
                    std::string GetSyncType() const;

                    /**
                     * 设置<p>数据同步类型。<br>Topic：按照topic维度同步</p>
                     * @param _syncType <p>数据同步类型。<br>Topic：按照topic维度同步</p>
                     * 
                     */
                    void SetSyncType(const std::string& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                private:

                    /**
                     * <p>true: 立即启动任务<br>false: 创建任务后不立即启动，可以在控制台操作启动</p>
                     */
                    bool m_startNow;
                    bool m_startNowHasBeenSet;

                    /**
                     * <p>规则数据结构</p>
                     */
                    RocketMQRouterRuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>数据同步类型。<br>Topic：按照topic维度同步</p>
                     */
                    std::string m_syncType;
                    bool m_syncTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROUTERRULEREQUEST_H_
