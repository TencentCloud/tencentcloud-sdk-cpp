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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/L4ProxyRemoteAuth.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 四层代理转发规则详情。
                */
                class L4ProxyRule : public AbstractModel
                {
                public:
                    L4ProxyRule();
                    ~L4ProxyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则 ID。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数请勿填写；在 ModifyL4ProxyRules 作为入参使用时，该参数必填。
                     * @return RuleId 转发规则 ID。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数请勿填写；在 ModifyL4ProxyRules 作为入参使用时，该参数必填。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则 ID。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数请勿填写；在 ModifyL4ProxyRules 作为入参使用时，该参数必填。
                     * @param _ruleId 转发规则 ID。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数请勿填写；在 ModifyL4ProxyRules 作为入参使用时，该参数必填。
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
                     * 获取转发协议。取值有：
<li>TCP：TCP 协议；</li>
<li>UDP：UDP 协议。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @return Protocol 转发协议。取值有：
<li>TCP：TCP 协议；</li>
<li>UDP：UDP 协议。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置转发协议。取值有：
<li>TCP：TCP 协议；</li>
<li>UDP：UDP 协议。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @param _protocol 转发协议。取值有：
<li>TCP：TCP 协议；</li>
<li>UDP：UDP 协议。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
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
                     * 获取转发端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85。表示 81、82、83、84、85 五个端口。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @return PortRange 转发端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85。表示 81、82、83、84、85 五个端口。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * 
                     */
                    std::vector<std::string> GetPortRange() const;

                    /**
                     * 设置转发端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85。表示 81、82、83、84、85 五个端口。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @param _portRange 转发端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85。表示 81、82、83、84、85 五个端口。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * 
                     */
                    void SetPortRange(const std::vector<std::string>& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     * 
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取源站类型，取值有：
<li>IP_DOMAIN：IP/域名源站；</li>
<li>ORIGIN_GROUP：源站组；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @return OriginType 源站类型，取值有：
<li>IP_DOMAIN：IP/域名源站；</li>
<li>ORIGIN_GROUP：源站组；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型，取值有：
<li>IP_DOMAIN：IP/域名源站；</li>
<li>ORIGIN_GROUP：源站组；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @param _originType 源站类型，取值有：
<li>IP_DOMAIN：IP/域名源站；</li>
<li>ORIGIN_GROUP：源站组；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取源站地址：
<li>当 OriginType 为 IP_DOMAIN 时，填写 IP 或域名，如 8.8.8.8 或 test.com ；</li>
<li>当 OriginType 为 ORIGIN_GROUP 时，填写源站组 ID，如 og-537y24vf5b41；</li>
<li>当 OriginType 为 LB 时，填写负载均衡实例 ID，如 lb-2qwk30xf7s9g。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。

                     * @return OriginValue 源站地址：
<li>当 OriginType 为 IP_DOMAIN 时，填写 IP 或域名，如 8.8.8.8 或 test.com ；</li>
<li>当 OriginType 为 ORIGIN_GROUP 时，填写源站组 ID，如 og-537y24vf5b41；</li>
<li>当 OriginType 为 LB 时，填写负载均衡实例 ID，如 lb-2qwk30xf7s9g。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。

                     * 
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置源站地址：
<li>当 OriginType 为 IP_DOMAIN 时，填写 IP 或域名，如 8.8.8.8 或 test.com ；</li>
<li>当 OriginType 为 ORIGIN_GROUP 时，填写源站组 ID，如 og-537y24vf5b41；</li>
<li>当 OriginType 为 LB 时，填写负载均衡实例 ID，如 lb-2qwk30xf7s9g。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。

                     * @param _originValue 源站地址：
<li>当 OriginType 为 IP_DOMAIN 时，填写 IP 或域名，如 8.8.8.8 或 test.com ；</li>
<li>当 OriginType 为 ORIGIN_GROUP 时，填写源站组 ID，如 og-537y24vf5b41；</li>
<li>当 OriginType 为 LB 时，填写负载均衡实例 ID，如 lb-2qwk30xf7s9g。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。

                     * 
                     */
                    void SetOriginValue(const std::vector<std::string>& _originValue);

                    /**
                     * 判断参数 OriginValue 是否已赋值
                     * @return OriginValue 是否已赋值
                     * 
                     */
                    bool OriginValueHasBeenSet() const;

                    /**
                     * 获取源站端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85，表示 81、82、83、84、85 五个端口。填写端口段时，则需要与转发端口段长度保持一致，例如转发端口：80-90，则转发端口：90-100。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @return OriginPortRange 源站端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85，表示 81、82、83、84、85 五个端口。填写端口段时，则需要与转发端口段长度保持一致，例如转发端口：80-90，则转发端口：90-100。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * 
                     */
                    std::string GetOriginPortRange() const;

                    /**
                     * 设置源站端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85，表示 81、82、83、84、85 五个端口。填写端口段时，则需要与转发端口段长度保持一致，例如转发端口：80-90，则转发端口：90-100。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * @param _originPortRange 源站端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85，表示 81、82、83、84、85 五个端口。填写端口段时，则需要与转发端口段长度保持一致，例如转发端口：80-90，则转发端口：90-100。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     * 
                     */
                    void SetOriginPortRange(const std::string& _originPortRange);

                    /**
                     * 判断参数 OriginPortRange 是否已赋值
                     * @return OriginPortRange 是否已赋值
                     * 
                     */
                    bool OriginPortRangeHasBeenSet() const;

                    /**
                     * 获取传递客户端 IP 的形式，取值有：
<li>TOA：TOA（仅 Protocol = TCP 时可选）；</li> 
<li>PPV1：Proxy Protocol 传递，协议版本 V1（仅 Protocol = TCP 时可选）；</li>
<li>PPV2：Proxy Protocol 传递，协议版本 V2；</li> 
<li>SPP：Simple Proxy Protocol 传递，（仅 Protocol = UDP 时可选）；</li> 
<li>OFF：不传递。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 OFF；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @return ClientIPPassThroughMode 传递客户端 IP 的形式，取值有：
<li>TOA：TOA（仅 Protocol = TCP 时可选）；</li> 
<li>PPV1：Proxy Protocol 传递，协议版本 V1（仅 Protocol = TCP 时可选）；</li>
<li>PPV2：Proxy Protocol 传递，协议版本 V2；</li> 
<li>SPP：Simple Proxy Protocol 传递，（仅 Protocol = UDP 时可选）；</li> 
<li>OFF：不传递。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 OFF；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    std::string GetClientIPPassThroughMode() const;

                    /**
                     * 设置传递客户端 IP 的形式，取值有：
<li>TOA：TOA（仅 Protocol = TCP 时可选）；</li> 
<li>PPV1：Proxy Protocol 传递，协议版本 V1（仅 Protocol = TCP 时可选）；</li>
<li>PPV2：Proxy Protocol 传递，协议版本 V2；</li> 
<li>SPP：Simple Proxy Protocol 传递，（仅 Protocol = UDP 时可选）；</li> 
<li>OFF：不传递。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 OFF；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @param _clientIPPassThroughMode 传递客户端 IP 的形式，取值有：
<li>TOA：TOA（仅 Protocol = TCP 时可选）；</li> 
<li>PPV1：Proxy Protocol 传递，协议版本 V1（仅 Protocol = TCP 时可选）；</li>
<li>PPV2：Proxy Protocol 传递，协议版本 V2；</li> 
<li>SPP：Simple Proxy Protocol 传递，（仅 Protocol = UDP 时可选）；</li> 
<li>OFF：不传递。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 OFF；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    void SetClientIPPassThroughMode(const std::string& _clientIPPassThroughMode);

                    /**
                     * 判断参数 ClientIPPassThroughMode 是否已赋值
                     * @return ClientIPPassThroughMode 是否已赋值
                     * 
                     */
                    bool ClientIPPassThroughModeHasBeenSet() const;

                    /**
                     * 获取是否开启会话保持，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 off；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @return SessionPersist 是否开启会话保持，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 off；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    std::string GetSessionPersist() const;

                    /**
                     * 设置是否开启会话保持，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 off；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @param _sessionPersist 是否开启会话保持，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 off；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    void SetSessionPersist(const std::string& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     * 
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取会话保持时间，取值范围为 30-3600，单位为秒。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，仅当 SessionPersist = on 时，该值才会生效，且当 SessionPersist = on ，该值不填写默认为 3600；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @return SessionPersistTime 会话保持时间，取值范围为 30-3600，单位为秒。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，仅当 SessionPersist = on 时，该值才会生效，且当 SessionPersist = on ，该值不填写默认为 3600；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置会话保持时间，取值范围为 30-3600，单位为秒。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，仅当 SessionPersist = on 时，该值才会生效，且当 SessionPersist = on ，该值不填写默认为 3600；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @param _sessionPersistTime 会话保持时间，取值范围为 30-3600，单位为秒。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，仅当 SessionPersist = on 时，该值才会生效，且当 SessionPersist = on ，该值不填写默认为 3600；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     * 
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取规则标签。可输入1-50 个任意字符。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @return RuleTag 规则标签。可输入1-50 个任意字符。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    std::string GetRuleTag() const;

                    /**
                     * 设置规则标签。可输入1-50 个任意字符。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * @param _ruleTag 规则标签。可输入1-50 个任意字符。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     * 
                     */
                    void SetRuleTag(const std::string& _ruleTag);

                    /**
                     * 判断参数 RuleTag 是否已赋值
                     * @return RuleTag 是否已赋值
                     * 
                     */
                    bool RuleTagHasBeenSet() const;

                    /**
                     * 获取规则状态，取值有：
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules、ModifyL4ProxyRules 作为入参使用时，该参数请勿填写。
                     * @return Status 规则状态，取值有：
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules、ModifyL4ProxyRules 作为入参使用时，该参数请勿填写。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则状态，取值有：
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules、ModifyL4ProxyRules 作为入参使用时，该参数请勿填写。
                     * @param _status 规则状态，取值有：
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules、ModifyL4ProxyRules 作为入参使用时，该参数请勿填写。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取BuID。
                     * @return BuId BuID。
                     * 
                     */
                    std::string GetBuId() const;

                    /**
                     * 设置BuID。
                     * @param _buId BuID。
                     * 
                     */
                    void SetBuId(const std::string& _buId);

                    /**
                     * 判断参数 BuId 是否已赋值
                     * @return BuId 是否已赋值
                     * 
                     */
                    bool BuIdHasBeenSet() const;

                    /**
                     * 获取远程鉴权信息。
注意：RemoteAuth 在 CreateL4ProxyRules 或 ModifyL4ProxyRules 不可作为入参使用，如有传此参数，会忽略。在 DescribeL4ProxyRules 返回为空时，表示没有开启远程鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteAuth 远程鉴权信息。
注意：RemoteAuth 在 CreateL4ProxyRules 或 ModifyL4ProxyRules 不可作为入参使用，如有传此参数，会忽略。在 DescribeL4ProxyRules 返回为空时，表示没有开启远程鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    L4ProxyRemoteAuth GetRemoteAuth() const;

                    /**
                     * 设置远程鉴权信息。
注意：RemoteAuth 在 CreateL4ProxyRules 或 ModifyL4ProxyRules 不可作为入参使用，如有传此参数，会忽略。在 DescribeL4ProxyRules 返回为空时，表示没有开启远程鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteAuth 远程鉴权信息。
注意：RemoteAuth 在 CreateL4ProxyRules 或 ModifyL4ProxyRules 不可作为入参使用，如有传此参数，会忽略。在 DescribeL4ProxyRules 返回为空时，表示没有开启远程鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoteAuth(const L4ProxyRemoteAuth& _remoteAuth);

                    /**
                     * 判断参数 RemoteAuth 是否已赋值
                     * @return RemoteAuth 是否已赋值
                     * 
                     */
                    bool RemoteAuthHasBeenSet() const;

                private:

                    /**
                     * 转发规则 ID。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数请勿填写；在 ModifyL4ProxyRules 作为入参使用时，该参数必填。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 转发协议。取值有：
<li>TCP：TCP 协议；</li>
<li>UDP：UDP 协议。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 转发端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85。表示 81、82、83、84、85 五个端口。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     */
                    std::vector<std::string> m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 源站类型，取值有：
<li>IP_DOMAIN：IP/域名源站；</li>
<li>ORIGIN_GROUP：源站组；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 源站地址：
<li>当 OriginType 为 IP_DOMAIN 时，填写 IP 或域名，如 8.8.8.8 或 test.com ；</li>
<li>当 OriginType 为 ORIGIN_GROUP 时，填写源站组 ID，如 og-537y24vf5b41；</li>
<li>当 OriginType 为 LB 时，填写负载均衡实例 ID，如 lb-2qwk30xf7s9g。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。

                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * 源站端口，支持按照以下形式填写：
<li>单端口，如：80；</li>
<li>端口段，如：81-85，表示 81、82、83、84、85 五个端口。填写端口段时，则需要与转发端口段长度保持一致，例如转发端口：80-90，则转发端口：90-100。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数必填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写时表示不修改。
                     */
                    std::string m_originPortRange;
                    bool m_originPortRangeHasBeenSet;

                    /**
                     * 传递客户端 IP 的形式，取值有：
<li>TOA：TOA（仅 Protocol = TCP 时可选）；</li> 
<li>PPV1：Proxy Protocol 传递，协议版本 V1（仅 Protocol = TCP 时可选）；</li>
<li>PPV2：Proxy Protocol 传递，协议版本 V2；</li> 
<li>SPP：Simple Proxy Protocol 传递，（仅 Protocol = UDP 时可选）；</li> 
<li>OFF：不传递。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 OFF；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     */
                    std::string m_clientIPPassThroughMode;
                    bool m_clientIPPassThroughModeHasBeenSet;

                    /**
                     * 是否开启会话保持，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，不填写时默认为 off；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     */
                    std::string m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * 会话保持时间，取值范围为 30-3600，单位为秒。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填，仅当 SessionPersist = on 时，该值才会生效，且当 SessionPersist = on ，该值不填写默认为 3600；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * 规则标签。可输入1-50 个任意字符。
注意：L4ProxyRule 在 CreateL4ProxyRules 作为入参使用时，该参数选填；在 ModifyL4ProxyRules 作为入参使用时，该参数选填，不填写表示不修改。
                     */
                    std::string m_ruleTag;
                    bool m_ruleTagHasBeenSet;

                    /**
                     * 规则状态，取值有：
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
注意：L4ProxyRule 在 CreateL4ProxyRules、ModifyL4ProxyRules 作为入参使用时，该参数请勿填写。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * BuID。
                     */
                    std::string m_buId;
                    bool m_buIdHasBeenSet;

                    /**
                     * 远程鉴权信息。
注意：RemoteAuth 在 CreateL4ProxyRules 或 ModifyL4ProxyRules 不可作为入参使用，如有传此参数，会忽略。在 DescribeL4ProxyRules 返回为空时，表示没有开启远程鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    L4ProxyRemoteAuth m_remoteAuth;
                    bool m_remoteAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYRULE_H_
