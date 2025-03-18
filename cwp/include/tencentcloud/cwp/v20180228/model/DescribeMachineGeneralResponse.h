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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CloudFromCnt.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineGeneral返回参数结构体
                */
                class DescribeMachineGeneralResponse : public AbstractModel
                {
                public:
                    DescribeMachineGeneralResponse();
                    ~DescribeMachineGeneralResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产总数
                     * @return MachineCnt 资产总数
                     * 
                     */
                    uint64_t GetMachineCnt() const;

                    /**
                     * 判断参数 MachineCnt 是否已赋值
                     * @return MachineCnt 是否已赋值
                     * 
                     */
                    bool MachineCntHasBeenSet() const;

                    /**
                     * 获取腾讯云服务商机器数
                     * @return TencentCloudMachineCnt 腾讯云服务商机器数
                     * @deprecated
                     */
                    uint64_t GetTencentCloudMachineCnt() const;

                    /**
                     * 判断参数 TencentCloudMachineCnt 是否已赋值
                     * @return TencentCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool TencentCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取阿里云服务商机器数
                     * @return AliCloudMachineCnt 阿里云服务商机器数
                     * @deprecated
                     */
                    uint64_t GetAliCloudMachineCnt() const;

                    /**
                     * 判断参数 AliCloudMachineCnt 是否已赋值
                     * @return AliCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool AliCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取百度云服务商机器数
                     * @return BaiduCloudMachineCnt 百度云服务商机器数
                     * @deprecated
                     */
                    uint64_t GetBaiduCloudMachineCnt() const;

                    /**
                     * 判断参数 BaiduCloudMachineCnt 是否已赋值
                     * @return BaiduCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool BaiduCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取IDC机器数
                     * @return IDCMachineCnt IDC机器数
                     * @deprecated
                     */
                    uint64_t GetIDCMachineCnt() const;

                    /**
                     * 判断参数 IDCMachineCnt 是否已赋值
                     * @return IDCMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool IDCMachineCntHasBeenSet() const;

                    /**
                     * 获取其他云服务商机器数
                     * @return OtherCloudMachineCnt 其他云服务商机器数
                     * @deprecated
                     */
                    uint64_t GetOtherCloudMachineCnt() const;

                    /**
                     * 判断参数 OtherCloudMachineCnt 是否已赋值
                     * @return OtherCloudMachineCnt 是否已赋值
                     * @deprecated
                     */
                    bool OtherCloudMachineCntHasBeenSet() const;

                    /**
                     * 获取已防护机器数
                     * @return ProtectMachineCnt 已防护机器数
                     * 
                     */
                    uint64_t GetProtectMachineCnt() const;

                    /**
                     * 判断参数 ProtectMachineCnt 是否已赋值
                     * @return ProtectMachineCnt 是否已赋值
                     * 
                     */
                    bool ProtectMachineCntHasBeenSet() const;

                    /**
                     * 获取已防护基础版机器数
                     * @return BaseMachineCnt 已防护基础版机器数
                     * 
                     */
                    uint64_t GetBaseMachineCnt() const;

                    /**
                     * 判断参数 BaseMachineCnt 是否已赋值
                     * @return BaseMachineCnt 是否已赋值
                     * 
                     */
                    bool BaseMachineCntHasBeenSet() const;

                    /**
                     * 获取已防护专业版机器数
                     * @return SpecialtyMachineCnt 已防护专业版机器数
                     * 
                     */
                    uint64_t GetSpecialtyMachineCnt() const;

                    /**
                     * 判断参数 SpecialtyMachineCnt 是否已赋值
                     * @return SpecialtyMachineCnt 是否已赋值
                     * 
                     */
                    bool SpecialtyMachineCntHasBeenSet() const;

                    /**
                     * 获取已防护旗舰版机器数
                     * @return FlagshipMachineCnt 已防护旗舰版机器数
                     * 
                     */
                    uint64_t GetFlagshipMachineCnt() const;

                    /**
                     * 判断参数 FlagshipMachineCnt 是否已赋值
                     * @return FlagshipMachineCnt 是否已赋值
                     * 
                     */
                    bool FlagshipMachineCntHasBeenSet() const;

                    /**
                     * 获取存在风险的机器数
                     * @return RiskMachineCnt 存在风险的机器数
                     * 
                     */
                    uint64_t GetRiskMachineCnt() const;

                    /**
                     * 判断参数 RiskMachineCnt 是否已赋值
                     * @return RiskMachineCnt 是否已赋值
                     * 
                     */
                    bool RiskMachineCntHasBeenSet() const;

                    /**
                     * 获取比较昨日风险机器数
                     * @return CompareYesterdayRiskMachineCnt 比较昨日风险机器数
                     * 
                     */
                    int64_t GetCompareYesterdayRiskMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayRiskMachineCnt 是否已赋值
                     * @return CompareYesterdayRiskMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayRiskMachineCntHasBeenSet() const;

                    /**
                     * 获取比较昨日未防护机器数
                     * @return CompareYesterdayNotProtectMachineCnt 比较昨日未防护机器数
                     * 
                     */
                    int64_t GetCompareYesterdayNotProtectMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayNotProtectMachineCnt 是否已赋值
                     * @return CompareYesterdayNotProtectMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayNotProtectMachineCntHasBeenSet() const;

                    /**
                     * 获取比较昨日即将到期的机器数
                     * @return CompareYesterdayDeadlineMachineCnt 比较昨日即将到期的机器数
                     * 
                     */
                    int64_t GetCompareYesterdayDeadlineMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayDeadlineMachineCnt 是否已赋值
                     * @return CompareYesterdayDeadlineMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayDeadlineMachineCntHasBeenSet() const;

                    /**
                     * 获取即将到期的机器数
                     * @return DeadlineMachineCnt 即将到期的机器数
                     * 
                     */
                    uint64_t GetDeadlineMachineCnt() const;

                    /**
                     * 判断参数 DeadlineMachineCnt 是否已赋值
                     * @return DeadlineMachineCnt 是否已赋值
                     * 
                     */
                    bool DeadlineMachineCntHasBeenSet() const;

                    /**
                     * 获取未防护机器数
                     * @return NotProtectMachineCnt 未防护机器数
                     * 
                     */
                    uint64_t GetNotProtectMachineCnt() const;

                    /**
                     * 判断参数 NotProtectMachineCnt 是否已赋值
                     * @return NotProtectMachineCnt 是否已赋值
                     * 
                     */
                    bool NotProtectMachineCntHasBeenSet() const;

                    /**
                     * 获取已防护轻量机器数（Lighthouse机器）
                     * @return LHGeneralDiscountCnt 已防护轻量机器数（Lighthouse机器）
                     * 
                     */
                    uint64_t GetLHGeneralDiscountCnt() const;

                    /**
                     * 判断参数 LHGeneralDiscountCnt 是否已赋值
                     * @return LHGeneralDiscountCnt 是否已赋值
                     * 
                     */
                    bool LHGeneralDiscountCntHasBeenSet() const;

                    /**
                     * 获取比较昨日新增的主机数
                     * @return CompareYesterdayMachineCnt 比较昨日新增的主机数
                     * 
                     */
                    int64_t GetCompareYesterdayMachineCnt() const;

                    /**
                     * 判断参数 CompareYesterdayMachineCnt 是否已赋值
                     * @return CompareYesterdayMachineCnt 是否已赋值
                     * 
                     */
                    bool CompareYesterdayMachineCntHasBeenSet() const;

                    /**
                     * 获取自动清理时间,最大720小时,最小0, 默认0 ,0=关闭
                     * @return MachineDestroyAfterOfflineHours 自动清理时间,最大720小时,最小0, 默认0 ,0=关闭
                     * 
                     */
                    uint64_t GetMachineDestroyAfterOfflineHours() const;

                    /**
                     * 判断参数 MachineDestroyAfterOfflineHours 是否已赋值
                     * @return MachineDestroyAfterOfflineHours 是否已赋值
                     * 
                     */
                    bool MachineDestroyAfterOfflineHoursHasBeenSet() const;

                    /**
                     * 获取云服务器类型数组
                     * @return CloudFrom 云服务器类型数组
                     * 
                     */
                    std::vector<CloudFromCnt> GetCloudFrom() const;

                    /**
                     * 判断参数 CloudFrom 是否已赋值
                     * @return CloudFrom 是否已赋值
                     * 
                     */
                    bool CloudFromHasBeenSet() const;

                private:

                    /**
                     * 资产总数
                     */
                    uint64_t m_machineCnt;
                    bool m_machineCntHasBeenSet;

                    /**
                     * 腾讯云服务商机器数
                     */
                    uint64_t m_tencentCloudMachineCnt;
                    bool m_tencentCloudMachineCntHasBeenSet;

                    /**
                     * 阿里云服务商机器数
                     */
                    uint64_t m_aliCloudMachineCnt;
                    bool m_aliCloudMachineCntHasBeenSet;

                    /**
                     * 百度云服务商机器数
                     */
                    uint64_t m_baiduCloudMachineCnt;
                    bool m_baiduCloudMachineCntHasBeenSet;

                    /**
                     * IDC机器数
                     */
                    uint64_t m_iDCMachineCnt;
                    bool m_iDCMachineCntHasBeenSet;

                    /**
                     * 其他云服务商机器数
                     */
                    uint64_t m_otherCloudMachineCnt;
                    bool m_otherCloudMachineCntHasBeenSet;

                    /**
                     * 已防护机器数
                     */
                    uint64_t m_protectMachineCnt;
                    bool m_protectMachineCntHasBeenSet;

                    /**
                     * 已防护基础版机器数
                     */
                    uint64_t m_baseMachineCnt;
                    bool m_baseMachineCntHasBeenSet;

                    /**
                     * 已防护专业版机器数
                     */
                    uint64_t m_specialtyMachineCnt;
                    bool m_specialtyMachineCntHasBeenSet;

                    /**
                     * 已防护旗舰版机器数
                     */
                    uint64_t m_flagshipMachineCnt;
                    bool m_flagshipMachineCntHasBeenSet;

                    /**
                     * 存在风险的机器数
                     */
                    uint64_t m_riskMachineCnt;
                    bool m_riskMachineCntHasBeenSet;

                    /**
                     * 比较昨日风险机器数
                     */
                    int64_t m_compareYesterdayRiskMachineCnt;
                    bool m_compareYesterdayRiskMachineCntHasBeenSet;

                    /**
                     * 比较昨日未防护机器数
                     */
                    int64_t m_compareYesterdayNotProtectMachineCnt;
                    bool m_compareYesterdayNotProtectMachineCntHasBeenSet;

                    /**
                     * 比较昨日即将到期的机器数
                     */
                    int64_t m_compareYesterdayDeadlineMachineCnt;
                    bool m_compareYesterdayDeadlineMachineCntHasBeenSet;

                    /**
                     * 即将到期的机器数
                     */
                    uint64_t m_deadlineMachineCnt;
                    bool m_deadlineMachineCntHasBeenSet;

                    /**
                     * 未防护机器数
                     */
                    uint64_t m_notProtectMachineCnt;
                    bool m_notProtectMachineCntHasBeenSet;

                    /**
                     * 已防护轻量机器数（Lighthouse机器）
                     */
                    uint64_t m_lHGeneralDiscountCnt;
                    bool m_lHGeneralDiscountCntHasBeenSet;

                    /**
                     * 比较昨日新增的主机数
                     */
                    int64_t m_compareYesterdayMachineCnt;
                    bool m_compareYesterdayMachineCntHasBeenSet;

                    /**
                     * 自动清理时间,最大720小时,最小0, 默认0 ,0=关闭
                     */
                    uint64_t m_machineDestroyAfterOfflineHours;
                    bool m_machineDestroyAfterOfflineHoursHasBeenSet;

                    /**
                     * 云服务器类型数组
                     */
                    std::vector<CloudFromCnt> m_cloudFrom;
                    bool m_cloudFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEGENERALRESPONSE_H_
