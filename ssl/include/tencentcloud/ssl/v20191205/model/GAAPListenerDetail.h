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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_GAAPLISTENERDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_GAAPLISTENERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * GAAP监听器详情
                */
                class GAAPListenerDetail : public AbstractModel
                {
                public:
                    GAAPListenerDetail();
                    ~GAAPListenerDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器状态
                     * @return ListenerStatus 监听器状态
                     * 
                     */
                    std::string GetListenerStatus() const;

                    /**
                     * 设置监听器状态
                     * @param _listenerStatus 监听器状态
                     * 
                     */
                    void SetListenerStatus(const std::string& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
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
                     * 获取监听器名称
                     * @return ListenerName 监听器名称
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称
                     * @param _listenerName 监听器名称
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取不匹配的域名列表
                     * @return NoMatchDomains 不匹配的域名列表
                     * 
                     */
                    std::vector<std::string> GetNoMatchDomains() const;

                    /**
                     * 设置不匹配的域名列表
                     * @param _noMatchDomains 不匹配的域名列表
                     * 
                     */
                    void SetNoMatchDomains(const std::vector<std::string>& _noMatchDomains);

                    /**
                     * 判断参数 NoMatchDomains 是否已赋值
                     * @return NoMatchDomains 是否已赋值
                     * 
                     */
                    bool NoMatchDomainsHasBeenSet() const;

                    /**
                     * 获取实例绑定的证书列表	
                     * @return CertIdList 实例绑定的证书列表	
                     * 
                     */
                    std::vector<std::string> GetCertIdList() const;

                    /**
                     * 设置实例绑定的证书列表	
                     * @param _certIdList 实例绑定的证书列表	
                     * 
                     */
                    void SetCertIdList(const std::vector<std::string>& _certIdList);

                    /**
                     * 判断参数 CertIdList 是否已赋值
                     * @return CertIdList 是否已赋值
                     * 
                     */
                    bool CertIdListHasBeenSet() const;

                    /**
                     * 获取监听器协议
                     * @return Protocol 监听器协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议
                     * @param _protocol 监听器协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 监听器状态
                     */
                    std::string m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 不匹配的域名列表
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                    /**
                     * 实例绑定的证书列表	
                     */
                    std::vector<std::string> m_certIdList;
                    bool m_certIdListHasBeenSet;

                    /**
                     * 监听器协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_GAAPLISTENERDETAIL_H_
