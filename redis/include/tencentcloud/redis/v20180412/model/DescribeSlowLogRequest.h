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
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param InstanceId 实例Id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param BeginTime 开始时间
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取慢查询阈值（单位：微秒）
                     * @return MinQueryTime 慢查询阈值（单位：微秒）
                     */
                    int64_t GetMinQueryTime() const;

                    /**
                     * 设置慢查询阈值（单位：微秒）
                     * @param MinQueryTime 慢查询阈值（单位：微秒）
                     */
                    void SetMinQueryTime(const int64_t& _minQueryTime);

                    /**
                     * 判断参数 MinQueryTime 是否已赋值
                     * @return MinQueryTime 是否已赋值
                     */
                    bool MinQueryTimeHasBeenSet() const;

                    /**
                     * 获取页面大小
                     * @return Limit 页面大小
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页面大小
                     * @param Limit 页面大小
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，取Limit整数倍
                     * @return Offset 偏移量，取Limit整数倍
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，取Limit整数倍
                     * @param Offset 偏移量，取Limit整数倍
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 慢查询阈值（单位：微秒）
                     */
                    int64_t m_minQueryTime;
                    bool m_minQueryTimeHasBeenSet;

                    /**
                     * 页面大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，取Limit整数倍
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGREQUEST_H_
