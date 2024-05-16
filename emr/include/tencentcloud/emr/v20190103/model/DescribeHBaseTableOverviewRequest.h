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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHBaseTableOverview请求参数结构体
                */
                class DescribeHBaseTableOverviewRequest : public AbstractModel
                {
                public:
                    DescribeHBaseTableOverviewRequest();
                    ~DescribeHBaseTableOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取分页查询编号偏移量，从0开始	
                     * @return Offset 分页查询编号偏移量，从0开始	
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询编号偏移量，从0开始	
                     * @param _offset 分页查询编号偏移量，从0开始	
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
                     * 获取分页查询时的分页大小，最小1，最大100
                     * @return Limit 分页查询时的分页大小，最小1，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询时的分页大小，最小1，最大100
                     * @param _limit 分页查询时的分页大小，最小1，最大100
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
                     * 获取表名称，模糊匹配
                     * @return Table 表名称，模糊匹配
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表名称，模糊匹配
                     * @param _table 表名称，模糊匹配
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取排序的字段，有默认值
                     * @return OrderField 排序的字段，有默认值
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序的字段，有默认值
                     * @param _orderField 排序的字段，有默认值
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取默认为降序，asc代表升序，desc代表降序
                     * @return OrderType 默认为降序，asc代表升序，desc代表降序
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置默认为降序，asc代表升序，desc代表降序
                     * @param _orderType 默认为降序，asc代表升序，desc代表降序
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页查询编号偏移量，从0开始	
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询时的分页大小，最小1，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 表名称，模糊匹配
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 排序的字段，有默认值
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 默认为降序，asc代表升序，desc代表降序
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWREQUEST_H_
