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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_NEWL4RULEENTRY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_NEWL4RULEENTRY_H_

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
                * 四层规则结构体
                */
                class NewL4RuleEntry : public AbstractModel
                {
                public:
                    NewL4RuleEntry();
                    ~NewL4RuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发协议，取值[TCP, UDP]
                     * @return Protocol 转发协议，取值[TCP, UDP]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置转发协议，取值[TCP, UDP]
                     * @param _protocol 转发协议，取值[TCP, UDP]
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
                     * 获取转发端口
                     * @return VirtualPort 转发端口
                     * 
                     */
                    uint64_t GetVirtualPort() const;

                    /**
                     * 设置转发端口
                     * @param _virtualPort 转发端口
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
                     * 获取源站端口
                     * @return SourcePort 源站端口
                     * 
                     */
                    uint64_t GetSourcePort() const;

                    /**
                     * 设置源站端口
                     * @param _sourcePort 源站端口
                     * 
                     */
                    void SetSourcePort(const uint64_t& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     * 
                     */
                    bool SourcePortHasBeenSet() const;

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
                     * 获取负载均衡方式，取值[1(加权轮询)，2(源IP hash)]
                     * @return LbType 负载均衡方式，取值[1(加权轮询)，2(源IP hash)]
                     * 
                     */
                    uint64_t GetLbType() const;

                    /**
                     * 设置负载均衡方式，取值[1(加权轮询)，2(源IP hash)]
                     * @param _lbType 负载均衡方式，取值[1(加权轮询)，2(源IP hash)]
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
                     * 获取会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]；
                     * @return KeepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]；
                     * 
                     */
                    uint64_t GetKeepEnable() const;

                    /**
                     * 设置会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]；
                     * @param _keepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]；
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
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
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
                     * 获取移除水印状态，取值[0(关闭)，1(开启)]
                     * @return RemoveSwitch 移除水印状态，取值[0(关闭)，1(开启)]
                     * 
                     */
                    uint64_t GetRemoveSwitch() const;

                    /**
                     * 设置移除水印状态，取值[0(关闭)，1(开启)]
                     * @param _removeSwitch 移除水印状态，取值[0(关闭)，1(开启)]
                     * 
                     */
                    void SetRemoveSwitch(const uint64_t& _removeSwitch);

                    /**
                     * 判断参数 RemoveSwitch 是否已赋值
                     * @return RemoveSwitch 是否已赋值
                     * 
                     */
                    bool RemoveSwitchHasBeenSet() const;

                    /**
                     * 获取规则修改时间
                     * @return ModifyTime 规则修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置规则修改时间
                     * @param _modifyTime 规则修改时间
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
                     * 获取对应地区信息
                     * @return Region 对应地区信息
                     * 
                     */
                    uint64_t GetRegion() const;

                    /**
                     * 设置对应地区信息
                     * @param _region 对应地区信息
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
                     * 获取绑定资源IP信息
                     * @return Ip 绑定资源IP信息
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置绑定资源IP信息
                     * @param _ip 绑定资源IP信息
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
                     * 获取绑定资源Id信息
                     * @return Id 绑定资源Id信息
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置绑定资源Id信息
                     * @param _id 绑定资源Id信息
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 转发协议，取值[TCP, UDP]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 转发端口
                     */
                    uint64_t m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                    /**
                     * 源站端口
                     */
                    uint64_t m_sourcePort;
                    bool m_sourcePortHasBeenSet;

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
                     * 负载均衡方式，取值[1(加权轮询)，2(源IP hash)]
                     */
                    uint64_t m_lbType;
                    bool m_lbTypeHasBeenSet;

                    /**
                     * 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]；
                     */
                    uint64_t m_keepEnable;
                    bool m_keepEnableHasBeenSet;

                    /**
                     * 回源方式，取值[1(域名回源)，2(IP回源)]
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 移除水印状态，取值[0(关闭)，1(开启)]
                     */
                    uint64_t m_removeSwitch;
                    bool m_removeSwitchHasBeenSet;

                    /**
                     * 规则修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 对应地区信息
                     */
                    uint64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 绑定资源IP信息
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 绑定资源Id信息
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_NEWL4RULEENTRY_H_
