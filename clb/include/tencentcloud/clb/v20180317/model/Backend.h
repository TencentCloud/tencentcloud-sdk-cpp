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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BACKEND_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 监听器绑定的后端服务的详细信息
                */
                class Backend : public AbstractModel
                {
                public:
                    Backend();
                    ~Backend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端服务的类型，可取：CVM、ENI、CCN、EVM、GLOBALROUTE、NAT、SRV等
                     * @return Type 后端服务的类型，可取：CVM、ENI、CCN、EVM、GLOBALROUTE、NAT、SRV等
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置后端服务的类型，可取：CVM、ENI、CCN、EVM、GLOBALROUTE、NAT、SRV等
                     * @param _type 后端服务的类型，可取：CVM、ENI、CCN、EVM、GLOBALROUTE、NAT、SRV等
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
                     * 获取后端服务的唯一 ID，如 ins-abcd1234
                     * @return InstanceId 后端服务的唯一 ID，如 ins-abcd1234
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置后端服务的唯一 ID，如 ins-abcd1234
                     * @param _instanceId 后端服务的唯一 ID，如 ins-abcd1234
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
                     * 获取后端服务的监听端口，如果是全端口段监听器绑定的全监听目标组场景，此端口返回0，表示无效端口，绑定的后端服务的端口随监听器端口。
                     * @return Port 后端服务的监听端口，如果是全端口段监听器绑定的全监听目标组场景，此端口返回0，表示无效端口，绑定的后端服务的端口随监听器端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置后端服务的监听端口，如果是全端口段监听器绑定的全监听目标组场景，此端口返回0，表示无效端口，绑定的后端服务的端口随监听器端口。
                     * @param _port 后端服务的监听端口，如果是全端口段监听器绑定的全监听目标组场景，此端口返回0，表示无效端口，绑定的后端服务的端口随监听器端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * @return Weight 后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * @param _weight 后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取后端服务的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses 后端服务的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置后端服务的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIpAddresses 后端服务的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 后端服务的实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置后端服务的实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 后端服务的实例名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取弹性网卡唯一ID，如 eni-1234abcd
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EniId 弹性网卡唯一ID，如 eni-1234abcd
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置弹性网卡唯一ID，如 eni-1234abcd
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eniId 弹性网卡唯一ID，如 eni-1234abcd
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签。
                     * @return Tag 标签。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置标签。
                     * @param _tag 标签。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 后端服务的类型，可取：CVM、ENI、CCN、EVM、GLOBALROUTE、NAT、SRV等
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 后端服务的唯一 ID，如 ins-abcd1234
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 后端服务的监听端口，如果是全端口段监听器绑定的全监听目标组场景，此端口返回0，表示无效端口，绑定的后端服务的端口随监听器端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 后端服务的转发权重，取值范围：[0, 100]，默认为 10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 后端服务的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 后端服务被绑定的时间
                     */
                    std::string m_registeredTime;
                    bool m_registeredTimeHasBeenSet;

                    /**
                     * 弹性网卡唯一ID，如 eni-1234abcd
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BACKEND_H_
