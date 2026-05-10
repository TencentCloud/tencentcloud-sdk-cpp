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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINHTTPSCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINHTTPSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 域名 HTTPS 配置信息
                */
                class DomainHTTPSConfig : public AbstractModel
                {
                public:
                    DomainHTTPSConfig();
                    ~DomainHTTPSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>证书过期时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p><p>参数格式：YYYY-MM-DDThh:mm:ss+08:00</p>
                     * @return CertExpireTime <p>证书过期时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p><p>参数格式：YYYY-MM-DDThh:mm:ss+08:00</p>
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置<p>证书过期时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p><p>参数格式：YYYY-MM-DDThh:mm:ss+08:00</p>
                     * @param _certExpireTime <p>证书过期时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p><p>参数格式：YYYY-MM-DDThh:mm:ss+08:00</p>
                     * 
                     */
                    void SetCertExpireTime(const std::string& _certExpireTime);

                    /**
                     * 判断参数 CertExpireTime 是否已赋值
                     * @return CertExpireTime 是否已赋值
                     * 
                     */
                    bool CertExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云 SSL 产品中的证书 ID。</p>
                     * @return CloudCertId <p>腾讯云 SSL 产品中的证书 ID。</p>
                     * 
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置<p>腾讯云 SSL 产品中的证书 ID。</p>
                     * @param _cloudCertId <p>腾讯云 SSL 产品中的证书 ID。</p>
                     * 
                     */
                    void SetCloudCertId(const std::string& _cloudCertId);

                    /**
                     * 判断参数 CloudCertId 是否已赋值
                     * @return CloudCertId 是否已赋值
                     * 
                     */
                    bool CloudCertIdHasBeenSet() const;

                private:

                    /**
                     * <p>证书过期时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p><p>参数格式：YYYY-MM-DDThh:mm:ss+08:00</p>
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * <p>腾讯云 SSL 产品中的证书 ID。</p>
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINHTTPSCONFIG_H_
