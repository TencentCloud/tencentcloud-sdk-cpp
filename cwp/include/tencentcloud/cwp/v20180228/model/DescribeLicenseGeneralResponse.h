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
                     * 获取总授权数 (包含隔离,过期等不可用状态)
                     * @return LicenseCnt 总授权数 (包含隔离,过期等不可用状态)
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
                     * 获取可用授权数
                     * @return AvailableLicenseCnt 可用授权数
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
                     * 获取可用专业版授权数(包含后付费).
                     * @return AvailableProVersionLicenseCnt 可用专业版授权数(包含后付费).
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
                     * 获取可用旗舰版授权数
                     * @return AvailableFlagshipVersionLicenseCnt 可用旗舰版授权数
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
                     * 获取即将到期授权数 (15天内到期的)
                     * @return NearExpiryLicenseCnt 即将到期授权数 (15天内到期的)
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
                     * 获取已到期授权数(不包含已删除的记录)
                     * @return ExpireLicenseCnt 已到期授权数(不包含已删除的记录)
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
                     * 获取自动升级开关状态,默认 false,  true 开启, false 关闭
                     * @return AutoOpenStatus 自动升级开关状态,默认 false,  true 开启, false 关闭
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
                     * 获取PROVERSION_POSTPAY 专业版-后付费, PROVERSION_PREPAY 专业版-预付费, FLAGSHIP_PREPAY 旗舰版-预付费
                     * @return ProtectType PROVERSION_POSTPAY 专业版-后付费, PROVERSION_PREPAY 专业版-预付费, FLAGSHIP_PREPAY 旗舰版-预付费
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
                     * 获取历史是否开通过自动升级开关
                     * @return IsOpenStatusHistory 历史是否开通过自动升级开关
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
                     * 获取已使用授权数
                     * @return UsedLicenseCnt 已使用授权数
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
                     * 获取未到期授权数
                     * @return NotExpiredLicenseCnt 未到期授权数
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
                     * 获取旗舰版总授权数(有效订单)
                     * @return FlagshipVersionLicenseCnt 旗舰版总授权数(有效订单)
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
                     * 获取专业版总授权数(有效订单)
                     * @return ProVersionLicenseCnt 专业版总授权数(有效订单)
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
                     * 获取轻量版总授权数(有效订单的授权数)
                     * @return CwpVersionLicenseCnt 轻量版总授权数(有效订单的授权数)
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
                     * 获取可用惠普版授权数
                     * @return AvailableLHLicenseCnt 可用惠普版授权数
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
                     * 获取自动加购开关, true 开启, false 关闭
                     * @return AutoRepurchaseSwitch 自动加购开关, true 开启, false 关闭
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
                     * 获取自动加购订单是否自动续费 ,true 开启, false 关闭
                     * @return AutoRepurchaseRenewSwitch 自动加购订单是否自动续费 ,true 开启, false 关闭
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
                     * 获取已销毁订单数
                     * @return DestroyOrderNum 已销毁订单数
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
                     * 获取自动加购是否自动续费开关,true 开启,false 关闭
                     * @return RepurchaseRenewSwitch 自动加购是否自动续费开关,true 开启,false 关闭
                     * 
                     */
                    bool GetRepurchaseRenewSwitch() const;

                    /**
                     * 判断参数 RepurchaseRenewSwitch 是否已赋值
                     * @return RepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool RepurchaseRenewSwitchHasBeenSet() const;

                private:

                    /**
                     * 总授权数 (包含隔离,过期等不可用状态)
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                    /**
                     * 可用授权数
                     */
                    uint64_t m_availableLicenseCnt;
                    bool m_availableLicenseCntHasBeenSet;

                    /**
                     * 可用专业版授权数(包含后付费).
                     */
                    uint64_t m_availableProVersionLicenseCnt;
                    bool m_availableProVersionLicenseCntHasBeenSet;

                    /**
                     * 可用旗舰版授权数
                     */
                    uint64_t m_availableFlagshipVersionLicenseCnt;
                    bool m_availableFlagshipVersionLicenseCntHasBeenSet;

                    /**
                     * 即将到期授权数 (15天内到期的)
                     */
                    uint64_t m_nearExpiryLicenseCnt;
                    bool m_nearExpiryLicenseCntHasBeenSet;

                    /**
                     * 已到期授权数(不包含已删除的记录)
                     */
                    uint64_t m_expireLicenseCnt;
                    bool m_expireLicenseCntHasBeenSet;

                    /**
                     * 自动升级开关状态,默认 false,  true 开启, false 关闭
                     */
                    bool m_autoOpenStatus;
                    bool m_autoOpenStatusHasBeenSet;

                    /**
                     * PROVERSION_POSTPAY 专业版-后付费, PROVERSION_PREPAY 专业版-预付费, FLAGSHIP_PREPAY 旗舰版-预付费
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * 历史是否开通过自动升级开关
                     */
                    bool m_isOpenStatusHistory;
                    bool m_isOpenStatusHistoryHasBeenSet;

                    /**
                     * 已使用授权数
                     */
                    uint64_t m_usedLicenseCnt;
                    bool m_usedLicenseCntHasBeenSet;

                    /**
                     * 未到期授权数
                     */
                    uint64_t m_notExpiredLicenseCnt;
                    bool m_notExpiredLicenseCntHasBeenSet;

                    /**
                     * 旗舰版总授权数(有效订单)
                     */
                    uint64_t m_flagshipVersionLicenseCnt;
                    bool m_flagshipVersionLicenseCntHasBeenSet;

                    /**
                     * 专业版总授权数(有效订单)
                     */
                    uint64_t m_proVersionLicenseCnt;
                    bool m_proVersionLicenseCntHasBeenSet;

                    /**
                     * 轻量版总授权数(有效订单的授权数)
                     */
                    uint64_t m_cwpVersionLicenseCnt;
                    bool m_cwpVersionLicenseCntHasBeenSet;

                    /**
                     * 可用惠普版授权数
                     */
                    uint64_t m_availableLHLicenseCnt;
                    bool m_availableLHLicenseCntHasBeenSet;

                    /**
                     * 自动加购开关, true 开启, false 关闭
                     */
                    bool m_autoRepurchaseSwitch;
                    bool m_autoRepurchaseSwitchHasBeenSet;

                    /**
                     * 自动加购订单是否自动续费 ,true 开启, false 关闭
                     */
                    bool m_autoRepurchaseRenewSwitch;
                    bool m_autoRepurchaseRenewSwitchHasBeenSet;

                    /**
                     * 已销毁订单数
                     */
                    uint64_t m_destroyOrderNum;
                    bool m_destroyOrderNumHasBeenSet;

                    /**
                     * 自动加购是否自动续费开关,true 开启,false 关闭
                     */
                    bool m_repurchaseRenewSwitch;
                    bool m_repurchaseRenewSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_
