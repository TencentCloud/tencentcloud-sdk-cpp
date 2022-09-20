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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SHIELDAREA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SHIELDAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSHost.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS防护分区
                */
                class ShieldArea : public AbstractModel
                {
                public:
                    ShieldArea();
                    ~ShieldArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点Id。
                     * @return ZoneId 站点Id。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。
                     * @param ZoneId 站点Id。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取DDoS策略Id。
                     * @return PolicyId DDoS策略Id。
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置DDoS策略Id。
                     * @param PolicyId DDoS策略Id。
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取防护类型，参考值：
<li>domain：7层子域；</li>
<li>application：4层应用。</li>
                     * @return Type 防护类型，参考值：
<li>domain：7层子域；</li>
<li>application：4层应用。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置防护类型，参考值：
<li>domain：7层子域；</li>
<li>application：4层应用。</li>
                     * @param Type 防护类型，参考值：
<li>domain：7层子域；</li>
<li>application：4层应用。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取7层站点名。
                     * @return EntityName 7层站点名。
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置7层站点名。
                     * @param EntityName 7层站点名。
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取该防护分区下的7层子域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSHosts 该防护分区下的7层子域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DDoSHost> GetDDoSHosts() const;

                    /**
                     * 设置该防护分区下的7层子域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSHosts 该防护分区下的7层子域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSHosts(const std::vector<DDoSHost>& _dDoSHosts);

                    /**
                     * 判断参数 DDoSHosts 是否已赋值
                     * @return DDoSHosts 是否已赋值
                     */
                    bool DDoSHostsHasBeenSet() const;

                    /**
                     * 获取四层tcp转发规则数。
                     * @return TcpNum 四层tcp转发规则数。
                     */
                    int64_t GetTcpNum() const;

                    /**
                     * 设置四层tcp转发规则数。
                     * @param TcpNum 四层tcp转发规则数。
                     */
                    void SetTcpNum(const int64_t& _tcpNum);

                    /**
                     * 判断参数 TcpNum 是否已赋值
                     * @return TcpNum 是否已赋值
                     */
                    bool TcpNumHasBeenSet() const;

                    /**
                     * 获取四层udp转发规则数。
                     * @return UdpNum 四层udp转发规则数。
                     */
                    int64_t GetUdpNum() const;

                    /**
                     * 设置四层udp转发规则数。
                     * @param UdpNum 四层udp转发规则数。
                     */
                    void SetUdpNum(const int64_t& _udpNum);

                    /**
                     * 判断参数 UdpNum 是否已赋值
                     * @return UdpNum 是否已赋值
                     */
                    bool UdpNumHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return Entity 实例名称。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置实例名称。
                     * @param Entity 实例名称。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                private:

                    /**
                     * 站点Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DDoS策略Id。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 防护类型，参考值：
<li>domain：7层子域；</li>
<li>application：4层应用。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 7层站点名。
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * 该防护分区下的7层子域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DDoSHost> m_dDoSHosts;
                    bool m_dDoSHostsHasBeenSet;

                    /**
                     * 四层tcp转发规则数。
                     */
                    int64_t m_tcpNum;
                    bool m_tcpNumHasBeenSet;

                    /**
                     * 四层udp转发规则数。
                     */
                    int64_t m_udpNum;
                    bool m_udpNumHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SHIELDAREA_H_
