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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESSCANSREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESSCANSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * CreateSitesScans请求参数结构体
                */
                class CreateSitesScansRequest : public AbstractModel
                {
                public:
                    CreateSitesScansRequest();
                    ~CreateSitesScansRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点的ID列表
                     * @return SiteIds 站点的ID列表
                     * 
                     */
                    std::vector<uint64_t> GetSiteIds() const;

                    /**
                     * 设置站点的ID列表
                     * @param _siteIds 站点的ID列表
                     * 
                     */
                    void SetSiteIds(const std::vector<uint64_t>& _siteIds);

                    /**
                     * 判断参数 SiteIds 是否已赋值
                     * @return SiteIds 是否已赋值
                     * 
                     */
                    bool SiteIdsHasBeenSet() const;

                    /**
                     * 获取扫描模式，normal-正常扫描；deep-深度扫描
                     * @return ScannerType 扫描模式，normal-正常扫描；deep-深度扫描
                     * 
                     */
                    std::string GetScannerType() const;

                    /**
                     * 设置扫描模式，normal-正常扫描；deep-深度扫描
                     * @param _scannerType 扫描模式，normal-正常扫描；deep-深度扫描
                     * 
                     */
                    void SetScannerType(const std::string& _scannerType);

                    /**
                     * 判断参数 ScannerType 是否已赋值
                     * @return ScannerType 是否已赋值
                     * 
                     */
                    bool ScannerTypeHasBeenSet() const;

                    /**
                     * 获取扫描速率限制，每秒发送X个HTTP请求
                     * @return RateLimit 扫描速率限制，每秒发送X个HTTP请求
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 设置扫描速率限制，每秒发送X个HTTP请求
                     * @param _rateLimit 扫描速率限制，每秒发送X个HTTP请求
                     * 
                     */
                    void SetRateLimit(const uint64_t& _rateLimit);

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                private:

                    /**
                     * 站点的ID列表
                     */
                    std::vector<uint64_t> m_siteIds;
                    bool m_siteIdsHasBeenSet;

                    /**
                     * 扫描模式，normal-正常扫描；deep-深度扫描
                     */
                    std::string m_scannerType;
                    bool m_scannerTypeHasBeenSet;

                    /**
                     * 扫描速率限制，每秒发送X个HTTP请求
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESSCANSREQUEST_H_
