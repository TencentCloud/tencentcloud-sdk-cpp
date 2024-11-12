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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseList请求参数结构体
                */
                class DescribeLicenseListRequest : public AbstractModel
                {
                public:
                    DescribeLicenseListRequest();
                    ~DescribeLicenseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个条件筛选时取交集
<li> LicenseStatus 授权状态信息,0 未使用,1 部分使用, 2 已用完, 3 不可用  4 可使用</li>
<li> BuyTime 购买时间</li>
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>DeadlineStatus 到期状态 NotExpired 未过期, Expire 已过期(包含已销毁) NearExpiry 即将到期</li>
<li>ResourceId 资源ID</li>
<li>Keywords IP筛选</li>
<li>PayMode 付费模式 0 按量计费 , 1 包年包月</li>
<li>OrderStatus 订单状态 1 正常 2 隔离 3 销毁</li>
<li>DealNames 子订单号,最大长度10个,超出会失败</li>
                     * @return Filters 多个条件筛选时取交集
<li> LicenseStatus 授权状态信息,0 未使用,1 部分使用, 2 已用完, 3 不可用  4 可使用</li>
<li> BuyTime 购买时间</li>
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>DeadlineStatus 到期状态 NotExpired 未过期, Expire 已过期(包含已销毁) NearExpiry 即将到期</li>
<li>ResourceId 资源ID</li>
<li>Keywords IP筛选</li>
<li>PayMode 付费模式 0 按量计费 , 1 包年包月</li>
<li>OrderStatus 订单状态 1 正常 2 隔离 3 销毁</li>
<li>DealNames 子订单号,最大长度10个,超出会失败</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置多个条件筛选时取交集
<li> LicenseStatus 授权状态信息,0 未使用,1 部分使用, 2 已用完, 3 不可用  4 可使用</li>
<li> BuyTime 购买时间</li>
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>DeadlineStatus 到期状态 NotExpired 未过期, Expire 已过期(包含已销毁) NearExpiry 即将到期</li>
<li>ResourceId 资源ID</li>
<li>Keywords IP筛选</li>
<li>PayMode 付费模式 0 按量计费 , 1 包年包月</li>
<li>OrderStatus 订单状态 1 正常 2 隔离 3 销毁</li>
<li>DealNames 子订单号,最大长度10个,超出会失败</li>
                     * @param _filters 多个条件筛选时取交集
<li> LicenseStatus 授权状态信息,0 未使用,1 部分使用, 2 已用完, 3 不可用  4 可使用</li>
<li> BuyTime 购买时间</li>
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>DeadlineStatus 到期状态 NotExpired 未过期, Expire 已过期(包含已销毁) NearExpiry 即将到期</li>
<li>ResourceId 资源ID</li>
<li>Keywords IP筛选</li>
<li>PayMode 付费模式 0 按量计费 , 1 包年包月</li>
<li>OrderStatus 订单状态 1 正常 2 隔离 3 销毁</li>
<li>DealNames 子订单号,最大长度10个,超出会失败</li>
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
                     * 获取限制条数,默认10.
                     * @return Limit 限制条数,默认10.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制条数,默认10.
                     * @param _limit 限制条数,默认10.
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
                     * 获取偏移量,默认0.
                     * @return Offset 偏移量,默认0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0.
                     * @param _offset 偏移量,默认0.
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
                     * 获取标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * @return Tags 标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * @param _tags 标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ASC 正序,  DESC 倒序
                     * @return Order ASC 正序,  DESC 倒序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置ASC 正序,  DESC 倒序
                     * @param _order ASC 正序,  DESC 倒序
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
                     * 获取LicenseCnt 授权数量
                     * @return By LicenseCnt 授权数量
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置LicenseCnt 授权数量
                     * @param _by LicenseCnt 授权数量
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
                     * 多个条件筛选时取交集
<li> LicenseStatus 授权状态信息,0 未使用,1 部分使用, 2 已用完, 3 不可用  4 可使用</li>
<li> BuyTime 购买时间</li>
<li> LicenseType  授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月</li>
<li>DeadlineStatus 到期状态 NotExpired 未过期, Expire 已过期(包含已销毁) NearExpiry 即将到期</li>
<li>ResourceId 资源ID</li>
<li>Keywords IP筛选</li>
<li>PayMode 付费模式 0 按量计费 , 1 包年包月</li>
<li>OrderStatus 订单状态 1 正常 2 隔离 3 销毁</li>
<li>DealNames 子订单号,最大长度10个,超出会失败</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 限制条数,默认10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量,默认0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 标签筛选,平台标签能力,这里传入 标签键,标签值作为一个对象
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ASC 正序,  DESC 倒序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * LicenseCnt 授权数量
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSELISTREQUEST_H_
