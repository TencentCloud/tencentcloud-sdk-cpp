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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERADDITIONALCERTREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERADDITIONALCERTREQUEST_H_

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
                * CreateListenerAdditionalCert请求参数结构体
                */
                class CreateListenerAdditionalCertRequest : public AbstractModel
                {
                public:
                    CreateListenerAdditionalCertRequest();
                    ~CreateListenerAdditionalCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
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
                     * 获取<p>监听器ID。</p>
                     * @return ListenerId <p>监听器ID。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器ID。</p>
                     * @param _listenerId <p>监听器ID。</p>
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
                     * 获取<p>证书ID。</p><p>当前只能添加服务器证书。</p>
                     * @return AdditionalCertificates <p>证书ID。</p><p>当前只能添加服务器证书。</p>
                     * 
                     */
                    std::vector<std::string> GetAdditionalCertificates() const;

                    /**
                     * 设置<p>证书ID。</p><p>当前只能添加服务器证书。</p>
                     * @param _additionalCertificates <p>证书ID。</p><p>当前只能添加服务器证书。</p>
                     * 
                     */
                    void SetAdditionalCertificates(const std::vector<std::string>& _additionalCertificates);

                    /**
                     * 判断参数 AdditionalCertificates 是否已赋值
                     * @return AdditionalCertificates 是否已赋值
                     * 
                     */
                    bool AdditionalCertificatesHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>监听器ID。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>证书ID。</p><p>当前只能添加服务器证书。</p>
                     */
                    std::vector<std::string> m_additionalCertificates;
                    bool m_additionalCertificatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERADDITIONALCERTREQUEST_H_
