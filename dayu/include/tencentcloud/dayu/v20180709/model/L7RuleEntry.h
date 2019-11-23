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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEENTRY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4RuleSource.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * L7规则
                */
                class L7RuleEntry : public AbstractModel
                {
                public:
                    L7RuleEntry();
                    ~L7RuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发协议，取值[http, https]
                     * @return Protocol 转发协议，取值[http, https]
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置转发协议，取值[http, https]
                     * @param Protocol 转发协议，取值[http, https]
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取转发域名
                     * @return Domain 转发域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发域名
                     * @param Domain 转发域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取回源方式，取值[1(域名回源)，2(IP回源)]
                     * @return SourceType 回源方式，取值[1(域名回源)，2(IP回源)]
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置回源方式，取值[1(域名回源)，2(IP回源)]
                     * @param SourceType 回源方式，取值[1(域名回源)，2(IP回源)]
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位秒
                     * @return KeepTime 会话保持时间，单位秒
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置会话保持时间，单位秒
                     * @param KeepTime 会话保持时间，单位秒
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     */
                    bool KeepTimeHasBeenSet() const;

                    /**
                     * 获取回源列表
                     * @return SourceList 回源列表
                     */
                    std::vector<L4RuleSource> GetSourceList() const;

                    /**
                     * 设置回源列表
                     * @param SourceList 回源列表
                     */
                    void SetSourceList(const std::vector<L4RuleSource>& _sourceList);

                    /**
                     * 判断参数 SourceList 是否已赋值
                     * @return SourceList 是否已赋值
                     */
                    bool SourceListHasBeenSet() const;

                    /**
                     * 获取负载均衡方式，取值[1(加权轮询)]
                     * @return LbType 负载均衡方式，取值[1(加权轮询)]
                     */
                    uint64_t GetLbType() const;

                    /**
                     * 设置负载均衡方式，取值[1(加权轮询)]
                     * @param LbType 负载均衡方式，取值[1(加权轮询)]
                     */
                    void SetLbType(const uint64_t& _lbType);

                    /**
                     * 判断参数 LbType 是否已赋值
                     * @return LbType 是否已赋值
                     */
                    bool LbTypeHasBeenSet() const;

                    /**
                     * 获取会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * @return KeepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     */
                    uint64_t GetKeepEnable() const;

                    /**
                     * 设置会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * @param KeepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     */
                    void SetKeepEnable(const uint64_t& _keepEnable);

                    /**
                     * 判断参数 KeepEnable 是否已赋值
                     * @return KeepEnable 是否已赋值
                     */
                    bool KeepEnableHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param RuleId 规则ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取证书来源，当为协议为https协议时必须填，取值[2(腾讯云托管证书)]，当协议为http时也可以填0
                     * @return CertType 证书来源，当为协议为https协议时必须填，取值[2(腾讯云托管证书)]，当协议为http时也可以填0
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置证书来源，当为协议为https协议时必须填，取值[2(腾讯云托管证书)]，当协议为http时也可以填0
                     * @param CertType 证书来源，当为协议为https协议时必须填，取值[2(腾讯云托管证书)]，当协议为http时也可以填0
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * @return SSLId 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * @param SSLId 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @return Cert 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    std::string GetCert() const;

                    /**
                     * 设置当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @param Cert 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取当证书来源为自有证书时，此字段必须填写证书秘钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @return PrivateKey 当证书来源为自有证书时，此字段必须填写证书秘钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置当证书来源为自有证书时，此字段必须填写证书秘钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @param PrivateKey 当证书来源为自有证书时，此字段必须填写证书秘钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return RuleName 规则描述
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则描述
                     * @param RuleName 规则描述
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * @return Status 规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * @param Status 规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取cc防护状态，取值[0(关闭), 1(开启)]
                     * @return CCStatus cc防护状态，取值[0(关闭), 1(开启)]
                     */
                    uint64_t GetCCStatus() const;

                    /**
                     * 设置cc防护状态，取值[0(关闭), 1(开启)]
                     * @param CCStatus cc防护状态，取值[0(关闭), 1(开启)]
                     */
                    void SetCCStatus(const uint64_t& _cCStatus);

                    /**
                     * 判断参数 CCStatus 是否已赋值
                     * @return CCStatus 是否已赋值
                     */
                    bool CCStatusHasBeenSet() const;

                    /**
                     * 获取https的CC防护状态，取值[0(关闭), 1(开启)]
                     * @return CCEnable https的CC防护状态，取值[0(关闭), 1(开启)]
                     */
                    uint64_t GetCCEnable() const;

                    /**
                     * 设置https的CC防护状态，取值[0(关闭), 1(开启)]
                     * @param CCEnable https的CC防护状态，取值[0(关闭), 1(开启)]
                     */
                    void SetCCEnable(const uint64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取https的CC防护阈值
                     * @return CCThreshold https的CC防护阈值
                     */
                    uint64_t GetCCThreshold() const;

                    /**
                     * 设置https的CC防护阈值
                     * @param CCThreshold https的CC防护阈值
                     */
                    void SetCCThreshold(const uint64_t& _cCThreshold);

                    /**
                     * 判断参数 CCThreshold 是否已赋值
                     * @return CCThreshold 是否已赋值
                     */
                    bool CCThresholdHasBeenSet() const;

                    /**
                     * 获取https的CC防护等级
                     * @return CCLevel https的CC防护等级
                     */
                    std::string GetCCLevel() const;

                    /**
                     * 设置https的CC防护等级
                     * @param CCLevel https的CC防护等级
                     */
                    void SetCCLevel(const std::string& _cCLevel);

                    /**
                     * 判断参数 CCLevel 是否已赋值
                     * @return CCLevel 是否已赋值
                     */
                    bool CCLevelHasBeenSet() const;

                private:

                    /**
                     * 转发协议，取值[http, https]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 转发域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 回源方式，取值[1(域名回源)，2(IP回源)]
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 会话保持时间，单位秒
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                    /**
                     * 回源列表
                     */
                    std::vector<L4RuleSource> m_sourceList;
                    bool m_sourceListHasBeenSet;

                    /**
                     * 负载均衡方式，取值[1(加权轮询)]
                     */
                    uint64_t m_lbType;
                    bool m_lbTypeHasBeenSet;

                    /**
                     * 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     */
                    uint64_t m_keepEnable;
                    bool m_keepEnableHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 证书来源，当为协议为https协议时必须填，取值[2(腾讯云托管证书)]，当协议为http时也可以填0
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 当证书来源为自有证书时，此字段必须填写证书秘钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * cc防护状态，取值[0(关闭), 1(开启)]
                     */
                    uint64_t m_cCStatus;
                    bool m_cCStatusHasBeenSet;

                    /**
                     * https的CC防护状态，取值[0(关闭), 1(开启)]
                     */
                    uint64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * https的CC防护阈值
                     */
                    uint64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                    /**
                     * https的CC防护等级
                     */
                    std::string m_cCLevel;
                    bool m_cCLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEENTRY_H_
