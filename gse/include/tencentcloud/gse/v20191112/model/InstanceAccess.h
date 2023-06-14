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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCEACCESS_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCEACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/Credentials.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 实例访问凭证信息
                */
                class InstanceAccess : public AbstractModel
                {
                public:
                    InstanceAccess();
                    ~InstanceAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问实例所需要的凭据
                     * @return Credentials 访问实例所需要的凭据
                     * 
                     */
                    Credentials GetCredentials() const;

                    /**
                     * 设置访问实例所需要的凭据
                     * @param _credentials 访问实例所需要的凭据
                     * 
                     */
                    void SetCredentials(const Credentials& _credentials);

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取服务部署Id
                     * @return FleetId 服务部署Id
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务部署Id
                     * @param _fleetId 服务部署Id
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

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
                     * 获取实例公网IP
                     * @return IpAddress 实例公网IP
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置实例公网IP
                     * @param _ipAddress 实例公网IP
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return OperatingSystem 操作系统
                     * 
                     */
                    std::string GetOperatingSystem() const;

                    /**
                     * 设置操作系统
                     * @param _operatingSystem 操作系统
                     * 
                     */
                    void SetOperatingSystem(const std::string& _operatingSystem);

                    /**
                     * 判断参数 OperatingSystem 是否已赋值
                     * @return OperatingSystem 是否已赋值
                     * 
                     */
                    bool OperatingSystemHasBeenSet() const;

                private:

                    /**
                     * 访问实例所需要的凭据
                     */
                    Credentials m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * 服务部署Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例公网IP
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_operatingSystem;
                    bool m_operatingSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCEACCESS_H_
