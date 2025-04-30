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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPBACKEND_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPBACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * 目标组绑定的后端服务器
                */
                class TargetGroupBackend : public AbstractModel
                {
                public:
                    TargetGroupBackend();
                    ~TargetGroupBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标组ID
                     * @return TargetGroupId 目标组ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组ID
                     * @param _targetGroupId 目标组ID
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取后端服务的类型，可取：CVM、ENI
                     * @return Type 后端服务的类型，可取：CVM、ENI
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置后端服务的类型，可取：CVM、ENI
                     * @param _type 后端服务的类型，可取：CVM、ENI
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取后端服务的唯一 ID
                     * @return InstanceId 后端服务的唯一 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置后端服务的唯一 ID
                     * @param _instanceId 后端服务的唯一 ID
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
                     * 获取后端服务的监听端口
                     * @return Port 后端服务的监听端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置后端服务的监听端口
                     * @param _port 后端服务的监听端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取后端服务的转发权重，取值为0或16
                     * @return Weight 后端服务的转发权重，取值为0或16
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置后端服务的转发权重，取值为0或16
                     * @param _weight 后端服务的转发权重，取值为0或16
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取后端服务的外网 IP
                     * @return PublicIpAddresses 后端服务的外网 IP
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置后端服务的外网 IP
                     * @param _publicIpAddresses 后端服务的外网 IP
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取后端服务的内网 IP
                     * @return PrivateIpAddresses 后端服务的内网 IP
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置后端服务的内网 IP
                     * @param _privateIpAddresses 后端服务的内网 IP
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取后端服务的实例名称
                     * @return InstanceName 后端服务的实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置后端服务的实例名称
                     * @param _instanceName 后端服务的实例名称
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
                     * 获取后端服务被绑定的时间
                     * @return RegisteredTime 后端服务被绑定的时间
                     * 
                     */
                    std::string GetRegisteredTime() const;

                    /**
                     * 设置后端服务被绑定的时间
                     * @param _registeredTime 后端服务被绑定的时间
                     * 
                     */
                    void SetRegisteredTime(const std::string& _registeredTime);

                    /**
                     * 判断参数 RegisteredTime 是否已赋值
                     * @return RegisteredTime 是否已赋值
                     * 
                     */
                    bool RegisteredTimeHasBeenSet() const;

                    /**
                     * 获取弹性网卡唯一ID
                     * @return EniId 弹性网卡唯一ID
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置弹性网卡唯一ID
                     * @param _eniId 弹性网卡唯一ID
                     * 
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     * 
                     */
                    bool EniIdHasBeenSet() const;

                    /**
                     * 获取后端服务的可用区ID
                     * @return ZoneId 后端服务的可用区ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置后端服务的可用区ID
                     * @param _zoneId 后端服务的可用区ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 目标组ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 后端服务的类型，可取：CVM、ENI
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 后端服务的唯一 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 后端服务的监听端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 后端服务的转发权重，取值为0或16
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 后端服务的外网 IP
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 后端服务的内网 IP
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 后端服务的实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 后端服务被绑定的时间
                     */
                    std::string m_registeredTime;
                    bool m_registeredTimeHasBeenSet;

                    /**
                     * 弹性网卡唯一ID
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                    /**
                     * 后端服务的可用区ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPBACKEND_H_
