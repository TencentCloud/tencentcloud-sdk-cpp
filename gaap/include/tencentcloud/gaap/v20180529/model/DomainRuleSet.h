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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINRULESET_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RuleInfo.h>
#include <tencentcloud/gaap/v20180529/model/CertificateAliasInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 按照域名分类的7层监听器转发规则信息
                */
                class DomainRuleSet : public AbstractModel
                {
                public:
                    DomainRuleSet();
                    ~DomainRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则域名。
                     * @return Domain 转发规则域名。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发规则域名。
                     * @param Domain 转发规则域名。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取该域名对应的转发规则列表。
                     * @return RuleSet 该域名对应的转发规则列表。
                     */
                    std::vector<RuleInfo> GetRuleSet() const;

                    /**
                     * 设置该域名对应的转发规则列表。
                     * @param RuleSet 该域名对应的转发规则列表。
                     */
                    void SetRuleSet(const std::vector<RuleInfo>& _ruleSet);

                    /**
                     * 判断参数 RuleSet 是否已赋值
                     * @return RuleSet 是否已赋值
                     */
                    bool RuleSetHasBeenSet() const;

                    /**
                     * 获取该域名对应的服务器证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateId 该域名对应的服务器证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置该域名对应的服务器证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CertificateId 该域名对应的服务器证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取该域名对应服务器证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateAlias 该域名对应服务器证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置该域名对应服务器证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CertificateAlias 该域名对应服务器证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取该域名对应的客户端证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertificateId 该域名对应的客户端证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置该域名对应的客户端证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientCertificateId 该域名对应的客户端证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取该域名对应客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertificateAlias 该域名对应客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientCertificateAlias() const;

                    /**
                     * 设置该域名对应客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientCertificateAlias 该域名对应客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientCertificateAlias(const std::string& _clientCertificateAlias);

                    /**
                     * 判断参数 ClientCertificateAlias 是否已赋值
                     * @return ClientCertificateAlias 是否已赋值
                     */
                    bool ClientCertificateAliasHasBeenSet() const;

                    /**
                     * 获取该域名对应基础认证配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicAuthConfId 该域名对应基础认证配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBasicAuthConfId() const;

                    /**
                     * 设置该域名对应基础认证配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BasicAuthConfId 该域名对应基础认证配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBasicAuthConfId(const std::string& _basicAuthConfId);

                    /**
                     * 判断参数 BasicAuthConfId 是否已赋值
                     * @return BasicAuthConfId 是否已赋值
                     */
                    bool BasicAuthConfIdHasBeenSet() const;

                    /**
                     * 获取基础认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicAuth 基础认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBasicAuth() const;

                    /**
                     * 设置基础认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BasicAuth 基础认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBasicAuth(const int64_t& _basicAuth);

                    /**
                     * 判断参数 BasicAuth 是否已赋值
                     * @return BasicAuth 是否已赋值
                     */
                    bool BasicAuthHasBeenSet() const;

                    /**
                     * 获取该域名对应基础认证配置名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicAuthConfAlias 该域名对应基础认证配置名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBasicAuthConfAlias() const;

                    /**
                     * 设置该域名对应基础认证配置名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BasicAuthConfAlias 该域名对应基础认证配置名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBasicAuthConfAlias(const std::string& _basicAuthConfAlias);

                    /**
                     * 判断参数 BasicAuthConfAlias 是否已赋值
                     * @return BasicAuthConfAlias 是否已赋值
                     */
                    bool BasicAuthConfAliasHasBeenSet() const;

                    /**
                     * 获取该域名对应源站认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealServerCertificateId 该域名对应源站认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRealServerCertificateId() const;

                    /**
                     * 设置该域名对应源站认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealServerCertificateId 该域名对应源站认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealServerCertificateId(const std::string& _realServerCertificateId);

                    /**
                     * 判断参数 RealServerCertificateId 是否已赋值
                     * @return RealServerCertificateId 是否已赋值
                     */
                    bool RealServerCertificateIdHasBeenSet() const;

                    /**
                     * 获取源站认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealServerAuth 源站认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRealServerAuth() const;

                    /**
                     * 设置源站认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealServerAuth 源站认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealServerAuth(const int64_t& _realServerAuth);

                    /**
                     * 判断参数 RealServerAuth 是否已赋值
                     * @return RealServerAuth 是否已赋值
                     */
                    bool RealServerAuthHasBeenSet() const;

                    /**
                     * 获取该域名对应源站认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealServerCertificateAlias 该域名对应源站认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRealServerCertificateAlias() const;

                    /**
                     * 设置该域名对应源站认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealServerCertificateAlias 该域名对应源站认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealServerCertificateAlias(const std::string& _realServerCertificateAlias);

                    /**
                     * 判断参数 RealServerCertificateAlias 是否已赋值
                     * @return RealServerCertificateAlias 是否已赋值
                     */
                    bool RealServerCertificateAliasHasBeenSet() const;

                    /**
                     * 获取该域名对应通道认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GaapCertificateId 该域名对应通道认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGaapCertificateId() const;

                    /**
                     * 设置该域名对应通道认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GaapCertificateId 该域名对应通道认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGaapCertificateId(const std::string& _gaapCertificateId);

                    /**
                     * 判断参数 GaapCertificateId 是否已赋值
                     * @return GaapCertificateId 是否已赋值
                     */
                    bool GaapCertificateIdHasBeenSet() const;

                    /**
                     * 获取通道认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GaapAuth 通道认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGaapAuth() const;

                    /**
                     * 设置通道认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GaapAuth 通道认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGaapAuth(const int64_t& _gaapAuth);

                    /**
                     * 判断参数 GaapAuth 是否已赋值
                     * @return GaapAuth 是否已赋值
                     */
                    bool GaapAuthHasBeenSet() const;

                    /**
                     * 获取该域名对应通道认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GaapCertificateAlias 该域名对应通道认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGaapCertificateAlias() const;

                    /**
                     * 设置该域名对应通道认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GaapCertificateAlias 该域名对应通道认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGaapCertificateAlias(const std::string& _gaapCertificateAlias);

                    /**
                     * 判断参数 GaapCertificateAlias 是否已赋值
                     * @return GaapCertificateAlias 是否已赋值
                     */
                    bool GaapCertificateAliasHasBeenSet() const;

                    /**
                     * 获取源站认证域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealServerCertificateDomain 源站认证域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRealServerCertificateDomain() const;

                    /**
                     * 设置源站认证域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealServerCertificateDomain 源站认证域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealServerCertificateDomain(const std::string& _realServerCertificateDomain);

                    /**
                     * 判断参数 RealServerCertificateDomain 是否已赋值
                     * @return RealServerCertificateDomain 是否已赋值
                     */
                    bool RealServerCertificateDomainHasBeenSet() const;

                    /**
                     * 获取多客户端证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolyClientCertificateAliasInfo 多客户端证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertificateAliasInfo> GetPolyClientCertificateAliasInfo() const;

                    /**
                     * 设置多客户端证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolyClientCertificateAliasInfo 多客户端证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolyClientCertificateAliasInfo(const std::vector<CertificateAliasInfo>& _polyClientCertificateAliasInfo);

                    /**
                     * 判断参数 PolyClientCertificateAliasInfo 是否已赋值
                     * @return PolyClientCertificateAliasInfo 是否已赋值
                     */
                    bool PolyClientCertificateAliasInfoHasBeenSet() const;

                    /**
                     * 获取多源站证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolyRealServerCertificateAliasInfo 多源站证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertificateAliasInfo> GetPolyRealServerCertificateAliasInfo() const;

                    /**
                     * 设置多源站证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolyRealServerCertificateAliasInfo 多源站证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolyRealServerCertificateAliasInfo(const std::vector<CertificateAliasInfo>& _polyRealServerCertificateAliasInfo);

                    /**
                     * 判断参数 PolyRealServerCertificateAliasInfo 是否已赋值
                     * @return PolyRealServerCertificateAliasInfo 是否已赋值
                     */
                    bool PolyRealServerCertificateAliasInfoHasBeenSet() const;

                    /**
                     * 获取域名的状态。
0表示运行中，
1表示变更中，
2表示删除中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainStatus 域名的状态。
0表示运行中，
1表示变更中，
2表示删除中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDomainStatus() const;

                    /**
                     * 设置域名的状态。
0表示运行中，
1表示变更中，
2表示删除中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DomainStatus 域名的状态。
0表示运行中，
1表示变更中，
2表示删除中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomainStatus(const uint64_t& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BanStatus 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BanStatus 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     */
                    bool BanStatusHasBeenSet() const;

                private:

                    /**
                     * 转发规则域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 该域名对应的转发规则列表。
                     */
                    std::vector<RuleInfo> m_ruleSet;
                    bool m_ruleSetHasBeenSet;

                    /**
                     * 该域名对应的服务器证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 该域名对应服务器证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * 该域名对应的客户端证书ID，值为default时，表示使用默认证书（监听器配置的证书）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * 该域名对应客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientCertificateAlias;
                    bool m_clientCertificateAliasHasBeenSet;

                    /**
                     * 该域名对应基础认证配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_basicAuthConfId;
                    bool m_basicAuthConfIdHasBeenSet;

                    /**
                     * 基础认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * 该域名对应基础认证配置名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_basicAuthConfAlias;
                    bool m_basicAuthConfAliasHasBeenSet;

                    /**
                     * 该域名对应源站认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realServerCertificateId;
                    bool m_realServerCertificateIdHasBeenSet;

                    /**
                     * 源站认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_realServerAuth;
                    bool m_realServerAuthHasBeenSet;

                    /**
                     * 该域名对应源站认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realServerCertificateAlias;
                    bool m_realServerCertificateAliasHasBeenSet;

                    /**
                     * 该域名对应通道认证证书ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gaapCertificateId;
                    bool m_gaapCertificateIdHasBeenSet;

                    /**
                     * 通道认证开关，其中：
0，表示未开启；
1，表示已开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gaapAuth;
                    bool m_gaapAuthHasBeenSet;

                    /**
                     * 该域名对应通道认证证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gaapCertificateAlias;
                    bool m_gaapCertificateAliasHasBeenSet;

                    /**
                     * 源站认证域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realServerCertificateDomain;
                    bool m_realServerCertificateDomainHasBeenSet;

                    /**
                     * 多客户端证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertificateAliasInfo> m_polyClientCertificateAliasInfo;
                    bool m_polyClientCertificateAliasInfoHasBeenSet;

                    /**
                     * 多源站证书时，返回多个证书的id和别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertificateAliasInfo> m_polyRealServerCertificateAliasInfo;
                    bool m_polyRealServerCertificateAliasInfoHasBeenSet;

                    /**
                     * 域名的状态。
0表示运行中，
1表示变更中，
2表示删除中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINRULESET_H_
