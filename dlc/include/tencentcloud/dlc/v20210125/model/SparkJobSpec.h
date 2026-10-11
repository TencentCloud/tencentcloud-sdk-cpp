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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBSPEC_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Spark 集群资源规格（CU 维度），Spec.Spark 平铺字段载体。
                */
                class SparkJobSpec : public AbstractModel
                {
                public:
                    SparkJobSpec();
                    ~SparkJobSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Driver 资源规格（CU 数）.</p>
                     * @return DriverCU <p>Driver 资源规格（CU 数）.</p>
                     * 
                     */
                    int64_t GetDriverCU() const;

                    /**
                     * 设置<p>Driver 资源规格（CU 数）.</p>
                     * @param _driverCU <p>Driver 资源规格（CU 数）.</p>
                     * 
                     */
                    void SetDriverCU(const int64_t& _driverCU);

                    /**
                     * 判断参数 DriverCU 是否已赋值
                     * @return DriverCU 是否已赋值
                     * 
                     */
                    bool DriverCUHasBeenSet() const;

                    /**
                     * 获取<p>Executor 资源规格（CU 数）.</p>
                     * @return ExecutorCU <p>Executor 资源规格（CU 数）.</p>
                     * 
                     */
                    int64_t GetExecutorCU() const;

                    /**
                     * 设置<p>Executor 资源规格（CU 数）.</p>
                     * @param _executorCU <p>Executor 资源规格（CU 数）.</p>
                     * 
                     */
                    void SetExecutorCU(const int64_t& _executorCU);

                    /**
                     * 判断参数 ExecutorCU 是否已赋值
                     * @return ExecutorCU 是否已赋值
                     * 
                     */
                    bool ExecutorCUHasBeenSet() const;

                    /**
                     * 获取<p>Executor 实例数量（弹性伸缩关闭时的固定数量）.</p>
                     * @return ExecutorNum <p>Executor 实例数量（弹性伸缩关闭时的固定数量）.</p>
                     * 
                     */
                    int64_t GetExecutorNum() const;

                    /**
                     * 设置<p>Executor 实例数量（弹性伸缩关闭时的固定数量）.</p>
                     * @param _executorNum <p>Executor 实例数量（弹性伸缩关闭时的固定数量）.</p>
                     * 
                     */
                    void SetExecutorNum(const int64_t& _executorNum);

                    /**
                     * 判断参数 ExecutorNum 是否已赋值
                     * @return ExecutorNum 是否已赋值
                     * 
                     */
                    bool ExecutorNumHasBeenSet() const;

                    /**
                     * 获取<p>是否开启弹性扩缩容.</p>
                     * @return DynamicAllocation <p>是否开启弹性扩缩容.</p>
                     * 
                     */
                    bool GetDynamicAllocation() const;

                    /**
                     * 设置<p>是否开启弹性扩缩容.</p>
                     * @param _dynamicAllocation <p>是否开启弹性扩缩容.</p>
                     * 
                     */
                    void SetDynamicAllocation(const bool& _dynamicAllocation);

                    /**
                     * 判断参数 DynamicAllocation 是否已赋值
                     * @return DynamicAllocation 是否已赋值
                     * 
                     */
                    bool DynamicAllocationHasBeenSet() const;

                    /**
                     * 获取<p>弹性扩缩容最小 Executor 数.</p>
                     * @return MinExecutors <p>弹性扩缩容最小 Executor 数.</p>
                     * 
                     */
                    int64_t GetMinExecutors() const;

                    /**
                     * 设置<p>弹性扩缩容最小 Executor 数.</p>
                     * @param _minExecutors <p>弹性扩缩容最小 Executor 数.</p>
                     * 
                     */
                    void SetMinExecutors(const int64_t& _minExecutors);

                    /**
                     * 判断参数 MinExecutors 是否已赋值
                     * @return MinExecutors 是否已赋值
                     * 
                     */
                    bool MinExecutorsHasBeenSet() const;

                    /**
                     * 获取<p>弹性扩缩容最大 Executor 数.</p>
                     * @return MaxExecutors <p>弹性扩缩容最大 Executor 数.</p>
                     * 
                     */
                    int64_t GetMaxExecutors() const;

                    /**
                     * 设置<p>弹性扩缩容最大 Executor 数.</p>
                     * @param _maxExecutors <p>弹性扩缩容最大 Executor 数.</p>
                     * 
                     */
                    void SetMaxExecutors(const int64_t& _maxExecutors);

                    /**
                     * 判断参数 MaxExecutors 是否已赋值
                     * @return MaxExecutors 是否已赋值
                     * 
                     */
                    bool MaxExecutorsHasBeenSet() const;

                private:

                    /**
                     * <p>Driver 资源规格（CU 数）.</p>
                     */
                    int64_t m_driverCU;
                    bool m_driverCUHasBeenSet;

                    /**
                     * <p>Executor 资源规格（CU 数）.</p>
                     */
                    int64_t m_executorCU;
                    bool m_executorCUHasBeenSet;

                    /**
                     * <p>Executor 实例数量（弹性伸缩关闭时的固定数量）.</p>
                     */
                    int64_t m_executorNum;
                    bool m_executorNumHasBeenSet;

                    /**
                     * <p>是否开启弹性扩缩容.</p>
                     */
                    bool m_dynamicAllocation;
                    bool m_dynamicAllocationHasBeenSet;

                    /**
                     * <p>弹性扩缩容最小 Executor 数.</p>
                     */
                    int64_t m_minExecutors;
                    bool m_minExecutorsHasBeenSet;

                    /**
                     * <p>弹性扩缩容最大 Executor 数.</p>
                     */
                    int64_t m_maxExecutors;
                    bool m_maxExecutorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKJOBSPEC_H_
