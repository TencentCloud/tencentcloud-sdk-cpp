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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKRELATEHOSTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKRELATEHOSTREQUEST_H_

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
                * DescribeVulRiskRelateHost请求参数结构体
                */
                class DescribeVulRiskRelateHostRequest : public AbstractModel
                {
                public:
                    DescribeVulRiskRelateHostRequest();
                    ~DescribeVulRiskRelateHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>KB 补丁内部 ID（kb_info.id）</p>
                     * @return KBID <p>KB 补丁内部 ID（kb_info.id）</p>
                     * 
                     */
                    uint64_t GetKBID() const;

                    /**
                     * 设置<p>KB 补丁内部 ID（kb_info.id）</p>
                     * @param _kBID <p>KB 补丁内部 ID（kb_info.id）</p>
                     * 
                     */
                    void SetKBID(const uint64_t& _kBID);

                    /**
                     * 判断参数 KBID 是否已赋值
                     * @return KBID 是否已赋值
                     * 
                     */
                    bool KBIDHasBeenSet() const;

                    /**
                     * 获取<p>漏洞 ID（vul_vuls.id）</p>
                     * @return VulID <p>漏洞 ID（vul_vuls.id）</p>
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置<p>漏洞 ID（vul_vuls.id）</p>
                     * @param _vulID <p>漏洞 ID（vul_vuls.id）</p>
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>Keyword：关键字模糊搜索（对主机名/IP/InstanceID 模糊匹配）<br>CloudTag: 云标签<br>Tag: 安全中心标签</p>
                     * @return Filters <p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>Keyword：关键字模糊搜索（对主机名/IP/InstanceID 模糊匹配）<br>CloudTag: 云标签<br>Tag: 安全中心标签</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>Keyword：关键字模糊搜索（对主机名/IP/InstanceID 模糊匹配）<br>CloudTag: 云标签<br>Tag: 安全中心标签</p>
                     * @param _filters <p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>Keyword：关键字模糊搜索（对主机名/IP/InstanceID 模糊匹配）<br>CloudTag: 云标签<br>Tag: 安全中心标签</p>
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
                     * 获取<p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @return Limit <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @param _limit <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
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
                     * 获取<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @return Offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @param _offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
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
                     * 获取<p>排序方向<br>枚举值：<br>ASC：升序<br>DESC：降序<br>默认值：DESC</p>
                     * @return Order <p>排序方向<br>枚举值：<br>ASC：升序<br>DESC：降序<br>默认值：DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方向<br>枚举值：<br>ASC：升序<br>DESC：降序<br>默认值：DESC</p>
                     * @param _order <p>排序方向<br>枚举值：<br>ASC：升序<br>DESC：降序<br>默认值：DESC</p>
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
                     * 获取<p>排序字段<br>枚举值：<br>LatestScanTime：最近扫描时间<br>VPRLevel：VPR 评级<br>RiskStatus：修复状态<br>默认值：LatestScanTime</p>
                     * @return By <p>排序字段<br>枚举值：<br>LatestScanTime：最近扫描时间<br>VPRLevel：VPR 评级<br>RiskStatus：修复状态<br>默认值：LatestScanTime</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段<br>枚举值：<br>LatestScanTime：最近扫描时间<br>VPRLevel：VPR 评级<br>RiskStatus：修复状态<br>默认值：LatestScanTime</p>
                     * @param _by <p>排序字段<br>枚举值：<br>LatestScanTime：最近扫描时间<br>VPRLevel：VPR 评级<br>RiskStatus：修复状态<br>默认值：LatestScanTime</p>
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
                     * <p>KB 补丁内部 ID（kb_info.id）</p>
                     */
                    uint64_t m_kBID;
                    bool m_kBIDHasBeenSet;

                    /**
                     * <p>漏洞 ID（vul_vuls.id）</p>
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>筛选条件数组，多条件之间为 AND 关系<br>支持的 Filter.Name：<br>Keyword：关键字模糊搜索（对主机名/IP/InstanceID 模糊匹配）<br>CloudTag: 云标签<br>Tag: 安全中心标签</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序方向<br>枚举值：<br>ASC：升序<br>DESC：降序<br>默认值：DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段<br>枚举值：<br>LatestScanTime：最近扫描时间<br>VPRLevel：VPR 评级<br>RiskStatus：修复状态<br>默认值：LatestScanTime</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKRELATEHOSTREQUEST_H_
