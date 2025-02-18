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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENER_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Certificate.h>
#include <tencentcloud/ssl/v20191205/model/ClbListenerRule.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CLB实例监听器
                */
                class ClbListener : public AbstractModel
                {
                public:
                    ClbListener();
                    ~ClbListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取是否开启SNI，1为开启，0为关闭
                     * @return SniSwitch 是否开启SNI，1为开启，0为关闭
                     * 
                     */
                    uint64_t GetSniSwitch() const;

                    /**
                     * 设置是否开启SNI，1为开启，0为关闭
                     * @param _sniSwitch 是否开启SNI，1为开启，0为关闭
                     * 
                     */
                    void SetSniSwitch(const uint64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     * 
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取监听器协议类型， HTTPS|TCP_SSL
                     * @return Protocol 监听器协议类型， HTTPS|TCP_SSL
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议类型， HTTPS|TCP_SSL
                     * @param _protocol 监听器协议类型， HTTPS|TCP_SSL
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取监听器绑定的证书数据
                     * @return Certificate 监听器绑定的证书数据
                     * 
                     */
                    Certificate GetCertificate() const;

                    /**
                     * 设置监听器绑定的证书数据
                     * @param _certificate 监听器绑定的证书数据
                     * 
                     */
                    void SetCertificate(const Certificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取监听器规则列表
                     * @return Rules 监听器规则列表
                     * 
                     */
                    std::vector<ClbListenerRule> GetRules() const;

                    /**
                     * 设置监听器规则列表
                     * @param _rules 监听器规则列表
                     * 
                     */
                    void SetRules(const std::vector<ClbListenerRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取不匹配域名列表
                     * @return NoMatchDomains 不匹配域名列表
                     * 
                     */
                    std::vector<std::string> GetNoMatchDomains() const;

                    /**
                     * 设置不匹配域名列表
                     * @param _noMatchDomains 不匹配域名列表
                     * 
                     */
                    void SetNoMatchDomains(const std::vector<std::string>& _noMatchDomains);

                    /**
                     * 判断参数 NoMatchDomains 是否已赋值
                     * @return NoMatchDomains 是否已赋值
                     * 
                     */
                    bool NoMatchDomainsHasBeenSet() const;

                private:

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
                     * 是否开启SNI，1为开启，0为关闭
                     */
                    uint64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * 监听器协议类型， HTTPS|TCP_SSL
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器绑定的证书数据
                     */
                    Certificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 监听器规则列表
                     */
                    std::vector<ClbListenerRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 不匹配域名列表
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENER_H_
