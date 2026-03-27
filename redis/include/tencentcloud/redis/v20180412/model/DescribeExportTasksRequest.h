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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEEXPORTTASKSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEEXPORTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeExportTasks请求参数结构体
                */
                class DescribeExportTasksRequest : public AbstractModel
                {
                public:
                    DescribeExportTasksRequest();
                    ~DescribeExportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @return LogType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @param _logType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>每页输出的任务列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     * @return Limit <p>每页输出的任务列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页输出的任务列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     * @param _limit <p>每页输出的任务列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量。</p><ul><li>默认值：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     * @return Offset <p>分页偏移量。</p><ul><li>默认值：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量。</p><ul><li>默认值：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     * @param _offset <p>分页偏移量。</p><ul><li>默认值：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>指定查询的实例 ID。请登录<a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定查询的实例 ID。请登录<a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定查询的实例 ID。请登录<a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定查询的实例 ID。请登录<a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>每页输出的任务列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量。</p><ul><li>默认值：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>指定查询的实例 ID。请登录<a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEEXPORTTASKSREQUEST_H_
