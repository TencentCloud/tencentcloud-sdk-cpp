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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeSSLStatus返回参数结构体
                */
                class DescribeSSLStatusResponse : public AbstractModel
                {
                public:
                    DescribeSSLStatusResponse();
                    ~DescribeSSLStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SSL 证书下载地址。
                     * @return CertDownloadUrl SSL 证书下载地址。
                     * 
                     */
                    std::string GetCertDownloadUrl() const;

                    /**
                     * 判断参数 CertDownloadUrl 是否已赋值
                     * @return CertDownloadUrl 是否已赋值
                     * 
                     */
                    bool CertDownloadUrlHasBeenSet() const;

                    /**
                     * 获取证书下载链接到期时间。
                     * @return UrlExpiredTime 证书下载链接到期时间。
                     * 
                     */
                    std::string GetUrlExpiredTime() const;

                    /**
                     * 判断参数 UrlExpiredTime 是否已赋值
                     * @return UrlExpiredTime 是否已赋值
                     * 
                     */
                    bool UrlExpiredTimeHasBeenSet() const;

                    /**
                     * 获取标识实例开启 SSL 功能。
- true：开启 。
- false：关闭。
                     * @return SSLConfig 标识实例开启 SSL 功能。
- true：开启 。
- false：关闭。
                     * 
                     */
                    bool GetSSLConfig() const;

                    /**
                     * 判断参数 SSLConfig 是否已赋值
                     * @return SSLConfig 是否已赋值
                     * 
                     */
                    bool SSLConfigHasBeenSet() const;

                    /**
                     * 获取标识实例是否支持 SSL特性。
- true：支持。
- false：不支持。
                     * @return FeatureSupport 标识实例是否支持 SSL特性。
- true：支持。
- false：不支持。
                     * 
                     */
                    bool GetFeatureSupport() const;

                    /**
                     * 判断参数 FeatureSupport 是否已赋值
                     * @return FeatureSupport 是否已赋值
                     * 
                     */
                    bool FeatureSupportHasBeenSet() const;

                    /**
                     * 获取说明配置 SSL 的状态。
- 1: 配置中。
- 2：配置成功。
                     * @return Status 说明配置 SSL 的状态。
- 1: 配置中。
- 2：配置成功。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * SSL 证书下载地址。
                     */
                    std::string m_certDownloadUrl;
                    bool m_certDownloadUrlHasBeenSet;

                    /**
                     * 证书下载链接到期时间。
                     */
                    std::string m_urlExpiredTime;
                    bool m_urlExpiredTimeHasBeenSet;

                    /**
                     * 标识实例开启 SSL 功能。
- true：开启 。
- false：关闭。
                     */
                    bool m_sSLConfig;
                    bool m_sSLConfigHasBeenSet;

                    /**
                     * 标识实例是否支持 SSL特性。
- true：支持。
- false：不支持。
                     */
                    bool m_featureSupport;
                    bool m_featureSupportHasBeenSet;

                    /**
                     * 说明配置 SSL 的状态。
- 1: 配置中。
- 2：配置成功。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
