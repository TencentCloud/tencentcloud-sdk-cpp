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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTREQUEST_H_

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
                * DescribeWindowsPatchList请求参数结构体
                */
                class DescribeWindowsPatchListRequest : public AbstractModel
                {
                public:
                    DescribeWindowsPatchListRequest();
                    ~DescribeWindowsPatchListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页参数
                     * @return Limit 分页参数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数
                     * @param _limit 分页参数
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
                     * 获取排序顺序：desc 默认asc
                     * @return Order 排序顺序：desc 默认asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序顺序：desc 默认asc
                     * @param _order 排序顺序：desc 默认asc
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
                     * 获取可选排序字段
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     * @return By 可选排序字段
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置可选排序字段
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     * @param _by 可选排序字段
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取过滤条件。  <li>Status : string类型 非必填 处理状态 0待处理,1忽略,3修复</li><li>ShowNew : int类型 非必填 展示最新版本 1-开启 0-关闭</li><li>Name : string类型 非必填 补丁名称</li><li>KbNo : string类型 非必填 补丁编号</li><li>VulName : string类型 非必填 漏洞名称</li><li>CVEId : string类型 非必填 漏洞CVE编号</li><li>Uuid : string类型 非必填 主机uuid</li>
                     * @return Filters 过滤条件。  <li>Status : string类型 非必填 处理状态 0待处理,1忽略,3修复</li><li>ShowNew : int类型 非必填 展示最新版本 1-开启 0-关闭</li><li>Name : string类型 非必填 补丁名称</li><li>KbNo : string类型 非必填 补丁编号</li><li>VulName : string类型 非必填 漏洞名称</li><li>CVEId : string类型 非必填 漏洞CVE编号</li><li>Uuid : string类型 非必填 主机uuid</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。  <li>Status : string类型 非必填 处理状态 0待处理,1忽略,3修复</li><li>ShowNew : int类型 非必填 展示最新版本 1-开启 0-关闭</li><li>Name : string类型 非必填 补丁名称</li><li>KbNo : string类型 非必填 补丁编号</li><li>VulName : string类型 非必填 漏洞名称</li><li>CVEId : string类型 非必填 漏洞CVE编号</li><li>Uuid : string类型 非必填 主机uuid</li>
                     * @param _filters 过滤条件。  <li>Status : string类型 非必填 处理状态 0待处理,1忽略,3修复</li><li>ShowNew : int类型 非必填 展示最新版本 1-开启 0-关闭</li><li>Name : string类型 非必填 补丁名称</li><li>KbNo : string类型 非必填 补丁编号</li><li>VulName : string类型 非必填 漏洞名称</li><li>CVEId : string类型 非必填 漏洞CVE编号</li><li>Uuid : string类型 非必填 主机uuid</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页参数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序顺序：desc 默认asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 可选排序字段
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。  <li>Status : string类型 非必填 处理状态 0待处理,1忽略,3修复</li><li>ShowNew : int类型 非必填 展示最新版本 1-开启 0-关闭</li><li>Name : string类型 非必填 补丁名称</li><li>KbNo : string类型 非必填 补丁编号</li><li>VulName : string类型 非必填 漏洞名称</li><li>CVEId : string类型 非必填 漏洞CVE编号</li><li>Uuid : string类型 非必填 主机uuid</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTREQUEST_H_
