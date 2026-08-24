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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYPROTECTGROUPSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYPROTECTGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/FilterModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoveryProtectGroups请求参数结构体
                */
                class DescribeDisasterRecoveryProtectGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDisasterRecoveryProtectGroupsRequest();
                    ~DescribeDisasterRecoveryProtectGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的容灾保护组产品类型，枚举值：DISK / INSTANCE / CFS。
                     * @return ProtectGroupType 要查询的容灾保护组产品类型，枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    std::string GetProtectGroupType() const;

                    /**
                     * 设置要查询的容灾保护组产品类型，枚举值：DISK / INSTANCE / CFS。
                     * @param _protectGroupType 要查询的容灾保护组产品类型，枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    void SetProtectGroupType(const std::string& _protectGroupType);

                    /**
                     * 判断参数 ProtectGroupType 是否已赋值
                     * @return ProtectGroupType 是否已赋值
                     * 
                     */
                    bool ProtectGroupTypeHasBeenSet() const;

                    /**
                     * 获取要查询的容灾保护组ID列表。
                     * @return ProtectGroupIds 要查询的容灾保护组ID列表。
                     * 
                     */
                    std::vector<std::string> GetProtectGroupIds() const;

                    /**
                     * 设置要查询的容灾保护组ID列表。
                     * @param _protectGroupIds 要查询的容灾保护组ID列表。
                     * 
                     */
                    void SetProtectGroupIds(const std::vector<std::string>& _protectGroupIds);

                    /**
                     * 判断参数 ProtectGroupIds 是否已赋值
                     * @return ProtectGroupIds 是否已赋值
                     * 
                     */
                    bool ProtectGroupIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件（过滤项由 core handler 定义，如 disaster-recovery-protect-group-id 等）。
                     * @return Filters 过滤条件（过滤项由 core handler 定义，如 disaster-recovery-protect-group-id 等）。
                     * 
                     */
                    std::vector<FilterModel> GetFilters() const;

                    /**
                     * 设置过滤条件（过滤项由 core handler 定义，如 disaster-recovery-protect-group-id 等）。
                     * @param _filters 过滤条件（过滤项由 core handler 定义，如 disaster-recovery-protect-group-id 等）。
                     * 
                     */
                    void SetFilters(const std::vector<FilterModel>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
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
                     * 获取输出结果按升序还是降序
                     * @return Order 输出结果按升序还是降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出结果按升序还是降序
                     * @param _order 输出结果按升序还是降序
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
                     * 获取输出结果的排序字段
                     * @return OrderField 输出结果的排序字段
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置输出结果的排序字段
                     * @param _orderField 输出结果的排序字段
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
                     * 要查询的容灾保护组产品类型，枚举值：DISK / INSTANCE / CFS。
                     */
                    std::string m_protectGroupType;
                    bool m_protectGroupTypeHasBeenSet;

                    /**
                     * 要查询的容灾保护组ID列表。
                     */
                    std::vector<std::string> m_protectGroupIds;
                    bool m_protectGroupIdsHasBeenSet;

                    /**
                     * 过滤条件（过滤项由 core handler 定义，如 disaster-recovery-protect-group-id 等）。
                     */
                    std::vector<FilterModel> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出结果按升序还是降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 输出结果的排序字段
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYPROTECTGROUPSREQUEST_H_
