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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSEVENTLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeOverviewDDoSEventList请求参数结构体
                */
                class DescribeOverviewDDoSEventListRequest : public AbstractModel
                {
                public:
                    DescribeOverviewDDoSEventListRequest();
                    ~DescribeOverviewDDoSEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param StartTime 起始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

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
                     * 获取可选按攻击状态过滤，start：攻击中；end：攻击结束
                     * @return AttackStatus 可选按攻击状态过滤，start：攻击中；end：攻击结束
                     */
                    std::string GetAttackStatus() const;

                    /**
                     * 设置可选按攻击状态过滤，start：攻击中；end：攻击结束
                     * @param AttackStatus 可选按攻击状态过滤，start：攻击中；end：攻击结束
                     */
                    void SetAttackStatus(const std::string& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取记录条数
                     * @return Limit 记录条数
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置记录条数
                     * @param Limit 记录条数
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 可选按攻击状态过滤，start：攻击中；end：攻击结束
                     */
                    std::string m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 记录条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSEVENTLISTREQUEST_H_
