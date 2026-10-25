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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOCKTREEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOCKTREEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeBlockingLockTree请求参数结构体
                */
                class DescribeBlockingLockTreeRequest : public AbstractModel
                {
                public:
                    DescribeBlockingLockTreeRequest();
                    ~DescribeBlockingLockTreeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型，固定为sqlserver。</p>
                     * @return Product <p>服务产品类型，固定为sqlserver。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，固定为sqlserver。</p>
                     * @param _product <p>服务产品类型，固定为sqlserver。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>lock monitor 扫描轮次 ID（可从 DescribeBlockingTimeRange 返回的 MonitorLoops 列表选择，也可从 DescribeBlockingLogs / DescribeBlockingTrees 返回的 MonitorLoop 字段获取）。与 BlockingTime 二选一，MonitorLoop 优先。</p>
                     * @return MonitorLoop <p>lock monitor 扫描轮次 ID（可从 DescribeBlockingTimeRange 返回的 MonitorLoops 列表选择，也可从 DescribeBlockingLogs / DescribeBlockingTrees 返回的 MonitorLoop 字段获取）。与 BlockingTime 二选一，MonitorLoop 优先。</p>
                     * 
                     */
                    std::string GetMonitorLoop() const;

                    /**
                     * 设置<p>lock monitor 扫描轮次 ID（可从 DescribeBlockingTimeRange 返回的 MonitorLoops 列表选择，也可从 DescribeBlockingLogs / DescribeBlockingTrees 返回的 MonitorLoop 字段获取）。与 BlockingTime 二选一，MonitorLoop 优先。</p>
                     * @param _monitorLoop <p>lock monitor 扫描轮次 ID（可从 DescribeBlockingTimeRange 返回的 MonitorLoops 列表选择，也可从 DescribeBlockingLogs / DescribeBlockingTrees 返回的 MonitorLoop 字段获取）。与 BlockingTime 二选一，MonitorLoop 优先。</p>
                     * 
                     */
                    void SetMonitorLoop(const std::string& _monitorLoop);

                    /**
                     * 判断参数 MonitorLoop 是否已赋值
                     * @return MonitorLoop 是否已赋值
                     * 
                     */
                    bool MonitorLoopHasBeenSet() const;

                    /**
                     * 获取<p>阻塞时间点，格式：yyyy-MM-dd HH:mm:ss。当 MonitorLoop 为空时使用该字段定位：后端会在该时间点±1分钟范围内寻找最接近的 MonitorLoop 并下钻其阻塞树。与 MonitorLoop 二选一。BlockingTime 必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * @return BlockingTime <p>阻塞时间点，格式：yyyy-MM-dd HH:mm:ss。当 MonitorLoop 为空时使用该字段定位：后端会在该时间点±1分钟范围内寻找最接近的 MonitorLoop 并下钻其阻塞树。与 MonitorLoop 二选一。BlockingTime 必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * 
                     */
                    std::string GetBlockingTime() const;

                    /**
                     * 设置<p>阻塞时间点，格式：yyyy-MM-dd HH:mm:ss。当 MonitorLoop 为空时使用该字段定位：后端会在该时间点±1分钟范围内寻找最接近的 MonitorLoop 并下钻其阻塞树。与 MonitorLoop 二选一。BlockingTime 必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * @param _blockingTime <p>阻塞时间点，格式：yyyy-MM-dd HH:mm:ss。当 MonitorLoop 为空时使用该字段定位：后端会在该时间点±1分钟范围内寻找最接近的 MonitorLoop 并下钻其阻塞树。与 MonitorLoop 二选一。BlockingTime 必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * 
                     */
                    void SetBlockingTime(const std::string& _blockingTime);

                    /**
                     * 判断参数 BlockingTime 是否已赋值
                     * @return BlockingTime 是否已赋值
                     * 
                     */
                    bool BlockingTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型，固定为sqlserver。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>lock monitor 扫描轮次 ID（可从 DescribeBlockingTimeRange 返回的 MonitorLoops 列表选择，也可从 DescribeBlockingLogs / DescribeBlockingTrees 返回的 MonitorLoop 字段获取）。与 BlockingTime 二选一，MonitorLoop 优先。</p>
                     */
                    std::string m_monitorLoop;
                    bool m_monitorLoopHasBeenSet;

                    /**
                     * <p>阻塞时间点，格式：yyyy-MM-dd HH:mm:ss。当 MonitorLoop 为空时使用该字段定位：后端会在该时间点±1分钟范围内寻找最接近的 MonitorLoop 并下钻其阻塞树。与 MonitorLoop 二选一。BlockingTime 必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     */
                    std::string m_blockingTime;
                    bool m_blockingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOCKTREEREQUEST_H_
