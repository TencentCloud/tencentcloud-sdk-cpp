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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDEFAULTDISTRIBUTIONCONFIGRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDEFAULTDISTRIBUTIONCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeDefaultDistributionConfig返回参数结构体
                */
                class DescribeDefaultDistributionConfigResponse : public AbstractModel
                {
                public:
                    DescribeDefaultDistributionConfigResponse();
                    ~DescribeDefaultDistributionConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分发配置的域名(已废弃）。
                     * @return DomainName 分发配置的域名(已废弃）。
                     * @deprecated
                     */
                    std::string GetDomainName() const;

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * @deprecated
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取分发配置的域名。
                     * @return Domain 分发配置的域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取分发配置的协议，为 HTTP 或 HTTPS。
                     * @return Scheme 分发配置的协议，为 HTTP 或 HTTPS。
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取播放密钥，由大小写字母（a - Z）或者数字（0 - 9）组成，长度在8 - 20个字符之间。
                     * @return PlayKey 播放密钥，由大小写字母（a - Z）或者数字（0 - 9）组成，长度在8 - 20个字符之间。
                     * 
                     */
                    std::string GetPlayKey() const;

                    /**
                     * 判断参数 PlayKey 是否已赋值
                     * @return PlayKey 是否已赋值
                     * 
                     */
                    bool PlayKeyHasBeenSet() const;

                private:

                    /**
                     * 分发配置的域名(已废弃）。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 分发配置的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 分发配置的协议，为 HTTP 或 HTTPS。
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * 播放密钥，由大小写字母（a - Z）或者数字（0 - 9）组成，长度在8 - 20个字符之间。
                     */
                    std::string m_playKey;
                    bool m_playKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDEFAULTDISTRIBUTIONCONFIGRESPONSE_H_
