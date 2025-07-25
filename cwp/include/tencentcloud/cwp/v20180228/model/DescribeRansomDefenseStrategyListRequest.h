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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRansomDefenseStrategyList请求参数结构体
                */
                class DescribeRansomDefenseStrategyListRequest : public AbstractModel
                {
                public:
                    DescribeRansomDefenseStrategyListRequest();
                    ~DescribeRansomDefenseStrategyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页参数 最大100条
                     * @return Limit 分页参数 最大100条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数 最大100条
                     * @param _limit 分页参数 最大100条
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
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
                     * 获取过滤条件。
<li>Ips - String - 是否必填：否 - 通过ip查询 </li>
<li>MachineNames - String - 是否必填：否 - 通过实例名查询 </li>
<li>Names - String - 是否必填：否 - 通过防勒索策略名查询 </li>
<li>Dirs - String - 是否必填：否 - 诱饵目录 </li>
<li>Status - String - 是否必填：否 - 策略状态：0关闭，1开启 </li>
<li>BackupType - String - 是否必填：否 - 备份模式：0-按周;1-按天 </li>
                     * @return Filters 过滤条件。
<li>Ips - String - 是否必填：否 - 通过ip查询 </li>
<li>MachineNames - String - 是否必填：否 - 通过实例名查询 </li>
<li>Names - String - 是否必填：否 - 通过防勒索策略名查询 </li>
<li>Dirs - String - 是否必填：否 - 诱饵目录 </li>
<li>Status - String - 是否必填：否 - 策略状态：0关闭，1开启 </li>
<li>BackupType - String - 是否必填：否 - 备份模式：0-按周;1-按天 </li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Ips - String - 是否必填：否 - 通过ip查询 </li>
<li>MachineNames - String - 是否必填：否 - 通过实例名查询 </li>
<li>Names - String - 是否必填：否 - 通过防勒索策略名查询 </li>
<li>Dirs - String - 是否必填：否 - 诱饵目录 </li>
<li>Status - String - 是否必填：否 - 策略状态：0关闭，1开启 </li>
<li>BackupType - String - 是否必填：否 - 备份模式：0-按周;1-按天 </li>
                     * @param _filters 过滤条件。
<li>Ips - String - 是否必填：否 - 通过ip查询 </li>
<li>MachineNames - String - 是否必填：否 - 通过实例名查询 </li>
<li>Names - String - 是否必填：否 - 通过防勒索策略名查询 </li>
<li>Dirs - String - 是否必填：否 - 诱饵目录 </li>
<li>Status - String - 是否必填：否 - 策略状态：0关闭，1开启 </li>
<li>BackupType - String - 是否必填：否 - 备份模式：0-按周;1-按天 </li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方法 ASC DESC
                     * @return Order 排序方法 ASC DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方法 ASC DESC
                     * @param _order 排序方法 ASC DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段支持CreateTime, MachineCount
                     * @return By 排序字段支持CreateTime, MachineCount
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段支持CreateTime, MachineCount
                     * @param _by 排序字段支持CreateTime, MachineCount
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 分页参数 最大100条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>Ips - String - 是否必填：否 - 通过ip查询 </li>
<li>MachineNames - String - 是否必填：否 - 通过实例名查询 </li>
<li>Names - String - 是否必填：否 - 通过防勒索策略名查询 </li>
<li>Dirs - String - 是否必填：否 - 诱饵目录 </li>
<li>Status - String - 是否必填：否 - 策略状态：0关闭，1开启 </li>
<li>BackupType - String - 是否必填：否 - 备份模式：0-按周;1-按天 </li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方法 ASC DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段支持CreateTime, MachineCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYLISTREQUEST_H_
