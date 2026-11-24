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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBETICKETSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBETICKETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeTickets请求参数结构体
                */
                class DescribeTicketsRequest : public AbstractModel
                {
                public:
                    DescribeTicketsRequest();
                    ~DescribeTicketsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态：0待提交(草稿)，1待审批，2批准，3已执行，4驳回
                     * @return StatusSet 状态：0待提交(草稿)，1待审批，2批准，3已执行，4驳回
                     * 
                     */
                    std::vector<uint64_t> GetStatusSet() const;

                    /**
                     * 设置状态：0待提交(草稿)，1待审批，2批准，3已执行，4驳回
                     * @param _statusSet 状态：0待提交(草稿)，1待审批，2批准，3已执行，4驳回
                     * 
                     */
                    void SetStatusSet(const std::vector<uint64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取工单类型：0-运维工单，1-权限工单
                     * @return TicketType 工单类型：0-运维工单，1-权限工单
                     * 
                     */
                    std::string GetTicketType() const;

                    /**
                     * 设置工单类型：0-运维工单，1-权限工单
                     * @param _ticketType 工单类型：0-运维工单，1-权限工单
                     * 
                     */
                    void SetTicketType(const std::string& _ticketType);

                    /**
                     * 判断参数 TicketType 是否已赋值
                     * @return TicketType 是否已赋值
                     * 
                     */
                    bool TicketTypeHasBeenSet() const;

                    /**
                     * 获取过滤数组
                     * @return Filters 过滤数组
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤数组
                     * @param _filters 过滤数组
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取资产过滤数组
                     * @return DeviceFilters 资产过滤数组
                     * 
                     */
                    std::vector<Filter> GetDeviceFilters() const;

                    /**
                     * 设置资产过滤数组
                     * @param _deviceFilters 资产过滤数组
                     * 
                     */
                    void SetDeviceFilters(const std::vector<Filter>& _deviceFilters);

                    /**
                     * 判断参数 DeviceFilters 是否已赋值
                     * @return DeviceFilters 是否已赋值
                     * 
                     */
                    bool DeviceFiltersHasBeenSet() const;

                    /**
                     * 获取部门id
                     * @return DepartmentId 部门id
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门id
                     * @param _departmentId 部门id
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
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
                     * 获取每页条目数量，默认20，最大500
                     * @return Limit 每页条目数量，默认20，最大500
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20，最大500
                     * @param _limit 每页条目数量，默认20，最大500
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 状态：0待提交(草稿)，1待审批，2批准，3已执行，4驳回
                     */
                    std::vector<uint64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * 工单类型：0-运维工单，1-权限工单
                     */
                    std::string m_ticketType;
                    bool m_ticketTypeHasBeenSet;

                    /**
                     * 过滤数组
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 资产过滤数组
                     */
                    std::vector<Filter> m_deviceFilters;
                    bool m_deviceFiltersHasBeenSet;

                    /**
                     * 部门id
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20，最大500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBETICKETSREQUEST_H_
