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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SHIELDAREA_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SHIELDAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSApplication.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取一级域名id
                     * @return ZoneId 一级域名id
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置一级域名id
                     * @param ZoneId 一级域名id
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return PolicyId 策略id
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略id
                     * @param PolicyId 策略id
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取防护类型 domain/application
                     * @return Type 防护类型 domain/application
                     */
                    std::string GetType() const;

                    /**
                     * 设置防护类型 domain/application
                     * @param Type 防护类型 domain/application
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取四层应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntityName 四层应用名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置四层应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EntityName 四层应用名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取7层域名参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Application 7层域名参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DDoSApplication> GetApplication() const;

                    /**
                     * 设置7层域名参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Application 7层域名参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplication(const std::vector<DDoSApplication>& _application);

                    /**
                     * 判断参数 Application 是否已赋值
                     * @return Application 是否已赋值
                     */
                    bool ApplicationHasBeenSet() const;

                    /**
                     * 获取四层tcp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcpNum 四层tcp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTcpNum() const;

                    /**
                     * 设置四层tcp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TcpNum 四层tcp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTcpNum(const int64_t& _tcpNum);

                    /**
                     * 判断参数 TcpNum 是否已赋值
                     * @return TcpNum 是否已赋值
                     */
                    bool TcpNumHasBeenSet() const;

                    /**
                     * 获取四层udp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UdpNum 四层udp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUdpNum() const;

                    /**
                     * 设置四层udp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UdpNum 四层udp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUdpNum(const int64_t& _udpNum);

                    /**
                     * 判断参数 UdpNum 是否已赋值
                     * @return UdpNum 是否已赋值
                     */
                    bool UdpNumHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Entity 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Entity 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取是否为共享资源客户，注意共享资源用户不可以切换代理模式，true-是；false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Share 是否为共享资源客户，注意共享资源用户不可以切换代理模式，true-是；false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetShare() const;

                    /**
                     * 设置是否为共享资源客户，注意共享资源用户不可以切换代理模式，true-是；false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Share 是否为共享资源客户，注意共享资源用户不可以切换代理模式，true-是；false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetShare(const bool& _share);

                    /**
                     * 判断参数 Share 是否已赋值
                     * @return Share 是否已赋值
                     */
                    bool ShareHasBeenSet() const;

                private:

                    /**
                     * 一级域名id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 策略id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 防护类型 domain/application
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 四层应用名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * 7层域名参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DDoSApplication> m_application;
                    bool m_applicationHasBeenSet;

                    /**
                     * 四层tcp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tcpNum;
                    bool m_tcpNumHasBeenSet;

                    /**
                     * 四层udp转发规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_udpNum;
                    bool m_udpNumHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 是否为共享资源客户，注意共享资源用户不可以切换代理模式，true-是；false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_share;
                    bool m_shareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SHIELDAREA_H_
