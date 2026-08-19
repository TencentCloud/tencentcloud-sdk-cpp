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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPORDERLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPORDERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPOrderList请求参数结构体
                */
                class DescribeCWPOrderListRequest : public AbstractModel
                {
                public:
                    DescribeCWPOrderListRequest();
                    ~DescribeCWPOrderListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>多个条件筛选时取交集</p><li>ProductCode 产品编码,p_开头</li><li>SubProductCode 子产品编码,sp_开头</li><li>InquireKey  计费项,sv_开头</li><li>Status 资源状态 1正常 2隔离 3销毁</li><li>PayMode 付费模式 0 按量计费 , 1 包年包月</li><li>ResourceId 资源ID</li><li>RenewFlag 自动续费标签 0 默认不需要(大客户存在自动续费的能力) 1 自动续费 2 手动设置不自动续费</li><li>DealNames 子订单号</li>
                     * @return Filters <p>多个条件筛选时取交集</p><li>ProductCode 产品编码,p_开头</li><li>SubProductCode 子产品编码,sp_开头</li><li>InquireKey  计费项,sv_开头</li><li>Status 资源状态 1正常 2隔离 3销毁</li><li>PayMode 付费模式 0 按量计费 , 1 包年包月</li><li>ResourceId 资源ID</li><li>RenewFlag 自动续费标签 0 默认不需要(大客户存在自动续费的能力) 1 自动续费 2 手动设置不自动续费</li><li>DealNames 子订单号</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>多个条件筛选时取交集</p><li>ProductCode 产品编码,p_开头</li><li>SubProductCode 子产品编码,sp_开头</li><li>InquireKey  计费项,sv_开头</li><li>Status 资源状态 1正常 2隔离 3销毁</li><li>PayMode 付费模式 0 按量计费 , 1 包年包月</li><li>ResourceId 资源ID</li><li>RenewFlag 自动续费标签 0 默认不需要(大客户存在自动续费的能力) 1 自动续费 2 手动设置不自动续费</li><li>DealNames 子订单号</li>
                     * @param _filters <p>多个条件筛选时取交集</p><li>ProductCode 产品编码,p_开头</li><li>SubProductCode 子产品编码,sp_开头</li><li>InquireKey  计费项,sv_开头</li><li>Status 资源状态 1正常 2隔离 3销毁</li><li>PayMode 付费模式 0 按量计费 , 1 包年包月</li><li>ResourceId 资源ID</li><li>RenewFlag 自动续费标签 0 默认不需要(大客户存在自动续费的能力) 1 自动续费 2 手动设置不自动续费</li><li>DealNames 子订单号</li>
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
                     * 获取<p>偏移量,默认0</p>
                     * @return Offset <p>偏移量,默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量,默认0</p>
                     * @param _offset <p>偏移量,默认0</p>
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
                     * 获取<p>限制条数,默认10 ,最大100</p>
                     * @return Limit <p>限制条数,默认10 ,最大100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制条数,默认10 ,最大100</p>
                     * @param _limit <p>限制条数,默认10 ,最大100</p>
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
                     * <p>多个条件筛选时取交集</p><li>ProductCode 产品编码,p_开头</li><li>SubProductCode 子产品编码,sp_开头</li><li>InquireKey  计费项,sv_开头</li><li>Status 资源状态 1正常 2隔离 3销毁</li><li>PayMode 付费模式 0 按量计费 , 1 包年包月</li><li>ResourceId 资源ID</li><li>RenewFlag 自动续费标签 0 默认不需要(大客户存在自动续费的能力) 1 自动续费 2 手动设置不自动续费</li><li>DealNames 子订单号</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量,默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制条数,默认10 ,最大100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPORDERLISTREQUEST_H_
