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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGREQUEST_H_

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
                * DescribeSlowLog请求参数结构体
                */
                class DescribeSlowLogRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogRequest();
                    ~DescribeSlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

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
                     * 获取预查询慢日志的起始时间，查询时间最大跨度30天。
                     * @return BeginTime 预查询慢日志的起始时间，查询时间最大跨度30天。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置预查询慢日志的起始时间，查询时间最大跨度30天。
                     * @param _beginTime 预查询慢日志的起始时间，查询时间最大跨度30天。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取预查询慢日志的结束时间，查询时间最大跨度30天
                     * @return EndTime 预查询慢日志的结束时间，查询时间最大跨度30天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置预查询慢日志的结束时间，查询时间最大跨度30天
                     * @param _endTime 预查询慢日志的结束时间，查询时间最大跨度30天
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取慢查询平均执行时间阈值，单位：毫秒。
                     * @return MinQueryTime 慢查询平均执行时间阈值，单位：毫秒。
                     * 
                     */
                    int64_t GetMinQueryTime() const;

                    /**
                     * 设置慢查询平均执行时间阈值，单位：毫秒。
                     * @param _minQueryTime 慢查询平均执行时间阈值，单位：毫秒。
                     * 
                     */
                    void SetMinQueryTime(const int64_t& _minQueryTime);

                    /**
                     * 判断参数 MinQueryTime 是否已赋值
                     * @return MinQueryTime 是否已赋值
                     * 
                     */
                    bool MinQueryTimeHasBeenSet() const;

                    /**
                     * 获取每个页面展示的慢查询条数，默认值为20，最大100。
                     * @return Limit 每个页面展示的慢查询条数，默认值为20，最大100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每个页面展示的慢查询条数，默认值为20，最大100。
                     * @param _limit 每个页面展示的慢查询条数，默认值为20，最大100。
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
                     * 获取慢查询条数的偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset 慢查询条数的偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置慢查询条数的偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param _offset 慢查询条数的偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
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
                     * 获取节点所属角色。
- master：主节点。
- slave：从节点。
                     * @return Role 节点所属角色。
- master：主节点。
- slave：从节点。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置节点所属角色。
- master：主节点。
- slave：从节点。
                     * @param _role 节点所属角色。
- master：主节点。
- slave：从节点。
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 预查询慢日志的起始时间，查询时间最大跨度30天。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 预查询慢日志的结束时间，查询时间最大跨度30天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 慢查询平均执行时间阈值，单位：毫秒。
                     */
                    int64_t m_minQueryTime;
                    bool m_minQueryTimeHasBeenSet;

                    /**
                     * 每个页面展示的慢查询条数，默认值为20，最大100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 慢查询条数的偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 节点所属角色。
- master：主节点。
- slave：从节点。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGREQUEST_H_
