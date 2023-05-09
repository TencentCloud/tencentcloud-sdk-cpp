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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 网络信息
                */
                class NetAddr : public AbstractModel
                {
                public:
                    NetAddr();
                    ~NetAddr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVip() const;

                    /**
                     * 设置内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vip 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取内网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vport 内网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置内网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vport 内网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取外网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanDomain 外网域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置外网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanDomain 外网域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取外网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanPort 外网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置外网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanPort 外网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取网络类型（ro-只读,rw/ha-读写）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetType 网络类型（ro-只读,rw/ha-读写）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型（ro-只读,rw/ha-读写）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetType 网络类型（ro-只读,rw/ha-读写）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqSubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqSubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqVpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIP 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanIP 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取外网状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanStatus 外网状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置外网状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanStatus 外网状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroupId 实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceGroupId 实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                private:

                    /**
                     * 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 内网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 外网域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 网络类型（ro-只读,rw/ha-读写）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 外网状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_
