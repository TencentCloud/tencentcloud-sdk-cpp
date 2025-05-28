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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGROUPSSTDREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGROUPSSTDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Filter.h>
#include <tencentcloud/emr/v20190103/model/Order.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeGroupsSTD请求参数结构体
                */
                class DescribeGroupsSTDRequest : public AbstractModel
                {
                public:
                    DescribeGroupsSTDRequest();
                    ~DescribeGroupsSTDRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名称
                     * @return InstanceId 集群名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群名称
                     * @param _instanceId 集群名称
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
                     * 获取描述键值对过滤器，用于条件过滤查询
                     * @return Filters 描述键值对过滤器，用于条件过滤查询
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置描述键值对过滤器，用于条件过滤查询
                     * @param _filters 描述键值对过滤器，用于条件过滤查询
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
                     * 获取描述排序，用于排序
                     * @return OrderFields 描述排序，用于排序
                     * 
                     */
                    Order GetOrderFields() const;

                    /**
                     * 设置描述排序，用于排序
                     * @param _orderFields 描述排序，用于排序
                     * 
                     */
                    void SetOrderFields(const Order& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取返回数量
                     * @return Limit 返回数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量
                     * @param _limit 返回数量
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 集群名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 描述键值对过滤器，用于条件过滤查询
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 描述排序，用于排序
                     */
                    Order m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 返回数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGROUPSSTDREQUEST_H_
