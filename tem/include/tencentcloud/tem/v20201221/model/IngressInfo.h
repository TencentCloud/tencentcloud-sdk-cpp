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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSINFO_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/IngressRule.h>
#include <tencentcloud/tem/v20201221/model/IngressTls.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Ingress 配置
                */
                class IngressInfo : public AbstractModel
                {
                public:
                    IngressInfo();
                    ~IngressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tem namespaceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId tem namespaceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置tem namespaceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId tem namespaceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取eks namespace
                     * @return EksNamespace eks namespace
                     * 
                     */
                    std::string GetEksNamespace() const;

                    /**
                     * 设置eks namespace
                     * @param _eksNamespace eks namespace
                     * 
                     */
                    void SetEksNamespace(const std::string& _eksNamespace);

                    /**
                     * 判断参数 EksNamespace 是否已赋值
                     * @return EksNamespace 是否已赋值
                     * 
                     */
                    bool EksNamespaceHasBeenSet() const;

                    /**
                     * 获取ip version
                     * @return AddressIPVersion ip version
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置ip version
                     * @param _addressIPVersion ip version
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取ingress name
                     * @return Name ingress name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置ingress name
                     * @param _name ingress name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取rules 配置
                     * @return Rules rules 配置
                     * 
                     */
                    std::vector<IngressRule> GetRules() const;

                    /**
                     * 设置rules 配置
                     * @param _rules rules 配置
                     * 
                     */
                    void SetRules(const std::vector<IngressRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取clb ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClbId clb ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClbId() const;

                    /**
                     * 设置clb ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clbId clb ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClbId(const std::string& _clbId);

                    /**
                     * 判断参数 ClbId 是否已赋值
                     * @return ClbId 是否已赋值
                     * 
                     */
                    bool ClbIdHasBeenSet() const;

                    /**
                     * 获取tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tls tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IngressTls> GetTls() const;

                    /**
                     * 设置tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tls tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTls(const std::vector<IngressTls>& _tls);

                    /**
                     * 判断参数 Tls 是否已赋值
                     * @return Tls 是否已赋值
                     * 
                     */
                    bool TlsHasBeenSet() const;

                    /**
                     * 获取eks clusterId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId eks clusterId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置eks clusterId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId eks clusterId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取clb ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip clb ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置clb ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vip clb ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * @return Mixed 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * 
                     */
                    bool GetMixed() const;

                    /**
                     * 设置是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * @param _mixed 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * 
                     */
                    void SetMixed(const bool& _mixed);

                    /**
                     * 判断参数 Mixed 是否已赋值
                     * @return Mixed 是否已赋值
                     * 
                     */
                    bool MixedHasBeenSet() const;

                private:

                    /**
                     * tem namespaceId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * eks namespace
                     */
                    std::string m_eksNamespace;
                    bool m_eksNamespaceHasBeenSet;

                    /**
                     * ip version
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * ingress name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * rules 配置
                     */
                    std::vector<IngressRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * clb ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clbId;
                    bool m_clbIdHasBeenSet;

                    /**
                     * tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IngressTls> m_tls;
                    bool m_tlsHasBeenSet;

                    /**
                     * eks clusterId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * clb ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     */
                    bool m_mixed;
                    bool m_mixedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSINFO_H_
