/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBRUTEATTACKBANSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBRUTEATTACKBANSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyBruteAttackBanStatus请求参数结构体
                */
                class ModifyBruteAttackBanStatusRequest : public AbstractModel
                {
                public:
                    ModifyBruteAttackBanStatusRequest();
                    ~ModifyBruteAttackBanStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启智能过白模式</p>
                     * @return OpenSmartMode <p>是否开启智能过白模式</p>
                     * 
                     */
                    bool GetOpenSmartMode() const;

                    /**
                     * 设置<p>是否开启智能过白模式</p>
                     * @param _openSmartMode <p>是否开启智能过白模式</p>
                     * 
                     */
                    void SetOpenSmartMode(const bool& _openSmartMode);

                    /**
                     * 判断参数 OpenSmartMode 是否已赋值
                     * @return OpenSmartMode 是否已赋值
                     * 
                     */
                    bool OpenSmartModeHasBeenSet() const;

                    /**
                     * 获取<p>是否阻断情报黑IP</p>
                     * @return BanBlackIp <p>是否阻断情报黑IP</p>
                     * 
                     */
                    bool GetBanBlackIp() const;

                    /**
                     * 设置<p>是否阻断情报黑IP</p>
                     * @param _banBlackIp <p>是否阻断情报黑IP</p>
                     * 
                     */
                    void SetBanBlackIp(const bool& _banBlackIp);

                    /**
                     * 判断参数 BanBlackIp 是否已赋值
                     * @return BanBlackIp 是否已赋值
                     * 
                     */
                    bool BanBlackIpHasBeenSet() const;

                    /**
                     * 获取<p>是否阻断漏洞黑IP</p>
                     * @return BanVulIp <p>是否阻断漏洞黑IP</p>
                     * 
                     */
                    bool GetBanVulIp() const;

                    /**
                     * 设置<p>是否阻断漏洞黑IP</p>
                     * @param _banVulIp <p>是否阻断漏洞黑IP</p>
                     * 
                     */
                    void SetBanVulIp(const bool& _banVulIp);

                    /**
                     * 判断参数 BanVulIp 是否已赋值
                     * @return BanVulIp 是否已赋值
                     * 
                     */
                    bool BanVulIpHasBeenSet() const;

                    /**
                     * 获取<p>是否开启规则阻断</p>
                     * @return BanByRule <p>是否开启规则阻断</p>
                     * 
                     */
                    bool GetBanByRule() const;

                    /**
                     * 设置<p>是否开启规则阻断</p>
                     * @param _banByRule <p>是否开启规则阻断</p>
                     * 
                     */
                    void SetBanByRule(const bool& _banByRule);

                    /**
                     * 判断参数 BanByRule 是否已赋值
                     * @return BanByRule 是否已赋值
                     * 
                     */
                    bool BanByRuleHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>是否开启智能过白模式</p>
                     */
                    bool m_openSmartMode;
                    bool m_openSmartModeHasBeenSet;

                    /**
                     * <p>是否阻断情报黑IP</p>
                     */
                    bool m_banBlackIp;
                    bool m_banBlackIpHasBeenSet;

                    /**
                     * <p>是否阻断漏洞黑IP</p>
                     */
                    bool m_banVulIp;
                    bool m_banVulIpHasBeenSet;

                    /**
                     * <p>是否开启规则阻断</p>
                     */
                    bool m_banByRule;
                    bool m_banByRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBRUTEATTACKBANSTATUSREQUEST_H_
