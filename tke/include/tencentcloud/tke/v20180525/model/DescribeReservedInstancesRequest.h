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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeReservedInstances请求参数结构体
                */
                class DescribeReservedInstancesRequest : public AbstractModel
                {
                public:
                    DescribeReservedInstancesRequest();
                    ~DescribeReservedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取status
按照**【状态**】进行过滤。状态：Creating、Active、Expired、Refunded。
类型：String
必选：否

resource-type
按照**【资源类型**】进行过滤。资源类型：common、amd、v100、t4、a10\*gnv4、a10\*gnv4v等，common表示通用类型。
类型：String
必选：否

cpu
按照**【核数**】进行过滤。
类型：String
必选：否

memory
按照**【内存**】进行过滤。
类型：String
必选：否

gpu
按照**【GPU卡数**】进行过滤，取值有0.25、0.5、1、2、4等。
类型：String
必选：否

cluster-id
按照**【集群ID**】进行过滤。
类型：String
必选：否

node-name
按照**【节点名称**】进行过滤。
类型：String
必选：否

scope
按照**【可用区**】进行过滤。比如：ap-guangzhou-2，为空字符串表示地域抵扣范围。如果只过滤可用区抵扣范围，需要同时将cluster-id、node-name设置为空字符串。
类型：String
必选：否

reserved-instance-id
按照**【预留实例ID**】进行过滤。预留实例ID形如：eksri-xxxxxxxx。
类型：String
必选：否

reserved-instance-name
按照**【预留实例名称**】进行过滤。
类型：String
必选：否

reserved-instance-deduct
按照**【上个周期抵扣的预留券**】进行过滤。Values可不设置。
必选：否

reserved-instance-not-deduct
按照**【上个周期未抵扣的预留券**】进行过滤。Values可不设置。
必选：否
                     * @return Filters status
按照**【状态**】进行过滤。状态：Creating、Active、Expired、Refunded。
类型：String
必选：否

resource-type
按照**【资源类型**】进行过滤。资源类型：common、amd、v100、t4、a10\*gnv4、a10\*gnv4v等，common表示通用类型。
类型：String
必选：否

cpu
按照**【核数**】进行过滤。
类型：String
必选：否

memory
按照**【内存**】进行过滤。
类型：String
必选：否

gpu
按照**【GPU卡数**】进行过滤，取值有0.25、0.5、1、2、4等。
类型：String
必选：否

cluster-id
按照**【集群ID**】进行过滤。
类型：String
必选：否

node-name
按照**【节点名称**】进行过滤。
类型：String
必选：否

scope
按照**【可用区**】进行过滤。比如：ap-guangzhou-2，为空字符串表示地域抵扣范围。如果只过滤可用区抵扣范围，需要同时将cluster-id、node-name设置为空字符串。
类型：String
必选：否

reserved-instance-id
按照**【预留实例ID**】进行过滤。预留实例ID形如：eksri-xxxxxxxx。
类型：String
必选：否

reserved-instance-name
按照**【预留实例名称**】进行过滤。
类型：String
必选：否

reserved-instance-deduct
按照**【上个周期抵扣的预留券**】进行过滤。Values可不设置。
必选：否

reserved-instance-not-deduct
按照**【上个周期未抵扣的预留券**】进行过滤。Values可不设置。
必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置status
按照**【状态**】进行过滤。状态：Creating、Active、Expired、Refunded。
类型：String
必选：否

resource-type
按照**【资源类型**】进行过滤。资源类型：common、amd、v100、t4、a10\*gnv4、a10\*gnv4v等，common表示通用类型。
类型：String
必选：否

cpu
按照**【核数**】进行过滤。
类型：String
必选：否

memory
按照**【内存**】进行过滤。
类型：String
必选：否

gpu
按照**【GPU卡数**】进行过滤，取值有0.25、0.5、1、2、4等。
类型：String
必选：否

cluster-id
按照**【集群ID**】进行过滤。
类型：String
必选：否

node-name
按照**【节点名称**】进行过滤。
类型：String
必选：否

scope
按照**【可用区**】进行过滤。比如：ap-guangzhou-2，为空字符串表示地域抵扣范围。如果只过滤可用区抵扣范围，需要同时将cluster-id、node-name设置为空字符串。
类型：String
必选：否

reserved-instance-id
按照**【预留实例ID**】进行过滤。预留实例ID形如：eksri-xxxxxxxx。
类型：String
必选：否

reserved-instance-name
按照**【预留实例名称**】进行过滤。
类型：String
必选：否

reserved-instance-deduct
按照**【上个周期抵扣的预留券**】进行过滤。Values可不设置。
必选：否

reserved-instance-not-deduct
按照**【上个周期未抵扣的预留券**】进行过滤。Values可不设置。
必选：否
                     * @param _filters status
按照**【状态**】进行过滤。状态：Creating、Active、Expired、Refunded。
类型：String
必选：否

resource-type
按照**【资源类型**】进行过滤。资源类型：common、amd、v100、t4、a10\*gnv4、a10\*gnv4v等，common表示通用类型。
类型：String
必选：否

cpu
按照**【核数**】进行过滤。
类型：String
必选：否

memory
按照**【内存**】进行过滤。
类型：String
必选：否

gpu
按照**【GPU卡数**】进行过滤，取值有0.25、0.5、1、2、4等。
类型：String
必选：否

cluster-id
按照**【集群ID**】进行过滤。
类型：String
必选：否

node-name
按照**【节点名称**】进行过滤。
类型：String
必选：否

scope
按照**【可用区**】进行过滤。比如：ap-guangzhou-2，为空字符串表示地域抵扣范围。如果只过滤可用区抵扣范围，需要同时将cluster-id、node-name设置为空字符串。
类型：String
必选：否

reserved-instance-id
按照**【预留实例ID**】进行过滤。预留实例ID形如：eksri-xxxxxxxx。
类型：String
必选：否

reserved-instance-name
按照**【预留实例名称**】进行过滤。
类型：String
必选：否

reserved-instance-deduct
按照**【上个周期抵扣的预留券**】进行过滤。Values可不设置。
必选：否

reserved-instance-not-deduct
按照**【上个周期未抵扣的预留券**】进行过滤。Values可不设置。
必选：否
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
                     * 获取排序字段。支持CreatedAt、ActiveAt、ExpireAt。默认值CreatedAt。
                     * @return OrderField 排序字段。支持CreatedAt、ActiveAt、ExpireAt。默认值CreatedAt。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。支持CreatedAt、ActiveAt、ExpireAt。默认值CreatedAt。
                     * @param _orderField 排序字段。支持CreatedAt、ActiveAt、ExpireAt。默认值CreatedAt。
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
                     * 获取排序方法。顺序：ASC，倒序：DESC。默认值DESC。
                     * @return OrderDirection 排序方法。顺序：ASC，倒序：DESC。默认值DESC。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方法。顺序：ASC，倒序：DESC。默认值DESC。
                     * @param _orderDirection 排序方法。顺序：ASC，倒序：DESC。默认值DESC。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * status
按照**【状态**】进行过滤。状态：Creating、Active、Expired、Refunded。
类型：String
必选：否

resource-type
按照**【资源类型**】进行过滤。资源类型：common、amd、v100、t4、a10\*gnv4、a10\*gnv4v等，common表示通用类型。
类型：String
必选：否

cpu
按照**【核数**】进行过滤。
类型：String
必选：否

memory
按照**【内存**】进行过滤。
类型：String
必选：否

gpu
按照**【GPU卡数**】进行过滤，取值有0.25、0.5、1、2、4等。
类型：String
必选：否

cluster-id
按照**【集群ID**】进行过滤。
类型：String
必选：否

node-name
按照**【节点名称**】进行过滤。
类型：String
必选：否

scope
按照**【可用区**】进行过滤。比如：ap-guangzhou-2，为空字符串表示地域抵扣范围。如果只过滤可用区抵扣范围，需要同时将cluster-id、node-name设置为空字符串。
类型：String
必选：否

reserved-instance-id
按照**【预留实例ID**】进行过滤。预留实例ID形如：eksri-xxxxxxxx。
类型：String
必选：否

reserved-instance-name
按照**【预留实例名称**】进行过滤。
类型：String
必选：否

reserved-instance-deduct
按照**【上个周期抵扣的预留券**】进行过滤。Values可不设置。
必选：否

reserved-instance-not-deduct
按照**【上个周期未抵扣的预留券**】进行过滤。Values可不设置。
必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段。支持CreatedAt、ActiveAt、ExpireAt。默认值CreatedAt。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方法。顺序：ASC，倒序：DESC。默认值DESC。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_
