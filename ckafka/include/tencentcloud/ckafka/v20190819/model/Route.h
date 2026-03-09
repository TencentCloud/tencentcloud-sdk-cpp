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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/VipEntity.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 路由实体对象
                */
                class Route : public AbstractModel
                {
                public:
                    Route();
                    ~Route() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例接入方式0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）</p>
                     * @return AccessType <p>实例接入方式0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）</p>
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<p>实例接入方式0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）</p>
                     * @param _accessType <p>实例接入方式0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）</p>
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>路由Id</p>
                     * @return RouteId <p>路由Id</p>
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置<p>路由Id</p>
                     * @param _routeId <p>路由Id</p>
                     * 
                     */
                    void SetRouteId(const int64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取<p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * @return VipType <p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * @param _vipType <p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取<p>虚拟IP列表</p>
                     * @return VipList <p>虚拟IP列表</p>
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置<p>虚拟IP列表</p>
                     * @param _vipList <p>虚拟IP列表</p>
                     * 
                     */
                    void SetVipList(const std::vector<VipEntity>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     * 
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>域名port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainPort <p>域名port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDomainPort() const;

                    /**
                     * 设置<p>域名port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainPort <p>域名port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainPort(const int64_t& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取<p>时间戳</p>
                     * @return DeleteTimestamp <p>时间戳</p>
                     * 
                     */
                    std::string GetDeleteTimestamp() const;

                    /**
                     * 设置<p>时间戳</p>
                     * @param _deleteTimestamp <p>时间戳</p>
                     * 
                     */
                    void SetDeleteTimestamp(const std::string& _deleteTimestamp);

                    /**
                     * 判断参数 DeleteTimestamp 是否已赋值
                     * @return DeleteTimestamp 是否已赋值
                     * 
                     */
                    bool DeleteTimestampHasBeenSet() const;

                    /**
                     * 获取<p>子网Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subnet <p>子网Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnet() const;

                    /**
                     * 设置<p>子网Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnet <p>子网Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnet(const std::string& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取<p>虚拟IP列表(1对1 broker节点)</p>
                     * @return BrokerVipList <p>虚拟IP列表(1对1 broker节点)</p>
                     * 
                     */
                    std::vector<VipEntity> GetBrokerVipList() const;

                    /**
                     * 设置<p>虚拟IP列表(1对1 broker节点)</p>
                     * @param _brokerVipList <p>虚拟IP列表(1对1 broker节点)</p>
                     * 
                     */
                    void SetBrokerVipList(const std::vector<VipEntity>& _brokerVipList);

                    /**
                     * 判断参数 BrokerVipList 是否已赋值
                     * @return BrokerVipList 是否已赋值
                     * 
                     */
                    bool BrokerVipListHasBeenSet() const;

                    /**
                     * 获取<p>私有网络Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>私有网络Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId <p>私有网络Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Note <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _note <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取<p>路由的状态。1: 创建中，2: 创建成功，3: 创建失败，4: 删除中，6: 删除失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>路由的状态。1: 创建中，2: 创建成功，3: 创建失败，4: 删除中，6: 删除失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>路由的状态。1: 创建中，2: 创建成功，3: 创建失败，4: 删除中，6: 删除失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>路由的状态。1: 创建中，2: 创建成功，3: 创建失败，4: 删除中，6: 删除失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>实例接入方式0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）</p>
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>路由Id</p>
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>虚拟IP列表</p>
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * <p>时间戳</p>
                     */
                    std::string m_deleteTimestamp;
                    bool m_deleteTimestampHasBeenSet;

                    /**
                     * <p>子网Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * <p>虚拟IP列表(1对1 broker节点)</p>
                     */
                    std::vector<VipEntity> m_brokerVipList;
                    bool m_brokerVipListHasBeenSet;

                    /**
                     * <p>私有网络Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>路由的状态。1: 创建中，2: 创建成功，3: 创建失败，4: 删除中，6: 删除失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTE_H_
