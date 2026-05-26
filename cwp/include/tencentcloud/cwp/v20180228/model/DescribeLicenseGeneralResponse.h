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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseGeneral返回参数结构体
                */
                class DescribeLicenseGeneralResponse : public AbstractModel
                {
                public:
                    DescribeLicenseGeneralResponse();
                    ~DescribeLicenseGeneralResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总授权数 (包含隔离,过期等不可用状态)</p>
                     * @return LicenseCnt <p>总授权数 (包含隔离,过期等不可用状态)</p>
                     * 
                     */
                    uint64_t GetLicenseCnt() const;

                    /**
                     * 判断参数 LicenseCnt 是否已赋值
                     * @return LicenseCnt 是否已赋值
                     * 
                     */
                    bool LicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>可用授权数</p>
                     * @return AvailableLicenseCnt <p>可用授权数</p>
                     * 
                     */
                    uint64_t GetAvailableLicenseCnt() const;

                    /**
                     * 判断参数 AvailableLicenseCnt 是否已赋值
                     * @return AvailableLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>可用专业版授权数(包含后付费).</p>
                     * @return AvailableProVersionLicenseCnt <p>可用专业版授权数(包含后付费).</p>
                     * 
                     */
                    uint64_t GetAvailableProVersionLicenseCnt() const;

                    /**
                     * 判断参数 AvailableProVersionLicenseCnt 是否已赋值
                     * @return AvailableProVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableProVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>可用旗舰版授权数</p>
                     * @return AvailableFlagshipVersionLicenseCnt <p>可用旗舰版授权数</p>
                     * 
                     */
                    uint64_t GetAvailableFlagshipVersionLicenseCnt() const;

                    /**
                     * 判断参数 AvailableFlagshipVersionLicenseCnt 是否已赋值
                     * @return AvailableFlagshipVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableFlagshipVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>即将到期授权数 (15天内到期的)</p>
                     * @return NearExpiryLicenseCnt <p>即将到期授权数 (15天内到期的)</p>
                     * 
                     */
                    uint64_t GetNearExpiryLicenseCnt() const;

                    /**
                     * 判断参数 NearExpiryLicenseCnt 是否已赋值
                     * @return NearExpiryLicenseCnt 是否已赋值
                     * 
                     */
                    bool NearExpiryLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>已到期授权数(不包含已删除的记录)</p>
                     * @return ExpireLicenseCnt <p>已到期授权数(不包含已删除的记录)</p>
                     * 
                     */
                    uint64_t GetExpireLicenseCnt() const;

                    /**
                     * 判断参数 ExpireLicenseCnt 是否已赋值
                     * @return ExpireLicenseCnt 是否已赋值
                     * 
                     */
                    bool ExpireLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>自动升级开关状态,默认 false,  true 开启, false 关闭</p>
                     * @return AutoOpenStatus <p>自动升级开关状态,默认 false,  true 开启, false 关闭</p>
                     * 
                     */
                    bool GetAutoOpenStatus() const;

                    /**
                     * 判断参数 AutoOpenStatus 是否已赋值
                     * @return AutoOpenStatus 是否已赋值
                     * 
                     */
                    bool AutoOpenStatusHasBeenSet() const;

                    /**
                     * 获取<p>PROVERSION_POSTPAY 专业版-后付费, PROVERSION_PREPAY 专业版-预付费, FLAGSHIP_PREPAY 旗舰版-预付费</p>
                     * @return ProtectType <p>PROVERSION_POSTPAY 专业版-后付费, PROVERSION_PREPAY 专业版-预付费, FLAGSHIP_PREPAY 旗舰版-预付费</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取<p>历史是否开通过自动升级开关</p>
                     * @return IsOpenStatusHistory <p>历史是否开通过自动升级开关</p>
                     * 
                     */
                    bool GetIsOpenStatusHistory() const;

                    /**
                     * 判断参数 IsOpenStatusHistory 是否已赋值
                     * @return IsOpenStatusHistory 是否已赋值
                     * 
                     */
                    bool IsOpenStatusHistoryHasBeenSet() const;

                    /**
                     * 获取<p>已使用授权数</p>
                     * @return UsedLicenseCnt <p>已使用授权数</p>
                     * 
                     */
                    uint64_t GetUsedLicenseCnt() const;

                    /**
                     * 判断参数 UsedLicenseCnt 是否已赋值
                     * @return UsedLicenseCnt 是否已赋值
                     * 
                     */
                    bool UsedLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>未到期授权数</p>
                     * @return NotExpiredLicenseCnt <p>未到期授权数</p>
                     * 
                     */
                    uint64_t GetNotExpiredLicenseCnt() const;

                    /**
                     * 判断参数 NotExpiredLicenseCnt 是否已赋值
                     * @return NotExpiredLicenseCnt 是否已赋值
                     * 
                     */
                    bool NotExpiredLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>旗舰版总授权数(有效订单)</p>
                     * @return FlagshipVersionLicenseCnt <p>旗舰版总授权数(有效订单)</p>
                     * 
                     */
                    uint64_t GetFlagshipVersionLicenseCnt() const;

                    /**
                     * 判断参数 FlagshipVersionLicenseCnt 是否已赋值
                     * @return FlagshipVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool FlagshipVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>专业版总授权数(有效订单)</p>
                     * @return ProVersionLicenseCnt <p>专业版总授权数(有效订单)</p>
                     * 
                     */
                    uint64_t GetProVersionLicenseCnt() const;

                    /**
                     * 判断参数 ProVersionLicenseCnt 是否已赋值
                     * @return ProVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool ProVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>轻量版总授权数(有效订单的授权数)</p>
                     * @return CwpVersionLicenseCnt <p>轻量版总授权数(有效订单的授权数)</p>
                     * 
                     */
                    uint64_t GetCwpVersionLicenseCnt() const;

                    /**
                     * 判断参数 CwpVersionLicenseCnt 是否已赋值
                     * @return CwpVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool CwpVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>可用惠普版授权数</p>
                     * @return AvailableLHLicenseCnt <p>可用惠普版授权数</p>
                     * 
                     */
                    uint64_t GetAvailableLHLicenseCnt() const;

                    /**
                     * 判断参数 AvailableLHLicenseCnt 是否已赋值
                     * @return AvailableLHLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableLHLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>自动加购开关, true 开启, false 关闭</p>
                     * @return AutoRepurchaseSwitch <p>自动加购开关, true 开启, false 关闭</p>
                     * 
                     */
                    bool GetAutoRepurchaseSwitch() const;

                    /**
                     * 判断参数 AutoRepurchaseSwitch 是否已赋值
                     * @return AutoRepurchaseSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseSwitchHasBeenSet() const;

                    /**
                     * 获取<p>自动加购订单是否自动续费 ,true 开启, false 关闭</p>
                     * @return AutoRepurchaseRenewSwitch <p>自动加购订单是否自动续费 ,true 开启, false 关闭</p>
                     * 
                     */
                    bool GetAutoRepurchaseRenewSwitch() const;

                    /**
                     * 判断参数 AutoRepurchaseRenewSwitch 是否已赋值
                     * @return AutoRepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseRenewSwitchHasBeenSet() const;

                    /**
                     * 获取<p>已销毁订单数</p>
                     * @return DestroyOrderNum <p>已销毁订单数</p>
                     * 
                     */
                    uint64_t GetDestroyOrderNum() const;

                    /**
                     * 判断参数 DestroyOrderNum 是否已赋值
                     * @return DestroyOrderNum 是否已赋值
                     * 
                     */
                    bool DestroyOrderNumHasBeenSet() const;

                    /**
                     * 获取<p>自动加购是否自动续费开关,true 开启,false 关闭</p>
                     * @return RepurchaseRenewSwitch <p>自动加购是否自动续费开关,true 开启,false 关闭</p>
                     * 
                     */
                    bool GetRepurchaseRenewSwitch() const;

                    /**
                     * 判断参数 RepurchaseRenewSwitch 是否已赋值
                     * @return RepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool RepurchaseRenewSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否自动新增机器绑定rasp防护,false 关闭 true 开启</p>
                     * @return AutoBindRaspSwitch <p>是否自动新增机器绑定rasp防护,false 关闭 true 开启</p>
                     * 
                     */
                    bool GetAutoBindRaspSwitch() const;

                    /**
                     * 判断参数 AutoBindRaspSwitch 是否已赋值
                     * @return AutoBindRaspSwitch 是否已赋值
                     * 
                     */
                    bool AutoBindRaspSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否自动新增机器开启rasp防护,false 关闭 true 开启</p>
                     * @return AutoOpenRaspSwitch <p>是否自动新增机器开启rasp防护,false 关闭 true 开启</p>
                     * 
                     */
                    bool GetAutoOpenRaspSwitch() const;

                    /**
                     * 判断参数 AutoOpenRaspSwitch 是否已赋值
                     * @return AutoOpenRaspSwitch 是否已赋值
                     * 
                     */
                    bool AutoOpenRaspSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否自动缩容开关开启</p>
                     * @return AutoDowngradeSwitch <p>是否自动缩容开关开启</p>
                     * 
                     */
                    bool GetAutoDowngradeSwitch() const;

                    /**
                     * 判断参数 AutoDowngradeSwitch 是否已赋值
                     * @return AutoDowngradeSwitch 是否已赋值
                     * 
                     */
                    bool AutoDowngradeSwitchHasBeenSet() const;

                    /**
                     * 获取<p>可使用的AI防护版授权数</p>
                     * @return AvailableAISecurityLicenseCnt <p>可使用的AI防护版授权数</p>
                     * 
                     */
                    uint64_t GetAvailableAISecurityLicenseCnt() const;

                    /**
                     * 判断参数 AvailableAISecurityLicenseCnt 是否已赋值
                     * @return AvailableAISecurityLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableAISecurityLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>AI 防护版总授权数</p>
                     * @return AISecurityVersionLicenseCnt <p>AI 防护版总授权数</p>
                     * 
                     */
                    uint64_t GetAISecurityVersionLicenseCnt() const;

                    /**
                     * 判断参数 AISecurityVersionLicenseCnt 是否已赋值
                     * @return AISecurityVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool AISecurityVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>应用防护授权数+旗舰版授权数相加后的可使用授权数</p>
                     * @return ApplicationAvailableLicenseCnt <p>应用防护授权数+旗舰版授权数相加后的可使用授权数</p>
                     * 
                     */
                    uint64_t GetApplicationAvailableLicenseCnt() const;

                    /**
                     * 判断参数 ApplicationAvailableLicenseCnt 是否已赋值
                     * @return ApplicationAvailableLicenseCnt 是否已赋值
                     * 
                     */
                    bool ApplicationAvailableLicenseCntHasBeenSet() const;

                private:

                    /**
                     * <p>总授权数 (包含隔离,过期等不可用状态)</p>
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                    /**
                     * <p>可用授权数</p>
                     */
                    uint64_t m_availableLicenseCnt;
                    bool m_availableLicenseCntHasBeenSet;

                    /**
                     * <p>可用专业版授权数(包含后付费).</p>
                     */
                    uint64_t m_availableProVersionLicenseCnt;
                    bool m_availableProVersionLicenseCntHasBeenSet;

                    /**
                     * <p>可用旗舰版授权数</p>
                     */
                    uint64_t m_availableFlagshipVersionLicenseCnt;
                    bool m_availableFlagshipVersionLicenseCntHasBeenSet;

                    /**
                     * <p>即将到期授权数 (15天内到期的)</p>
                     */
                    uint64_t m_nearExpiryLicenseCnt;
                    bool m_nearExpiryLicenseCntHasBeenSet;

                    /**
                     * <p>已到期授权数(不包含已删除的记录)</p>
                     */
                    uint64_t m_expireLicenseCnt;
                    bool m_expireLicenseCntHasBeenSet;

                    /**
                     * <p>自动升级开关状态,默认 false,  true 开启, false 关闭</p>
                     */
                    bool m_autoOpenStatus;
                    bool m_autoOpenStatusHasBeenSet;

                    /**
                     * <p>PROVERSION_POSTPAY 专业版-后付费, PROVERSION_PREPAY 专业版-预付费, FLAGSHIP_PREPAY 旗舰版-预付费</p>
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * <p>历史是否开通过自动升级开关</p>
                     */
                    bool m_isOpenStatusHistory;
                    bool m_isOpenStatusHistoryHasBeenSet;

                    /**
                     * <p>已使用授权数</p>
                     */
                    uint64_t m_usedLicenseCnt;
                    bool m_usedLicenseCntHasBeenSet;

                    /**
                     * <p>未到期授权数</p>
                     */
                    uint64_t m_notExpiredLicenseCnt;
                    bool m_notExpiredLicenseCntHasBeenSet;

                    /**
                     * <p>旗舰版总授权数(有效订单)</p>
                     */
                    uint64_t m_flagshipVersionLicenseCnt;
                    bool m_flagshipVersionLicenseCntHasBeenSet;

                    /**
                     * <p>专业版总授权数(有效订单)</p>
                     */
                    uint64_t m_proVersionLicenseCnt;
                    bool m_proVersionLicenseCntHasBeenSet;

                    /**
                     * <p>轻量版总授权数(有效订单的授权数)</p>
                     */
                    uint64_t m_cwpVersionLicenseCnt;
                    bool m_cwpVersionLicenseCntHasBeenSet;

                    /**
                     * <p>可用惠普版授权数</p>
                     */
                    uint64_t m_availableLHLicenseCnt;
                    bool m_availableLHLicenseCntHasBeenSet;

                    /**
                     * <p>自动加购开关, true 开启, false 关闭</p>
                     */
                    bool m_autoRepurchaseSwitch;
                    bool m_autoRepurchaseSwitchHasBeenSet;

                    /**
                     * <p>自动加购订单是否自动续费 ,true 开启, false 关闭</p>
                     */
                    bool m_autoRepurchaseRenewSwitch;
                    bool m_autoRepurchaseRenewSwitchHasBeenSet;

                    /**
                     * <p>已销毁订单数</p>
                     */
                    uint64_t m_destroyOrderNum;
                    bool m_destroyOrderNumHasBeenSet;

                    /**
                     * <p>自动加购是否自动续费开关,true 开启,false 关闭</p>
                     */
                    bool m_repurchaseRenewSwitch;
                    bool m_repurchaseRenewSwitchHasBeenSet;

                    /**
                     * <p>是否自动新增机器绑定rasp防护,false 关闭 true 开启</p>
                     */
                    bool m_autoBindRaspSwitch;
                    bool m_autoBindRaspSwitchHasBeenSet;

                    /**
                     * <p>是否自动新增机器开启rasp防护,false 关闭 true 开启</p>
                     */
                    bool m_autoOpenRaspSwitch;
                    bool m_autoOpenRaspSwitchHasBeenSet;

                    /**
                     * <p>是否自动缩容开关开启</p>
                     */
                    bool m_autoDowngradeSwitch;
                    bool m_autoDowngradeSwitchHasBeenSet;

                    /**
                     * <p>可使用的AI防护版授权数</p>
                     */
                    uint64_t m_availableAISecurityLicenseCnt;
                    bool m_availableAISecurityLicenseCntHasBeenSet;

                    /**
                     * <p>AI 防护版总授权数</p>
                     */
                    uint64_t m_aISecurityVersionLicenseCnt;
                    bool m_aISecurityVersionLicenseCntHasBeenSet;

                    /**
                     * <p>应用防护授权数+旗舰版授权数相加后的可使用授权数</p>
                     */
                    uint64_t m_applicationAvailableLicenseCnt;
                    bool m_applicationAvailableLicenseCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_
