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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNATTACHEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNATTACHEDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCcnAttachedInstances请求参数结构体
                */
                class DescribeCcnAttachedInstancesRequest : public AbstractModel
                {
                public:
                    DescribeCcnAttachedInstancesRequest();
                    ~DescribeCcnAttachedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取返回数量
                     * @return Limit 返回数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量
                     * @param _limit 返回数量
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
                     * 获取过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>instance-type - String -（过滤条件）关联实例类型。</li>
<li>instance-region - String -（过滤条件）关联实例所属地域。</li>
<li>instance-id - String -（过滤条件）关联实例ID。</li>
                     * @return Filters 过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>instance-type - String -（过滤条件）关联实例类型。</li>
<li>instance-region - String -（过滤条件）关联实例所属地域。</li>
<li>instance-id - String -（过滤条件）关联实例ID。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>instance-type - String -（过滤条件）关联实例类型。</li>
<li>instance-region - String -（过滤条件）关联实例所属地域。</li>
<li>instance-id - String -（过滤条件）关联实例ID。</li>
                     * @param _filters 过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>instance-type - String -（过滤条件）关联实例类型。</li>
<li>instance-region - String -（过滤条件）关联实例所属地域。</li>
<li>instance-id - String -（过滤条件）关联实例ID。</li>
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
                     * 获取云联网实例ID
                     * @return CcnId 云联网实例ID
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网实例ID
                     * @param _ccnId 云联网实例ID
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取排序字段。支持：`CcnId` `InstanceType` `InstanceId` `InstanceName` `InstanceRegion` `AttachedTime` `State`。默认值：`AttachedTime`
                     * @return OrderField 排序字段。支持：`CcnId` `InstanceType` `InstanceId` `InstanceName` `InstanceRegion` `AttachedTime` `State`。默认值：`AttachedTime`
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。支持：`CcnId` `InstanceType` `InstanceId` `InstanceName` `InstanceRegion` `AttachedTime` `State`。默认值：`AttachedTime`
                     * @param _orderField 排序字段。支持：`CcnId` `InstanceType` `InstanceId` `InstanceName` `InstanceRegion` `AttachedTime` `State`。默认值：`AttachedTime`
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
                     * 获取排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     * @return OrderDirection 排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     * @param _orderDirection 排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
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
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>instance-type - String -（过滤条件）关联实例类型。</li>
<li>instance-region - String -（过滤条件）关联实例所属地域。</li>
<li>instance-id - String -（过滤条件）关联实例ID。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 云联网实例ID
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 排序字段。支持：`CcnId` `InstanceType` `InstanceId` `InstanceName` `InstanceRegion` `AttachedTime` `State`。默认值：`AttachedTime`
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNATTACHEDINSTANCESREQUEST_H_
