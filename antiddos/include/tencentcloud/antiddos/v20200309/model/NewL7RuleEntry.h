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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_NEWL7RULEENTRY_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_NEWL7RULEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/L4RuleSource.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * L7规则
                */
                class NewL7RuleEntry : public AbstractModel
                {
                public:
                    NewL7RuleEntry();
                    ~NewL7RuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发协议，取值[http, https]
                     * @return Protocol 转发协议，取值[http, https]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置转发协议，取值[http, https]
                     * @param _protocol 转发协议，取值[http, https]
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取转发域名
                     * @return Domain 转发域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发域名
                     * @param _domain 转发域名
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
                     * 获取负载均衡方式，取值[1(加权轮询)]
                     * @return LbType 负载均衡方式，取值[1(加权轮询)]
                     * 
                     */
                    uint64_t GetLbType() const;

                    /**
                     * 设置负载均衡方式，取值[1(加权轮询)]
                     * @param _lbType 负载均衡方式，取值[1(加权轮询)]
                     * 
                     */
                    void SetLbType(const uint64_t& _lbType);

                    /**
                     * 判断参数 LbType 是否已赋值
                     * @return LbType 是否已赋值
                     * 
                     */
                    bool LbTypeHasBeenSet() const;

                    /**
                     * 获取会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * @return KeepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * 
                     */
                    uint64_t GetKeepEnable() const;

                    /**
                     * 设置会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * @param _keepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * 
                     */
                    void SetKeepEnable(const uint64_t& _keepEnable);

                    /**
                     * 判断参数 KeepEnable 是否已赋值
                     * @return KeepEnable 是否已赋值
                     * 
                     */
                    bool KeepEnableHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位秒
                     * @return KeepTime 会话保持时间，单位秒
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置会话保持时间，单位秒
                     * @param _keepTime 会话保持时间，单位秒
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                    /**
                     * 获取回源方式，取值[1(域名回源)，2(IP回源)]
                     * @return SourceType 回源方式，取值[1(域名回源)，2(IP回源)]
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置回源方式，取值[1(域名回源)，2(IP回源)]
                     * @param _sourceType 回源方式，取值[1(域名回源)，2(IP回源)]
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取回源列表
                     * @return SourceList 回源列表
                     * 
                     */
                    std::vector<L4RuleSource> GetSourceList() const;

                    /**
                     * 设置回源列表
                     * @param _sourceList 回源列表
                     * 
                     */
                    void SetSourceList(const std::vector<L4RuleSource>& _sourceList);

                    /**
                     * 判断参数 SourceList 是否已赋值
                     * @return SourceList 是否已赋值
                     * 
                     */
                    bool SourceListHasBeenSet() const;

                    /**
                     * 获取区域码
                     * @return Region 区域码
                     * 
                     */
                    uint64_t GetRegion() const;

                    /**
                     * 设置区域码
                     * @param _region 区域码
                     * 
                     */
                    void SetRegion(const uint64_t& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资源Id
                     * @return Id 资源Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源Id
                     * @param _id 资源Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资源Ip
                     * @return Ip 资源Ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置资源Ip
                     * @param _ip 资源Ip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取规则ID，当添加新规则时可以不用填写此字段；当修改或者删除规则时需要填写此字段；
                     * @return RuleId 规则ID，当添加新规则时可以不用填写此字段；当修改或者删除规则时需要填写此字段；
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID，当添加新规则时可以不用填写此字段；当修改或者删除规则时需要填写此字段；
                     * @param _ruleId 规则ID，当添加新规则时可以不用填写此字段；当修改或者删除规则时需要填写此字段；
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return RuleName 规则描述
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则描述
                     * @param _ruleName 规则描述
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取证书来源，当转发协议为https时必须填，取值[2(腾讯云托管证书)]，当转发协议为http时也可以填0
                     * @return CertType 证书来源，当转发协议为https时必须填，取值[2(腾讯云托管证书)]，当转发协议为http时也可以填0
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置证书来源，当转发协议为https时必须填，取值[2(腾讯云托管证书)]，当转发协议为http时也可以填0
                     * @param _certType 证书来源，当转发协议为https时必须填，取值[2(腾讯云托管证书)]，当转发协议为http时也可以填0
                     * 
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * @return SSLId 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * @param _sSLId 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * 
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     * 
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @return Cert 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @param _cert 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @return PrivateKey 当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @param _privateKey 当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * @return Status 规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * @param _status 规则状态，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取cc防护状态，取值[0(关闭), 1(开启)]
                     * @return CCStatus cc防护状态，取值[0(关闭), 1(开启)]
                     * 
                     */
                    uint64_t GetCCStatus() const;

                    /**
                     * 设置cc防护状态，取值[0(关闭), 1(开启)]
                     * @param _cCStatus cc防护状态，取值[0(关闭), 1(开启)]
                     * 
                     */
                    void SetCCStatus(const uint64_t& _cCStatus);

                    /**
                     * 判断参数 CCStatus 是否已赋值
                     * @return CCStatus 是否已赋值
                     * 
                     */
                    bool CCStatusHasBeenSet() const;

                    /**
                     * 获取HTTPS协议的CC防护状态，取值[0(关闭), 1(开启)]
                     * @return CCEnable HTTPS协议的CC防护状态，取值[0(关闭), 1(开启)]
                     * 
                     */
                    uint64_t GetCCEnable() const;

                    /**
                     * 设置HTTPS协议的CC防护状态，取值[0(关闭), 1(开启)]
                     * @param _cCEnable HTTPS协议的CC防护状态，取值[0(关闭), 1(开启)]
                     * 
                     */
                    void SetCCEnable(const uint64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     * 
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取HTTPS协议的CC防护阈值（已废弃）
                     * @return CCThreshold HTTPS协议的CC防护阈值（已废弃）
                     * 
                     */
                    uint64_t GetCCThreshold() const;

                    /**
                     * 设置HTTPS协议的CC防护阈值（已废弃）
                     * @param _cCThreshold HTTPS协议的CC防护阈值（已废弃）
                     * 
                     */
                    void SetCCThreshold(const uint64_t& _cCThreshold);

                    /**
                     * 判断参数 CCThreshold 是否已赋值
                     * @return CCThreshold 是否已赋值
                     * 
                     */
                    bool CCThresholdHasBeenSet() const;

                    /**
                     * 获取HTTPS协议的CC防护阈值 -1：默认防御阈值
0: 关闭
大于0：自定义防护阈值
                     * @return CCThresholdNew HTTPS协议的CC防护阈值 -1：默认防御阈值
0: 关闭
大于0：自定义防护阈值
                     * 
                     */
                    uint64_t GetCCThresholdNew() const;

                    /**
                     * 设置HTTPS协议的CC防护阈值 -1：默认防御阈值
0: 关闭
大于0：自定义防护阈值
                     * @param _cCThresholdNew HTTPS协议的CC防护阈值 -1：默认防御阈值
0: 关闭
大于0：自定义防护阈值
                     * 
                     */
                    void SetCCThresholdNew(const uint64_t& _cCThresholdNew);

                    /**
                     * 判断参数 CCThresholdNew 是否已赋值
                     * @return CCThresholdNew 是否已赋值
                     * 
                     */
                    bool CCThresholdNewHasBeenSet() const;

                    /**
                     * 获取HTTPS协议的CC防护等级
                     * @return CCLevel HTTPS协议的CC防护等级
                     * 
                     */
                    std::string GetCCLevel() const;

                    /**
                     * 设置HTTPS协议的CC防护等级
                     * @param _cCLevel HTTPS协议的CC防护等级
                     * 
                     */
                    void SetCCLevel(const std::string& _cCLevel);

                    /**
                     * 判断参数 CCLevel 是否已赋值
                     * @return CCLevel 是否已赋值
                     * 
                     */
                    bool CCLevelHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取是否开启Https协议使用Http回源，取值[0(关闭), 1(开启)]，不填写默认是关闭
                     * @return HttpsToHttpEnable 是否开启Https协议使用Http回源，取值[0(关闭), 1(开启)]，不填写默认是关闭
                     * 
                     */
                    uint64_t GetHttpsToHttpEnable() const;

                    /**
                     * 设置是否开启Https协议使用Http回源，取值[0(关闭), 1(开启)]，不填写默认是关闭
                     * @param _httpsToHttpEnable 是否开启Https协议使用Http回源，取值[0(关闭), 1(开启)]，不填写默认是关闭
                     * 
                     */
                    void SetHttpsToHttpEnable(const uint64_t& _httpsToHttpEnable);

                    /**
                     * 判断参数 HttpsToHttpEnable 是否已赋值
                     * @return HttpsToHttpEnable 是否已赋值
                     * 
                     */
                    bool HttpsToHttpEnableHasBeenSet() const;

                    /**
                     * 获取接入端口值
                     * @return VirtualPort 接入端口值
                     * 
                     */
                    uint64_t GetVirtualPort() const;

                    /**
                     * 设置接入端口值
                     * @param _virtualPort 接入端口值
                     * 
                     */
                    void SetVirtualPort(const uint64_t& _virtualPort);

                    /**
                     * 判断参数 VirtualPort 是否已赋值
                     * @return VirtualPort 是否已赋值
                     * 
                     */
                    bool VirtualPortHasBeenSet() const;

                    /**
                     * 获取http强制跳转https，1表示打开，0表示关闭
                     * @return RewriteHttps http强制跳转https，1表示打开，0表示关闭
                     * 
                     */
                    uint64_t GetRewriteHttps() const;

                    /**
                     * 设置http强制跳转https，1表示打开，0表示关闭
                     * @param _rewriteHttps http强制跳转https，1表示打开，0表示关闭
                     * 
                     */
                    void SetRewriteHttps(const uint64_t& _rewriteHttps);

                    /**
                     * 判断参数 RewriteHttps 是否已赋值
                     * @return RewriteHttps 是否已赋值
                     * 
                     */
                    bool RewriteHttpsHasBeenSet() const;

                    /**
                     * 获取规则配置失败时的详细错误原因(仅当Status=2时有效)，1001证书不存在，1002证书获取失败，1003证书上传失败，1004证书已过期
                     * @return ErrCode 规则配置失败时的详细错误原因(仅当Status=2时有效)，1001证书不存在，1002证书获取失败，1003证书上传失败，1004证书已过期
                     * 
                     */
                    uint64_t GetErrCode() const;

                    /**
                     * 设置规则配置失败时的详细错误原因(仅当Status=2时有效)，1001证书不存在，1002证书获取失败，1003证书上传失败，1004证书已过期
                     * @param _errCode 规则配置失败时的详细错误原因(仅当Status=2时有效)，1001证书不存在，1002证书获取失败，1003证书上传失败，1004证书已过期
                     * 
                     */
                    void SetErrCode(const uint64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const uint64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

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
                     * 会话保持时间，单位秒
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                    /**
                     * 回源方式，取值[1(域名回源)，2(IP回源)]
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 回源列表
                     */
                    std::vector<L4RuleSource> m_sourceList;
                    bool m_sourceListHasBeenSet;

                    /**
                     * 区域码
                     */
                    uint64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资源Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源Ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 规则ID，当添加新规则时可以不用填写此字段；当修改或者删除规则时需要填写此字段；
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 证书来源，当转发协议为https时必须填，取值[2(腾讯云托管证书)]，当转发协议为http时也可以填0
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
                     * 当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

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
                     * HTTPS协议的CC防护状态，取值[0(关闭), 1(开启)]
                     */
                    uint64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * HTTPS协议的CC防护阈值（已废弃）
                     */
                    uint64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                    /**
                     * HTTPS协议的CC防护阈值 -1：默认防御阈值
0: 关闭
大于0：自定义防护阈值
                     */
                    uint64_t m_cCThresholdNew;
                    bool m_cCThresholdNewHasBeenSet;

                    /**
                     * HTTPS协议的CC防护等级
                     */
                    std::string m_cCLevel;
                    bool m_cCLevelHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 是否开启Https协议使用Http回源，取值[0(关闭), 1(开启)]，不填写默认是关闭
                     */
                    uint64_t m_httpsToHttpEnable;
                    bool m_httpsToHttpEnableHasBeenSet;

                    /**
                     * 接入端口值
                     */
                    uint64_t m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                    /**
                     * http强制跳转https，1表示打开，0表示关闭
                     */
                    uint64_t m_rewriteHttps;
                    bool m_rewriteHttpsHasBeenSet;

                    /**
                     * 规则配置失败时的详细错误原因(仅当Status=2时有效)，1001证书不存在，1002证书获取失败，1003证书上传失败，1004证书已过期
                     */
                    uint64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 版本
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_NEWL7RULEENTRY_H_
