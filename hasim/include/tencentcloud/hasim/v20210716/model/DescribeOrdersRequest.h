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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBEORDERSREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBEORDERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * DescribeOrders请求参数结构体
                */
                class DescribeOrdersRequest : public AbstractModel
                {
                public:
                    DescribeOrdersRequest();
                    ~DescribeOrdersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子订单ID
                     * @return DealName 子订单ID
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置子订单ID
                     * @param _dealName 子订单ID
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取审批状态 0全部 1通过 2驳回 3待审核
                     * @return AuditStatus 审批状态 0全部 1通过 2驳回 3待审核
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置审批状态 0全部 1通过 2驳回 3待审核
                     * @param _auditStatus 审批状态 0全部 1通过 2驳回 3待审核
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取翻页大小
                     * @return Limit 翻页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置翻页大小
                     * @param _limit 翻页大小
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
                     * 获取翻页偏移
                     * @return Offset 翻页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置翻页偏移
                     * @param _offset 翻页偏移
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
                     * 获取开始时间,例如2022-06-30 00:00:00
                     * @return BeginTime 开始时间,例如2022-06-30 00:00:00
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间,例如2022-06-30 00:00:00
                     * @param _beginTime 开始时间,例如2022-06-30 00:00:00
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
                     * 获取结束时间,例如2022-06-30 00:00:00
                     * @return EndTime 结束时间,例如2022-06-30 00:00:00
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间,例如2022-06-30 00:00:00
                     * @param _endTime 结束时间,例如2022-06-30 00:00:00
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 子订单ID
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 审批状态 0全部 1通过 2驳回 3待审核
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 翻页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 开始时间,例如2022-06-30 00:00:00
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间,例如2022-06-30 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBEORDERSREQUEST_H_
