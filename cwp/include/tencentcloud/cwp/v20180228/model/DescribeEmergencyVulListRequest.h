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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTREQUEST_H_

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
                * DescribeEmergencyVulList请求参数结构体
                */
                class DescribeEmergencyVulListRequest : public AbstractModel
                {
                public:
                    DescribeEmergencyVulListRequest();
                    ~DescribeEmergencyVulListRequest() = default;
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
                     * 获取过滤条件。
<li>Status - String - 是否必填：是 - 漏洞状态筛选，0//未检测 1有风险 ，2无风险 ，3 检查中展示progress</li>
<li>Level - String - 是否必填：否 - 漏洞等级筛选 1:低 2:中 3:高 4:提示</li>
<li>VulName- String - 是否必填：否 - 漏洞名称搜索</li>
<li>Uuids- String - 是否必填：否 - 主机uuid</li>
<li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li>
                     * @return Filters 过滤条件。
<li>Status - String - 是否必填：是 - 漏洞状态筛选，0//未检测 1有风险 ，2无风险 ，3 检查中展示progress</li>
<li>Level - String - 是否必填：否 - 漏洞等级筛选 1:低 2:中 3:高 4:提示</li>
<li>VulName- String - 是否必填：否 - 漏洞名称搜索</li>
<li>Uuids- String - 是否必填：否 - 主机uuid</li>
<li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Status - String - 是否必填：是 - 漏洞状态筛选，0//未检测 1有风险 ，2无风险 ，3 检查中展示progress</li>
<li>Level - String - 是否必填：否 - 漏洞等级筛选 1:低 2:中 3:高 4:提示</li>
<li>VulName- String - 是否必填：否 - 漏洞名称搜索</li>
<li>Uuids- String - 是否必填：否 - 主机uuid</li>
<li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li>
                     * @param _filters 过滤条件。
<li>Status - String - 是否必填：是 - 漏洞状态筛选，0//未检测 1有风险 ，2无风险 ，3 检查中展示progress</li>
<li>Level - String - 是否必填：否 - 漏洞等级筛选 1:低 2:中 3:高 4:提示</li>
<li>VulName- String - 是否必填：否 - 漏洞名称搜索</li>
<li>Uuids- String - 是否必填：否 - 主机uuid</li>
<li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li>
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
                     * 获取排序方式 desc , asc
                     * @return Order 排序方式 desc , asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式 desc , asc
                     * @param _order 排序方式 desc , asc
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
                     * 获取排序字段 PublishDate  LastScanTime HostCount
                     * @return By 排序字段 PublishDate  LastScanTime HostCount
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段 PublishDate  LastScanTime HostCount
                     * @param _by 排序字段 PublishDate  LastScanTime HostCount
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
                     * 获取是否热点漏洞
                     * @return HotspotAttack 是否热点漏洞
                     * 
                     */
                    bool GetHotspotAttack() const;

                    /**
                     * 设置是否热点漏洞
                     * @param _hotspotAttack 是否热点漏洞
                     * 
                     */
                    void SetHotspotAttack(const bool& _hotspotAttack);

                    /**
                     * 判断参数 HotspotAttack 是否已赋值
                     * @return HotspotAttack 是否已赋值
                     * 
                     */
                    bool HotspotAttackHasBeenSet() const;

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
                     * 过滤条件。
<li>Status - String - 是否必填：是 - 漏洞状态筛选，0//未检测 1有风险 ，2无风险 ，3 检查中展示progress</li>
<li>Level - String - 是否必填：否 - 漏洞等级筛选 1:低 2:中 3:高 4:提示</li>
<li>VulName- String - 是否必填：否 - 漏洞名称搜索</li>
<li>Uuids- String - 是否必填：否 - 主机uuid</li>
<li>IsSupportDefense - int- 是否必填：否 - 是否支持防御 0:不支持 1:支持</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式 desc , asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段 PublishDate  LastScanTime HostCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 是否热点漏洞
                     */
                    bool m_hotspotAttack;
                    bool m_hotspotAttackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTREQUEST_H_
