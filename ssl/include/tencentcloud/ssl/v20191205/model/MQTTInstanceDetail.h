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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MQTTINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MQTTINSTANCEDETAIL_H_

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
                * MQTT实例详情
                */
                class MQTTInstanceDetail : public AbstractModel
                {
                public:
                    MQTTInstanceDetail();
                    ~MQTTInstanceDetail() = default;
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
                     * 获取服务端证书列表
                     * @return ServerCertIdList 服务端证书列表
                     * 
                     */
                    std::vector<std::string> GetServerCertIdList() const;

                    /**
                     * 设置服务端证书列表
                     * @param _serverCertIdList 服务端证书列表
                     * 
                     */
                    void SetServerCertIdList(const std::vector<std::string>& _serverCertIdList);

                    /**
                     * 判断参数 ServerCertIdList 是否已赋值
                     * @return ServerCertIdList 是否已赋值
                     * 
                     */
                    bool ServerCertIdListHasBeenSet() const;

                    /**
                     * 获取ca证书列表
                     * @return CaCertIdList ca证书列表
                     * 
                     */
                    std::vector<std::string> GetCaCertIdList() const;

                    /**
                     * 设置ca证书列表
                     * @param _caCertIdList ca证书列表
                     * 
                     */
                    void SetCaCertIdList(const std::vector<std::string>& _caCertIdList);

                    /**
                     * 判断参数 CaCertIdList 是否已赋值
                     * @return CaCertIdList 是否已赋值
                     * 
                     */
                    bool CaCertIdListHasBeenSet() const;

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
                     * 不匹配的域名列表
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                    /**
                     * 服务端证书列表
                     */
                    std::vector<std::string> m_serverCertIdList;
                    bool m_serverCertIdListHasBeenSet;

                    /**
                     * ca证书列表
                     */
                    std::vector<std::string> m_caCertIdList;
                    bool m_caCertIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MQTTINSTANCEDETAIL_H_
