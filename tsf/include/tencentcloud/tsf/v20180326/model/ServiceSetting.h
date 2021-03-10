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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESETTING_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器网络设置。
                */
                class ServiceSetting : public AbstractModel
                {
                public:
                    ServiceSetting();
                    ~ServiceSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType 0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccessType 0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取容器端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolPorts 容器端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置容器端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProtocolPorts 容器端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocolPorts(const std::vector<ProtocolPort>& _protocolPorts);

                    /**
                     * 判断参数 ProtocolPorts 是否已赋值
                     * @return ProtocolPorts 是否已赋值
                     */
                    bool ProtocolPortsHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 容器端口映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESETTING_H_
