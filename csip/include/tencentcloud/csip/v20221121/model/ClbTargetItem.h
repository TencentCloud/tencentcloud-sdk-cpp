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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLBTARGETITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLBTARGETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CLB后端服务
                */
                class ClbTargetItem : public AbstractModel
                {
                public:
                    ClbTargetItem();
                    ~ClbTargetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>内网IP地址</p>
                     * @return PrivateIpAddresses <p>内网IP地址</p>
                     * 
                     */
                    std::string GetPrivateIpAddresses() const;

                    /**
                     * 设置<p>内网IP地址</p>
                     * @param _privateIpAddresses <p>内网IP地址</p>
                     * 
                     */
                    void SetPrivateIpAddresses(const std::string& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>网卡ID</p>
                     * @return EniID <p>网卡ID</p>
                     * 
                     */
                    std::string GetEniID() const;

                    /**
                     * 设置<p>网卡ID</p>
                     * @param _eniID <p>网卡ID</p>
                     * 
                     */
                    void SetEniID(const std::string& _eniID);

                    /**
                     * 判断参数 EniID 是否已赋值
                     * @return EniID 是否已赋值
                     * 
                     */
                    bool EniIDHasBeenSet() const;

                    /**
                     * 获取<p>端口</p>
                     * @return Port <p>端口</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _port <p>端口</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>内网IP地址</p>
                     */
                    std::string m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * <p>网卡ID</p>
                     */
                    std::string m_eniID;
                    bool m_eniIDHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLBTARGETITEM_H_
