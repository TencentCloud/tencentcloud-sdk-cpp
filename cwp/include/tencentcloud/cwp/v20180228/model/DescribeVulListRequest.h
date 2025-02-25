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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTREQUEST_H_

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
                * DescribeVulList请求参数结构体
                */
                class DescribeVulListRequest : public AbstractModel
                {
                public:
                    DescribeVulListRequest();
                    ~DescribeVulListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，最大值为100。
                     * @return Limit 返回数量，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，最大值为100。
                     * @param _limit 返回数量，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤条件。<li>Status - String - 是否必填：否 - 处理状态  0-待处理 1-已加白 2-已删除 3-已修复 5-检测中 6-修复中 8-修复失败</li><li>ModifyTime - String - 是否必填：否 - 最近发生时间</li><li>Uuid- String - 是否必填：否 - 主机uuid查询</li><li>VulName- string -</li><li>VulCategory- string - 是否必填：否 - 漏洞类别 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞</li><li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li><li>Labels- string- 是否必填：否 - 标签搜索</li><li>IsSupportAutoFix- string- 是否必填：否 - 是否支持自动修复 0:不支持 1:支持</li><li>CvssScore- string- 是否必填：否 - CvssScore大于多少</li><li>AttackLevel- string- 是否必填：否 - 攻击热度大于多少</li>
                     * @return Filters 过滤条件。<li>Status - String - 是否必填：否 - 处理状态  0-待处理 1-已加白 2-已删除 3-已修复 5-检测中 6-修复中 8-修复失败</li><li>ModifyTime - String - 是否必填：否 - 最近发生时间</li><li>Uuid- String - 是否必填：否 - 主机uuid查询</li><li>VulName- string -</li><li>VulCategory- string - 是否必填：否 - 漏洞类别 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞</li><li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li><li>Labels- string- 是否必填：否 - 标签搜索</li><li>IsSupportAutoFix- string- 是否必填：否 - 是否支持自动修复 0:不支持 1:支持</li><li>CvssScore- string- 是否必填：否 - CvssScore大于多少</li><li>AttackLevel- string- 是否必填：否 - 攻击热度大于多少</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。<li>Status - String - 是否必填：否 - 处理状态  0-待处理 1-已加白 2-已删除 3-已修复 5-检测中 6-修复中 8-修复失败</li><li>ModifyTime - String - 是否必填：否 - 最近发生时间</li><li>Uuid- String - 是否必填：否 - 主机uuid查询</li><li>VulName- string -</li><li>VulCategory- string - 是否必填：否 - 漏洞类别 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞</li><li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li><li>Labels- string- 是否必填：否 - 标签搜索</li><li>IsSupportAutoFix- string- 是否必填：否 - 是否支持自动修复 0:不支持 1:支持</li><li>CvssScore- string- 是否必填：否 - CvssScore大于多少</li><li>AttackLevel- string- 是否必填：否 - 攻击热度大于多少</li>
                     * @param _filters 过滤条件。<li>Status - String - 是否必填：否 - 处理状态  0-待处理 1-已加白 2-已删除 3-已修复 5-检测中 6-修复中 8-修复失败</li><li>ModifyTime - String - 是否必填：否 - 最近发生时间</li><li>Uuid- String - 是否必填：否 - 主机uuid查询</li><li>VulName- string -</li><li>VulCategory- string - 是否必填：否 - 漏洞类别 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞</li><li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li><li>Labels- string- 是否必填：否 - 标签搜索</li><li>IsSupportAutoFix- string- 是否必填：否 - 是否支持自动修复 0:不支持 1:支持</li><li>CvssScore- string- 是否必填：否 - CvssScore大于多少</li><li>AttackLevel- string- 是否必填：否 - 攻击热度大于多少</li>
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
                     * 获取可选排序字段 Level，LastTime，HostCount
                     * @return By 可选排序字段 Level，LastTime，HostCount
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置可选排序字段 Level，LastTime，HostCount
                     * @param _by 可选排序字段 Level，LastTime，HostCount
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序顺序：desc  默认asc
                     * @return Order 排序顺序：desc  默认asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序顺序：desc  默认asc
                     * @param _order 排序顺序：desc  默认asc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 返回数量，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。<li>Status - String - 是否必填：否 - 处理状态  0-待处理 1-已加白 2-已删除 3-已修复 5-检测中 6-修复中 8-修复失败</li><li>ModifyTime - String - 是否必填：否 - 最近发生时间</li><li>Uuid- String - 是否必填：否 - 主机uuid查询</li><li>VulName- string -</li><li>VulCategory- string - 是否必填：否 - 漏洞类别 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞</li><li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li><li>Labels- string- 是否必填：否 - 标签搜索</li><li>IsSupportAutoFix- string- 是否必填：否 - 是否支持自动修复 0:不支持 1:支持</li><li>CvssScore- string- 是否必填：否 - CvssScore大于多少</li><li>AttackLevel- string- 是否必填：否 - 攻击热度大于多少</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 可选排序字段 Level，LastTime，HostCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序顺序：desc  默认asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTREQUEST_H_
