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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSwitchLists请求参数结构体
                */
                class DescribeSwitchListsRequest : public AbstractModel
                {
                public:
                    DescribeSwitchListsRequest();
                    ~DescribeSwitchListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙状态  0: 关闭，1：开启
                     * @return Status 防火墙状态  0: 关闭，1：开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置防火墙状态  0: 关闭，1：开启
                     * @param _status 防火墙状态  0: 关闭，1：开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取资产类型 CVM/NAT/VPN/CLB/其它
                     * @return Type 资产类型 CVM/NAT/VPN/CLB/其它
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资产类型 CVM/NAT/VPN/CLB/其它
                     * @param _type 资产类型 CVM/NAT/VPN/CLB/其它
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取地域 上海/重庆/广州，等等
                     * @return Area 地域 上海/重庆/广州，等等
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域 上海/重庆/广州，等等
                     * @param _area 地域 上海/重庆/广州，等等
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取搜索值  例子："{"common":"106.54.189.45"}"
                     * @return SearchValue 搜索值  例子："{"common":"106.54.189.45"}"
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置搜索值  例子："{"common":"106.54.189.45"}"
                     * @param _searchValue 搜索值  例子："{"common":"106.54.189.45"}"
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取条数  默认值:10
                     * @return Limit 条数  默认值:10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置条数  默认值:10
                     * @param _limit 条数  默认值:10
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
                     * 获取偏移值 默认值: 0
                     * @return Offset 偏移值 默认值: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移值 默认值: 0
                     * @param _offset 偏移值 默认值: 0
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
                     * 获取排序，desc：降序，asc：升序
                     * @return Order 排序，desc：降序，asc：升序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序，desc：降序，asc：升序
                     * @param _order 排序，desc：降序，asc：升序
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
                     * 获取排序字段 PortTimes(风险端口数)
                     * @return By 排序字段 PortTimes(风险端口数)
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段 PortTimes(风险端口数)
                     * @param _by 排序字段 PortTimes(风险端口数)
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
                     * 防火墙状态  0: 关闭，1：开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资产类型 CVM/NAT/VPN/CLB/其它
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 地域 上海/重庆/广州，等等
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 搜索值  例子："{"common":"106.54.189.45"}"
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 条数  默认值:10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移值 默认值: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序，desc：降序，asc：升序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段 PortTimes(风险端口数)
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSREQUEST_H_
