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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWUPSTREAMTLSCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWUPSTREAMTLSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI网关Upstream TLS配置
                */
                class AIGWUpstreamTLSConfig : public AbstractModel
                {
                public:
                    AIGWUpstreamTLSConfig();
                    ~AIGWUpstreamTLSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否校验上游服务端证书</p><p>默认值：false</p>
                     * @return TLSVerify <p>是否校验上游服务端证书</p><p>默认值：false</p>
                     * 
                     */
                    bool GetTLSVerify() const;

                    /**
                     * 设置<p>是否校验上游服务端证书</p><p>默认值：false</p>
                     * @param _tLSVerify <p>是否校验上游服务端证书</p><p>默认值：false</p>
                     * 
                     */
                    void SetTLSVerify(const bool& _tLSVerify);

                    /**
                     * 判断参数 TLSVerify 是否已赋值
                     * @return TLSVerify 是否已赋值
                     * 
                     */
                    bool TLSVerifyHasBeenSet() const;

                    /**
                     * 获取<p>客户端证书 ID（mTLS 用）</p>
                     * @return ClientCertId <p>客户端证书 ID（mTLS 用）</p>
                     * 
                     */
                    std::string GetClientCertId() const;

                    /**
                     * 设置<p>客户端证书 ID（mTLS 用）</p>
                     * @param _clientCertId <p>客户端证书 ID（mTLS 用）</p>
                     * 
                     */
                    void SetClientCertId(const std::string& _clientCertId);

                    /**
                     * 判断参数 ClientCertId 是否已赋值
                     * @return ClientCertId 是否已赋值
                     * 
                     */
                    bool ClientCertIdHasBeenSet() const;

                    /**
                     * 获取<p>信任的 CA 证书 ID 列表</p>
                     * @return UpstreamCACertIds <p>信任的 CA 证书 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetUpstreamCACertIds() const;

                    /**
                     * 设置<p>信任的 CA 证书 ID 列表</p>
                     * @param _upstreamCACertIds <p>信任的 CA 证书 ID 列表</p>
                     * 
                     */
                    void SetUpstreamCACertIds(const std::vector<std::string>& _upstreamCACertIds);

                    /**
                     * 判断参数 UpstreamCACertIds 是否已赋值
                     * @return UpstreamCACertIds 是否已赋值
                     * 
                     */
                    bool UpstreamCACertIdsHasBeenSet() const;

                private:

                    /**
                     * <p>是否校验上游服务端证书</p><p>默认值：false</p>
                     */
                    bool m_tLSVerify;
                    bool m_tLSVerifyHasBeenSet;

                    /**
                     * <p>客户端证书 ID（mTLS 用）</p>
                     */
                    std::string m_clientCertId;
                    bool m_clientCertIdHasBeenSet;

                    /**
                     * <p>信任的 CA 证书 ID 列表</p>
                     */
                    std::vector<std::string> m_upstreamCACertIds;
                    bool m_upstreamCACertIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWUPSTREAMTLSCONFIG_H_
