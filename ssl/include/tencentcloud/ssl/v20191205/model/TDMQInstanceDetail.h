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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TDMQINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TDMQINSTANCEDETAIL_H_

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
                * TDMQ - Rabbit实例详情
                */
                class TDMQInstanceDetail : public AbstractModel
                {
                public:
                    TDMQInstanceDetail();
                    ~TDMQInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return InstanceStatus 实例状态
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态
                     * @param _instanceStatus 实例状态
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取服务端证书ID
                     * @return CertId 服务端证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务端证书ID
                     * @param _certId 服务端证书ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取CA证书ID
                     * @return CaCertId CA证书ID
                     * 
                     */
                    std::string GetCaCertId() const;

                    /**
                     * 设置CA证书ID
                     * @param _caCertId CA证书ID
                     * 
                     */
                    void SetCaCertId(const std::string& _caCertId);

                    /**
                     * 判断参数 CaCertId 是否已赋值
                     * @return CaCertId 是否已赋值
                     * 
                     */
                    bool CaCertIdHasBeenSet() const;

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

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 服务端证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * CA证书ID
                     */
                    std::string m_caCertId;
                    bool m_caCertIdHasBeenSet;

                    /**
                     * 不匹配的域名列表
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TDMQINSTANCEDETAIL_H_
