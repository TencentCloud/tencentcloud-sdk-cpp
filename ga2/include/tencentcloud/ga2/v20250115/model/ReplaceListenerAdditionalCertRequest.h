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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_REPLACELISTENERADDITIONALCERTREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_REPLACELISTENERADDITIONALCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ReplaceListenerAdditionalCert请求参数结构体
                */
                class ReplaceListenerAdditionalCertRequest : public AbstractModel
                {
                public:
                    ReplaceListenerAdditionalCertRequest();
                    ~ReplaceListenerAdditionalCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取证书ID。
                     * @return AdditionalCertificate 证书ID。
                     * 
                     */
                    std::string GetAdditionalCertificate() const;

                    /**
                     * 设置证书ID。
                     * @param _additionalCertificate 证书ID。
                     * 
                     */
                    void SetAdditionalCertificate(const std::string& _additionalCertificate);

                    /**
                     * 判断参数 AdditionalCertificate 是否已赋值
                     * @return AdditionalCertificate 是否已赋值
                     * 
                     */
                    bool AdditionalCertificateHasBeenSet() const;

                    /**
                     * 获取旧的证书ID。
                     * @return OldCertificate 旧的证书ID。
                     * 
                     */
                    std::string GetOldCertificate() const;

                    /**
                     * 设置旧的证书ID。
                     * @param _oldCertificate 旧的证书ID。
                     * 
                     */
                    void SetOldCertificate(const std::string& _oldCertificate);

                    /**
                     * 判断参数 OldCertificate 是否已赋值
                     * @return OldCertificate 是否已赋值
                     * 
                     */
                    bool OldCertificateHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 证书ID。
                     */
                    std::string m_additionalCertificate;
                    bool m_additionalCertificateHasBeenSet;

                    /**
                     * 旧的证书ID。
                     */
                    std::string m_oldCertificate;
                    bool m_oldCertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_REPLACELISTENERADDITIONALCERTREQUEST_H_
