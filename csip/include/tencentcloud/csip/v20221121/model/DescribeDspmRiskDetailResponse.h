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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmRiskDetail返回参数结构体
                */
                class DescribeDspmRiskDetailResponse : public AbstractModel
                {
                public:
                    DescribeDspmRiskDetailResponse();
                    ~DescribeDspmRiskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取风险检出时间
                     * @return DetectTime 风险检出时间
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取资产实例Id
                     * @return AssetId 资产实例Id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取公网访问地址
                     * @return PublicIp 公网访问地址
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取内网访问地址
                     * @return PrivateIp 内网访问地址
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return Account 账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取主机地址
                     * @return Host 主机地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取身份id
                     * @return IdentifyId 身份id
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取所属云账号uin用户
                     * @return OwnerUin 所属云账号uin用户
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取所属个人用户信息
                     * @return Person 所属个人用户信息
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取风险名称
                     * @return RiskName 风险名称
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取风险英文名称
                     * @return RiskNameEn 风险英文名称
                     * 
                     */
                    std::string GetRiskNameEn() const;

                    /**
                     * 判断参数 RiskNameEn 是否已赋值
                     * @return RiskNameEn 是否已赋值
                     * 
                     */
                    bool RiskNameEnHasBeenSet() const;

                    /**
                     * 获取风险数据
                     * @return RiskData 风险数据
                     * 
                     */
                    std::string GetRiskData() const;

                    /**
                     * 判断参数 RiskData 是否已赋值
                     * @return RiskData 是否已赋值
                     * 
                     */
                    bool RiskDataHasBeenSet() const;

                    /**
                     * 获取基线数据
                     * @return BaselineData 基线数据
                     * 
                     */
                    std::string GetBaselineData() const;

                    /**
                     * 判断参数 BaselineData 是否已赋值
                     * @return BaselineData 是否已赋值
                     * 
                     */
                    bool BaselineDataHasBeenSet() const;

                    /**
                     * 获取风险id
                     * @return RiskId 风险id
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return StrategyType 策略类型
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取策略类别
                     * @return StrategyCategory 策略类别
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取账号类型
                     * @return AccountType 账号类型
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取风险状态
                     * @return Status 风险状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否资产管理员
                     * @return IsAssetManager 是否资产管理员
                     * 
                     */
                    int64_t GetIsAssetManager() const;

                    /**
                     * 判断参数 IsAssetManager 是否已赋值
                     * @return IsAssetManager 是否已赋值
                     * 
                     */
                    bool IsAssetManagerHasBeenSet() const;

                    /**
                     * 获取数据起始时间
                     * @return DataBeginTime 数据起始时间
                     * 
                     */
                    std::string GetDataBeginTime() const;

                    /**
                     * 判断参数 DataBeginTime 是否已赋值
                     * @return DataBeginTime 是否已赋值
                     * 
                     */
                    bool DataBeginTimeHasBeenSet() const;

                    /**
                     * 获取数据结束时间
                     * @return DataEndTime 数据结束时间
                     * 
                     */
                    std::string GetDataEndTime() const;

                    /**
                     * 判断参数 DataEndTime 是否已赋值
                     * @return DataEndTime 是否已赋值
                     * 
                     */
                    bool DataEndTimeHasBeenSet() const;

                    /**
                     * 获取风险类型。risk-风险；alarm-告警。
                     * @return RiskType 风险类型。risk-风险；alarm-告警。
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                private:

                    /**
                     * 风险等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险检出时间
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 资产实例Id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 公网访问地址
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网访问地址
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 主机地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 身份id
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * 所属云账号uin用户
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 所属个人用户信息
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 风险名称
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 风险英文名称
                     */
                    std::string m_riskNameEn;
                    bool m_riskNameEnHasBeenSet;

                    /**
                     * 风险数据
                     */
                    std::string m_riskData;
                    bool m_riskDataHasBeenSet;

                    /**
                     * 基线数据
                     */
                    std::string m_baselineData;
                    bool m_baselineDataHasBeenSet;

                    /**
                     * 风险id
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 策略类别
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * 账号类型
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 风险状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否资产管理员
                     */
                    int64_t m_isAssetManager;
                    bool m_isAssetManagerHasBeenSet;

                    /**
                     * 数据起始时间
                     */
                    std::string m_dataBeginTime;
                    bool m_dataBeginTimeHasBeenSet;

                    /**
                     * 数据结束时间
                     */
                    std::string m_dataEndTime;
                    bool m_dataEndTimeHasBeenSet;

                    /**
                     * 风险类型。risk-风险；alarm-告警。
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKDETAILRESPONSE_H_
