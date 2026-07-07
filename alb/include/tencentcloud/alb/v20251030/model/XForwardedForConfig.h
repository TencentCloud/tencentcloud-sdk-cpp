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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_XFORWARDEDFORCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_XFORWARDEDFORCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 转发配置
                */
                class XForwardedForConfig : public AbstractModel
                {
                public:
                    XForwardedForConfig();
                    ~XForwardedForConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否通过 ALB-ID 头字段获取负载均衡实例ID。
- **true**：是。
- **false**：否。
                     * @return XForwardedForAlbIdEnabled 是否通过 ALB-ID 头字段获取负载均衡实例ID。
- **true**：是。
- **false**：否。
                     * 
                     */
                    bool GetXForwardedForAlbIdEnabled() const;

                    /**
                     * 设置是否通过 ALB-ID 头字段获取负载均衡实例ID。
- **true**：是。
- **false**：否。
                     * @param _xForwardedForAlbIdEnabled 是否通过 ALB-ID 头字段获取负载均衡实例ID。
- **true**：是。
- **false**：否。
                     * 
                     */
                    void SetXForwardedForAlbIdEnabled(const bool& _xForwardedForAlbIdEnabled);

                    /**
                     * 判断参数 XForwardedForAlbIdEnabled 是否已赋值
                     * @return XForwardedForAlbIdEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForAlbIdEnabledHasBeenSet() const;

                    /**
                     * 获取是否通过X-Forwarded-Client-srcport头字段获取访问负载均衡实例客户端的端口。
- **true**：是。
- **false**：否。
                     * @return XForwardedForClientSrcPortEnabled 是否通过X-Forwarded-Client-srcport头字段获取访问负载均衡实例客户端的端口。
- **true**：是。
- **false**：否。
                     * 
                     */
                    bool GetXForwardedForClientSrcPortEnabled() const;

                    /**
                     * 设置是否通过X-Forwarded-Client-srcport头字段获取访问负载均衡实例客户端的端口。
- **true**：是。
- **false**：否。
                     * @param _xForwardedForClientSrcPortEnabled 是否通过X-Forwarded-Client-srcport头字段获取访问负载均衡实例客户端的端口。
- **true**：是。
- **false**：否。
                     * 
                     */
                    void SetXForwardedForClientSrcPortEnabled(const bool& _xForwardedForClientSrcPortEnabled);

                    /**
                     * 判断参数 XForwardedForClientSrcPortEnabled 是否已赋值
                     * @return XForwardedForClientSrcPortEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForClientSrcPortEnabledHasBeenSet() const;

                    /**
                     * 获取是否开启通过X-Forwarded-Host头字段获取访问负载均衡实例客户端的域名。
- **true**：是。
- **false**：否。
                     * @return XForwardedForHostEnabled 是否开启通过X-Forwarded-Host头字段获取访问负载均衡实例客户端的域名。
- **true**：是。
- **false**：否。
                     * 
                     */
                    bool GetXForwardedForHostEnabled() const;

                    /**
                     * 设置是否开启通过X-Forwarded-Host头字段获取访问负载均衡实例客户端的域名。
- **true**：是。
- **false**：否。
                     * @param _xForwardedForHostEnabled 是否开启通过X-Forwarded-Host头字段获取访问负载均衡实例客户端的域名。
- **true**：是。
- **false**：否。
                     * 
                     */
                    void SetXForwardedForHostEnabled(const bool& _xForwardedForHostEnabled);

                    /**
                     * 判断参数 XForwardedForHostEnabled 是否已赋值
                     * @return XForwardedForHostEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForHostEnabledHasBeenSet() const;

                    /**
                     * 获取指定如何处理 X-Forwarded-For（XFF）HTTP 头字段。
- **append**:  附加模式（默认），将客户端的真实 IP 地址附加到 X-Forwarded-For 头的末尾，保留原有的 XFF 链路信息
- **remove**:  删除模式，移除 X-Forwarded-For 头字段，不将该头传递给后端服务器
- **passthrough**: 透传模式，保持 X-Forwarded-For 头不变，直接透传给后端服务器，不做任何修改

                     * @return XForwardedForMode 指定如何处理 X-Forwarded-For（XFF）HTTP 头字段。
- **append**:  附加模式（默认），将客户端的真实 IP 地址附加到 X-Forwarded-For 头的末尾，保留原有的 XFF 链路信息
- **remove**:  删除模式，移除 X-Forwarded-For 头字段，不将该头传递给后端服务器
- **passthrough**: 透传模式，保持 X-Forwarded-For 头不变，直接透传给后端服务器，不做任何修改

                     * 
                     */
                    std::string GetXForwardedForMode() const;

                    /**
                     * 设置指定如何处理 X-Forwarded-For（XFF）HTTP 头字段。
- **append**:  附加模式（默认），将客户端的真实 IP 地址附加到 X-Forwarded-For 头的末尾，保留原有的 XFF 链路信息
- **remove**:  删除模式，移除 X-Forwarded-For 头字段，不将该头传递给后端服务器
- **passthrough**: 透传模式，保持 X-Forwarded-For 头不变，直接透传给后端服务器，不做任何修改

                     * @param _xForwardedForMode 指定如何处理 X-Forwarded-For（XFF）HTTP 头字段。
- **append**:  附加模式（默认），将客户端的真实 IP 地址附加到 X-Forwarded-For 头的末尾，保留原有的 XFF 链路信息
- **remove**:  删除模式，移除 X-Forwarded-For 头字段，不将该头传递给后端服务器
- **passthrough**: 透传模式，保持 X-Forwarded-For 头不变，直接透传给后端服务器，不做任何修改

                     * 
                     */
                    void SetXForwardedForMode(const std::string& _xForwardedForMode);

                    /**
                     * 判断参数 XForwardedForMode 是否已赋值
                     * @return XForwardedForMode 是否已赋值
                     * 
                     */
                    bool XForwardedForModeHasBeenSet() const;

                    /**
                     * 获取是否通过X-Forwarded-Port头字段获取负载均衡实例的监听端口。
- **true**：是。
- **false**：否。
                     * @return XForwardedForPortEnabled 是否通过X-Forwarded-Port头字段获取负载均衡实例的监听端口。
- **true**：是。
- **false**：否。
                     * 
                     */
                    bool GetXForwardedForPortEnabled() const;

                    /**
                     * 设置是否通过X-Forwarded-Port头字段获取负载均衡实例的监听端口。
- **true**：是。
- **false**：否。
                     * @param _xForwardedForPortEnabled 是否通过X-Forwarded-Port头字段获取负载均衡实例的监听端口。
- **true**：是。
- **false**：否。
                     * 
                     */
                    void SetXForwardedForPortEnabled(const bool& _xForwardedForPortEnabled);

                    /**
                     * 判断参数 XForwardedForPortEnabled 是否已赋值
                     * @return XForwardedForPortEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForPortEnabledHasBeenSet() const;

                    /**
                     * 获取是否通过X-Forwarded-Proto头字段获取负载均衡实例的监听协议。
- **true**：是。
- **false**：否。

                     * @return XForwardedForProtoEnabled 是否通过X-Forwarded-Proto头字段获取负载均衡实例的监听协议。
- **true**：是。
- **false**：否。

                     * 
                     */
                    bool GetXForwardedForProtoEnabled() const;

                    /**
                     * 设置是否通过X-Forwarded-Proto头字段获取负载均衡实例的监听协议。
- **true**：是。
- **false**：否。

                     * @param _xForwardedForProtoEnabled 是否通过X-Forwarded-Proto头字段获取负载均衡实例的监听协议。
- **true**：是。
- **false**：否。

                     * 
                     */
                    void SetXForwardedForProtoEnabled(const bool& _xForwardedForProtoEnabled);

                    /**
                     * 判断参数 XForwardedForProtoEnabled 是否已赋值
                     * @return XForwardedForProtoEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForProtoEnabledHasBeenSet() const;

                    /**
                     * 获取是否通过 X-Tencent-Client-IDN 头访问 客户端证书的颁发者 $ssl_client_i_dn。
- **true**：是。
- **false**：否。

                     * @return XTencentClientIDNEnabled 是否通过 X-Tencent-Client-IDN 头访问 客户端证书的颁发者 $ssl_client_i_dn。
- **true**：是。
- **false**：否。

                     * 
                     */
                    bool GetXTencentClientIDNEnabled() const;

                    /**
                     * 设置是否通过 X-Tencent-Client-IDN 头访问 客户端证书的颁发者 $ssl_client_i_dn。
- **true**：是。
- **false**：否。

                     * @param _xTencentClientIDNEnabled 是否通过 X-Tencent-Client-IDN 头访问 客户端证书的颁发者 $ssl_client_i_dn。
- **true**：是。
- **false**：否。

                     * 
                     */
                    void SetXTencentClientIDNEnabled(const bool& _xTencentClientIDNEnabled);

                    /**
                     * 判断参数 XTencentClientIDNEnabled 是否已赋值
                     * @return XTencentClientIDNEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientIDNEnabledHasBeenSet() const;

                    /**
                     * 获取是否通过 X-Tencent-Client-SDN 头访问客户端证书的主题$ssl_client_s_dn。
- **true**：是。
- **false**：否。

                     * @return XTencentClientSDNEnabled 是否通过 X-Tencent-Client-SDN 头访问客户端证书的主题$ssl_client_s_dn。
- **true**：是。
- **false**：否。

                     * 
                     */
                    bool GetXTencentClientSDNEnabled() const;

                    /**
                     * 设置是否通过 X-Tencent-Client-SDN 头访问客户端证书的主题$ssl_client_s_dn。
- **true**：是。
- **false**：否。

                     * @param _xTencentClientSDNEnabled 是否通过 X-Tencent-Client-SDN 头访问客户端证书的主题$ssl_client_s_dn。
- **true**：是。
- **false**：否。

                     * 
                     */
                    void SetXTencentClientSDNEnabled(const bool& _xTencentClientSDNEnabled);

                    /**
                     * 判断参数 XTencentClientSDNEnabled 是否已赋值
                     * @return XTencentClientSDNEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientSDNEnabledHasBeenSet() const;

                    /**
                     * 获取是否通过 X-Tencent-Client-Serial 头访问 客户端证书的序列号 $ssl_client_serial。
- **true**：是。
- **false**：否。

                     * @return XTencentClientSerialEnabled 是否通过 X-Tencent-Client-Serial 头访问 客户端证书的序列号 $ssl_client_serial。
- **true**：是。
- **false**：否。

                     * 
                     */
                    bool GetXTencentClientSerialEnabled() const;

                    /**
                     * 设置是否通过 X-Tencent-Client-Serial 头访问 客户端证书的序列号 $ssl_client_serial。
- **true**：是。
- **false**：否。

                     * @param _xTencentClientSerialEnabled 是否通过 X-Tencent-Client-Serial 头访问 客户端证书的序列号 $ssl_client_serial。
- **true**：是。
- **false**：否。

                     * 
                     */
                    void SetXTencentClientSerialEnabled(const bool& _xTencentClientSerialEnabled);

                    /**
                     * 判断参数 XTencentClientSerialEnabled 是否已赋值
                     * @return XTencentClientSerialEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientSerialEnabledHasBeenSet() const;

                    /**
                     * 获取是通过 X-Tencent-Client-Verify 头访问 客户端证书的验证结果 $ssl_client_verify。
- **true**：是。
- **false**：否。

                     * @return XTencentClientVerifyEnabled 是通过 X-Tencent-Client-Verify 头访问 客户端证书的验证结果 $ssl_client_verify。
- **true**：是。
- **false**：否。

                     * 
                     */
                    bool GetXTencentClientVerifyEnabled() const;

                    /**
                     * 设置是通过 X-Tencent-Client-Verify 头访问 客户端证书的验证结果 $ssl_client_verify。
- **true**：是。
- **false**：否。

                     * @param _xTencentClientVerifyEnabled 是通过 X-Tencent-Client-Verify 头访问 客户端证书的验证结果 $ssl_client_verify。
- **true**：是。
- **false**：否。

                     * 
                     */
                    void SetXTencentClientVerifyEnabled(const bool& _xTencentClientVerifyEnabled);

                    /**
                     * 判断参数 XTencentClientVerifyEnabled 是否已赋值
                     * @return XTencentClientVerifyEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientVerifyEnabledHasBeenSet() const;

                private:

                    /**
                     * 是否通过 ALB-ID 头字段获取负载均衡实例ID。
- **true**：是。
- **false**：否。
                     */
                    bool m_xForwardedForAlbIdEnabled;
                    bool m_xForwardedForAlbIdEnabledHasBeenSet;

                    /**
                     * 是否通过X-Forwarded-Client-srcport头字段获取访问负载均衡实例客户端的端口。
- **true**：是。
- **false**：否。
                     */
                    bool m_xForwardedForClientSrcPortEnabled;
                    bool m_xForwardedForClientSrcPortEnabledHasBeenSet;

                    /**
                     * 是否开启通过X-Forwarded-Host头字段获取访问负载均衡实例客户端的域名。
- **true**：是。
- **false**：否。
                     */
                    bool m_xForwardedForHostEnabled;
                    bool m_xForwardedForHostEnabledHasBeenSet;

                    /**
                     * 指定如何处理 X-Forwarded-For（XFF）HTTP 头字段。
- **append**:  附加模式（默认），将客户端的真实 IP 地址附加到 X-Forwarded-For 头的末尾，保留原有的 XFF 链路信息
- **remove**:  删除模式，移除 X-Forwarded-For 头字段，不将该头传递给后端服务器
- **passthrough**: 透传模式，保持 X-Forwarded-For 头不变，直接透传给后端服务器，不做任何修改

                     */
                    std::string m_xForwardedForMode;
                    bool m_xForwardedForModeHasBeenSet;

                    /**
                     * 是否通过X-Forwarded-Port头字段获取负载均衡实例的监听端口。
- **true**：是。
- **false**：否。
                     */
                    bool m_xForwardedForPortEnabled;
                    bool m_xForwardedForPortEnabledHasBeenSet;

                    /**
                     * 是否通过X-Forwarded-Proto头字段获取负载均衡实例的监听协议。
- **true**：是。
- **false**：否。

                     */
                    bool m_xForwardedForProtoEnabled;
                    bool m_xForwardedForProtoEnabledHasBeenSet;

                    /**
                     * 是否通过 X-Tencent-Client-IDN 头访问 客户端证书的颁发者 $ssl_client_i_dn。
- **true**：是。
- **false**：否。

                     */
                    bool m_xTencentClientIDNEnabled;
                    bool m_xTencentClientIDNEnabledHasBeenSet;

                    /**
                     * 是否通过 X-Tencent-Client-SDN 头访问客户端证书的主题$ssl_client_s_dn。
- **true**：是。
- **false**：否。

                     */
                    bool m_xTencentClientSDNEnabled;
                    bool m_xTencentClientSDNEnabledHasBeenSet;

                    /**
                     * 是否通过 X-Tencent-Client-Serial 头访问 客户端证书的序列号 $ssl_client_serial。
- **true**：是。
- **false**：否。

                     */
                    bool m_xTencentClientSerialEnabled;
                    bool m_xTencentClientSerialEnabledHasBeenSet;

                    /**
                     * 是通过 X-Tencent-Client-Verify 头访问 客户端证书的验证结果 $ssl_client_verify。
- **true**：是。
- **false**：否。

                     */
                    bool m_xTencentClientVerifyEnabled;
                    bool m_xTencentClientVerifyEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_XFORWARDEDFORCONFIG_H_
