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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSREQUEST_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * DescribeTaskStrategyRisks请求参数结构体
                */
                class DescribeTaskStrategyRisksRequest : public AbstractModel
                {
                public:
                    DescribeTaskStrategyRisksRequest();
                    ~DescribeTaskStrategyRisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取评估项ID
                     * @return StrategyId 评估项ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置评估项ID
                     * @param _strategyId 评估项ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取返回数量,默认值为100,最大值为200
                     * @return Limit 返回数量,默认值为100,最大值为200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量,默认值为100,最大值为200
                     * @param _limit 返回数量,默认值为100,最大值为200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取环境
                     * @return Env 环境
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置环境
                     * @param _env 环境
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _taskType 任务类型
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 评估项ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 返回数量,默认值为100,最大值为200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 环境
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSREQUEST_H_
