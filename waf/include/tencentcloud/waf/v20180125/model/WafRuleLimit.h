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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_WAFRULELIMIT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_WAFRULELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * waf模块的规格
                */
                class WafRuleLimit : public AbstractModel
                {
                public:
                    WafRuleLimit();
                    ~WafRuleLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义CC的规格
                     * @return CC 自定义CC的规格
                     * 
                     */
                    uint64_t GetCC() const;

                    /**
                     * 设置自定义CC的规格
                     * @param _cC 自定义CC的规格
                     * 
                     */
                    void SetCC(const uint64_t& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取自定义策略的规格
                     * @return CustomRule 自定义策略的规格
                     * 
                     */
                    uint64_t GetCustomRule() const;

                    /**
                     * 设置自定义策略的规格
                     * @param _customRule 自定义策略的规格
                     * 
                     */
                    void SetCustomRule(const uint64_t& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取黑白名单的规格
                     * @return IPControl 黑白名单的规格
                     * 
                     */
                    uint64_t GetIPControl() const;

                    /**
                     * 设置黑白名单的规格
                     * @param _iPControl 黑白名单的规格
                     * 
                     */
                    void SetIPControl(const uint64_t& _iPControl);

                    /**
                     * 判断参数 IPControl 是否已赋值
                     * @return IPControl 是否已赋值
                     * 
                     */
                    bool IPControlHasBeenSet() const;

                    /**
                     * 获取信息防泄漏的规格
                     * @return AntiLeak 信息防泄漏的规格
                     * 
                     */
                    uint64_t GetAntiLeak() const;

                    /**
                     * 设置信息防泄漏的规格
                     * @param _antiLeak 信息防泄漏的规格
                     * 
                     */
                    void SetAntiLeak(const uint64_t& _antiLeak);

                    /**
                     * 判断参数 AntiLeak 是否已赋值
                     * @return AntiLeak 是否已赋值
                     * 
                     */
                    bool AntiLeakHasBeenSet() const;

                    /**
                     * 获取防篡改的规格
                     * @return AntiTamper 防篡改的规格
                     * 
                     */
                    uint64_t GetAntiTamper() const;

                    /**
                     * 设置防篡改的规格
                     * @param _antiTamper 防篡改的规格
                     * 
                     */
                    void SetAntiTamper(const uint64_t& _antiTamper);

                    /**
                     * 判断参数 AntiTamper 是否已赋值
                     * @return AntiTamper 是否已赋值
                     * 
                     */
                    bool AntiTamperHasBeenSet() const;

                    /**
                     * 获取紧急CC的规格
                     * @return AutoCC 紧急CC的规格
                     * 
                     */
                    uint64_t GetAutoCC() const;

                    /**
                     * 设置紧急CC的规格
                     * @param _autoCC 紧急CC的规格
                     * 
                     */
                    void SetAutoCC(const uint64_t& _autoCC);

                    /**
                     * 判断参数 AutoCC 是否已赋值
                     * @return AutoCC 是否已赋值
                     * 
                     */
                    bool AutoCCHasBeenSet() const;

                    /**
                     * 获取地域封禁的规格
                     * @return AreaBan 地域封禁的规格
                     * 
                     */
                    uint64_t GetAreaBan() const;

                    /**
                     * 设置地域封禁的规格
                     * @param _areaBan 地域封禁的规格
                     * 
                     */
                    void SetAreaBan(const uint64_t& _areaBan);

                    /**
                     * 判断参数 AreaBan 是否已赋值
                     * @return AreaBan 是否已赋值
                     * 
                     */
                    bool AreaBanHasBeenSet() const;

                    /**
                     * 获取自定义CC中配置session
                     * @return CCSession 自定义CC中配置session
                     * 
                     */
                    uint64_t GetCCSession() const;

                    /**
                     * 设置自定义CC中配置session
                     * @param _cCSession 自定义CC中配置session
                     * 
                     */
                    void SetCCSession(const uint64_t& _cCSession);

                    /**
                     * 判断参数 CCSession 是否已赋值
                     * @return CCSession 是否已赋值
                     * 
                     */
                    bool CCSessionHasBeenSet() const;

                    /**
                     * 获取AI的规格
                     * @return AI AI的规格
                     * 
                     */
                    uint64_t GetAI() const;

                    /**
                     * 设置AI的规格
                     * @param _aI AI的规格
                     * 
                     */
                    void SetAI(const uint64_t& _aI);

                    /**
                     * 判断参数 AI 是否已赋值
                     * @return AI 是否已赋值
                     * 
                     */
                    bool AIHasBeenSet() const;

                    /**
                     * 获取精准白名单的规格
                     * @return CustomWhite 精准白名单的规格
                     * 
                     */
                    uint64_t GetCustomWhite() const;

                    /**
                     * 设置精准白名单的规格
                     * @param _customWhite 精准白名单的规格
                     * 
                     */
                    void SetCustomWhite(const uint64_t& _customWhite);

                    /**
                     * 判断参数 CustomWhite 是否已赋值
                     * @return CustomWhite 是否已赋值
                     * 
                     */
                    bool CustomWhiteHasBeenSet() const;

                    /**
                     * 获取api安全的规格
                     * @return ApiSecurity api安全的规格
                     * 
                     */
                    uint64_t GetApiSecurity() const;

                    /**
                     * 设置api安全的规格
                     * @param _apiSecurity api安全的规格
                     * 
                     */
                    void SetApiSecurity(const uint64_t& _apiSecurity);

                    /**
                     * 判断参数 ApiSecurity 是否已赋值
                     * @return ApiSecurity 是否已赋值
                     * 
                     */
                    bool ApiSecurityHasBeenSet() const;

                    /**
                     * 获取客户端流量标记的规格
                     * @return ClientMsg 客户端流量标记的规格
                     * 
                     */
                    uint64_t GetClientMsg() const;

                    /**
                     * 设置客户端流量标记的规格
                     * @param _clientMsg 客户端流量标记的规格
                     * 
                     */
                    void SetClientMsg(const uint64_t& _clientMsg);

                    /**
                     * 判断参数 ClientMsg 是否已赋值
                     * @return ClientMsg 是否已赋值
                     * 
                     */
                    bool ClientMsgHasBeenSet() const;

                    /**
                     * 获取流量标记的规格
                     * @return TrafficMarking 流量标记的规格
                     * 
                     */
                    uint64_t GetTrafficMarking() const;

                    /**
                     * 设置流量标记的规格
                     * @param _trafficMarking 流量标记的规格
                     * 
                     */
                    void SetTrafficMarking(const uint64_t& _trafficMarking);

                    /**
                     * 判断参数 TrafficMarking 是否已赋值
                     * @return TrafficMarking 是否已赋值
                     * 
                     */
                    bool TrafficMarkingHasBeenSet() const;

                private:

                    /**
                     * 自定义CC的规格
                     */
                    uint64_t m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * 自定义策略的规格
                     */
                    uint64_t m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * 黑白名单的规格
                     */
                    uint64_t m_iPControl;
                    bool m_iPControlHasBeenSet;

                    /**
                     * 信息防泄漏的规格
                     */
                    uint64_t m_antiLeak;
                    bool m_antiLeakHasBeenSet;

                    /**
                     * 防篡改的规格
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * 紧急CC的规格
                     */
                    uint64_t m_autoCC;
                    bool m_autoCCHasBeenSet;

                    /**
                     * 地域封禁的规格
                     */
                    uint64_t m_areaBan;
                    bool m_areaBanHasBeenSet;

                    /**
                     * 自定义CC中配置session
                     */
                    uint64_t m_cCSession;
                    bool m_cCSessionHasBeenSet;

                    /**
                     * AI的规格
                     */
                    uint64_t m_aI;
                    bool m_aIHasBeenSet;

                    /**
                     * 精准白名单的规格
                     */
                    uint64_t m_customWhite;
                    bool m_customWhiteHasBeenSet;

                    /**
                     * api安全的规格
                     */
                    uint64_t m_apiSecurity;
                    bool m_apiSecurityHasBeenSet;

                    /**
                     * 客户端流量标记的规格
                     */
                    uint64_t m_clientMsg;
                    bool m_clientMsgHasBeenSet;

                    /**
                     * 流量标记的规格
                     */
                    uint64_t m_trafficMarking;
                    bool m_trafficMarkingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_WAFRULELIMIT_H_
