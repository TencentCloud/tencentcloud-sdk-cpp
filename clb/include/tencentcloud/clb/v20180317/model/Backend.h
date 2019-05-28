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
                * 监听器后端绑定机器的详细信息
                */
                class Backend : public AbstractModel
                {
                public:
                    Backend();
                    ~Backend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发目标的类型，目前仅可取值为 CVM
                     * @return Type 转发目标的类型，目前仅可取值为 CVM
                     */
                    std::string GetType() const;

                    /**
                     * 设置转发目标的类型，目前仅可取值为 CVM
                     * @param Type 转发目标的类型，目前仅可取值为 CVM
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
                     * @return InstanceId 云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
                     * @param InstanceId 云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取后端云服务器监听端口
                     * @return Port 后端云服务器监听端口
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置后端云服务器监听端口
                     * @param Port 后端云服务器监听端口
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     * @return Weight 后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     * @param Weight 后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取云服务器的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses 云服务器的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置云服务器的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PublicIpAddresses 云服务器的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取云服务器的内网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIpAddresses 云服务器的内网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置云服务器的内网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PrivateIpAddresses 云服务器的内网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取云服务器实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 云服务器实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置云服务器实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceName 云服务器实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取云服务器被绑定到监听器的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegisteredTime 云服务器被绑定到监听器的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegisteredTime() const;

                    /**
                     * 设置云服务器被绑定到监听器的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegisteredTime 云服务器被绑定到监听器的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegisteredTime(const std::string& _registeredTime);

                    /**
                     * 判断参数 RegisteredTime 是否已赋值
                     * @return RegisteredTime 是否已赋值
                     */
                    bool RegisteredTimeHasBeenSet() const;

                private:

                    /**
                     * 转发目标的类型，目前仅可取值为 CVM
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 后端云服务器监听端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 云服务器的外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 云服务器的内网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 云服务器实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 云服务器被绑定到监听器的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registeredTime;
                    bool m_registeredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BACKEND_H_
