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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeBillingResourceGroup请求参数结构体
                */
                class DescribeBillingResourceGroupRequest : public AbstractModel
                {
                public:
                    DescribeBillingResourceGroupRequest();
                    ~DescribeBillingResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组id, 取值为创建资源组接口(CreateBillingResourceGroup)响应中的ResourceGroupId
                     * @return ResourceGroupId 资源组id, 取值为创建资源组接口(CreateBillingResourceGroup)响应中的ResourceGroupId
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组id, 取值为创建资源组接口(CreateBillingResourceGroup)响应中的ResourceGroupId
                     * @param _resourceGroupId 资源组id, 取值为创建资源组接口(CreateBillingResourceGroup)响应中的ResourceGroupId
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取过滤条件
注意: 
1. Filter.Name 只支持以下枚举值:
    InstanceId (资源组节点id)
    InstanceStatus (资源组节点状态)
2. Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询
3. 每次请求的Filters的上限为10，Filter.Values的上限为100
                     * @return Filters 过滤条件
注意: 
1. Filter.Name 只支持以下枚举值:
    InstanceId (资源组节点id)
    InstanceStatus (资源组节点状态)
2. Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询
3. 每次请求的Filters的上限为10，Filter.Values的上限为100
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
注意: 
1. Filter.Name 只支持以下枚举值:
    InstanceId (资源组节点id)
    InstanceStatus (资源组节点状态)
2. Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询
3. 每次请求的Filters的上限为10，Filter.Values的上限为100
                     * @param _filters 过滤条件
注意: 
1. Filter.Name 只支持以下枚举值:
    InstanceId (资源组节点id)
    InstanceStatus (资源组节点状态)
2. Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询
3. 每次请求的Filters的上限为10，Filter.Values的上限为100
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
                     * 获取分页查询起始位置，如：Limit为10，第一页Offset为0，第二页Offset为10....即每页左边为闭区间; 默认0
                     * @return Offset 分页查询起始位置，如：Limit为10，第一页Offset为0，第二页Offset为10....即每页左边为闭区间; 默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页查询起始位置，如：Limit为10，第一页Offset为0，第二页Offset为10....即每页左边为闭区间; 默认0
                     * @param _offset 分页查询起始位置，如：Limit为10，第一页Offset为0，第二页Offset为10....即每页左边为闭区间; 默认0
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
                     * 获取分页查询每页大小，默认20
                     * @return Limit 分页查询每页大小，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页查询每页大小，默认20
                     * @param _limit 分页查询每页大小，默认20
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
                     * 获取排序方向; 枚举值: ASC | DESC；默认DESC
                     * @return Order 排序方向; 枚举值: ASC | DESC；默认DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方向; 枚举值: ASC | DESC；默认DESC
                     * @param _order 排序方向; 枚举值: ASC | DESC；默认DESC
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
                     * 获取排序字段; 枚举值: CreateTime (创建时间) ｜ ExpireTime (到期时间)；默认CreateTime
                     * @return OrderField 排序字段; 枚举值: CreateTime (创建时间) ｜ ExpireTime (到期时间)；默认CreateTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段; 枚举值: CreateTime (创建时间) ｜ ExpireTime (到期时间)；默认CreateTime
                     * @param _orderField 排序字段; 枚举值: CreateTime (创建时间) ｜ ExpireTime (到期时间)；默认CreateTime
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * 资源组id, 取值为创建资源组接口(CreateBillingResourceGroup)响应中的ResourceGroupId
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 过滤条件
注意: 
1. Filter.Name 只支持以下枚举值:
    InstanceId (资源组节点id)
    InstanceStatus (资源组节点状态)
2. Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询
3. 每次请求的Filters的上限为10，Filter.Values的上限为100
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页查询起始位置，如：Limit为10，第一页Offset为0，第二页Offset为10....即每页左边为闭区间; 默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询每页大小，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方向; 枚举值: ASC | DESC；默认DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段; 枚举值: CreateTime (创建时间) ｜ ExpireTime (到期时间)；默认CreateTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEGROUPREQUEST_H_
