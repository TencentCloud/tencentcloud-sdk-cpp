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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEVULSNUMBERRESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEVULSNUMBERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cws/v20180312/model/MonitorMiniSite.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DescribeVulsNumber返回参数结构体
                */
                class DescribeVulsNumberResponse : public AbstractModel
                {
                public:
                    DescribeVulsNumberResponse();
                    ~DescribeVulsNumberResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取受影响的网站总数。
                     * @return ImpactSiteNumber 受影响的网站总数。
                     * 
                     */
                    uint64_t GetImpactSiteNumber() const;

                    /**
                     * 判断参数 ImpactSiteNumber 是否已赋值
                     * @return ImpactSiteNumber 是否已赋值
                     * 
                     */
                    bool ImpactSiteNumberHasBeenSet() const;

                    /**
                     * 获取已验证的网站总数。
                     * @return SiteNumber 已验证的网站总数。
                     * 
                     */
                    uint64_t GetSiteNumber() const;

                    /**
                     * 判断参数 SiteNumber 是否已赋值
                     * @return SiteNumber 是否已赋值
                     * 
                     */
                    bool SiteNumberHasBeenSet() const;

                    /**
                     * 获取高风险漏洞总数。
                     * @return VulsHighNumber 高风险漏洞总数。
                     * 
                     */
                    uint64_t GetVulsHighNumber() const;

                    /**
                     * 判断参数 VulsHighNumber 是否已赋值
                     * @return VulsHighNumber 是否已赋值
                     * 
                     */
                    bool VulsHighNumberHasBeenSet() const;

                    /**
                     * 获取中风险漏洞总数。
                     * @return VulsMiddleNumber 中风险漏洞总数。
                     * 
                     */
                    uint64_t GetVulsMiddleNumber() const;

                    /**
                     * 判断参数 VulsMiddleNumber 是否已赋值
                     * @return VulsMiddleNumber 是否已赋值
                     * 
                     */
                    bool VulsMiddleNumberHasBeenSet() const;

                    /**
                     * 获取低高风险漏洞总数。
                     * @return VulsLowNumber 低高风险漏洞总数。
                     * 
                     */
                    uint64_t GetVulsLowNumber() const;

                    /**
                     * 判断参数 VulsLowNumber 是否已赋值
                     * @return VulsLowNumber 是否已赋值
                     * 
                     */
                    bool VulsLowNumberHasBeenSet() const;

                    /**
                     * 获取风险提示总数。
                     * @return VulsNoticeNumber 风险提示总数。
                     * 
                     */
                    uint64_t GetVulsNoticeNumber() const;

                    /**
                     * 判断参数 VulsNoticeNumber 是否已赋值
                     * @return VulsNoticeNumber 是否已赋值
                     * 
                     */
                    bool VulsNoticeNumberHasBeenSet() const;

                    /**
                     * 获取扫描页面总数。
                     * @return PageCount 扫描页面总数。
                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取已验证的网站列表。
                     * @return Sites 已验证的网站列表。
                     * 
                     */
                    std::vector<MonitorMiniSite> GetSites() const;

                    /**
                     * 判断参数 Sites 是否已赋值
                     * @return Sites 是否已赋值
                     * 
                     */
                    bool SitesHasBeenSet() const;

                    /**
                     * 获取受影响的网站列表。
                     * @return ImpactSites 受影响的网站列表。
                     * 
                     */
                    std::vector<MonitorMiniSite> GetImpactSites() const;

                    /**
                     * 判断参数 ImpactSites 是否已赋值
                     * @return ImpactSites 是否已赋值
                     * 
                     */
                    bool ImpactSitesHasBeenSet() const;

                private:

                    /**
                     * 受影响的网站总数。
                     */
                    uint64_t m_impactSiteNumber;
                    bool m_impactSiteNumberHasBeenSet;

                    /**
                     * 已验证的网站总数。
                     */
                    uint64_t m_siteNumber;
                    bool m_siteNumberHasBeenSet;

                    /**
                     * 高风险漏洞总数。
                     */
                    uint64_t m_vulsHighNumber;
                    bool m_vulsHighNumberHasBeenSet;

                    /**
                     * 中风险漏洞总数。
                     */
                    uint64_t m_vulsMiddleNumber;
                    bool m_vulsMiddleNumberHasBeenSet;

                    /**
                     * 低高风险漏洞总数。
                     */
                    uint64_t m_vulsLowNumber;
                    bool m_vulsLowNumberHasBeenSet;

                    /**
                     * 风险提示总数。
                     */
                    uint64_t m_vulsNoticeNumber;
                    bool m_vulsNoticeNumberHasBeenSet;

                    /**
                     * 扫描页面总数。
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 已验证的网站列表。
                     */
                    std::vector<MonitorMiniSite> m_sites;
                    bool m_sitesHasBeenSet;

                    /**
                     * 受影响的网站列表。
                     */
                    std::vector<MonitorMiniSite> m_impactSites;
                    bool m_impactSitesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEVULSNUMBERRESPONSE_H_
