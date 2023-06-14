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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCPOLICY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCRule.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * cc自定义规则
                */
                class CCPolicy : public AbstractModel
                {
                public:
                    CCPolicy();
                    ~CCPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
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
                     * 获取匹配模式，取值[matching(匹配模式), speedlimit(限速模式)]
                     * @return Smode 匹配模式，取值[matching(匹配模式), speedlimit(限速模式)]
                     * 
                     */
                    std::string GetSmode() const;

                    /**
                     * 设置匹配模式，取值[matching(匹配模式), speedlimit(限速模式)]
                     * @param _smode 匹配模式，取值[matching(匹配模式), speedlimit(限速模式)]
                     * 
                     */
                    void SetSmode(const std::string& _smode);

                    /**
                     * 判断参数 Smode 是否已赋值
                     * @return Smode 是否已赋值
                     * 
                     */
                    bool SmodeHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return SetId 策略id
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置策略id
                     * @param _setId 策略id
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取每分钟限制的次数
                     * @return Frequency 每分钟限制的次数
                     * 
                     */
                    uint64_t GetFrequency() const;

                    /**
                     * 设置每分钟限制的次数
                     * @param _frequency 每分钟限制的次数
                     * 
                     */
                    void SetFrequency(const uint64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取执行策略模式，拦截或者验证码，取值[alg（验证码）, drop（拦截）]
                     * @return ExeMode 执行策略模式，拦截或者验证码，取值[alg（验证码）, drop（拦截）]
                     * 
                     */
                    std::string GetExeMode() const;

                    /**
                     * 设置执行策略模式，拦截或者验证码，取值[alg（验证码）, drop（拦截）]
                     * @param _exeMode 执行策略模式，拦截或者验证码，取值[alg（验证码）, drop（拦截）]
                     * 
                     */
                    void SetExeMode(const std::string& _exeMode);

                    /**
                     * 判断参数 ExeMode 是否已赋值
                     * @return ExeMode 是否已赋值
                     * 
                     */
                    bool ExeModeHasBeenSet() const;

                    /**
                     * 获取生效开关
                     * @return Switch 生效开关
                     * 
                     */
                    uint64_t GetSwitch() const;

                    /**
                     * 设置生效开关
                     * @param _switch 生效开关
                     * 
                     */
                    void SetSwitch(const uint64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取规则列表
                     * @return RuleList 规则列表
                     * 
                     */
                    std::vector<CCRule> GetRuleList() const;

                    /**
                     * 设置规则列表
                     * @param _ruleList 规则列表
                     * 
                     */
                    void SetRuleList(const std::vector<CCRule>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取IP列表，如果不填时，请传空数组但不能为null；
                     * @return IpList IP列表，如果不填时，请传空数组但不能为null；
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP列表，如果不填时，请传空数组但不能为null；
                     * @param _ipList IP列表，如果不填时，请传空数组但不能为null；
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取cc防护类型，取值[http，https]
                     * @return Protocol cc防护类型，取值[http，https]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置cc防护类型，取值[http，https]
                     * @param _protocol cc防护类型，取值[http，https]
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
                     * 获取可选字段，表示HTTPS的CC防护域名对应的转发规则ID;
                     * @return RuleId 可选字段，表示HTTPS的CC防护域名对应的转发规则ID;
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置可选字段，表示HTTPS的CC防护域名对应的转发规则ID;
                     * @param _ruleId 可选字段，表示HTTPS的CC防护域名对应的转发规则ID;
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
                     * 获取HTTPS的CC防护域名
                     * @return Domain HTTPS的CC防护域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置HTTPS的CC防护域名
                     * @param _domain HTTPS的CC防护域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 匹配模式，取值[matching(匹配模式), speedlimit(限速模式)]
                     */
                    std::string m_smode;
                    bool m_smodeHasBeenSet;

                    /**
                     * 策略id
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * 每分钟限制的次数
                     */
                    uint64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 执行策略模式，拦截或者验证码，取值[alg（验证码）, drop（拦截）]
                     */
                    std::string m_exeMode;
                    bool m_exeModeHasBeenSet;

                    /**
                     * 生效开关
                     */
                    uint64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<CCRule> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * IP列表，如果不填时，请传空数组但不能为null；
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * cc防护类型，取值[http，https]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 可选字段，表示HTTPS的CC防护域名对应的转发规则ID;
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * HTTPS的CC防护域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCPOLICY_H_
