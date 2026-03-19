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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBELIVERELAYCONFIGRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBELIVERELAYCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeLiveRelayConfig返回参数结构体
                */
                class DescribeLiveRelayConfigResponse : public AbstractModel
                {
                public:
                    DescribeLiveRelayConfigResponse();
                    ~DescribeLiveRelayConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     * @return RelayType <p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     * 
                     */
                    uint64_t GetRelayType() const;

                    /**
                     * 判断参数 RelayType 是否已赋值
                     * @return RelayType 是否已赋值
                     * 
                     */
                    bool RelayTypeHasBeenSet() const;

                    /**
                     * 获取<p>转推URL</p>
                     * @return Urls <p>转推URL</p>
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取<p>是否是腾讯云CDN。</p><p>枚举值：</p><ul><li>0： 转推非腾讯云CDN</li><li>1： 转推腾讯CDN</li></ul>
                     * @return IsTencentCdn <p>是否是腾讯云CDN。</p><p>枚举值：</p><ul><li>0： 转推非腾讯云CDN</li><li>1： 转推腾讯CDN</li></ul>
                     * 
                     */
                    uint64_t GetIsTencentCdn() const;

                    /**
                     * 判断参数 IsTencentCdn 是否已赋值
                     * @return IsTencentCdn 是否已赋值
                     * 
                     */
                    bool IsTencentCdnHasBeenSet() const;

                private:

                    /**
                     * <p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     */
                    uint64_t m_relayType;
                    bool m_relayTypeHasBeenSet;

                    /**
                     * <p>转推URL</p>
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * <p>是否是腾讯云CDN。</p><p>枚举值：</p><ul><li>0： 转推非腾讯云CDN</li><li>1： 转推腾讯CDN</li></ul>
                     */
                    uint64_t m_isTencentCdn;
                    bool m_isTencentCdnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBELIVERELAYCONFIGRESPONSE_H_
