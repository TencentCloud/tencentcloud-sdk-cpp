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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYMQTTINSTANCECERTBINDINGREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYMQTTINSTANCECERTBINDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ModifyMQTTInstanceCertBinding请求参数结构体
                */
                class ModifyMQTTInstanceCertBindingRequest : public AbstractModel
                {
                public:
                    ModifyMQTTInstanceCertBindingRequest();
                    ~ModifyMQTTInstanceCertBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取服务端证书id
                     * @return SSLServerCertId 服务端证书id
                     * 
                     */
                    std::string GetSSLServerCertId() const;

                    /**
                     * 设置服务端证书id
                     * @param _sSLServerCertId 服务端证书id
                     * 
                     */
                    void SetSSLServerCertId(const std::string& _sSLServerCertId);

                    /**
                     * 判断参数 SSLServerCertId 是否已赋值
                     * @return SSLServerCertId 是否已赋值
                     * 
                     */
                    bool SSLServerCertIdHasBeenSet() const;

                    /**
                     * 获取CA证书id
                     * @return SSLCaCertId CA证书id
                     * 
                     */
                    std::string GetSSLCaCertId() const;

                    /**
                     * 设置CA证书id
                     * @param _sSLCaCertId CA证书id
                     * 
                     */
                    void SetSSLCaCertId(const std::string& _sSLCaCertId);

                    /**
                     * 判断参数 SSLCaCertId 是否已赋值
                     * @return SSLCaCertId 是否已赋值
                     * 
                     */
                    bool SSLCaCertIdHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务端证书id
                     */
                    std::string m_sSLServerCertId;
                    bool m_sSLServerCertIdHasBeenSet;

                    /**
                     * CA证书id
                     */
                    std::string m_sSLCaCertId;
                    bool m_sSLCaCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYMQTTINSTANCECERTBINDINGREQUEST_H_
